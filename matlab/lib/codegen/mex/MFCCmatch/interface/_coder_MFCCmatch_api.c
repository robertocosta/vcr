/*
 * _coder_MFCCmatch_api.c
 *
 * Code generation for function '_coder_MFCCmatch_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "MFCCmatch.h"
#include "_coder_MFCCmatch_api.h"
#include "MFCCmatch_emxutil.h"
#include "MFCCmatch_data.h"

/* Variable Definitions */
static emlrtRTEInfo f_emlrtRTEI = { 1, /* lineNo */
  1,                                   /* colNo */
  "_coder_MFCCmatch_api",              /* fName */
  ""                                   /* pName */
};

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *P, const
  char_T *identifier, emxArray_real_T *y);
static const mxArray *emlrt_marshallOut(const real_T u);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  c_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m2;
  static const int32_T iv1[2] = { 0, 0 };

  y = NULL;
  m2 = emlrtCreateNumericArray(2, iv1, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m2, (void *)&u->data[0]);
  emlrtSetDimensions((mxArray *)m2, u->size, 2);
  emlrtAssign(&y, m2);
  return y;
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[2] = { -1, 12 };

  const boolean_T bv0[2] = { true, false };

  int32_T iv2[2];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims, &bv0[0],
    iv2);
  ret->size[0] = iv2[0];
  ret->size[1] = iv2[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *P, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(P), &thisId, y);
  emlrtDestroyArray(&P);
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

void MFCCmatch_api(const mxArray * const prhs[2], const mxArray *plhs[2])
{
  emxArray_real_T *P;
  emxArray_real_T *Q;
  emxArray_real_T *path;
  real_T dist;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &P, 2, &f_emlrtRTEI, true);
  emxInit_real_T(&st, &Q, 2, &f_emlrtRTEI, true);
  emxInit_real_T(&st, &path, 2, &f_emlrtRTEI, true);

  /* Marshall function inputs */
  emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "P", P);
  emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "Q", Q);

  /* Invoke the target function */
  MFCCmatch(&st, P, Q, &dist, path);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(dist);
  plhs[1] = b_emlrt_marshallOut(path);
  path->canFreeData = false;
  emxFree_real_T(&path);
  Q->canFreeData = false;
  emxFree_real_T(&Q);
  P->canFreeData = false;
  emxFree_real_T(&P);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_MFCCmatch_api.c) */
