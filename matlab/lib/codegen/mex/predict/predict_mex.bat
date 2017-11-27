@echo off
set MATLAB=D:\MATLAB~1
set MATLAB_ARCH=win64
set MATLAB_BIN="D:\matlab2017b\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=predict_mex
set MEX_NAME=predict_mex
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for predict > predict_mex.mki
echo COMPILER=%COMPILER%>> predict_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> predict_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> predict_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> predict_mex.mki
echo LINKER=%LINKER%>> predict_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> predict_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> predict_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> predict_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> predict_mex.mki
echo OMPFLAGS= >> predict_mex.mki
echo OMPLINKFLAGS= >> predict_mex.mki
echo EMC_COMPILER=msvc150>> predict_mex.mki
echo EMC_CONFIG=optim>> predict_mex.mki
"D:\matlab2017b\bin\win64\gmake" -B -f predict_mex.mk
