# COMENTARIO_ZECA | # Configuracao central. NUNCA colocar token/senha aqui; usar arquivo local ou env.
# -*- coding: utf-8 -*-
"""Configuracao do launcher premium - RF Online Legacy Eternal (Windows)."""
import os
from pathlib import Path

LAUNCHER_DIR = Path(__file__).resolve().parent
ROOT = LAUNCHER_DIR.parent
WEB_DIR = LAUNCHER_DIR / "web"
ASSETS_DIR = LAUNCHER_DIR / "assets"
CACHE_DIR = LAUNCHER_DIR / ".cache"

CLIENT_BINARY = ROOT / "rflauncher.exe"
CLIENT_GAME = ROOT / "RF_Online.bin"
CLIENT_INI = ROOT / "launcher.ini"
CLIENT_R3 = ROOT / "R3Engine.ini"
LOCAL_MANIFEST = ROOT / "manifest.txt"

# --- GitHub (fonte primaria de atualizacao) ---
GITHUB_OWNER = "LampZero"
GITHUB_REPO = "RF-Online-LEGACY-ETERNAL"
GITHUB_BRANCH = os.environ.get("RF_GITHUB_BRANCH", "main")
GITHUB_SLUG = "%s/%s" % (GITHUB_OWNER, GITHUB_REPO)
GITHUB_API = "https://api.github.com/repos/" + GITHUB_SLUG
GITHUB_RAW = "https://raw.githubusercontent.com/%s/%s" % (GITHUB_SLUG, GITHUB_BRANCH)
RELEASES_LATEST = GITHUB_API + "/releases/latest"

# Token NUNCA embutido no codigo: arquivo local ou variavel de ambiente.
# O arquivo fica fora do git (ver .gitignore).
TOKEN_FILE = LAUNCHER_DIR / ".github_token"
TOKEN_ENV = os.environ.get("GITHUB_TOKEN") or os.environ.get("RF_GITHUB_TOKEN")

# Caminho do manifest dentro do repo, relativo a raiz.
REMOTE_MANIFEST = "manifest.txt"

# --- Servidor local (fallback / dados de jogo) ---
SERVER_IP = "172.23.123.86"
API_BASES = (
    "http://127.0.0.1:8081",
    "http://%s:8081" % SERVER_IP,
    "http://%s:8082" % SERVER_IP,
)
SITE_URL = "http://%s:8081/" % SERVER_IP
DOWNLOAD_BASE = "http://%s:8081" % SERVER_IP
REPAIR_URL = DOWNLOAD_BASE + "/rfpremium/reparo_idioma_ptbr.zip"
REPAIR_ASSET = "reparo_idioma_ptbr.zip"
# SHA256 do pacote publicado em 25/11/2026 (380.982 bytes)
REPAIR_SHA256 = "0f1a13e18bcb64674b8c033a854b63917f7213d21fa2b75e69aa8b0c529ed07c"

SKIP_DIRS = {"launcher", ".git", ".cache", "__pycache__", "NetLog", "ScreenShots"}


def github_token():
    """Retorna o token local, sem nunca grava-lo no codigo ou no log."""
    if TOKEN_ENV:
        return TOKEN_ENV.strip()
    try:
        if TOKEN_FILE.exists():
            return TOKEN_FILE.read_text(encoding="utf-8").strip()
    except Exception:
        pass
    return None
