/*
 * _coder_predict2_api.c
 *
 * Code generation for function '_coder_predict2_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "predict2.h"
#include "_coder_predict2_api.h"
#include "predict2_emxutil.h"
#include "predict2_data.h"

/* Variable Definitions */
static emlrtRTEInfo h_emlrtRTEI = { 1, /* lineNo */
  1,                                   /* colNo */
  "_coder_predict2_api",               /* fName */
  ""                                   /* pName */
};

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *mfccTab,
  const char_T *identifier, cell_0 *y);
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, cell_0 *y);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *mfcc1, const
  char_T *identifier, emxArray_real_T *y);
static const mxArray *emlrt_marshallOut(const real_T u);
static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static real_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  g_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *mfccTab,
  const char_T *identifier, cell_0 *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  d_emlrt_marshallIn(sp, emlrtAlias(mfccTab), &thisId, y);
  emlrtDestroyArray(&mfccTab);
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, cell_0 *y)
{
  emlrtMsgIdentifier thisId;
  int32_T i;
  int32_T iv1[2];
  boolean_T bv0[2];
  thisId.fParent = parentId;
  thisId.bParentIsCell = true;
  for (i = 0; i < 2; i++) {
    iv1[i] = 10 + -4 * i;
    bv0[i] = false;
  }

  emlrtCheckCell(sp, parentId, u, 2U, iv1, bv0);
  thisId.fIdentifier = "1";
  e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 0)), &thisId,
                     y->f1);
  thisId.fIdentifier = "2";
  e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 1)), &thisId,
                     y->f2);
  thisId.fIdentifier = "3";
  e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 2)), &thisId,
                     y->f3);
  thisId.fIdentifier = "4";
  e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 3)), &thisId,
                     y->f4);
  thisId.fIdentifier = "5";
  e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 4)), &thisId,
                     y->f5);
  thisId.fIdentifier = "6";
  e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 5)), &thisId,
                     y->f6);
  thisId.fIdentifier = "7";
  e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 6)), &thisId,
                     y->f7);
  thisId.fIdentifier = "8";
  e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 7)), &thisId,
                     y->f8);
  thisId.fIdentifier = "9";
  e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 8)), &thisId,
                     y->f9);
  thisId.fIdentifier = "10";
  e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 9)), &thisId,
                     y->f10);
  thisId.fIdentifier = "11";
  y->f11 = f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 10)),
    &thisId);
  thisId.fIdentifier = "12";
  y->f12 = f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 11)),
    &thisId);
  thisId.fIdentifier = "13";
  y->f13 = f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 12)),
    &thisId);
  thisId.fIdentifier = "14";
  y->f14 = f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 13)),
    &thisId);
  thisId.fIdentifier = "15";
  y->f15 = f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 14)),
    &thisId);
  thisId.fIdentifier = "16";
  y->f16 = f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 15)),
    &thisId);
  thisId.fIdentifier = "17";
  y->f17 = f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 16)),
    &thisId);
  thisId.fIdentifier = "18";
  y->f18 = f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 17)),
    &thisId);
  thisId.fIdentifier = "19";
  y->f19 = f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 18)),
    &thisId);
  thisId.fIdentifier = "20";
  y->f20 = f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 19)),
    &thisId);
  thisId.fIdentifier = "21";
  y->f21 = f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 20)),
    &thisId);
  thisId.fIdentifier = "22";
  y->f22 = f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 21)),
    &thisId);
  thisId.fIdentifier = "23";
  y->f23 = f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 22)),
    &thisId);
  thisId.fIdentifier = "24";
  y->f24 = f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 23)),
    &thisId);
  thisId.fIdentifier = "25";
  y->f25 = f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 24)),
    &thisId);
  thisId.fIdentifier = "26";
  y->f26 = f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 25)),
    &thisId);
  thisId.fIdentifier = "27";
  y->f27 = f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 26)),
    &thisId);
  thisId.fIdentifier = "28";
  y->f28 = f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 27)),
    &thisId);
  thisId.fIdentifier = "29";
  y->f29 = f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 28)),
    &thisId);
  thisId.fIdentifier = "30";
  y->f30 = f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 29)),
    &thisId);
  thisId.fIdentifier = "31";
  e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 30)), &thisId,
                     y->f31);
  thisId.fIdentifier = "32";
  e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 31)), &thisId,
                     y->f32);
  thisId.fIdentifier = "33";
  e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 32)), &thisId,
                     y->f33);
  thisId.fIdentifier = "34";
  e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 33)), &thisId,
                     y->f34);
  thisId.fIdentifier = "35";
  e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 34)), &thisId,
                     y->f35);
  thisId.fIdentifier = "36";
  e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 35)), &thisId,
                     y->f36);
  thisId.fIdentifier = "37";
  e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 36)), &thisId,
                     y->f37);
  thisId.fIdentifier = "38";
  e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 37)), &thisId,
                     y->f38);
  thisId.fIdentifier = "39";
  e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 38)), &thisId,
                     y->f39);
  thisId.fIdentifier = "40";
  e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 39)), &thisId,
                     y->f40);
  thisId.fIdentifier = "41";
  y->f41 = f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 40)),
    &thisId);
  thisId.fIdentifier = "42";
  y->f42 = f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 41)),
    &thisId);
  thisId.fIdentifier = "43";
  y->f43 = f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 42)),
    &thisId);
  thisId.fIdentifier = "44";
  y->f44 = f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 43)),
    &thisId);
  thisId.fIdentifier = "45";
  y->f45 = f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 44)),
    &thisId);
  thisId.fIdentifier = "46";
  y->f46 = f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 45)),
    &thisId);
  thisId.fIdentifier = "47";
  y->f47 = f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 46)),
    &thisId);
  thisId.fIdentifier = "48";
  y->f48 = f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 47)),
    &thisId);
  thisId.fIdentifier = "49";
  y->f49 = f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 48)),
    &thisId);
  thisId.fIdentifier = "50";
  y->f50 = f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 49)),
    &thisId);
  thisId.fIdentifier = "51";
  y->f51 = f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 50)),
    &thisId);
  thisId.fIdentifier = "52";
  y->f52 = f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 51)),
    &thisId);
  thisId.fIdentifier = "53";
  y->f53 = f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 52)),
    &thisId);
  thisId.fIdentifier = "54";
  y->f54 = f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 53)),
    &thisId);
  thisId.fIdentifier = "55";
  y->f55 = f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 54)),
    &thisId);
  thisId.fIdentifier = "56";
  y->f56 = f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 55)),
    &thisId);
  thisId.fIdentifier = "57";
  y->f57 = f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 56)),
    &thisId);
  thisId.fIdentifier = "58";
  y->f58 = f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 57)),
    &thisId);
  thisId.fIdentifier = "59";
  y->f59 = f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 58)),
    &thisId);
  thisId.fIdentifier = "60";
  y->f60 = f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, 59)),
    &thisId);
  emlrtDestroyArray(&u);
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  h_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *mfcc1, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(mfcc1), &thisId, y);
  emlrtDestroyArray(&mfcc1);
}

