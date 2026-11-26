@echo off
chcp 65001 >nul
title RF ONLINE ETERNAL - Build do Launcher (Windows)
cd /d "%~dp0"

echo.
echo === RF ONLINE ETERNAL - BUILD WINDOWS ===
echo.

if exist ".cache" rmdir /s /q ".cache"
if exist "build" rmdir /s /q "build"
if exist "dist" rmdir /s /q "dist"

"C:\Python314\python.exe" -m PyInstaller --noconfirm --clean --onedir --windowed ^
  --name "RF Launcher Eternal" ^
  --icon "assets\rf_icon.ico" ^
  --add-data "web;web" ^
  --add-data "assets;assets" ^
  --hidden-import webview.platforms.edgechromium ^
  --hidden-import webview.platforms.winforms ^
  main.py

if errorlevel 1 (
  echo.
  echo [ERRO] Build falhou.
  exit /b 1
)

echo.
echo [OK] Launcher gerado em: dist\RF Launcher Eternal\RF Launcher Eternal.exe
echo.
