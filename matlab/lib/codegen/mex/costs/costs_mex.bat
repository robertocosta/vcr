@echo off
set MATLAB=D:\MATLAB~1
set MATLAB_ARCH=win64
set MATLAB_BIN="D:\matlab2017b\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=costs_mex
set MEX_NAME=costs_mex
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for costs > costs_mex.mki
echo COMPILER=%COMPILER%>> costs_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> costs_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> costs_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> costs_mex.mki
echo LINKER=%LINKER%>> costs_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> costs_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> costs_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> costs_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> costs_mex.mki
echo OMPFLAGS= >> costs_mex.mki
echo OMPLINKFLAGS= >> costs_mex.mki
echo EMC_COMPILER=msvc150>> costs_mex.mki
echo EMC_CONFIG=optim>> costs_mex.mki
"D:\matlab2017b\bin\win64\gmake" -B -f costs_mex.mk
