# Rocket League Mod Template – CodeRed Enhanced Edition

This is a clean, optimized Rocket League modding template built on top of the CodeRed SDK. It integrates Dear ImGui for in-game overlays, includes fixes for common CodeRed issues, and is ready for feature development like ball prediction, ESP, and more.

## Features
- 🔧 CodeRed SDK base with full hook/event access
- 🖼️ ImGui rendering for real-time GUI
- 🚀 Cleaned code, ready-to-compile
- 📦 Modular structure for easy expansion

## Getting Started
1. Clone or download the repo.
2. Open the project in Visual Studio.
3. Build the DLL in **Release x64** mode.
4. Inject into Rocket League using your preferred injector.

## Utilities Included
This template also includes two helpful Python utilities:


### 📂 `generate_includes.py`
Scans your repo for valid header paths and automatically adds them to your `.vcxproj` include directories.

Run it from your project root:
```bash
python generate_includes.py
```

## Dependencies
- DirectX11 (used by ImGui)
- Windows SDK (10.0+)
- Visual Studio 2019 or 2022
- Python 3.6+ (for utility scripts)

## Disclaimer
This project is intended for educational and private development use only. Do not use it to gain unfair advantages in online play.
