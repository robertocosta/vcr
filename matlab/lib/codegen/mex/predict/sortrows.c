/*
 * sortrows.c
 *
 * Code generation for function 'sortrows'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "predict.h"
#include "sortrows.h"
#include "sortLE.h"

/* Function Definitions */
void sortrows(real_T y[10], real_T ndx[10])
{
  int32_T k;
  int32_T i;
  int32_T idx[10];
  int32_T i2;
  int32_T j;
  real_T ycol[10];
  int32_T pEnd;
  int32_T p;
  int32_T q;
  int32_T qEnd;
  int32_T kEnd;
  int32_T iwork[10];
  for (k = 0; k <= 9; k += 2) {
    if (sortLE(y, k + 1, k + 2)) {
      idx[k] = k + 1;
      idx[k + 1] = k + 2;
    } else {
      idx[k] = k + 2;
      idx[k + 1] = k + 1;
    }
  }

  i = 2;
  while (i < 10) {
    i2 = i << 1;
    j = 1;
    for (pEnd = 1 + i; pEnd < 11; pEnd = qEnd + i) {
      p = j;
      q = pEnd;
      qEnd = j + i2;
      if (qEnd > 11) {
        qEnd = 11;
      }

      k = 0;
      kEnd = qEnd - j;
      while (k + 1 <= kEnd) {
        if (sortLE(y, idx[p - 1], idx[q - 1])) {
          iwork[k] = idx[p - 1];
          p++;
          if (p == pEnd) {
            while (q < qEnd) {
              k++;
              iwork[k] = idx[q - 1];
              q++;
            }
          }
        } else {
          iwork[k] = idx[q - 1];
          q++;
          if (q == qEnd) {
            while (p < pEnd) {
              k++;
              iwork[k] = idx[p - 1];
              p++;
            }
          }
        }

        k++;
      }

      for (k = 0; k + 1 <= kEnd; k++) {
        idx[(j + k) - 1] = iwork[k];
      }

      j = qEnd;
    }

    i = i2;
  }

  for (i = 0; i < 10; i++) {
    ycol[i] = y[idx[i] - 1];
  }

  for (i = 0; i < 10; i++) {
    y[i] = ycol[i];
    ndx[i] = idx[i];
  }
}

/* End of code generation (sortrows.c) */
