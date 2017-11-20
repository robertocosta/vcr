/*
 * getPath.h
 *
 * Code generation for function 'getPath'
 *
 */

#ifndef GETPATH_H
#define GETPATH_H

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
#include "MFCCmatch_types.h"

/* Function Declarations */
extern void getPath(const emlrtStack *sp, const emxArray_real_T *D,
                    emxArray_real_T *p);

#endif

/* End of code generation (getPath.h) */
