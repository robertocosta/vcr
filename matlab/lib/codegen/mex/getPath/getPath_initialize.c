/*
 * getPath_initialize.c
 *
 * Code generation for function 'getPath_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "getPath.h"
#include "getPath_initialize.h"
#include "_coder_getPath_mex.h"
#include "getPath_data.h"

/* Function Definitions */
void getPath_initialize(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (getPath_initialize.c) */
