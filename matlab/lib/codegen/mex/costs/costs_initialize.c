/*
 * costs_initialize.c
 *
 * Code generation for function 'costs_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "costs.h"
#include "costs_initialize.h"
#include "_coder_costs_mex.h"
#include "costs_data.h"

/* Function Definitions */
void costs_initialize(void)
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

/* End of code generation (costs_initialize.c) */
