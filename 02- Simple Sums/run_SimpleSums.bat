@echo off 
cls
echo Compiling SimpleSums...
g++ SimpleSums.cpp -o SimpleSums.exe
if %errorlevel% neq 0 (
	echo.
	echo Compilation failed!
	pause 
	exit /b
)
echo Running SimpleSums...
SimpleSums.exe
pause