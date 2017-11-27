/*
 * predict2_initialize.c
 *
 * Code generation for function 'predict2_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "predict2.h"
#include "predict2_initialize.h"
#include "_coder_predict2_mex.h"
#include "predict2_data.h"

/* Function Definitions */
void predict2_initialize(void)
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

/* End of code generation (predict2_initialize.c) */
