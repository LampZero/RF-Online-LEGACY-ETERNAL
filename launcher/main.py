# COMENTARIO_ZECA | # Entrada Windows do launcher (pywebview).# -*- coding: utf-8 -*-
"""RF Online Legacy Eternal - Launcher Premium (Windows)."""
import io
import os
import sys
import traceback

if getattr(sys, "frozen", False):
    BASE = os.path.dirname(sys.executable)
else:
    BASE = os.path.dirname(os.path.abspath(__file__))

sys.path.insert(0, BASE)

import webview
from bridge import Api
from config import WEB_DIR, CACHE_DIR

LOG = CACHE_DIR / "launcher.log"


def log(*args):
    try:
        CACHE_DIR.mkdir(parents=True, exist_ok=True)
        with open(LOG, "a", encoding="utf-8") as fh:
            fh.write(" ".join(str(a) for a in args) + "\n")
    except Exception:
        pass


def main():
    try:
        api = Api()
        window = webview.create_window(
            "RF ONLINE ETERNAL - Launcher",
            str(WEB_DIR / "index.html"),
            js_api=api,
            width=1180,
            height=740,
            min_size=(980, 620),
            background_color="#07090f",
            text_select=False,
        )
        log("LAUNCHER_INICIADO", sys.version.split()[0], str(WEB_DIR))
        webview.start(debug=False)
    except Exception:
        log("ERRO_FATAL", traceback.format_exc())
        raise


if __name__ == "__main__":
    main()
