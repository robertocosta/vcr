@echo off
set MATLAB=D:\MATLAB~1
set MATLAB_ARCH=win64
set MATLAB_BIN="D:\matlab2017b\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=MFCCmatch_mex
set MEX_NAME=MFCCmatch_mex
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for MFCCmatch > MFCCmatch_mex.mki
echo COMPILER=%COMPILER%>> MFCCmatch_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> MFCCmatch_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> MFCCmatch_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> MFCCmatch_mex.mki
echo LINKER=%LINKER%>> MFCCmatch_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> MFCCmatch_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> MFCCmatch_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> MFCCmatch_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> MFCCmatch_mex.mki
echo OMPFLAGS= >> MFCCmatch_mex.mki
echo OMPLINKFLAGS= >> MFCCmatch_mex.mki
echo EMC_COMPILER=msvc150>> MFCCmatch_mex.mki
echo EMC_CONFIG=optim>> MFCCmatch_mex.mki
"D:\matlab2017b\bin\win64\gmake" -B -f MFCCmatch_mex.mk
