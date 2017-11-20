/*
 * getPath.c
 *
 * Code generation for function 'getPath'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "getPath.h"
#include "getPath_emxutil.h"
#include "getPath_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 22,    /* lineNo */
  "getPath",                           /* fcnName */
  "D:\\git\\vcr\\matlab\\lib\\getPath.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 20,  /* lineNo */
  "getPath",                           /* fcnName */
  "D:\\git\\vcr\\matlab\\lib\\getPath.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 18,  /* lineNo */
  "getPath",                           /* fcnName */
  "D:\\git\\vcr\\matlab\\lib\\getPath.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 25,  /* lineNo */
  "cat",                               /* fcnName */
  "D:\\matlab2017b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 100, /* lineNo */
  "cat",                               /* fcnName */
  "D:\\matlab2017b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pathName */
};

static emlrtMCInfo emlrtMCI = { 24,    /* lineNo */
  17,                                  /* colNo */
  "getPath",                           /* fName */
  "D:\\git\\vcr\\matlab\\lib\\getPath.m"/* pName */
};

static emlrtRTEInfo emlrtRTEI = { 1,   /* lineNo */
  14,                                  /* colNo */
  "getPath",                           /* fName */
  "D:\\git\\vcr\\matlab\\lib\\getPath.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  47,                                  /* colNo */
  "D",                                 /* aName */
  "getPath",                           /* fName */
  "D:\\git\\vcr\\matlab\\lib\\getPath.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  45,                                  /* colNo */
  "D",                                 /* aName */
  "getPath",                           /* fName */
  "D:\\git\\vcr\\matlab\\lib\\getPath.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  41,                                  /* colNo */
  "D",                                 /* aName */
  "getPath",                           /* fName */
  "D:\\git\\vcr\\matlab\\lib\\getPath.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  39,                                  /* colNo */
  "D",                                 /* aName */
  "getPath",                           /* fName */
  "D:\\git\\vcr\\matlab\\lib\\getPath.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  45,                                  /* colNo */
  "D",                                 /* aName */
  "getPath",                           /* fName */
  "D:\\git\\vcr\\matlab\\lib\\getPath.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  43,                                  /* colNo */
  "D",                                 /* aName */
  "getPath",                           /* fName */
  "D:\\git\\vcr\\matlab\\lib\\getPath.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  41,                                  /* colNo */
  "D",                                 /* aName */
  "getPath",                           /* fName */
  "D:\\git\\vcr\\matlab\\lib\\getPath.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  39,                                  /* colNo */
  "D",                                 /* aName */
  "getPath",                           /* fName */
  "D:\\git\\vcr\\matlab\\lib\\getPath.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  47,                                  /* colNo */
  "D",                                 /* aName */
  "getPath",                           /* fName */
  "D:\\git\\vcr\\matlab\\lib\\getPath.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  45,                                  /* colNo */
  "D",                                 /* aName */
  "getPath",                           /* fName */
  "D:\\git\\vcr\\matlab\\lib\\getPath.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  41,                                  /* colNo */
  "D",                                 /* aName */
  "getPath",                           /* fName */
  "D:\\git\\vcr\\matlab\\lib\\getPath.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  39,                                  /* colNo */
  "D",                                 /* aName */
  "getPath",                           /* fName */
  "D:\\git\\vcr\\matlab\\lib\\getPath.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo c_emlrtRTEI = { 281,/* lineNo */
  27,                                  /* colNo */
  "cat",                               /* fName */
  "D:\\matlab2017b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  12,                                  /* lineNo */
  28,                                  /* colNo */
  "D",                                 /* aName */
  "getPath",                           /* fName */
  "D:\\git\\vcr\\matlab\\lib\\getPath.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  12,                                  /* lineNo */
  32,                                  /* colNo */
  "D",                                 /* aName */
  "getPath",                           /* fName */
  "D:\\git\\vcr\\matlab\\lib\\getPath.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  12,                                  /* lineNo */
  40,                                  /* colNo */
  "D",                                 /* aName */
  "getPath",                           /* fName */
  "D:\\git\\vcr\\matlab\\lib\\getPath.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  12,                                  /* lineNo */
  42,                                  /* colNo */
  "D",                                 /* aName */
  "getPath",                           /* fName */
  "D:\\git\\vcr\\matlab\\lib\\getPath.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  12,                                  /* lineNo */
  50,                                  /* colNo */
  "D",                                 /* aName */
  "getPath",                           /* fName */
  "D:\\git\\vcr\\matlab\\lib\\getPath.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  12,                                  /* lineNo */
  54,                                  /* colNo */
  "D",                                 /* aName */
  "getPath",                           /* fName */
  "D:\\git\\vcr\\matlab\\lib\\getPath.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRSInfo f_emlrtRSI = { 24,  /* lineNo */
  "getPath",                           /* fcnName */
  "D:\\git\\vcr\\matlab\\lib\\getPath.m"/* pathName */
};

