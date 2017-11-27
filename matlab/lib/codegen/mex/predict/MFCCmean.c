/*
 * MFCCmean.c
 *
 * Code generation for function 'MFCCmean'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "predict.h"
#include "MFCCmean.h"
#include "predict_emxutil.h"
#include "predict_data.h"

/* Variable Definitions */
static emlrtRTEInfo g_emlrtRTEI = { 1, /* lineNo */
  18,                                  /* colNo */
  "MFCCmean",                          /* fName */
  "D:\\git\\vcr\\matlab\\lib\\MFCCmean.m"/* pName */
};

static emlrtBCInfo ac_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  7,                                   /* lineNo */
  22,                                  /* colNo */
  "P",                                 /* aName */
  "MFCCmean",                          /* fName */
  "D:\\git\\vcr\\matlab\\lib\\MFCCmean.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  7,                                   /* lineNo */
  50,                                  /* colNo */
  "path",                              /* aName */
  "MFCCmean",                          /* fName */
  "D:\\git\\vcr\\matlab\\lib\\MFCCmean.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  7,                                   /* lineNo */
  43,                                  /* colNo */
  "Q",                                 /* aName */
  "MFCCmean",                          /* fName */
  "D:\\git\\vcr\\matlab\\lib\\MFCCmean.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  7,                                   /* lineNo */
  11,                                  /* colNo */
  "m",                                 /* aName */
  "MFCCmean",                          /* fName */
  "D:\\git\\vcr\\matlab\\lib\\MFCCmean.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  7,                                   /* lineNo */
  27,                                  /* colNo */
  "path",                              /* aName */
  "MFCCmean",                          /* fName */
  "D:\\git\\vcr\\matlab\\lib\\MFCCmean.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  7,                                   /* lineNo */
  48,                                  /* colNo */
  "path",                              /* aName */
  "MFCCmean",                          /* fName */
  "D:\\git\\vcr\\matlab\\lib\\MFCCmean.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void MFCCmean(const emlrtStack *sp, const emxArray_real_T *P, const
              emxArray_real_T *Q, const emxArray_real_T *path, emxArray_real_T
              *m)
{
  int32_T i6;
  int32_T loop_ub;
  int32_T i;
  int32_T b_path;
  int32_T c_path;
  i6 = m->size[0] * m->size[1];
  m->size[0] = path->size[0];
  m->size[1] = 12;
  emxEnsureCapacity_real_T(sp, m, i6, &g_emlrtRTEI);
  loop_ub = path->size[0] * 12;
  for (i6 = 0; i6 < loop_ub; i6++) {
    m->data[i6] = 0.0;
  }

  i = 0;
  while (i <= path->size[0] - 1) {
    i6 = path->size[1];
    if (!(2 <= i6)) {
      emlrtDynamicBoundsCheckR2012b(2, 1, i6, &bc_emlrtBCI, sp);
    }

    i6 = P->size[0];
    loop_ub = path->size[0];
    if (!((i + 1 >= 1) && (i + 1 <= loop_ub))) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, loop_ub, &ec_emlrtBCI, sp);
    }

    loop_ub = (int32_T)path->data[i];
    if (!((loop_ub >= 1) && (loop_ub <= i6))) {
      emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i6, &ac_emlrtBCI, sp);
    }

    i6 = Q->size[0];
    loop_ub = path->size[0];
    if (!((i + 1 >= 1) && (i + 1 <= loop_ub))) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, loop_ub, &fc_emlrtBCI, sp);
    }

    loop_ub = (int32_T)path->data[i + path->size[0]];
    if (!((loop_ub >= 1) && (loop_ub <= i6))) {
      emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i6, &cc_emlrtBCI, sp);
    }

    b_path = (int32_T)path->data[i];
    c_path = (int32_T)path->data[i + path->size[0]];
    loop_ub = m->size[0];
    if (!((i + 1 >= 1) && (i + 1 <= loop_ub))) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, loop_ub, &dc_emlrtBCI, sp);
    }

    for (i6 = 0; i6 < 12; i6++) {
      m->data[i + m->size[0] * i6] = 0.5 * P->data[(b_path + P->size[0] * i6) -
        1] + 0.5 * Q->data[(c_path + Q->size[0] * i6) - 1];
    }

    i++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }
}

/* End of code generation (MFCCmean.c) */
