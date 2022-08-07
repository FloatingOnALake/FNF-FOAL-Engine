@echo off
echo Checking for updates...
git remote update
git status | find /i "behind"
if errorlevel 1 goto open
git pull
if %errorlevel% == 0 goto compile

echo.
echo You have made changes to the following files:
git status --short
echo These changes will be overwritten.
echo.

choice /m "Would you like to continue"
if %errorlevel% == 1 goto reset
echo.

choice /m "Would you like to recompile with the current changes"
if %errorlevel% == 1 goto compile
goto open

:reset
git reset --hard
git pull
goto compile

:compile
echo Compiling...
lime setup
lime update windows
lime build windows
goto open

:open
echo Opening...
cd export/release/windows/bin
explorer .
