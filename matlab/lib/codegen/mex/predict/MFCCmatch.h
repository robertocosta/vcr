/*
 * MFCCmatch.h
 *
 * Code generation for function 'MFCCmatch'
 *
 */

#ifndef MFCCMATCH_H
#define MFCCMATCH_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "predict_types.h"

/* Function Declarations */
extern real_T MFCCmatch(const emlrtStack *sp, const emxArray_real_T *P, const
  emxArray_real_T *Q);
extern void b_MFCCmatch(const emlrtStack *sp, const emxArray_real_T *P, const
  emxArray_real_T *Q, real_T *dist, emxArray_real_T *path);

#endif

/* End of code generation (MFCCmatch.h) */
