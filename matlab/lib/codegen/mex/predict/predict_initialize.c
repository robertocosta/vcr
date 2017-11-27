/*
 * predict_initialize.c
 *
 * Code generation for function 'predict_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "predict.h"
#include "predict_initialize.h"
#include "_coder_predict_mex.h"
#include "predict_data.h"

/* Function Definitions */
void predict_initialize(void)
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

/* End of code generation (predict_initialize.c) */
