@echo off

mkdir ..\build 2> NUL
pushd ..\build

echo Compiling tester...
for %%f in (..\tester\*.v) do (
    vlogcomp -incremental -work tester=lib\tester %%f > NUL
)

echo Compiling implementation under test...
for %%f in (..\*.v) do (
    vlogcomp -incremental -work uut=lib\uut %%f > NUL
    echo verilog work %%f >> tester.prj
)

echo Synthesizing implementation under test...
xst -ifn ..\scripts\tester.xst -intstyle silent

echo Compiling common files...
vlogcomp %XILINX%\verilog\src\glbl.v -incremental -work work=lib\work > NUL

popd

echo Linking tester...

mkdir ..\build\bin 2> NUL
pushd ..\build\bin

fuse -incremental tester.tester -L unisims_ver -L unimacro_ver -L xilinxcorelib_ver -L tester=..\lib\tester -L uut=..\lib\uut -o tester.exe > NUL

popd