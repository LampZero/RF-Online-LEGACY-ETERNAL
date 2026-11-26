# COMENTARIO_ZECA | # GitHub privado: raw do branch main + releases/latest. Token fica fora do codigo.
# -*- coding: utf-8 -*-
"""Acesso ao GitHub privado: raw + releases/latest, com token opcional."""
import json
import time
import urllib.request
import urllib.error
import urllib.parse

from config import (
    GITHUB_RAW, RELEASES_LATEST, CACHE_DIR, github_token,
)


def _log(tag, *args):
    try:
        CACHE_DIR.mkdir(parents=True, exist_ok=True)
        with open(CACHE_DIR / "launcher.log", "a", encoding="utf-8") as fh:
            fh.write(time.strftime("%Y-%m-%dT%H:%M:%S") + " GH_" + tag + " "
                     + " ".join(str(a) for a in args) + "\n")
    except Exception:
        pass


def _headers(accept="application/octet-stream"):
    h = {
        "User-Agent": "RFLauncherPremium/1.0",
        "Accept": accept,
        "Cache-Control": "no-cache",
    }
    token = github_token()
    if token:
        h["Authorization"] = "Bearer " + token
    return h


def _request(url, timeout=15, accept="application/octet-stream"):
    req = urllib.request.Request(url, headers=_headers(accept))
    with urllib.request.urlopen(req, timeout=timeout) as resp:
        return resp.read()


def raw(path, timeout=15):
    """Baixa um arquivo do branch configurado. 'path' relativo a raiz do repo."""
    clean = str(path).replace("\\", "/").lstrip("/")
    url = GITHUB_RAW + "/" + urllib.parse.quote(clean, safe="/")
    try:
        return _request(url, timeout=timeout)
    except Exception as exc:
        _log("RAW_FALHOU", clean, type(exc).__name__, str(exc)[:120])
        return None


def release_json():
    try:
        b = _request(RELEASES_LATEST, timeout=12, accept="application/vnd.github+json")
        return json.loads(b.decode("utf-8"))
    except Exception as exc:
        _log("RELEASE_FALHOU", type(exc).__name__, str(exc)[:120])
        return None


def release_asset_url(nome):
    """Localiza a URL de download de um asset pelo nome."""
    rel = release_json()
    if not rel:
        return None
    for a in rel.get("assets", []):
        if a.get("name", "").lower() == nome.lower():
            return a.get("browser_download_url")
    return None


def download_url(url, timeout=30):
    try:
        return _request(url, timeout=timeout)
    except Exception as exc:
        _log("DOWNLOAD_FALHOU", str(url)[:100], type(exc).__name__, str(exc)[:120])
        return None


def manifest():
    """Tenta raw primeiro; depois asset de release chamado manifest.txt."""
    b = raw("manifest.txt", timeout=12)
    if b:
        return b.decode("utf-8", errors="replace")
    u = release_asset_url("manifest.txt")
    if u:
        b = download_url(u)
        if b:
            return b.decode("utf-8", errors="replace")
    return None


def versao_release():
    rel = release_json()
    if not rel:
        return None
    return {
        "tag": rel.get("tag_name"),
        "nome": rel.get("name"),
        "publicado": rel.get("published_at"),
        "notas": rel.get("body"),
        "url": rel.get("html_url"),
    }
