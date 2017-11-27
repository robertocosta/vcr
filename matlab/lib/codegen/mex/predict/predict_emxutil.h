/*
 * predict_emxutil.h
 *
 * Code generation for function 'predict_emxutil'
 *
 */

#ifndef PREDICT_EMXUTIL_H
#define PREDICT_EMXUTIL_H

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
extern void emxEnsureCapacity_real_T(const emlrtStack *sp, emxArray_real_T
  *emxArray, int32_T oldNumel, const emlrtRTEInfo *srcLocation);
extern void emxFreeStruct_cell_0(cell_0 *pStruct);
extern void emxFree_real_T(emxArray_real_T **pEmxArray);
extern void emxInitStruct_cell_0(const emlrtStack *sp, cell_0 *pStruct, const
  emlrtRTEInfo *srcLocation, boolean_T doPush);
extern void emxInit_real_T(const emlrtStack *sp, emxArray_real_T **pEmxArray,
  int32_T numDimensions, const emlrtRTEInfo *srcLocation, boolean_T doPush);

#endif

/* End of code generation (predict_emxutil.h) */
