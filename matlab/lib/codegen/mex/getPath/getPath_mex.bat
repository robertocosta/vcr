@echo off
set MATLAB=D:\MATLAB~1
set MATLAB_ARCH=win64
set MATLAB_BIN="D:\matlab2017b\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=getPath_mex
set MEX_NAME=getPath_mex
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for getPath > getPath_mex.mki
echo COMPILER=%COMPILER%>> getPath_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> getPath_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> getPath_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> getPath_mex.mki
echo LINKER=%LINKER%>> getPath_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> getPath_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> getPath_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> getPath_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> getPath_mex.mki
echo OMPFLAGS= >> getPath_mex.mki
echo OMPLINKFLAGS= >> getPath_mex.mki
echo EMC_COMPILER=msvc150>> getPath_mex.mki
echo EMC_CONFIG=optim>> getPath_mex.mki
"D:\matlab2017b\bin\win64\gmake" -B -f getPath_mex.mk
