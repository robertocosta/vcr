/*
 * predict.h
 *
 * Code generation for function 'predict'
 *
 */

#ifndef PREDICT_H
#define PREDICT_H

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
extern real_T predict(const emlrtStack *sp, const emxArray_real_T *mfcc1, const
                      cell_0 *mfccTab);

#endif

/* End of code generation (predict.h) */
