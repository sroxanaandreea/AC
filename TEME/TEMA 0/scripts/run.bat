@echo off

SET run_mode=..\..\scripts\console.tcl

if "%1"=="gui" SET run_mode=..\..\scripts\gui.tcl -gui
if "%2"=="gui" SET run_mode=..\..\scripts\gui.tcl -gui

SET build_mode=call build.bat

if "%1"=="nobuild" SET build_mode=
if "%2"=="nobuild" SET build_mode=

%build_mode%

del ..\scripts\..\results.txt > NUL 2> NUL
del ..\scripts\..\results.log > NUL 2> NUL

echo Running tester...

rmdir /S /Q ..\scripts\..\run > NUL 2> NUL

mkdir ..\run 2> NUL

mkdir ..\build\bin 2> NUL
pushd ..\build\bin

echo ******************************************************************************** > ..\..\run\tester.log
echo **** Running tester... >> ..\..\run\tester.log
echo ******************************************************************************** >> ..\..\run\tester.log
tester.exe -intstyle ise -tclbatch %run_mode% >> ..\..\run\tester.log

move /Y result.tester ..\..\run\tester.result > NUL 2> NUL

popd

if not exist ..\build\tester.ngc (
	echo -10.00: failed to synthesize, check synthesis log for errors >> ..\results.txt	
)

if not exist ..\run\tester.result (
	echo -10.00: failed to run tester, check compilation and execution logs >> ..\results.txt
) else (
	type ..\run\tester.result >> ..\results.txt
)
type ..\run\tester.log >> ..\results.log

type ..\results.log
echo --------------------------------------------------------------------------------
type ..\results.txt
