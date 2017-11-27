/*
 * MFCCmean.h
 *
 * Code generation for function 'MFCCmean'
 *
 */

#ifndef MFCCMEAN_H
#define MFCCMEAN_H

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
#include "predict2_types.h"

/* Function Declarations */
extern void MFCCmean(const emlrtStack *sp, const emxArray_real_T *P, const
                     emxArray_real_T *Q, const emxArray_real_T *path,
                     emxArray_real_T *m);

#endif

/* End of code generation (MFCCmean.h) */
