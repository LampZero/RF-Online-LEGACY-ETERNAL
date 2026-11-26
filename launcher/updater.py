# COMENTARIO_ZECA | # Update: valida tamanho+hash antes de substituir. Faz backup e nunca apaga arquivos do jogador.
# -*- coding: utf-8 -*-
"""Update do cliente direto do GitHub privado, com fallback 8081."""
import io
import os
import re
import shutil
import zipfile
import hashlib
import tempfile
import time

import gh_client
import api_client
import rollback
from config import (
    ROOT, LOCAL_MANIFEST, SKIP_DIRS, ASSETS_DIR, REPAIR_ASSET,
    REPAIR_SHA256, CACHE_DIR,
)
from xxhash64 import file_digest

# Nunca sobrescrever credencial/token/estado local.
PROTEGIDOS = {
    "launcher.ini", ".github_token", "manifest.txt",
    "launcher/.github_token", "launcher/.cache",
}


def _log(tag, *args):
    try:
        CACHE_DIR.mkdir(parents=True, exist_ok=True)
        with open(CACHE_DIR / "launcher.log", "a", encoding="utf-8") as fh:
            fh.write(time.strftime("%Y-%m-%dT%H:%M:%S") + " UPD_" + tag + " "
                     + " ".join(str(a) for a in args) + "\n")
    except Exception:
        pass


def _seguro(rel):
    r = str(rel).replace("\\", "/").lstrip("/")
    if not r or r.startswith("../") or "/../" in r or r.lower() in PROTEGIDOS:
        return False
    top = r.split("/")[0].lower()
    if top in SKIP_DIRS or top in {"manifest.txt", "launcher.ini", ".github_token"}:
        return False
    if re.search(r"(?i)(\.bak|\.backup|\.log|\.dmp|\.db)$", r):
        return False
    return True


def parse_manifest(texto):
    """Formato comprovado: <hash xxh64 seed0> TAB <caminho /> TAB <tamanho>."""
    itens = []
    if not texto:
        return itens
    for linha in texto.splitlines():
        linha = linha.strip("\r")
        if not linha.strip():
            continue
        partes = linha.split("\t")
        if len(partes) < 3:
            continue
        h, rel, tam = partes[0].strip(), partes[1].strip(), partes[2].strip()
        if not re.fullmatch(r"[0-9a-fA-F]{16}", h):
            continue
        try:
            size = int(tam)
        except ValueError:
            continue
        if _seguro(rel):
            itens.append({"hash": h.lower(), "path": rel, "size": size})
    return itens


def verificar():
    """Compara manifest remoto (GitHub) com os arquivos locais. Le, nao muda nada."""
    texto = gh_client.manifest()
    fonte = "github"
    if not texto or not texto.strip():
        texto = None
        raw = api_client.client_file("manifest.txt")
        if raw:
            texto = raw.decode("utf-8", errors="replace")
            fonte = "servidor-8081"
    if not texto or not texto.strip():
        return {
            "ok": False, "erro": "Manifest remoto vazio/indisponivel",
            "fonte": fonte, "total": 0, "desatualizados": [],
        }

    itens = parse_manifest(texto)
    if not itens:
        return {
            "ok": False, "erro": "Manifest sem entradas validas",
            "fonte": fonte, "total": 0, "desatualizados": [],
        }

    dif = []
    for it in itens:
        p = ROOT / it["path"].replace("/", os.sep)
        if not p.exists():
            dif.append(dict(it, motivo="faltando"))
            continue
        try:
            if p.stat().st_size != it["size"] or file_digest(p) != it["hash"]:
                dif.append(dict(it, motivo="diferente"))
        except Exception:
            dif.append(dict(it, motivo="ilegivel"))
    return {
        "ok": True, "fonte": fonte, "total": len(itens),
        "desatualizados": dif, "bytes": sum(x["size"] for x in dif),
        "release": gh_client.versao_release(),
    }


def _baixar(rel):
    b = gh_client.raw(rel)
    if b is not None:
        return b, "github"
    b = api_client.client_file(rel)
    return (b, "servidor-8081") if b is not None else (None, None)


def aplicar(itens, progress=None):
    """Faz backup, baixa e substitui cada arquivo validado. Nunca apaga nada."""
    ok, falhas = 0, []
    rid = rollback.criar(itens, "update")
    total = max(1, len(itens))
    for i, it in enumerate(itens, 1):
        rel = it["path"]
        if not _seguro(rel):
            continue
        b, fonte = _baixar(rel)
        if b is None:
            falhas.append({"path": rel, "erro": "download falhou"})
        elif len(b) != it["size"]:
            falhas.append({"path": rel, "erro": "tamanho divergente"})
        else:
            # valida XXH64 do conteudo baixado
            import xxhash64
            if "%016x" % xxhash64.digest(b) != it["hash"]:
                falhas.append({"path": rel, "erro": "hash divergente"})
                _log("HASH_DIVERGENTE", rel)
            else:
                dest = ROOT / rel.replace("/", os.sep)
                dest.parent.mkdir(parents=True, exist_ok=True)
                tmp = dest.with_suffix(dest.suffix + ".rfnew")
                tmp.write_bytes(b)
                os.replace(str(tmp), str(dest))
                ok += 1
        if progress:
            try:
                progress(i, total, rel)
            except Exception:
                pass
    _log("APLICADO", ok, "falhas", len(falhas), "backup", rid)
    return {"ok": ok, "falhas": falhas, "rollback_id": rid}


def reparar_idioma():
    """Extrai o pacote PT-BR publicado, validando SHA256 e zip-slip."""
    dados = None
    src = ASSETS_DIR / REPAIR_ASSET
    if src.exists():
        dados = src.read_bytes()
    if dados is None:
        dados = gh_client.raw("launcher/assets/" + REPAIR_ASSET)
    if dados is None:
        url = gh_client.release_asset_url(REPAIR_ASSET)
        if url:
            dados = gh_client.download_url(url)
    if dados is None:
        b = api_client.client_file("rfpremium/" + REPAIR_ASSET)
        if b:
            dados = b
    if dados is None:
        return {"ok": False, "erro": "Pacote de reparo indisponivel"}

    sha = hashlib.sha256(dados).hexdigest()
    if sha != REPAIR_SHA256:
        return {"ok": False, "erro": "SHA256 do reparo divergente", "sha": sha}

    aplicados = []
    with zipfile.ZipFile(io.BytesIO(dados)) as zf:
        nomes = [i.filename.replace("\\", "/") for i in zf.infolist()]
        for rel in nomes:
            if rel.startswith("/") or "/../" in rel or rel.startswith("../"):
                return {"ok": False, "erro": "Zip invalido (path traversal)"}
        rid = rollback.criar([{"path": r} for r in nomes], "reparo_idioma")
        for info in zf.infolist():
            rel = info.filename.replace("\\", "/")
            dest = ROOT / rel.replace("/", os.sep)
            dest.parent.mkdir(parents=True, exist_ok=True)
            with zf.open(info) as fh:
                dest.write_bytes(fh.read())
            aplicados.append(rel)
    _log("REPARO_OK", len(aplicados), "backup", rid)
    return {"ok": True, "arquivos": aplicados, "rollback_id": rid}
