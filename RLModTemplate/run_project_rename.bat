@echo off
setlocal ENABLEDELAYEDEXPANSION

:: Detect first .vcxproj
for %%f in (*.vcxproj) do (set "DETECTED_OLD=%%~nf" & goto :found)
:found

if not defined DETECTED_OLD (
    echo No .vcxproj found in this folder. Enter old name manually.
    set /p DETECTED_OLD=Old project name:
)

echo Detected project name: %DETECTED_OLD%
set /p NEW_NAME=Enter NEW project name: 
if "%NEW_NAME%"=="" (
    echo New name required.
    pause & exit /b
)

set /p OLD_NS=Enter OLD namespace (blank uses %DETECTED_OLD%): 
if "%OLD_NS%"=="" set "OLD_NS=%DETECTED_OLD%"

where python >nul 2>&1
if errorlevel 1 (
    echo Python not found in PATH.
    pause & exit /b
)

python rename_project.py %NEW_NAME% --old %DETECTED_OLD% --oldns %OLD_NS%
echo -- Finished --
pause
