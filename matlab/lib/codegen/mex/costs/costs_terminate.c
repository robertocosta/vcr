/*
 * costs_terminate.c
 *
 * Code generation for function 'costs_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "costs.h"
#include "costs_terminate.h"
#include "_coder_costs_mex.h"
#include "costs_data.h"

/* Function Definitions */
void costs_atexit(void)
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

void costs_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (costs_terminate.c) */
