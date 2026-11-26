# COMENTARIO_ZECA | # Rollback: backup local em .cache (fora do git). So restaura se o Senhor Erinho mandar.
# -*- coding: utf-8 -*-
"""Backup local (fora do git) e rollback da versao anterior do cliente."""
import os
import re
import json
import shutil
import hashlib
import time

from config import ROOT, CACHE_DIR

BASE = CACHE_DIR / "rollback"
LATEST = BASE / "latest.json"
MAX_KEEP = 6


def _agora():
    return time.strftime("%Y%m%d_%H%M%S")


def _sha(path):
    h = hashlib.sha256()
    with open(path, "rb") as fh:
        for chunk in iter(lambda: fh.read(1 << 20), b""):
            h.update(chunk)
    return h.hexdigest()


def _log(tag, *args):
    try:
        CACHE_DIR.mkdir(parents=True, exist_ok=True)
        with open(CACHE_DIR / "launcher.log", "a", encoding="utf-8") as fh:
            fh.write(time.strftime("%Y-%m-%dT%H:%M:%S") + " ROLL_" + tag + " "
                     + " ".join(str(a) for a in args) + "\n")
    except Exception:
        pass


def criar(itens, motivo="update"):
    """Copia os arquivos atuais antes de substitui-los. Nada é apagado."""
    if not itens:
        return None
    BASE.mkdir(parents=True, exist_ok=True)
    rid = _agora() + "_" + re.sub(r"[^a-z0-9]", "", motivo.lower())[:12]
    dest = BASE / rid
    if dest.exists():
        rid = rid + "_" + str(int(time.time()) % 1000)
        dest = BASE / rid
    registro = {
        "id": rid, "criado": time.strftime("%Y-%m-%dT%H:%M:%S"),
        "motivo": motivo, "arquivos": [],
    }
    for it in itens:
        rel = str(it.get("path", "")).replace("\\", "/").lstrip("/")
        if not rel or "/../" in rel or rel.startswith("../"):
            continue
        src = ROOT / rel.replace("/", os.sep)
        if not src.is_file():
            continue
        alvo = dest / rel.replace("/", os.sep)
        alvo.parent.mkdir(parents=True, exist_ok=True)
        shutil.copy2(str(src), str(alvo))
        registro["arquivos"].append({
            "path": rel, "sha256": _sha(src), "bytes": src.stat().st_size,
        })
    if not registro["arquivos"]:
        return None
    (dest / "_rollback.json").write_text(
        json.dumps(registro, ensure_ascii=False, indent=2), encoding="utf-8")
    LATEST.write_text(json.dumps({"id": rid}), encoding="utf-8")
    _log("CRIADO", rid, len(registro["arquivos"]), motivo)
    limpar()
    return rid


def listar():
    if not BASE.exists():
        return []
    out = []
    for d in sorted(BASE.iterdir(), reverse=True):
        if not d.is_dir():
            continue
        f = d / "_rollback.json"
        if not f.exists():
            continue
        try:
            r = json.loads(f.read_text(encoding="utf-8"))
            out.append({
                "id": r.get("id", d.name),
                "criado": r.get("criado"),
                "motivo": r.get("motivo"),
                "arquivos": len(r.get("arquivos", [])),
            })
        except Exception:
            pass
    return out[:MAX_KEEP]


def _carregar(rid):
    if not rid:
        if not LATEST.exists():
            return None
        try:
            rid = json.loads(LATEST.read_text(encoding="utf-8")).get("id")
        except Exception:
            return None
    d = BASE / str(rid)
    f = d / "_rollback.json"
    if not f.exists():
        return None
    return d, json.loads(f.read_text(encoding="utf-8"))


def restaurar(rid=None):
    """Restaura os arquivos do backup escolhido (ou o mais recente)."""
    data = _carregar(rid)
    if not data:
        return {"ok": False, "erro": "Backup nao encontrado"}
    d, reg = data
    restaurados, falhas = 0, []
    for item in reg.get("arquivos", []):
        rel = item.get("path", "")
        if "/../" in rel or rel.startswith("../"):
            continue
        origem = d / rel.replace("/", os.sep)
        if not origem.is_file():
            falhas.append({"path": rel, "erro": "arquivo de backup ausente"})
            continue
        if _sha(origem) != item.get("sha256"):
            falhas.append({"path": rel, "erro": "backup corrompido"})
            continue
        dest = ROOT / rel.replace("/", os.sep)
        dest.parent.mkdir(parents=True, exist_ok=True)
        tmp = dest.with_suffix(dest.suffix + ".rfold")
        shutil.copy2(str(origem), str(tmp))
        os.replace(str(tmp), str(dest))
        restaurados += 1
    _log("RESTAURADO", reg.get("id"), restaurados, "falhas", len(falhas))
    return {
        "ok": falhas == [], "id": reg.get("id"),
        "restaurados": restaurados, "falhas": falhas,
    }


def limpar():
    itens = listar()
    for extra in itens[MAX_KEEP:]:
        d = BASE / extra["id"]
        if d.exists():
            shutil.rmtree(str(d), ignore_errors=True)
