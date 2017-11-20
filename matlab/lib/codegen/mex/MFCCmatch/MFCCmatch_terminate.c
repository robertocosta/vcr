/*
 * MFCCmatch_terminate.c
 *
 * Code generation for function 'MFCCmatch_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "MFCCmatch.h"
#include "MFCCmatch_terminate.h"
#include "_coder_MFCCmatch_mex.h"
#include "MFCCmatch_data.h"

/* Function Definitions */
void MFCCmatch_atexit(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void MFCCmatch_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (MFCCmatch_terminate.c) */
