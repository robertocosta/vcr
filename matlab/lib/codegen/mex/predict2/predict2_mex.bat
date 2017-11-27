@echo off
set MATLAB=D:\MATLAB~1
set MATLAB_ARCH=win64
set MATLAB_BIN="D:\matlab2017b\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=predict2_mex
set MEX_NAME=predict2_mex
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for predict2 > predict2_mex.mki
echo COMPILER=%COMPILER%>> predict2_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> predict2_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> predict2_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> predict2_mex.mki
echo LINKER=%LINKER%>> predict2_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> predict2_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> predict2_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> predict2_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> predict2_mex.mki
echo OMPFLAGS= >> predict2_mex.mki
echo OMPLINKFLAGS= >> predict2_mex.mki
echo EMC_COMPILER=msvc150>> predict2_mex.mki
echo EMC_CONFIG=optim>> predict2_mex.mki
"D:\matlab2017b\bin\win64\gmake" -B -f predict2_mex.mk
