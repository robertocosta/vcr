/*
 * predict_terminate.c
 *
 * Code generation for function 'predict_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "predict.h"
#include "predict_terminate.h"
#include "_coder_predict_mex.h"
#include "predict_data.h"

/* Function Definitions */
void predict_atexit(void)
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

void predict_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (predict_terminate.c) */
