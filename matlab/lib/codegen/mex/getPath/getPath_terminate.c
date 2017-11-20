/*
 * getPath_terminate.c
 *
 * Code generation for function 'getPath_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "getPath.h"
#include "getPath_terminate.h"
#include "_coder_getPath_mex.h"
#include "getPath_data.h"

/* Function Definitions */
void getPath_atexit(void)
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

void getPath_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (getPath_terminate.c) */
