/*
 * predict.c
 *
 * Code generation for function 'predict'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "predict.h"
#include "predict_emxutil.h"
#include "sortrows.h"
#include "MFCCmatch.h"
#include "MFCCmean.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 13,    /* lineNo */
  "predict",                           /* fcnName */
  "D:\\git\\vcr\\matlab\\lib\\predict.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 14,  /* lineNo */
  "predict",                           /* fcnName */
  "D:\\git\\vcr\\matlab\\lib\\predict.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 15,  /* lineNo */
  "predict",                           /* fcnName */
  "D:\\git\\vcr\\matlab\\lib\\predict.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 16,  /* lineNo */
  "predict",                           /* fcnName */
  "D:\\git\\vcr\\matlab\\lib\\predict.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 17,  /* lineNo */
  "predict",                           /* fcnName */
  "D:\\git\\vcr\\matlab\\lib\\predict.m"/* pathName */
};

static emlrtRTEInfo emlrtRTEI = { 1,   /* lineNo */
  19,                                  /* colNo */
  "predict",                           /* fName */
  "D:\\git\\vcr\\matlab\\lib\\predict.m"/* pName */
};

/* Function Definitions */
real_T predict(const emlrtStack *sp, const emxArray_real_T *mfcc1, const cell_0 *
               mfccTab)
{
  real_T classe;
  emxArray_real_T *mfccTabNew_f1;
  int32_T i0;
  int32_T loop_ub;
  emxArray_real_T *mfccTabNew_f101;
  real_T mfccTabNew_f71;
  real_T mfccTabNew_f81;
  real_T d0;
  real_T mfccTabNew_f72;
  real_T mfccTabNew_f82;
  real_T mfccTabNew_f73;
  real_T mfccTabNew_f83;
  real_T mfccTabNew_f74;
  real_T mfccTabNew_f84;
  real_T mfccTabNew_f75;
  real_T mfccTabNew_f85;
  real_T mfccTabNew_f76;
  real_T mfccTabNew_f86;
  real_T mfccTabNew_f77;
  real_T mfccTabNew_f87;
  real_T mfccTabNew_f78;
  real_T mfccTabNew_f88;
  real_T mfccTabNew_f79;
  real_T mfccTabNew_f89;
  real_T mfccTabNew_f80;
  real_T mfccTabNew_f90;
  real_T tmp[10];
  real_T rows1[10];
  real_T sp1[10];
  real_T sp2[10];
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &mfccTabNew_f1, 2, &emlrtRTEI, true);

  /* PREDICT Summary of this function goes here */
  /*    Detailed explanation goes here */
  /* mfccNew = cell(size(mfccTab,1),3); */
  i0 = mfccTabNew_f1->size[0] * mfccTabNew_f1->size[1];
  mfccTabNew_f1->size[0] = mfccTab->f1->size[0];
  mfccTabNew_f1->size[1] = 12;
  emxEnsureCapacity_real_T(sp, mfccTabNew_f1, i0, &emlrtRTEI);
  loop_ub = mfccTab->f1->size[0] * mfccTab->f1->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    mfccTabNew_f1->data[i0] = mfccTab->f1->data[i0];
  }

  emxInit_real_T(sp, &mfccTabNew_f101, 2, &emlrtRTEI, true);
  st.site = &emlrtRSI;
  mfccTabNew_f71 = MFCCmatch(&st, mfcc1, mfccTabNew_f1);
  st.site = &b_emlrtRSI;
  mfccTabNew_f81 = MFCCmatch(&st, mfcc1, mfccTab->f31);
  st.site = &c_emlrtRSI;
  b_MFCCmatch(&st, mfccTab->f1, mfccTab->f31, &d0, mfccTabNew_f101);
  st.site = &d_emlrtRSI;
  MFCCmean(&st, mfccTab->f1, mfccTab->f31, mfccTabNew_f101, mfccTabNew_f1);
  st.site = &e_emlrtRSI;
  MFCCmatch(&st, mfcc1, mfccTabNew_f1);
  st.site = &emlrtRSI;
  mfccTabNew_f72 = MFCCmatch(&st, mfcc1, mfccTab->f2);
  st.site = &b_emlrtRSI;
  mfccTabNew_f82 = MFCCmatch(&st, mfcc1, mfccTab->f32);
  st.site = &c_emlrtRSI;
  b_MFCCmatch(&st, mfccTab->f2, mfccTab->f32, &d0, mfccTabNew_f101);
  st.site = &d_emlrtRSI;
  MFCCmean(&st, mfccTab->f2, mfccTab->f32, mfccTabNew_f101, mfccTabNew_f1);
  st.site = &e_emlrtRSI;
  MFCCmatch(&st, mfcc1, mfccTabNew_f1);
  st.site = &emlrtRSI;
  mfccTabNew_f73 = MFCCmatch(&st, mfcc1, mfccTab->f3);
  st.site = &b_emlrtRSI;
  mfccTabNew_f83 = MFCCmatch(&st, mfcc1, mfccTab->f33);
  st.site = &c_emlrtRSI;
  b_MFCCmatch(&st, mfccTab->f3, mfccTab->f33, &d0, mfccTabNew_f101);
  st.site = &d_emlrtRSI;
  MFCCmean(&st, mfccTab->f3, mfccTab->f33, mfccTabNew_f101, mfccTabNew_f1);
  st.site = &e_emlrtRSI;
  MFCCmatch(&st, mfcc1, mfccTabNew_f1);
  st.site = &emlrtRSI;
  mfccTabNew_f74 = MFCCmatch(&st, mfcc1, mfccTab->f4);
  st.site = &b_emlrtRSI;
  mfccTabNew_f84 = MFCCmatch(&st, mfcc1, mfccTab->f34);
  st.site = &c_emlrtRSI;
  b_MFCCmatch(&st, mfccTab->f4, mfccTab->f34, &d0, mfccTabNew_f101);
  st.site = &d_emlrtRSI;
  MFCCmean(&st, mfccTab->f4, mfccTab->f34, mfccTabNew_f101, mfccTabNew_f1);
  st.site = &e_emlrtRSI;
  MFCCmatch(&st, mfcc1, mfccTabNew_f1);
  st.site = &emlrtRSI;
  mfccTabNew_f75 = MFCCmatch(&st, mfcc1, mfccTab->f5);
  st.site = &b_emlrtRSI;
  mfccTabNew_f85 = MFCCmatch(&st, mfcc1, mfccTab->f35);
  st.site = &c_emlrtRSI;
  b_MFCCmatch(&st, mfccTab->f5, mfccTab->f35, &d0, mfccTabNew_f101);
  st.site = &d_emlrtRSI;
  MFCCmean(&st, mfccTab->f5, mfccTab->f35, mfccTabNew_f101, mfccTabNew_f1);
  st.site = &e_emlrtRSI;
  MFCCmatch(&st, mfcc1, mfccTabNew_f1);
  st.site = &emlrtRSI;
  mfccTabNew_f76 = MFCCmatch(&st, mfcc1, mfccTab->f6);
  st.site = &b_emlrtRSI;
  mfccTabNew_f86 = MFCCmatch(&st, mfcc1, mfccTab->f36);
  st.site = &c_emlrtRSI;
  b_MFCCmatch(&st, mfccTab->f6, mfccTab->f36, &d0, mfccTabNew_f101);
  st.site = &d_emlrtRSI;
  MFCCmean(&st, mfccTab->f6, mfccTab->f36, mfccTabNew_f101, mfccTabNew_f1);
  st.site = &e_emlrtRSI;
  MFCCmatch(&st, mfcc1, mfccTabNew_f1);
  st.site = &emlrtRSI;
  mfccTabNew_f77 = MFCCmatch(&st, mfcc1, mfccTab->f7);
  st.site = &b_emlrtRSI;
  mfccTabNew_f87 = MFCCmatch(&st, mfcc1, mfccTab->f37);
  st.site = &c_emlrtRSI;
  b_MFCCmatch(&st, mfccTab->f7, mfccTab->f37, &d0, mfccTabNew_f101);
  st.site = &d_emlrtRSI;
  MFCCmean(&st, mfccTab->f7, mfccTab->f37, mfccTabNew_f101, mfccTabNew_f1);
  st.site = &e_emlrtRSI;
  MFCCmatch(&st, mfcc1, mfccTabNew_f1);
  st.site = &emlrtRSI;
  mfccTabNew_f78 = MFCCmatch(&st, mfcc1, mfccTab->f8);
  st.site = &b_emlrtRSI;
  mfccTabNew_f88 = MFCCmatch(&st, mfcc1, mfccTab->f38);
  st.site = &c_emlrtRSI;
  b_MFCCmatch(&st, mfccTab->f8, mfccTab->f38, &d0, mfccTabNew_f101);
  st.site = &d_emlrtRSI;
  MFCCmean(&st, mfccTab->f8, mfccTab->f38, mfccTabNew_f101, mfccTabNew_f1);
  st.site = &e_emlrtRSI;
  MFCCmatch(&st, mfcc1, mfccTabNew_f1);
  st.site = &emlrtRSI;
  mfccTabNew_f79 = MFCCmatch(&st, mfcc1, mfccTab->f9);
  st.site = &b_emlrtRSI;
  mfccTabNew_f89 = MFCCmatch(&st, mfcc1, mfccTab->f39);
  st.site = &c_emlrtRSI;
  b_MFCCmatch(&st, mfccTab->f9, mfccTab->f39, &d0, mfccTabNew_f101);
  st.site = &d_emlrtRSI;
  MFCCmean(&st, mfccTab->f9, mfccTab->f39, mfccTabNew_f101, mfccTabNew_f1);
  st.site = &e_emlrtRSI;
  MFCCmatch(&st, mfcc1, mfccTabNew_f1);
  st.site = &emlrtRSI;
  mfccTabNew_f80 = MFCCmatch(&st, mfcc1, mfccTab->f10);
  st.site = &b_emlrtRSI;
  mfccTabNew_f90 = MFCCmatch(&st, mfcc1, mfccTab->f40);
  st.site = &c_emlrtRSI;
  b_MFCCmatch(&st, mfccTab->f10, mfccTab->f40, &d0, mfccTabNew_f101);
  st.site = &d_emlrtRSI;
  MFCCmean(&st, mfccTab->f10, mfccTab->f40, mfccTabNew_f101, mfccTabNew_f1);
  st.site = &e_emlrtRSI;
  MFCCmatch(&st, mfcc1, mfccTabNew_f1);
  tmp[0] = mfccTabNew_f71;
  tmp[1] = mfccTabNew_f72;
  tmp[2] = mfccTabNew_f73;
  tmp[3] = mfccTabNew_f74;
  tmp[4] = mfccTabNew_f75;
  tmp[5] = mfccTabNew_f76;
  tmp[6] = mfccTabNew_f77;
  tmp[7] = mfccTabNew_f78;
  tmp[8] = mfccTabNew_f79;
  tmp[9] = mfccTabNew_f80;
  emxFree_real_T(&mfccTabNew_f101);
  emxFree_real_T(&mfccTabNew_f1);
  memcpy(&rows1[0], &tmp[0], 10U * sizeof(real_T));
  sortrows(rows1, sp1);

  /* rows1 = rows1(1:2,[8,2,3]); */
  tmp[0] = mfccTabNew_f81;
  tmp[1] = mfccTabNew_f82;
  tmp[2] = mfccTabNew_f83;
  tmp[3] = mfccTabNew_f84;
  tmp[4] = mfccTabNew_f85;
  tmp[5] = mfccTabNew_f86;
  tmp[6] = mfccTabNew_f87;
  tmp[7] = mfccTabNew_f88;
  tmp[8] = mfccTabNew_f89;
  tmp[9] = mfccTabNew_f90;
  sortrows(tmp, sp2);

  /* rows2 = rows2(1:2,[9,5,6]); */
  /* [~, sp3] = sortrows(mfccTab{:,13}); */
  /* sp3 = sp3(1); */
  /* rows3 = rows3(1:2,12); */
  /* [~, sp3] = sortrows(horzcat(mfccTab,mfccNew{:,1}),7); */
  /* if rows1(1,3)<rows2(1,3) */
  if (rows1[0] < tmp[0]) {
    classe = sp1[0] - 1.0;
  } else {
    classe = sp2[0] - 1.0;
  }

  /*     %{ */
  /*     if rows1{1,2}<rows2{1,2} */
  /*         if rows1{1,1} < rows1{1,2}+rows1{1,3} */
  /*             classe = sp1; */
  /*         else */
  /*             if rows2{1,1} < rows2{1,2}+rows2{1,3} */
  /*                 classe = sp2; */
  /*             else */
  /*                 classe = sp3(1); */
  /*             end */
  /*         end */
  /*     else */
  /*         if rows2{1,1} < rows2{1,2}+rows2{1,3} */
  /*             classe = sp2; */
  /*         else */
  /*             if rows1{1,1} < rows1{1,2}+rows1{1,3} */
  /*                 classe = sp1; */
  /*             else */
  /*                 classe = sp3; */
  /*             end */
  /*         end */
  /*     end */
  /*     %} */
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return classe;
}

/* End of code generation (predict.c) */
