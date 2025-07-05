@echo off
pushd "%~dp0"

echo ============================================
echo Updating Visual Studio project includes...
echo ============================================

python generate_includes.py
if errorlevel 1 (
    echo Python script failed.
    pause
    popd
    exit /b 1
)

echo.
echo Done. You may now reload the project in Visual Studio.
echo.

pause
popd
