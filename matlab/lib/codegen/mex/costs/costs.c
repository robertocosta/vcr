/*
 * costs.c
 *
 * Code generation for function 'costs'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "costs.h"
#include "costs_emxutil.h"
#include "costs_data.h"

/* Variable Definitions */
static emlrtRTEInfo emlrtRTEI = { 1,   /* lineNo */
  18,                                  /* colNo */
  "costs",                             /* fName */
  "D:\\git\\vcr\\matlab\\lib\\costs.m" /* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  7,                                   /* lineNo */
  27,                                  /* colNo */
  "P",                                 /* aName */
  "costs",                             /* fName */
  "D:\\git\\vcr\\matlab\\lib\\costs.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  7,                                   /* lineNo */
  34,                                  /* colNo */
  "Q",                                 /* aName */
  "costs",                             /* fName */
  "D:\\git\\vcr\\matlab\\lib\\costs.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  7,                                   /* lineNo */
  15,                                  /* colNo */
  "c",                                 /* aName */
  "costs",                             /* fName */
  "D:\\git\\vcr\\matlab\\lib\\costs.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  7,                                   /* lineNo */
  17,                                  /* colNo */
  "c",                                 /* aName */
  "costs",                             /* fName */
  "D:\\git\\vcr\\matlab\\lib\\costs.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void costs(const emlrtStack *sp, const emxArray_real_T *P, const emxArray_real_T
           *Q, emxArray_real_T *c)
{
  int32_T k;
  int32_T i;
  int32_T j;
  real_T y;
  real_T x[12];
  real_T scale;
  real_T absxk;
  real_T t;
  k = c->size[0] * c->size[1];
  c->size[0] = P->size[0];
  c->size[1] = Q->size[0];
  emxEnsureCapacity_real_T(sp, c, k, &emlrtRTEI);
  i = 1;
  while (i - 1 <= P->size[0] - 1) {
    j = 1;
    while (j - 1 <= Q->size[0] - 1) {
      k = P->size[0];
      if (!((i >= 1) && (i <= k))) {
        emlrtDynamicBoundsCheckR2012b(i, 1, k, &emlrtBCI, sp);
      }

      k = Q->size[0];
      if (!((j >= 1) && (j <= k))) {
        emlrtDynamicBoundsCheckR2012b(j, 1, k, &b_emlrtBCI, sp);
      }

      for (k = 0; k < 12; k++) {
        x[k] = P->data[(i + P->size[0] * k) - 1] - Q->data[(j + Q->size[0] * k)
          - 1];
      }

      y = 0.0;
      scale = 3.3121686421112381E-170;
      for (k = 0; k < 12; k++) {
        absxk = muDoubleScalarAbs(x[k]);
        if (absxk > scale) {
          t = scale / absxk;
          y = 1.0 + y * t * t;
          scale = absxk;
        } else {
          t = absxk / scale;
          y += t * t;
        }
      }

      y = scale * muDoubleScalarSqrt(y);
      k = c->size[0];
      if (!((i >= 1) && (i <= k))) {
        emlrtDynamicBoundsCheckR2012b(i, 1, k, &c_emlrtBCI, sp);
      }

      k = c->size[1];
      if (!((j >= 1) && (j <= k))) {
        emlrtDynamicBoundsCheckR2012b(j, 1, k, &d_emlrtBCI, sp);
      }

      c->data[(i + c->size[0] * (j - 1)) - 1] = y;
      j++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    i++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }
}

/* End of code generation (costs.c) */
