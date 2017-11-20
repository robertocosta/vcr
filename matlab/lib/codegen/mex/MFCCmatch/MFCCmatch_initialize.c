/*
 * MFCCmatch_initialize.c
 *
 * Code generation for function 'MFCCmatch_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "MFCCmatch.h"
#include "MFCCmatch_initialize.h"
#include "_coder_MFCCmatch_mex.h"
#include "MFCCmatch_data.h"

/* Function Definitions */
void MFCCmatch_initialize(void)
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

/* End of code generation (MFCCmatch_initialize.c) */
