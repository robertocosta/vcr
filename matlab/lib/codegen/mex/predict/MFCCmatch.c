/*
 * MFCCmatch.c
 *
 * Code generation for function 'MFCCmatch'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "predict.h"
#include "MFCCmatch.h"
#include "predict_emxutil.h"
#include "getPath.h"
#include "costs.h"
#include "predict_data.h"

/* Variable Definitions */
static emlrtRSInfo f_emlrtRSI = { 17,  /* lineNo */
  "MFCCmatch",                         /* fcnName */
  "D:\\git\\vcr\\matlab\\lib\\MFCCmatch.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 33,  /* lineNo */
  "MFCCmatch",                         /* fcnName */
  "D:\\git\\vcr\\matlab\\lib\\MFCCmatch.m"/* pathName */
};

static emlrtRTEInfo b_emlrtRTEI = { 1, /* lineNo */
  27,                                  /* colNo */
  "MFCCmatch",                         /* fName */
  "D:\\git\\vcr\\matlab\\lib\\MFCCmatch.m"/* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 17,/* lineNo */
  5,                                   /* colNo */
  "MFCCmatch",                         /* fName */
  "D:\\git\\vcr\\matlab\\lib\\MFCCmatch.m"/* pName */
};

static emlrtRTEInfo d_emlrtRTEI = { 18,/* lineNo */
  5,                                   /* colNo */
  "MFCCmatch",                         /* fName */
  "D:\\git\\vcr\\matlab\\lib\\MFCCmatch.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  16,                                  /* colNo */
  "C",                                 /* aName */
  "MFCCmatch",                         /* fName */
  "D:\\git\\vcr\\matlab\\lib\\MFCCmatch.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  18,                                  /* colNo */
  "C",                                 /* aName */
  "MFCCmatch",                         /* fName */
  "D:\\git\\vcr\\matlab\\lib\\MFCCmatch.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  7,                                   /* colNo */
  "D",                                 /* aName */
  "MFCCmatch",                         /* fName */
  "D:\\git\\vcr\\matlab\\lib\\MFCCmatch.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  9,                                   /* colNo */
  "D",                                 /* aName */
  "MFCCmatch",                         /* fName */
  "D:\\git\\vcr\\matlab\\lib\\MFCCmatch.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  24,                                  /* colNo */
  "D",                                 /* aName */
  "MFCCmatch",                         /* fName */
  "D:\\git\\vcr\\matlab\\lib\\MFCCmatch.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  31,                                  /* colNo */
  "C",                                 /* aName */
  "MFCCmatch",                         /* fName */
  "D:\\git\\vcr\\matlab\\lib\\MFCCmatch.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  13,                                  /* colNo */
  "D",                                 /* aName */
  "MFCCmatch",                         /* fName */
  "D:\\git\\vcr\\matlab\\lib\\MFCCmatch.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  20,                                  /* colNo */
  "D",                                 /* aName */
  "MFCCmatch",                         /* fName */
  "D:\\git\\vcr\\matlab\\lib\\MFCCmatch.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  29,                                  /* colNo */
  "C",                                 /* aName */
  "MFCCmatch",                         /* fName */
  "D:\\git\\vcr\\matlab\\lib\\MFCCmatch.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  11,                                  /* colNo */
  "D",                                 /* aName */
  "MFCCmatch",                         /* fName */
  "D:\\git\\vcr\\matlab\\lib\\MFCCmatch.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  14,                                  /* colNo */
  "D",                                 /* aName */
  "MFCCmatch",                         /* fName */
  "D:\\git\\vcr\\matlab\\lib\\MFCCmatch.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  16,                                  /* colNo */
  "D",                                 /* aName */
  "MFCCmatch",                         /* fName */
  "D:\\git\\vcr\\matlab\\lib\\MFCCmatch.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  29,                                  /* colNo */
  "D",                                 /* aName */
  "MFCCmatch",                         /* fName */
  "D:\\git\\vcr\\matlab\\lib\\MFCCmatch.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  33,                                  /* colNo */
  "D",                                 /* aName */
  "MFCCmatch",                         /* fName */
  "D:\\git\\vcr\\matlab\\lib\\MFCCmatch.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  40,                                  /* colNo */
  "D",                                 /* aName */
  "MFCCmatch",                         /* fName */
  "D:\\git\\vcr\\matlab\\lib\\MFCCmatch.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  44,                                  /* colNo */
  "D",                                 /* aName */
  "MFCCmatch",                         /* fName */
  "D:\\git\\vcr\\matlab\\lib\\MFCCmatch.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  49,                                  /* colNo */
  "D",                                 /* aName */
  "MFCCmatch",                         /* fName */
  "D:\\git\\vcr\\matlab\\lib\\MFCCmatch.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  51,                                  /* colNo */
  "D",                                 /* aName */
  "MFCCmatch",                         /* fName */
  "D:\\git\\vcr\\matlab\\lib\\MFCCmatch.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  60,                                  /* colNo */
  "C",                                 /* aName */
  "MFCCmatch",                         /* fName */
  "D:\\git\\vcr\\matlab\\lib\\MFCCmatch.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  62,                                  /* colNo */
  "C",                                 /* aName */
  "MFCCmatch",                         /* fName */
  "D:\\git\\vcr\\matlab\\lib\\MFCCmatch.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  15,                                  /* colNo */
  "D",                                 /* aName */
  "MFCCmatch",                         /* fName */
  "D:\\git\\vcr\\matlab\\lib\\MFCCmatch.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  17,                                  /* colNo */
  "D",                                 /* aName */
  "MFCCmatch",                         /* fName */
  "D:\\git\\vcr\\matlab\\lib\\MFCCmatch.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  22,                                  /* colNo */
  "D",                                 /* aName */
  "MFCCmatch",                         /* fName */
  "D:\\git\\vcr\\matlab\\lib\\MFCCmatch.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  31,                                  /* colNo */
  "C",                                 /* aName */
  "MFCCmatch",                         /* fName */
  "D:\\git\\vcr\\matlab\\lib\\MFCCmatch.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  13,                                  /* colNo */
  "D",                                 /* aName */
  "MFCCmatch",                         /* fName */
  "D:\\git\\vcr\\matlab\\lib\\MFCCmatch.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  20,                                  /* colNo */
  "D",                                 /* aName */
  "MFCCmatch",                         /* fName */
  "D:\\git\\vcr\\matlab\\lib\\MFCCmatch.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  29,                                  /* colNo */
  "C",                                 /* aName */
  "MFCCmatch",                         /* fName */
  "D:\\git\\vcr\\matlab\\lib\\MFCCmatch.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  11,                                  /* colNo */
  "D",                                 /* aName */
  "MFCCmatch",                         /* fName */
  "D:\\git\\vcr\\matlab\\lib\\MFCCmatch.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
real_T MFCCmatch(const emlrtStack *sp, const emxArray_real_T *P, const
                 emxArray_real_T *Q)
{
  real_T dist;
  emxArray_real_T *C;
  emxArray_real_T *D;
  int32_T x;
  int32_T y;
  int32_T i1;
  int32_T loop_ub;
  int32_T ixstart;
  int32_T i;
  int32_T j;
  int32_T i2;
  real_T varargin_1[3];
  emxArray_real_T *n_emlrtRSI;
  real_T mtmp;
  boolean_T exitg1;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &C, 2, &c_emlrtRTEI, true);
  emxInit_real_T(sp, &D, 2, &d_emlrtRTEI, true);

  /* global C; */
  x = P->size[0] - 2;
  y = Q->size[0] - 2;

  /*      if (y>x) */
  /*          [ dist, path ] = match2(Q,P); */
  /*          for i=1:size(path,1) */
  /*              for j=1:size(path,2) */
  /*                  path{i,j} = fliplr(path{i,j}); */
  /*              end */
  /*          end */
  /*          dist = dist'; */
  /*          return */
  /*      end */
  st.site = &f_emlrtRSI;
  costs(&st, P, Q, C);
  i1 = D->size[0] * D->size[1];
  D->size[0] = P->size[0];
  D->size[1] = Q->size[0];
  emxEnsureCapacity_real_T(sp, D, i1, &b_emlrtRTEI);
  loop_ub = P->size[0] * Q->size[0];
  for (i1 = 0; i1 < loop_ub; i1++) {
    D->data[i1] = 0.0;
  }

  ixstart = P->size[0];
  if (!(1 <= ixstart)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, ixstart, &c_emlrtBCI, sp);
  }

  ixstart = Q->size[0];
  if (!(1 <= ixstart)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, ixstart, &d_emlrtBCI, sp);
  }

  i1 = C->size[0];
  if (!(1 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i1, &emlrtBCI, sp);
  }

  i1 = C->size[1];
  if (!(1 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i1, &b_emlrtBCI, sp);
  }

  D->data[0] = C->data[0];
  i = 2;
  while (i - 2 <= x) {
    i1 = D->size[1];
    if (!(1 <= i1)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i1, &g_emlrtBCI, sp);
    }

    i1 = D->size[1];
    if (!(1 <= i1)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i1, &e_emlrtBCI, sp);
    }

    i1 = C->size[1];
    if (!(1 <= i1)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i1, &f_emlrtBCI, sp);
    }

    i1 = D->size[0];
    i2 = i - 1;
    if (!((i2 >= 1) && (i2 <= i1))) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &ab_emlrtBCI, sp);
    }

    i1 = C->size[0];
    if (!((i >= 1) && (i <= i1))) {
      emlrtDynamicBoundsCheckR2012b(i, 1, i1, &bb_emlrtBCI, sp);
    }

    i1 = D->size[0];
    if (!((i >= 1) && (i <= i1))) {
      emlrtDynamicBoundsCheckR2012b(i, 1, i1, &cb_emlrtBCI, sp);
    }

    D->data[i - 1] = D->data[i2 - 1] + C->data[i - 1];
    i++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  i = 2;
  while (i - 2 <= y) {
    i1 = D->size[0];
    if (!(1 <= i1)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i1, &j_emlrtBCI, sp);
    }

    i1 = D->size[0];
    if (!(1 <= i1)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i1, &h_emlrtBCI, sp);
    }

    i1 = C->size[0];
    if (!(1 <= i1)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i1, &i_emlrtBCI, sp);
    }

    i1 = D->size[1];
    i2 = i - 1;
    if (!((i2 >= 1) && (i2 <= i1))) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &w_emlrtBCI, sp);
    }

    i1 = C->size[1];
    if (!((i >= 1) && (i <= i1))) {
      emlrtDynamicBoundsCheckR2012b(i, 1, i1, &x_emlrtBCI, sp);
    }

    i1 = D->size[1];
    if (!((i >= 1) && (i <= i1))) {
      emlrtDynamicBoundsCheckR2012b(i, 1, i1, &y_emlrtBCI, sp);
    }

    D->data[D->size[0] * (i - 1)] = D->data[D->size[0] * (i2 - 1)] + C->data
      [C->size[0] * (i - 1)];
    i++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  i = 2;
  while (i - 2 <= x) {
    j = 2;
    while (j - 2 <= y) {
      i1 = D->size[0];
      i2 = i - 1;
      if (!((i2 >= 1) && (i2 <= i1))) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &m_emlrtBCI, sp);
      }

      i1 = D->size[1];
      loop_ub = j - 1;
      if (!((loop_ub >= 1) && (loop_ub <= i1))) {
        emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i1, &n_emlrtBCI, sp);
      }

      varargin_1[0] = D->data[(i2 + D->size[0] * (loop_ub - 1)) - 1];
      i1 = D->size[0];
      i2 = i - 1;
      if (!((i2 >= 1) && (i2 <= i1))) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &o_emlrtBCI, sp);
      }

      i1 = D->size[1];
      if (!((j >= 1) && (j <= i1))) {
        emlrtDynamicBoundsCheckR2012b(j, 1, i1, &p_emlrtBCI, sp);
      }

      varargin_1[1] = D->data[(i2 + D->size[0] * (j - 1)) - 1];
      i1 = D->size[0];
      if (!((i >= 1) && (i <= i1))) {
        emlrtDynamicBoundsCheckR2012b(i, 1, i1, &q_emlrtBCI, sp);
      }

      i1 = D->size[1];
      i2 = j - 1;
      if (!((i2 >= 1) && (i2 <= i1))) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &r_emlrtBCI, sp);
      }

      varargin_1[2] = D->data[(i + D->size[0] * (i2 - 1)) - 1];
      ixstart = 1;
      mtmp = varargin_1[0];
      if (muDoubleScalarIsNaN(varargin_1[0])) {
        loop_ub = 2;
        exitg1 = false;
        while ((!exitg1) && (loop_ub < 4)) {
          ixstart = loop_ub;
          if (!muDoubleScalarIsNaN(varargin_1[loop_ub - 1])) {
            mtmp = varargin_1[loop_ub - 1];
            exitg1 = true;
          } else {
            loop_ub++;
          }
        }
      }

      if (ixstart < 3) {
        while (ixstart + 1 < 4) {
          if (varargin_1[ixstart] < mtmp) {
            mtmp = varargin_1[ixstart];
          }

          ixstart++;
        }
      }

      i1 = C->size[0];
      if (!((i >= 1) && (i <= i1))) {
        emlrtDynamicBoundsCheckR2012b(i, 1, i1, &s_emlrtBCI, sp);
      }

      i1 = C->size[1];
      if (!((j >= 1) && (j <= i1))) {
        emlrtDynamicBoundsCheckR2012b(j, 1, i1, &t_emlrtBCI, sp);
      }

      i1 = D->size[0];
      if (!((i >= 1) && (i <= i1))) {
        emlrtDynamicBoundsCheckR2012b(i, 1, i1, &u_emlrtBCI, sp);
      }

      i1 = D->size[1];
      if (!((j >= 1) && (j <= i1))) {
        emlrtDynamicBoundsCheckR2012b(j, 1, i1, &v_emlrtBCI, sp);
      }

      D->data[(i + D->size[0] * (j - 1)) - 1] = mtmp + C->data[(i + C->size[0] *
        (j - 1)) - 1];
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

  i1 = D->size[0];
  i2 = P->size[0];
  if (!((i2 >= 1) && (i2 <= i1))) {
    emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &k_emlrtBCI, sp);
  }

  i1 = D->size[1];
  loop_ub = Q->size[0];
  if (!((loop_ub >= 1) && (loop_ub <= i1))) {
    emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i1, &l_emlrtBCI, sp);
  }

  dist = D->data[(i2 + D->size[0] * (loop_ub - 1)) - 1];

  /* dist = D; */
  i1 = C->size[0] * C->size[1];
  C->size[0] = D->size[1];
  C->size[1] = D->size[0];
  emxEnsureCapacity_real_T(sp, C, i1, &b_emlrtRTEI);
  loop_ub = D->size[0];
  for (i1 = 0; i1 < loop_ub; i1++) {
    ixstart = D->size[1];
    for (i2 = 0; i2 < ixstart; i2++) {
      C->data[i2 + C->size[0] * i1] = D->data[i1 + D->size[0] * i2];
    }
  }

  emxFree_real_T(&D);
  emxInit_real_T(sp, &n_emlrtRSI, 2, &b_emlrtRTEI, true);
  st.site = &g_emlrtRSI;
  getPath(&st, C, n_emlrtRSI);
  emxFree_real_T(&n_emlrtRSI);
  emxFree_real_T(&C);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return dist;
}

