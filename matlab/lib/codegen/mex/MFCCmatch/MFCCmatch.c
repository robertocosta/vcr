/*
 * MFCCmatch.c
 *
 * Code generation for function 'MFCCmatch'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "MFCCmatch.h"
#include "MFCCmatch_emxutil.h"
#include "getPath.h"
#include "MFCCmatch_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 17,    /* lineNo */
  "MFCCmatch",                         /* fcnName */
  "D:\\git\\vcr\\matlab\\lib\\MFCCmatch.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 33,  /* lineNo */
  "MFCCmatch",                         /* fcnName */
  "D:\\git\\vcr\\matlab\\lib\\MFCCmatch.m"/* pathName */
};

static emlrtRTEInfo emlrtRTEI = { 17,  /* lineNo */
  9,                                   /* colNo */
  "MFCCmatch",                         /* fName */
  "D:\\git\\vcr\\matlab\\lib\\MFCCmatch.m"/* pName */
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
  8,                                   /* lineNo */
  27,                                  /* colNo */
  "P",                                 /* aName */
  "costs",                             /* fName */
  "D:\\git\\vcr\\matlab\\lib\\costs.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  8,                                   /* lineNo */
  34,                                  /* colNo */
  "Q",                                 /* aName */
  "costs",                             /* fName */
  "D:\\git\\vcr\\matlab\\lib\\costs.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  14,                                  /* colNo */
  "D",                                 /* aName */
  "MFCCmatch",                         /* fName */
  "D:\\git\\vcr\\matlab\\lib\\MFCCmatch.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  16,                                  /* colNo */
  "D",                                 /* aName */
  "MFCCmatch",                         /* fName */
  "D:\\git\\vcr\\matlab\\lib\\MFCCmatch.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  29,                                  /* colNo */
  "D",                                 /* aName */
  "MFCCmatch",                         /* fName */
  "D:\\git\\vcr\\matlab\\lib\\MFCCmatch.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  33,                                  /* colNo */
  "D",                                 /* aName */
  "MFCCmatch",                         /* fName */
  "D:\\git\\vcr\\matlab\\lib\\MFCCmatch.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  40,                                  /* colNo */
  "D",                                 /* aName */
  "MFCCmatch",                         /* fName */
  "D:\\git\\vcr\\matlab\\lib\\MFCCmatch.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  44,                                  /* colNo */
  "D",                                 /* aName */
  "MFCCmatch",                         /* fName */
  "D:\\git\\vcr\\matlab\\lib\\MFCCmatch.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  49,                                  /* colNo */
  "D",                                 /* aName */
  "MFCCmatch",                         /* fName */
  "D:\\git\\vcr\\matlab\\lib\\MFCCmatch.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  51,                                  /* colNo */
  "D",                                 /* aName */
  "MFCCmatch",                         /* fName */
  "D:\\git\\vcr\\matlab\\lib\\MFCCmatch.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  60,                                  /* colNo */
  "C",                                 /* aName */
  "MFCCmatch",                         /* fName */
  "D:\\git\\vcr\\matlab\\lib\\MFCCmatch.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  62,                                  /* colNo */
  "C",                                 /* aName */
  "MFCCmatch",                         /* fName */
  "D:\\git\\vcr\\matlab\\lib\\MFCCmatch.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  15,                                  /* colNo */
  "D",                                 /* aName */
  "MFCCmatch",                         /* fName */
  "D:\\git\\vcr\\matlab\\lib\\MFCCmatch.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  17,                                  /* colNo */
  "D",                                 /* aName */
  "MFCCmatch",                         /* fName */
  "D:\\git\\vcr\\matlab\\lib\\MFCCmatch.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  22,                                  /* colNo */
  "D",                                 /* aName */
  "MFCCmatch",                         /* fName */
  "D:\\git\\vcr\\matlab\\lib\\MFCCmatch.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  31,                                  /* colNo */
  "C",                                 /* aName */
  "MFCCmatch",                         /* fName */
  "D:\\git\\vcr\\matlab\\lib\\MFCCmatch.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  13,                                  /* colNo */
  "D",                                 /* aName */
  "MFCCmatch",                         /* fName */
  "D:\\git\\vcr\\matlab\\lib\\MFCCmatch.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  20,                                  /* colNo */
  "D",                                 /* aName */
  "MFCCmatch",                         /* fName */
  "D:\\git\\vcr\\matlab\\lib\\MFCCmatch.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  29,                                  /* colNo */
  "C",                                 /* aName */
  "MFCCmatch",                         /* fName */
  "D:\\git\\vcr\\matlab\\lib\\MFCCmatch.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  11,                                  /* colNo */
  "D",                                 /* aName */
  "MFCCmatch",                         /* fName */
  "D:\\git\\vcr\\matlab\\lib\\MFCCmatch.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  8,                                   /* lineNo */
  15,                                  /* colNo */
  "c",                                 /* aName */
  "costs",                             /* fName */
  "D:\\git\\vcr\\matlab\\lib\\costs.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  8,                                   /* lineNo */
  17,                                  /* colNo */
  "c",                                 /* aName */
  "costs",                             /* fName */
  "D:\\git\\vcr\\matlab\\lib\\costs.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void MFCCmatch(const emlrtStack *sp, const emxArray_real_T *P, const
               emxArray_real_T *Q, real_T *dist, emxArray_real_T *path)
{
  emxArray_real_T *C;
  int32_T x;
  int32_T y;
  int32_T i0;
  int32_T i;
  emxArray_real_T *D;
  int32_T j;
  int32_T loop_ub;
  int32_T ixstart;
  real_T mtmp;
  real_T b_x[12];
  real_T scale;
  real_T absxk;
  real_T t;
  int32_T i1;
  real_T varargin_1[3];
  boolean_T exitg1;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &C, 2, &c_emlrtRTEI, true);

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
  st.site = &emlrtRSI;
  i0 = C->size[0] * C->size[1];
  C->size[0] = P->size[0];
  C->size[1] = Q->size[0];
  emxEnsureCapacity_real_T(&st, C, i0, &emlrtRTEI);
  i = 1;
  while (i - 1 <= P->size[0] - 1) {
    j = 1;
    while (j - 1 <= Q->size[0] - 1) {
      i0 = P->size[0];
      if (!((i >= 1) && (i <= i0))) {
        emlrtDynamicBoundsCheckR2012b(i, 1, i0, &k_emlrtBCI, &st);
      }

      i0 = Q->size[0];
      if (!((j >= 1) && (j <= i0))) {
        emlrtDynamicBoundsCheckR2012b(j, 1, i0, &l_emlrtBCI, &st);
      }

      for (i0 = 0; i0 < 12; i0++) {
        b_x[i0] = P->data[(i + P->size[0] * i0) - 1] - Q->data[(j + Q->size[0] *
          i0) - 1];
      }

      mtmp = 0.0;
      scale = 3.3121686421112381E-170;
      for (ixstart = 0; ixstart < 12; ixstart++) {
        absxk = muDoubleScalarAbs(b_x[ixstart]);
        if (absxk > scale) {
          t = scale / absxk;
          mtmp = 1.0 + mtmp * t * t;
          scale = absxk;
        } else {
          t = absxk / scale;
          mtmp += t * t;
        }
      }

      mtmp = scale * muDoubleScalarSqrt(mtmp);
      i0 = C->size[0];
      if (!((i >= 1) && (i <= i0))) {
        emlrtDynamicBoundsCheckR2012b(i, 1, i0, &fb_emlrtBCI, &st);
      }

      i0 = C->size[1];
      if (!((j >= 1) && (j <= i0))) {
        emlrtDynamicBoundsCheckR2012b(j, 1, i0, &gb_emlrtBCI, &st);
      }

      C->data[(i + C->size[0] * (j - 1)) - 1] = mtmp;
      j++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }

    i++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  emxInit_real_T(&st, &D, 2, &d_emlrtRTEI, true);
  i0 = D->size[0] * D->size[1];
  D->size[0] = P->size[0];
  D->size[1] = Q->size[0];
  emxEnsureCapacity_real_T(sp, D, i0, &b_emlrtRTEI);
  loop_ub = P->size[0] * Q->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    D->data[i0] = 0.0;
  }

  ixstart = P->size[0];
  if (!(1 <= ixstart)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, ixstart, &c_emlrtBCI, sp);
  }

  ixstart = Q->size[0];
  if (!(1 <= ixstart)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, ixstart, &d_emlrtBCI, sp);
  }

  i0 = C->size[0];
  if (!(1 <= i0)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i0, &emlrtBCI, sp);
  }

  i0 = C->size[1];
  if (!(1 <= i0)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i0, &b_emlrtBCI, sp);
  }

  D->data[0] = C->data[0];
  i = 2;
  while (i - 2 <= x) {
    i0 = D->size[1];
    if (!(1 <= i0)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i0, &g_emlrtBCI, sp);
    }

    i0 = D->size[1];
    if (!(1 <= i0)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i0, &e_emlrtBCI, sp);
    }

    i0 = C->size[1];
    if (!(1 <= i0)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i0, &f_emlrtBCI, sp);
    }

    i0 = D->size[0];
    i1 = i - 1;
    if (!((i1 >= 1) && (i1 <= i0))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &cb_emlrtBCI, sp);
    }

    i0 = C->size[0];
    if (!((i >= 1) && (i <= i0))) {
      emlrtDynamicBoundsCheckR2012b(i, 1, i0, &db_emlrtBCI, sp);
    }

    i0 = D->size[0];
    if (!((i >= 1) && (i <= i0))) {
      emlrtDynamicBoundsCheckR2012b(i, 1, i0, &eb_emlrtBCI, sp);
    }

    D->data[i - 1] = D->data[i1 - 1] + C->data[i - 1];
    i++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  i = 2;
  while (i - 2 <= y) {
    i0 = D->size[0];
    if (!(1 <= i0)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i0, &j_emlrtBCI, sp);
    }

    i0 = D->size[0];
    if (!(1 <= i0)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i0, &h_emlrtBCI, sp);
    }

    i0 = C->size[0];
    if (!(1 <= i0)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i0, &i_emlrtBCI, sp);
    }

    i0 = D->size[1];
    i1 = i - 1;
    if (!((i1 >= 1) && (i1 <= i0))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &y_emlrtBCI, sp);
    }

    i0 = C->size[1];
    if (!((i >= 1) && (i <= i0))) {
      emlrtDynamicBoundsCheckR2012b(i, 1, i0, &ab_emlrtBCI, sp);
    }

    i0 = D->size[1];
    if (!((i >= 1) && (i <= i0))) {
      emlrtDynamicBoundsCheckR2012b(i, 1, i0, &bb_emlrtBCI, sp);
    }

    D->data[D->size[0] * (i - 1)] = D->data[D->size[0] * (i1 - 1)] + C->data
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
      i0 = D->size[0];
      i1 = i - 1;
      if (!((i1 >= 1) && (i1 <= i0))) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &o_emlrtBCI, sp);
      }

      i0 = D->size[1];
      loop_ub = j - 1;
      if (!((loop_ub >= 1) && (loop_ub <= i0))) {
        emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i0, &p_emlrtBCI, sp);
      }

      varargin_1[0] = D->data[(i1 + D->size[0] * (loop_ub - 1)) - 1];
      i0 = D->size[0];
      i1 = i - 1;
      if (!((i1 >= 1) && (i1 <= i0))) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &q_emlrtBCI, sp);
      }

      i0 = D->size[1];
      if (!((j >= 1) && (j <= i0))) {
        emlrtDynamicBoundsCheckR2012b(j, 1, i0, &r_emlrtBCI, sp);
      }

      varargin_1[1] = D->data[(i1 + D->size[0] * (j - 1)) - 1];
      i0 = D->size[0];
      if (!((i >= 1) && (i <= i0))) {
        emlrtDynamicBoundsCheckR2012b(i, 1, i0, &s_emlrtBCI, sp);
      }

      i0 = D->size[1];
      i1 = j - 1;
      if (!((i1 >= 1) && (i1 <= i0))) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &t_emlrtBCI, sp);
      }

      varargin_1[2] = D->data[(i + D->size[0] * (i1 - 1)) - 1];
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

      i0 = C->size[0];
      if (!((i >= 1) && (i <= i0))) {
        emlrtDynamicBoundsCheckR2012b(i, 1, i0, &u_emlrtBCI, sp);
      }

      i0 = C->size[1];
      if (!((j >= 1) && (j <= i0))) {
        emlrtDynamicBoundsCheckR2012b(j, 1, i0, &v_emlrtBCI, sp);
      }

      i0 = D->size[0];
      if (!((i >= 1) && (i <= i0))) {
        emlrtDynamicBoundsCheckR2012b(i, 1, i0, &w_emlrtBCI, sp);
      }

      i0 = D->size[1];
      if (!((j >= 1) && (j <= i0))) {
        emlrtDynamicBoundsCheckR2012b(j, 1, i0, &x_emlrtBCI, sp);
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

  i0 = D->size[0];
  i1 = P->size[0];
  if (!((i1 >= 1) && (i1 <= i0))) {
    emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &m_emlrtBCI, sp);
  }

  i0 = D->size[1];
  loop_ub = Q->size[0];
  if (!((loop_ub >= 1) && (loop_ub <= i0))) {
    emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i0, &n_emlrtBCI, sp);
  }

  *dist = D->data[(i1 + D->size[0] * (loop_ub - 1)) - 1];

  /* dist = D; */
  i0 = C->size[0] * C->size[1];
  C->size[0] = D->size[1];
  C->size[1] = D->size[0];
  emxEnsureCapacity_real_T(sp, C, i0, &b_emlrtRTEI);
  loop_ub = D->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    ixstart = D->size[1];
    for (i1 = 0; i1 < ixstart; i1++) {
      C->data[i1 + C->size[0] * i0] = D->data[i0 + D->size[0] * i1];
    }
  }

  emxFree_real_T(&D);
  st.site = &b_emlrtRSI;
  getPath(&st, C, path);
  emxFree_real_T(&C);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (MFCCmatch.c) */
