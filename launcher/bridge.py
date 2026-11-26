# COMENTARIO_ZECA | # Ponte Python->JS. Senha nunca e devolvida em texto puro; apenas mascara.
# -*- coding: utf-8 -*-
"""Ponte Python <-> JavaScript do pywebview."""
import os
import re
import subprocess
import webbrowser

import api_client
import gh_client
import updater
import rollback
from config import (
    ROOT, CLIENT_BINARY, CLIENT_GAME, CLIENT_INI, CLIENT_R3, SITE_URL,
    GITHUB_SLUG, GITHUB_BRANCH, TOKEN_FILE, github_token,
)


class Api:
    """Metodos chamados pela UI via window.api.<metodo>()."""

    def get_config(self):
        from config import LAUNCHER_VERSION
        return {
            "repo": GITHUB_SLUG,
            "branch": GITHUB_BRANCH,
            "site": SITE_URL,
            "versao": LAUNCHER_VERSION,
            "github_autenticado": bool(github_token()),
            "token_local": TOKEN_FILE.exists(),
            "cliente": CLIENT_BINARY.name,
            "root": str(ROOT),
        }

    def get_status(self):
        return api_client.status() or {}

    def get_news(self):
        return api_client.news() or []

    def get_schedule(self):
        return api_client.schedule()

    def get_shop(self):
        return api_client.shop()

    def get_release(self):
        return gh_client.versao_release() or {}

    def check_update(self):
        return updater.verificar()

    def full_check(self):
        """Full check: hash de todos os arquivos do manifest."""
        return updater.fullcheck()

    def apply_update(self):
        v = updater.verificar()
        if not v.get("ok"):
            return {"ok": False, "erro": v.get("erro", "verificação falhou"), "atualizados": 0}
        itens = v.get("desatualizados", [])
        if not itens:
            return {"ok": True, "atualizados": 0, "mensagem": "Ja esta atualizado"}
        r = updater.aplicar(itens)
        r["atualizados"] = r.get("ok", 0)
        return r

    def install_all(self):
        """Baixa/instala tudo que falta (instalacao completa a partir do launcher)."""
        r = updater.instalar_tudo()
        if r.get("ok"):
            r["atualizados"] = r.get("ok", 0) if isinstance(r.get("ok"), int) else r.get("atualizados", 0)
        return r

    def self_update_check(self):
        """Verifica se existe versao nova do launcher no GitHub Releases."""
        from config import LAUNCHER_VERSION, LAUNCHER_ASSET
        rel = gh_client.versao_release()
        if not rel:
            return {"ok": False, "erro": "Release indisponivel"}
        tag = str(rel.get("tag") or "").lstrip("vV")
        cur = str(LAUNCHER_VERSION).lstrip("vV")
        def _ver_tuple(s):
            try:
                return tuple(int(x) for x in re.findall(r'\d+', s)[:4])
            except Exception:
                return (0,)
        tem_novo = _ver_tuple(tag) > _ver_tuple(cur) if tag else False
        url = gh_client.release_asset_url(LAUNCHER_ASSET)
        return {
            "ok": True, "atual": cur, "remoto": tag, "tem_novo": tem_novo,
            "asset": LAUNCHER_ASSET, "asset_url": bool(url), "release": rel,
        }

    def self_update_apply(self):
        """Baixa novo launcher do release e prepara substituicao no proximo boot."""
        import sys, hashlib, tempfile
        from config import LAUNCHER_VERSION, LAUNCHER_ASSET, CACHE_DIR
        chk = self.self_update_check()
        if not chk.get("ok"):
            return chk
        if not chk.get("tem_novo"):
            return {"ok": True, "mensagem": "Launcher ja esta atualizado", "atualizado": False}
        url = gh_client.release_asset_url(LAUNCHER_ASSET)
        if not url:
            return {"ok": False, "erro": "Asset do launcher nao encontrado no release"}
        data = gh_client.download_url(url, timeout=120)
        if not data:
            return {"ok": False, "erro": "Download do launcher falhou"}
        CACHE_DIR.mkdir(parents=True, exist_ok=True)
        novo = CACHE_DIR / LAUNCHER_ASSET
        novo.write_bytes(data)
        sha = hashlib.sha256(data).hexdigest()
        # Se rodando como exe, cria script .bat para trocar no reinicio
        if getattr(sys, "frozen", False):
            exe = sys.executable
            bat = CACHE_DIR / "apply_self_update.bat"
            bat.write_text(
                '@echo off\r\n'
                'timeout /t 2 /nobreak >nul\r\n'
                'copy /Y "{novo}" "{exe}" >nul\r\n'
                'start "" "{exe}"\r\n'
                'del "%~f0"\r\n'.format(novo=str(novo), exe=exe),
                encoding="utf-8"
            )
            subprocess.Popen(["cmd", "/c", str(bat)], cwd=str(CACHE_DIR),
                             creationflags=getattr(subprocess, "CREATE_NO_WINDOW", 0))
            return {"ok": True, "atualizado": True, "reiniciando": True,
                    "mensagem": "Launcher atualizado. Reiniciando...", "sha256": sha}
        return {"ok": True, "atualizado": True, "reiniciando": False,
                "mensagem": "Novo launcher baixado em cache (modo dev, nao substituido automaticamente)",
                "path": str(novo), "sha256": sha}

    def repair_language(self):
        return updater.reparar_idioma()

    def listar_backups(self):
        return rollback.listar()

    def restaurar_backup(self, rid=None):
        return rollback.restaurar(rid)

    def get_credencial(self):
        """Nunca devolve a senha: apenas mascara e e-mail."""
        try:
            texto = CLIENT_INI.read_text(encoding="utf-8", errors="replace")
        except Exception:
            return {"email": "", "senha": "", "salva": False}
        email, senha = "", ""
        for ln in texto.splitlines():
            m = re.match(r"\s*Email\s*=\s*(.*)", ln, re.I)
            if m:
                email = m.group(1).strip()
            m = re.match(r"\s*Password\s*=\s*(.*)", ln, re.I)
            if m:
                senha = m.group(1).strip()
        return {"email": email, "senha": "*" * min(len(senha), 12) if senha else "",
                "salva": bool(senha)}

    def save_credencial(self, email, senha, salvar_id=None):
        """Salva localmente em launcher.ini (fora do git). salvar_id=False limpa e-mail."""
        try:
            texto = CLIENT_INI.read_text(encoding="utf-8", errors="replace")
        except Exception:
            texto = ""
        email_val = str(email).strip() if (salvar_id is None or salvar_id) else ""
        linhas = []
        trocou_email = trocou_senha = False
        for ln in texto.splitlines():
            if re.match(r"\s*Email\s*=", ln, re.I):
                linhas.append("Email        = " + email_val)
                trocou_email = True
            elif re.match(r"\s*Password\s*=", ln, re.I):
                # Senha vazia = manter a atual ( Salvar ID nao apaga a senha ).
                if str(senha).strip():
                    linhas.append("Password     = " + str(senha))
                    trocou_senha = True
                else:
                    linhas.append(ln)
                    trocou_senha = True
            else:
                linhas.append(ln)
        if not trocou_email:
            linhas.append("Email        = " + email_val)
        # NUNCA grava senha em branco: isso apagaria a credencial real do cliente.
        if str(senha).strip() and not trocou_senha:
            linhas.append("Password     = " + str(senha))
        CLIENT_INI.write_text("\n".join(linhas) + "\n", encoding="utf-8")
        return {"ok": True, "mensagem": "Credencial salva localmente (arquivo fora do git)"}

    def get_progress(self):
        return getattr(self, "_progress", {"active": False})

    def _set_progress(self, active, done=0, total=0, label="", detail=""):
        self._progress = {"active": active, "done": done, "total": total,
                          "label": label, "detail": detail,
                          "pct": int(done * 100 / total) if total else 0}

    def status_game(self):
        try:
            out = subprocess.run(
                [str(CLIENT_BINARY), "-status"], cwd=str(ROOT),
                capture_output=True, text=True, timeout=12,
            )
            return (out.stdout or "") + (out.stderr or "")
        except Exception as exc:
            return "ERRO: %s" % exc

    def start_game(self):
        if not CLIENT_BINARY.exists():
            # Oferece instalacao completa se o cliente nao existe
            return {"ok": False, "erro": "rflauncher.exe nao encontrado",
                    "precisa_instalar": True}
        try:
            subprocess.Popen([str(CLIENT_BINARY)], cwd=str(ROOT), shell=False)
            return {"ok": True, "mensagem": "Jogo iniciado"}
        except Exception as exc:
            return {"ok": False, "erro": str(exc)}

    def open_site(self):
        webbrowser.open(SITE_URL)
        return {"ok": True}

    def open_folder(self):
        try:
            os.startfile(str(ROOT))
            return {"ok": True}
        except Exception as exc:
            return {"ok": False, "erro": str(exc)}

    # ------------------------------------------------------------------
    # Aliases usados pela interface. O pywebview converte snake_case em
    # camelCase, mas o app.js chama alguns nomes diretos; mantemos os dois.
    # ------------------------------------------------------------------
    def get_credential(self):
        return self.get_credencial()

    def save_credential(self, email, senha, salvar_id=None):
        return self.save_credencial(email, senha, salvar_id)

    def list_backups(self):
        return self.listar_backups()

    def minimize(self):
        try:
            import webview
            if webview.windows:
                webview.windows[0].minimize()
            return {"ok": True}
        except Exception as exc:
            return {"ok": False, "erro": str(exc)}

    def close_launcher(self):
        try:
            import webview
            if webview.windows:
                webview.windows[0].destroy()
            return {"ok": True}
        except Exception as exc:
            return {"ok": False, "erro": str(exc)}

    # ------------------------------------------------------------------
    # Configuracoes do cliente: APENAS chaves reais do R3Engine.ini.
    # Nao criamos controle para opcao que o cliente nao suporta.
    # ------------------------------------------------------------------
    _CHAVES_CONFIG = (
        "Language", "ScreenXSize", "ScreenYSize", "RenderBits",
        "bFullScreen", "Sound", "music", "SoundVol", "MusicVol", "AmbVol",
        "TextureDetail", "ShadowDetail", "DynamicLight", "SeeDistance", "Gamma",
    )

    def get_client_settings(self):
        """Le o R3Engine.ini atual e devolve so as chaves que o cliente usa."""
        try:
            texto = CLIENT_R3.read_text(encoding="utf-8", errors="replace")
        except Exception:
            return {}
        vals = {}
        for ln in texto.splitlines():
            if "=" not in ln:
                continue
            k, v = ln.split("=", 1)
            k = k.strip()
            if k in self._CHAVES_CONFIG:
                vals[k] = v.strip()
        return vals

    def save_client_settings(self, dados):
        """Grava configuracoes reais com backup antes e avisa sobre reinicio."""
        if not isinstance(dados, dict):
            return {"ok": False, "erro": "Dados invalidos"}
        permitido = {}
        for k, v in dados.items():
            if k in self._CHAVES_CONFIG:
                permitido[k] = str(v).strip()
        if not permitido:
            return {"ok": False, "erro": "Nenhuma opcao suportada pelo cliente"}
        try:
            rid = rollback.criar([{"path": "R3Engine.ini"}], "configuracoes")
            bruto = CLIENT_R3.read_bytes()
            quebra = "\r\n" if b"\r\n" in bruto else "\n"
            texto = bruto.decode("utf-8", errors="replace")
            linhas = texto.splitlines()
            vistos = set()
            for i, ln in enumerate(linhas):
                if "=" not in ln:
                    continue
                k = ln.split("=", 1)[0].strip()
                if k in permitido:
                    linhas[i] = k + " = " + permitido[k]
                    vistos.add(k)
            for k, v in permitido.items():
                if k not in vistos:
                    linhas.append(k + " = " + v)
            CLIENT_R3.write_bytes((quebra.join(linhas) + quebra).encode("utf-8"))
            return {"ok": True, "backup": rid, "reiniciar": True,
                    "mensagem": "Configuracao salva no R3Engine.ini"}
        except Exception as exc:
            return {"ok": False, "erro": str(exc)}
