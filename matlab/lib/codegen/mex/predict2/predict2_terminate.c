/*
 * predict2_terminate.c
 *
 * Code generation for function 'predict2_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "predict2.h"
#include "predict2_terminate.h"
#include "_coder_predict2_mex.h"
#include "predict2_data.h"

/* Function Definitions */
void predict2_atexit(void)
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

void predict2_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (predict2_terminate.c) */