static const mxArray *emlrt_marshallOut(const real_T u)
{
  const mxArray *y;
  const mxArray *m1;
  y = NULL;
  m1 = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m1);
  return y;
}

static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = i_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[2] = { -1, 12 };

  const boolean_T bv1[2] = { true, false };

  int32_T iv2[2];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims, &bv1[0],
    iv2);
  ret->size[0] = iv2[0];
  ret->size[1] = iv2[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[2] = { -1, 12 };

  const boolean_T bv2[2] = { true, false };

  int32_T iv3[2];
  int32_T i6;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims, &bv2[0],
    iv3);
  i6 = ret->size[0] * ret->size[1];
  ret->size[0] = iv3[0];
  ret->size[1] = iv3[1];
  emxEnsureCapacity_real_T(sp, ret, i6, (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2015b(sp, src, ret->data, 8, false);
  emlrtDestroyArray(&src);
}

static real_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

void predict2_api(const mxArray * const prhs[2], const mxArray *plhs[1])
{
  emxArray_real_T *mfcc1;
  cell_0 mfccTab;
  real_T classe;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &mfcc1, 2, &h_emlrtRTEI, true);
  emxInitStruct_cell_0(&st, &mfccTab, &h_emlrtRTEI, true);

  /* Marshall function inputs */
  emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "mfcc1", mfcc1);
  c_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "mfccTab", &mfccTab);

  /* Invoke the target function */
  classe = predict2(&st, mfcc1, &mfccTab);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(classe);
  emxFreeStruct_cell_0(&mfccTab);
  mfcc1->canFreeData = false;
  emxFree_real_T(&mfcc1);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_predict2_api.c) */
