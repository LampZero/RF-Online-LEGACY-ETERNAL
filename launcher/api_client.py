# COMENTARIO_ZECA | # API do servidor: tenta 8081 local, depois IP da LAN, depois 8082. Cache evita falha visual.
# -*- coding: utf-8 -*-
"""Cliente HTTP com fallback 8081 -> 8082 e cache local."""
import io
import json
import time
import urllib.request
import urllib.error

from config import API_BASES, CACHE_DIR, SITE_URL

CACHE_FILE = CACHE_DIR / "api_cache.json"


def _get(path, timeout=6):
    erros = []
    for base in API_BASES:
        try:
            req = urllib.request.Request(base + path, headers={"User-Agent": "RFLauncherPremium/1.0"})
            with urllib.request.urlopen(req, timeout=timeout) as resp:
                return resp.read()
        except Exception as exc:
            erros.append("%s: %s" % (base, type(exc).__name__))
    _log("GET_FALHOU", path, "; ".join(erros))
    return None


def _log(tag, *args):
    try:
        CACHE_DIR.mkdir(parents=True, exist_ok=True)
        with open(CACHE_DIR / "launcher.log", "a", encoding="utf-8") as fh:
            fh.write(time.strftime("%Y-%m-%dT%H:%M:%S") + " " + tag + " " + " ".join(map(str, args)) + "\n")
    except Exception:
        pass


def _json(path):
    raw = _get(path)
    if not raw:
        return None
    try:
        return json.loads(raw.decode("utf-8"))
    except Exception as exc:
        _log("JSON_INVALIDO", path, exc)
        return None


def _save_cache(chave, valor):
    try:
        CACHE_DIR.mkdir(parents=True, exist_ok=True)
        dados = {}
        if CACHE_FILE.exists():
            dados = json.loads(CACHE_FILE.read_text(encoding="utf-8"))
        dados[chave] = {"ts": time.time(), "data": valor}
        CACHE_FILE.write_text(json.dumps(dados, ensure_ascii=False), encoding="utf-8")
    except Exception:
        pass


def _load_cache(chave, max_idade=86400):
    try:
        dados = json.loads(CACHE_FILE.read_text(encoding="utf-8"))
        item = dados.get(chave)
        if item and time.time() - item.get("ts", 0) < max_idade:
            return item.get("data")
    except Exception:
        pass
    return None


def status():
    data = _json("/api/status")
    if data:
        _save_cache("status", data)
        return data
    return _load_cache("status")


def news():
    data = _json("/api/articles")
    if data:
        posts = data.get("posts", data) if isinstance(data, dict) else data
        _save_cache("news", posts)
        return posts
    return _load_cache("news")


def schedule():
    # Endpoints dedicados podem nao existir ainda; o launcher degrada com seguranca.
    data = _json("/api/launcher/schedule")
    if isinstance(data, dict):
        _save_cache("schedule", data)
        return data
    return _load_cache("schedule") or {"chipwar": [], "guildwar": [], "fonte": "indisponivel"}


def shop():
    data = _json("/api/launcher/shop")
    if isinstance(data, dict):
        _save_cache("shop", data)
        return data
    return _load_cache("shop") or {"itens": [], "fonte": "indisponivel"}


def manifest_text():
    raw = _get("/downloads/client/manifest.txt")
    return raw.decode("utf-8", errors="replace") if raw is not None else None


def client_file(path):
    """Baixa um arquivo do cliente no servidor local (fallback do update)."""
    return _get("/downloads/client/" + str(path).replace("\\", "/").lstrip("/"))


def site_url():
    return SITE_URL