void b_MFCCmatch(const emlrtStack *sp, const emxArray_real_T *P, const
                 emxArray_real_T *Q, real_T *dist, emxArray_real_T *path)
{
  emxArray_real_T *C;
  emxArray_real_T *D;
  int32_T x;
  int32_T y;
  int32_T i4;
  int32_T loop_ub;
  int32_T ixstart;
  int32_T i;
  int32_T j;
  int32_T i5;
  real_T b_dist;
  real_T varargin_1[3];
  boolean_T exitg1;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &C, 2, &c_emlrtRTEI, true);
  emxInit_real_T(sp, &D, 2, &d_emlrtRTEI, true);

  /* global C; */
  x = P->size[0] - 2;
  y = Q->size[0] - 2;

  /*      if (y>x) */
  /*          [ dist, path ] = match2(Q,P); */
  /*          for i=1:size(path,1) */
  /*              for j=1:size(path,2) */
  /*                  path{i,j} = fliplr(path{i,j}); */
  /*              end */
  /*          end */
  /*          dist = dist'; */
  /*          return */
  /*      end */
  st.site = &f_emlrtRSI;
  costs(&st, P, Q, C);
  i4 = D->size[0] * D->size[1];
  D->size[0] = P->size[0];
  D->size[1] = Q->size[0];
  emxEnsureCapacity_real_T(sp, D, i4, &b_emlrtRTEI);
  loop_ub = P->size[0] * Q->size[0];
  for (i4 = 0; i4 < loop_ub; i4++) {
    D->data[i4] = 0.0;
  }

  ixstart = P->size[0];
  if (!(1 <= ixstart)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, ixstart, &c_emlrtBCI, sp);
  }

  ixstart = Q->size[0];
  if (!(1 <= ixstart)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, ixstart, &d_emlrtBCI, sp);
  }

  i4 = C->size[0];
  if (!(1 <= i4)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i4, &emlrtBCI, sp);
  }

  i4 = C->size[1];
  if (!(1 <= i4)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i4, &b_emlrtBCI, sp);
  }

  D->data[0] = C->data[0];
  i = 2;
  while (i - 2 <= x) {
    i4 = D->size[1];
    if (!(1 <= i4)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i4, &g_emlrtBCI, sp);
    }

    i4 = D->size[1];
    if (!(1 <= i4)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i4, &e_emlrtBCI, sp);
    }

    i4 = C->size[1];
    if (!(1 <= i4)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i4, &f_emlrtBCI, sp);
    }

    i4 = D->size[0];
    i5 = i - 1;
    if (!((i5 >= 1) && (i5 <= i4))) {
      emlrtDynamicBoundsCheckR2012b(i5, 1, i4, &ab_emlrtBCI, sp);
    }

    i4 = C->size[0];
    if (!((i >= 1) && (i <= i4))) {
      emlrtDynamicBoundsCheckR2012b(i, 1, i4, &bb_emlrtBCI, sp);
    }

    i4 = D->size[0];
    if (!((i >= 1) && (i <= i4))) {
      emlrtDynamicBoundsCheckR2012b(i, 1, i4, &cb_emlrtBCI, sp);
    }

    D->data[i - 1] = D->data[i5 - 1] + C->data[i - 1];
    i++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  i = 2;
  while (i - 2 <= y) {
    i4 = D->size[0];
    if (!(1 <= i4)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i4, &j_emlrtBCI, sp);
    }

    i4 = D->size[0];
    if (!(1 <= i4)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i4, &h_emlrtBCI, sp);
    }

    i4 = C->size[0];
    if (!(1 <= i4)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i4, &i_emlrtBCI, sp);
    }

    i4 = D->size[1];
    i5 = i - 1;
    if (!((i5 >= 1) && (i5 <= i4))) {
      emlrtDynamicBoundsCheckR2012b(i5, 1, i4, &w_emlrtBCI, sp);
    }

    i4 = C->size[1];
    if (!((i >= 1) && (i <= i4))) {
      emlrtDynamicBoundsCheckR2012b(i, 1, i4, &x_emlrtBCI, sp);
    }

    i4 = D->size[1];
    if (!((i >= 1) && (i <= i4))) {
      emlrtDynamicBoundsCheckR2012b(i, 1, i4, &y_emlrtBCI, sp);
    }

    D->data[D->size[0] * (i - 1)] = D->data[D->size[0] * (i5 - 1)] + C->data
      [C->size[0] * (i - 1)];
    i++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  i = 2;
  while (i - 2 <= x) {
    j = 2;
    while (j - 2 <= y) {
      i4 = D->size[0];
      i5 = i - 1;
      if (!((i5 >= 1) && (i5 <= i4))) {
        emlrtDynamicBoundsCheckR2012b(i5, 1, i4, &m_emlrtBCI, sp);
      }

      i4 = D->size[1];
      loop_ub = j - 1;
      if (!((loop_ub >= 1) && (loop_ub <= i4))) {
        emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i4, &n_emlrtBCI, sp);
      }

      varargin_1[0] = D->data[(i5 + D->size[0] * (loop_ub - 1)) - 1];
      i4 = D->size[0];
      i5 = i - 1;
      if (!((i5 >= 1) && (i5 <= i4))) {
        emlrtDynamicBoundsCheckR2012b(i5, 1, i4, &o_emlrtBCI, sp);
      }

      i4 = D->size[1];
      if (!((j >= 1) && (j <= i4))) {
        emlrtDynamicBoundsCheckR2012b(j, 1, i4, &p_emlrtBCI, sp);
      }

      varargin_1[1] = D->data[(i5 + D->size[0] * (j - 1)) - 1];
      i4 = D->size[0];
      if (!((i >= 1) && (i <= i4))) {
        emlrtDynamicBoundsCheckR2012b(i, 1, i4, &q_emlrtBCI, sp);
      }

      i4 = D->size[1];
      i5 = j - 1;
      if (!((i5 >= 1) && (i5 <= i4))) {
        emlrtDynamicBoundsCheckR2012b(i5, 1, i4, &r_emlrtBCI, sp);
      }

      varargin_1[2] = D->data[(i + D->size[0] * (i5 - 1)) - 1];
      ixstart = 1;
      b_dist = varargin_1[0];
      if (muDoubleScalarIsNaN(varargin_1[0])) {
        loop_ub = 2;
        exitg1 = false;
        while ((!exitg1) && (loop_ub < 4)) {
          ixstart = loop_ub;
          if (!muDoubleScalarIsNaN(varargin_1[loop_ub - 1])) {
            b_dist = varargin_1[loop_ub - 1];
            exitg1 = true;
          } else {
            loop_ub++;
          }
        }
      }

      if (ixstart < 3) {
        while (ixstart + 1 < 4) {
          if (varargin_1[ixstart] < b_dist) {
            b_dist = varargin_1[ixstart];
          }

          ixstart++;
        }
      }

      i4 = C->size[0];
      if (!((i >= 1) && (i <= i4))) {
        emlrtDynamicBoundsCheckR2012b(i, 1, i4, &s_emlrtBCI, sp);
      }

      i4 = C->size[1];
      if (!((j >= 1) && (j <= i4))) {
        emlrtDynamicBoundsCheckR2012b(j, 1, i4, &t_emlrtBCI, sp);
      }

      i4 = D->size[0];
      if (!((i >= 1) && (i <= i4))) {
        emlrtDynamicBoundsCheckR2012b(i, 1, i4, &u_emlrtBCI, sp);
      }

      i4 = D->size[1];
      if (!((j >= 1) && (j <= i4))) {
        emlrtDynamicBoundsCheckR2012b(j, 1, i4, &v_emlrtBCI, sp);
      }

      D->data[(i + D->size[0] * (j - 1)) - 1] = b_dist + C->data[(i + C->size[0]
        * (j - 1)) - 1];
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

  i4 = D->size[0];
  i5 = P->size[0];
  if (!((i5 >= 1) && (i5 <= i4))) {
    emlrtDynamicBoundsCheckR2012b(i5, 1, i4, &k_emlrtBCI, sp);
  }

  i4 = D->size[1];
  loop_ub = Q->size[0];
  if (!((loop_ub >= 1) && (loop_ub <= i4))) {
    emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i4, &l_emlrtBCI, sp);
  }

  b_dist = D->data[(i5 + D->size[0] * (loop_ub - 1)) - 1];

  /* dist = D; */
  i4 = C->size[0] * C->size[1];
  C->size[0] = D->size[1];
  C->size[1] = D->size[0];
  emxEnsureCapacity_real_T(sp, C, i4, &b_emlrtRTEI);
  loop_ub = D->size[0];
  for (i4 = 0; i4 < loop_ub; i4++) {
    ixstart = D->size[1];
    for (i5 = 0; i5 < ixstart; i5++) {
      C->data[i5 + C->size[0] * i4] = D->data[i4 + D->size[0] * i5];
    }
  }

  emxFree_real_T(&D);
  st.site = &g_emlrtRSI;
  getPath(&st, C, path);
  *dist = b_dist;
  emxFree_real_T(&C);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (MFCCmatch.c) */
