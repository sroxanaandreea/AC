@echo off

pushd scripts

call C:\Xilinx\14.7\ISE_DS\settings64.bat
call clean.bat
call build.bat
call run.bat nobuild nogui

popd

pause
