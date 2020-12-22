@echo off

rem Find MSBuild
setlocal enabledelayedexpansion
set VSWHERE="%ProgramFiles(x86)%\Microsoft Visual Studio\Installer\vswhere.exe"

for /f "usebackq tokens=*" %%i in (`%VSWHERE% -latest -requires Microsoft.Component.MSBuild -find MSBuild\**\Bin\Roslyn\csi.exe`) do (
  set CSIPATH=%%i
)

if not exist "%CSIPATH%" (
	echo Cannot find CSI.EXE, please install VisualStudio with MSBuild.
	pause
	exit /b 1
)

rem Init environment variables
set PATHEXT=%PATHEXT%;.CSX
set MMROOT=%~dp0

cd %MMROOT%\Build

rem Start
if not %1.==. (
	set CMD=%*
	call:execute
	exit /b %ERRORLEVEL%
)

echo - 
echo - Macad3D build script console.
echo - Enter 'help' for available commands.
echo - 

:loopstart
	set CMD=
	set /P CMD=">  " 
	if /I "%CMD%"=="exit" goto loopend
	if /I "%CMD%"=="quit" goto loopend
	call:execute
	goto loopstart

:loopend
exit /b 0

:execute
	for /f "tokens=1*" %%a in ("%CMD%") do (
		echo.%%a| find /I ".csx">nul && ( set SCR=%%a ) || ( set SCR=%%a.csx )
		if not exist "!SCR!" (
			echo Invalid script name.
			goto loopstart
		)
		"%CSIPATH%" !SCR! %%b
	)
goto:eof
