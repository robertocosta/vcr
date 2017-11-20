/*
 * costs.h
 *
 * Code generation for function 'costs'
 *
 */

#ifndef COSTS_H
#define COSTS_H

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
#include "costs_types.h"

/* Function Declarations */
extern void costs(const emlrtStack *sp, const emxArray_real_T *P, const
                  emxArray_real_T *Q, emxArray_real_T *c);

#endif

/* End of code generation (costs.h) */
