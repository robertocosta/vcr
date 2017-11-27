/*
 * sortLE.c
 *
 * Code generation for function 'sortLE'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "predict2.h"
#include "sortLE.h"

/* Function Definitions */
boolean_T sortLE(const real_T v[10], int32_T irow1, int32_T irow2)
{
  boolean_T p;
  boolean_T b1;
  p = true;
  if ((v[irow1 - 1] == v[irow2 - 1]) || (muDoubleScalarIsNaN(v[irow1 - 1]) &&
       muDoubleScalarIsNaN(v[irow2 - 1]))) {
    b1 = true;
  } else {
    b1 = false;
  }

  if (!b1) {
    if ((v[irow1 - 1] <= v[irow2 - 1]) || muDoubleScalarIsNaN(v[irow2 - 1])) {
      p = true;
    } else {
      p = false;
    }
  }

  return p;
}

/* End of code generation (sortLE.c) */
