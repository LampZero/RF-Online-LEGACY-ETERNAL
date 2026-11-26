# RF ONLINE ETERNAL — Launcher Premium (Windows)

Launcher desktop feito em **Python + pywebview**, com interface HTML/CSS/JS e update **direto do GitHub privado**.

## Estrutura

```
launcher/
  main.py            entrada (pywebview)
  bridge.py          API Python chamada pela UI
  api_client.py      status/noticias do servidor (8081 -> 8082, cache local)
  gh_client.py       GitHub raw + releases/latest (token opcional)
  xxhash64.py        XXH64 seed=0 idêntico ao manifgen.exe
  updater.py         verificação/aplicação do update e reparo PT-BR
  config.py          configuração (repo, branch, rotas, arquivos)
  web/               interface (index.html, style.css, app.js, hero.png)
  assets/            reparo_idioma_ptbr.zip (validado por SHA256)
  build.bat          gera o .exe com PyInstaller
  .github_token      NUNCA versionado (opcional, repo privado)
```

## Update pelo GitHub

- Fonte primária: `https://raw.githubusercontent.com/LampZero/RF-Online-LEGACY-ETERNAL/main/manifest.txt`.
- Cada entrada: `<hash xxh64 seed 0> TAB <caminho relativo com /> TAB <tamanho>`.
- Arquivos baixados do **raw do mesmo branch**, validados por XXH64 + tamanho antes de substituir.
- Fallback: `http://172.23.123.86:8081/downloads/client/...` se o GitHub falhar.
- Nunca sobrescreve `launcher.ini`, `.github_token`, `manifest.txt`, logs ou DBs.
- Nunca apaga arquivos locais.

### Repo privado — token

Sem token, `raw.githubusercontent.com` pode responder 404 para repo privado. Duas opções:

1. Arquivo `launcher/.github_token` com um PAT de leitura (`repo:read`);
2. Variável de ambiente `GITHUB_TOKEN` / `RF_GITHUB_TOKEN`.

O token **nunca** vai para o código, log ou UI.

## Reparo de idioma

Botão “Reparar idioma PT-BR” extrai `assets/reparo_idioma_ptbr.zip` somente se o SHA256 for
`0f1a13e18bcb64674b8c033a854b63917f7213d21fa2b75e69aa8b0c529ed07c`. Proteção contra zip-slip.

## Build

```bat
cd launcher
build.bat
```

Saída: `launcher\dist\RF Launcher Eternal\RF Launcher Eternal.exe`.

## Regra de publicação

Somente o Senhor Erinho autoriza envio ao GitHub, com a frase exata:

> ok, zeca manda pro github atualização do cliente main

Sem essa frase: nada de `git init`, `commit`, `push`, `tag` ou `release`.