/* Function Declarations */
static void disp(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);

/* Function Definitions */
static void disp(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "disp", true, location);
}

void getPath(const emlrtStack *sp, const emxArray_real_T *D, emxArray_real_T *p)
{
  int32_T ix;
  emxArray_real_T *varargin_1;
  emxArray_real_T *b_D;
  emxArray_real_T *c_D;
  emxArray_real_T *d_D;
  int32_T i0;
  real_T dv0[4];
  int32_T ixstart;
  real_T b_varargin_1[3];
  real_T mtmp;
  int32_T itmp;
  boolean_T exitg1;
  const mxArray *y;
  const mxArray *m0;
  static const int32_T iv0[2] = { 1, 5 };

  static const char_T u[5] = { 'e', 'r', 'r', 'o', 'r' };

  boolean_T b0;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (*emlrtBreakCheckR2012bFlagVar != 0) {
    emlrtBreakCheckR2012b(sp);
  }

  ix = p->size[0] * p->size[1];
  p->size[0] = 1;
  p->size[1] = 1;
  emxEnsureCapacity_real_T(sp, p, ix, &emlrtRTEI);
  p->data[0] = 0.0;
  emxInit_real_T(sp, &varargin_1, 2, &emlrtRTEI, true);
  emxInit_real_T(sp, &b_D, 2, &emlrtRTEI, true);
  emxInit_real_T(sp, &c_D, 2, &emlrtRTEI, true);
  emxInit_real_T(sp, &d_D, 2, &emlrtRTEI, true);
  if ((D->size[1] == 1) && (D->size[0] == 1)) {
    ix = p->size[0] * p->size[1];
    p->size[0] = 1;
    p->size[1] = 2;
    emxEnsureCapacity_real_T(sp, p, ix, &emlrtRTEI);
    for (ix = 0; ix < 2; ix++) {
      p->data[ix] = 1.0;
    }
  } else if (D->size[1] == 1) {
    for (ix = 0; ix < 2; ix++) {
      dv0[ix << 1] = 1.0;
    }

    dv0[1] = 1.0;
    dv0[3] = (real_T)D->size[0] - 1.0;
    ix = p->size[0] * p->size[1];
    p->size[0] = 2;
    p->size[1] = 2;
    emxEnsureCapacity_real_T(sp, p, ix, &emlrtRTEI);
    for (ix = 0; ix < 2; ix++) {
      for (i0 = 0; i0 < 2; i0++) {
        p->data[i0 + p->size[0] * ix] = dv0[i0 + (ix << 1)];
      }
    }
  } else if (D->size[0] == 1) {
    for (ix = 0; ix < 2; ix++) {
      dv0[ix << 1] = 1.0;
    }

    dv0[1] = (real_T)D->size[1] - 1.0;
    dv0[3] = 1.0;
    ix = p->size[0] * p->size[1];
    p->size[0] = 2;
    p->size[1] = 2;
    emxEnsureCapacity_real_T(sp, p, ix, &emlrtRTEI);
    for (ix = 0; ix < 2; ix++) {
      for (i0 = 0; i0 < 2; i0++) {
        p->data[i0 + p->size[0] * ix] = dv0[i0 + (ix << 1)];
      }
    }
  } else {
    ix = D->size[0];
    i0 = D->size[0] - 1;
    if (!((i0 >= 1) && (i0 <= ix))) {
      emlrtDynamicBoundsCheckR2012b(i0, 1, ix, &m_emlrtBCI, sp);
    }

    ix = D->size[1];
    ixstart = D->size[1] - 1;
    if (!((ixstart >= 1) && (ixstart <= ix))) {
      emlrtDynamicBoundsCheckR2012b(ixstart, 1, ix, &n_emlrtBCI, sp);
    }

    b_varargin_1[0] = D->data[(i0 + D->size[0] * (ixstart - 1)) - 1];
    ix = D->size[0];
    i0 = D->size[0];
    if (!((i0 >= 1) && (i0 <= ix))) {
      emlrtDynamicBoundsCheckR2012b(i0, 1, ix, &o_emlrtBCI, sp);
    }

    ix = D->size[1];
    ixstart = D->size[1] - 1;
    if (!((ixstart >= 1) && (ixstart <= ix))) {
      emlrtDynamicBoundsCheckR2012b(ixstart, 1, ix, &p_emlrtBCI, sp);
    }

    b_varargin_1[1] = D->data[(i0 + D->size[0] * (ixstart - 1)) - 1];
    ix = D->size[0];
    i0 = D->size[0] - 1;
    if (!((i0 >= 1) && (i0 <= ix))) {
      emlrtDynamicBoundsCheckR2012b(i0, 1, ix, &q_emlrtBCI, sp);
    }

    ix = D->size[1];
    ixstart = D->size[1];
    if (!((ixstart >= 1) && (ixstart <= ix))) {
      emlrtDynamicBoundsCheckR2012b(ixstart, 1, ix, &r_emlrtBCI, sp);
    }

    b_varargin_1[2] = D->data[(i0 + D->size[0] * (ixstart - 1)) - 1];
    ixstart = 1;
    mtmp = b_varargin_1[0];
    itmp = 1;
    if (muDoubleScalarIsNaN(b_varargin_1[0])) {
      ix = 2;
      exitg1 = false;
      while ((!exitg1) && (ix < 4)) {
        ixstart = ix;
        if (!muDoubleScalarIsNaN(b_varargin_1[ix - 1])) {
          mtmp = b_varargin_1[ix - 1];
          itmp = ix;
          exitg1 = true;
        } else {
          ix++;
        }
      }
    }

    if (ixstart < 3) {
      while (ixstart + 1 < 4) {
        if (b_varargin_1[ixstart] < mtmp) {
          mtmp = b_varargin_1[ixstart];
          itmp = ixstart + 1;
        }

        ixstart++;
      }
    }

    switch (itmp) {
     case 1:
      if (1 > D->size[0] - 1) {
        ixstart = 0;
      } else {
        ix = D->size[0];
        if (!(1 <= ix)) {
          emlrtDynamicBoundsCheckR2012b(1, 1, ix, &l_emlrtBCI, sp);
        }

        ix = D->size[0];
        ixstart = D->size[0] - 1;
        if (!((ixstart >= 1) && (ixstart <= ix))) {
          emlrtDynamicBoundsCheckR2012b(ixstart, 1, ix, &k_emlrtBCI, sp);
        }
      }

      if (1 > D->size[1] - 1) {
        itmp = 0;
      } else {
        ix = D->size[1];
        if (!(1 <= ix)) {
          emlrtDynamicBoundsCheckR2012b(1, 1, ix, &j_emlrtBCI, sp);
        }

        ix = D->size[1];
        itmp = D->size[1] - 1;
        if (!((itmp >= 1) && (itmp <= ix))) {
          emlrtDynamicBoundsCheckR2012b(itmp, 1, ix, &i_emlrtBCI, sp);
        }
      }

      ix = b_D->size[0] * b_D->size[1];
      b_D->size[0] = ixstart;
      b_D->size[1] = itmp;
      emxEnsureCapacity_real_T(sp, b_D, ix, &emlrtRTEI);
      for (ix = 0; ix < itmp; ix++) {
        for (i0 = 0; i0 < ixstart; i0++) {
          b_D->data[i0 + b_D->size[0] * ix] = D->data[i0 + D->size[0] * ix];
        }
      }

      st.site = &c_emlrtRSI;
      getPath(&st, b_D, varargin_1);
      st.site = &c_emlrtRSI;
      b_st.site = &d_emlrtRSI;
      c_st.site = &e_emlrtRSI;
      b0 = (varargin_1->size[1] == 2);
      if (!b0) {
        emlrtErrorWithMessageIdR2012b(&c_st, &c_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      ixstart = varargin_1->size[0];
      ix = p->size[0] * p->size[1];
      p->size[0] = ixstart + 1;
      p->size[1] = 2;
      emxEnsureCapacity_real_T(sp, p, ix, &emlrtRTEI);
      for (ix = 0; ix < 2; ix++) {
        for (i0 = 0; i0 < ixstart; i0++) {
          p->data[i0 + p->size[0] * ix] = varargin_1->data[i0 + ixstart * ix];
        }
      }

      p->data[ixstart] = (uint32_T)D->size[1];
      p->data[ixstart + p->size[0]] = (uint32_T)D->size[0];
      break;

     case 2:
      ix = D->size[0];
      if (!(1 <= ix)) {
        emlrtDynamicBoundsCheckR2012b(1, 1, ix, &h_emlrtBCI, sp);
      }

      ix = D->size[0];
      i0 = D->size[0];
      if (!((i0 >= 1) && (i0 <= ix))) {
        emlrtDynamicBoundsCheckR2012b(i0, 1, ix, &g_emlrtBCI, sp);
      }

      if (1 > D->size[1] - 1) {
        ixstart = 0;
      } else {
        ix = D->size[1];
        if (!(1 <= ix)) {
          emlrtDynamicBoundsCheckR2012b(1, 1, ix, &f_emlrtBCI, sp);
        }

        ix = D->size[1];
        ixstart = D->size[1] - 1;
        if (!((ixstart >= 1) && (ixstart <= ix))) {
          emlrtDynamicBoundsCheckR2012b(ixstart, 1, ix, &e_emlrtBCI, sp);
        }
      }

      itmp = D->size[0];
      ix = c_D->size[0] * c_D->size[1];
      c_D->size[0] = itmp;
      c_D->size[1] = ixstart;
      emxEnsureCapacity_real_T(sp, c_D, ix, &emlrtRTEI);
      for (ix = 0; ix < ixstart; ix++) {
        for (i0 = 0; i0 < itmp; i0++) {
          c_D->data[i0 + c_D->size[0] * ix] = D->data[i0 + D->size[0] * ix];
        }
      }

      st.site = &b_emlrtRSI;
      getPath(&st, c_D, varargin_1);
      st.site = &b_emlrtRSI;
      b_st.site = &d_emlrtRSI;
      c_st.site = &e_emlrtRSI;
      b0 = (varargin_1->size[1] == 2);
      if (!b0) {
        emlrtErrorWithMessageIdR2012b(&c_st, &c_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      ixstart = varargin_1->size[0];
      ix = p->size[0] * p->size[1];
      p->size[0] = ixstart + 1;
      p->size[1] = 2;
      emxEnsureCapacity_real_T(sp, p, ix, &emlrtRTEI);
      for (ix = 0; ix < 2; ix++) {
        for (i0 = 0; i0 < ixstart; i0++) {
          p->data[i0 + p->size[0] * ix] = varargin_1->data[i0 + ixstart * ix];
        }
      }

      p->data[ixstart] = (uint32_T)D->size[1];
      p->data[ixstart + p->size[0]] = (uint32_T)D->size[0];
      break;

     case 3:
      if (1 > D->size[0] - 1) {
        ixstart = 0;
      } else {
        ix = D->size[0];
        if (!(1 <= ix)) {
          emlrtDynamicBoundsCheckR2012b(1, 1, ix, &d_emlrtBCI, sp);
        }

        ix = D->size[0];
        ixstart = D->size[0] - 1;
        if (!((ixstart >= 1) && (ixstart <= ix))) {
          emlrtDynamicBoundsCheckR2012b(ixstart, 1, ix, &c_emlrtBCI, sp);
        }
      }

      ix = D->size[1];
      if (!(1 <= ix)) {
        emlrtDynamicBoundsCheckR2012b(1, 1, ix, &b_emlrtBCI, sp);
      }

      ix = D->size[1];
      i0 = D->size[1];
      if (!((i0 >= 1) && (i0 <= ix))) {
        emlrtDynamicBoundsCheckR2012b(i0, 1, ix, &emlrtBCI, sp);
      }

      itmp = D->size[1];
      ix = d_D->size[0] * d_D->size[1];
      d_D->size[0] = ixstart;
      d_D->size[1] = itmp;
      emxEnsureCapacity_real_T(sp, d_D, ix, &emlrtRTEI);
      for (ix = 0; ix < itmp; ix++) {
        for (i0 = 0; i0 < ixstart; i0++) {
          d_D->data[i0 + d_D->size[0] * ix] = D->data[i0 + D->size[0] * ix];
        }
      }

      st.site = &emlrtRSI;
      getPath(&st, d_D, varargin_1);
      st.site = &emlrtRSI;
      b_st.site = &d_emlrtRSI;
      c_st.site = &e_emlrtRSI;
      b0 = (varargin_1->size[1] == 2);
      if (!b0) {
        emlrtErrorWithMessageIdR2012b(&c_st, &c_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      ixstart = varargin_1->size[0];
      ix = p->size[0] * p->size[1];
      p->size[0] = ixstart + 1;
      p->size[1] = 2;
      emxEnsureCapacity_real_T(sp, p, ix, &emlrtRTEI);
      for (ix = 0; ix < 2; ix++) {
        for (i0 = 0; i0 < ixstart; i0++) {
          p->data[i0 + p->size[0] * ix] = varargin_1->data[i0 + ixstart * ix];
        }
      }

      p->data[ixstart] = (uint32_T)D->size[1];
      p->data[ixstart + p->size[0]] = (uint32_T)D->size[0];
      break;

     default:
      y = NULL;
      m0 = emlrtCreateCharArray(2, iv0);
      emlrtInitCharArrayR2013a(sp, 5, m0, &u[0]);
      emlrtAssign(&y, m0);
      st.site = &f_emlrtRSI;
      disp(&st, y, &emlrtMCI);
      break;
    }
  }

  emxFree_real_T(&d_D);
  emxFree_real_T(&c_D);
  emxFree_real_T(&b_D);
  emxFree_real_T(&varargin_1);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (getPath.c) */
