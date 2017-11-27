/*
 * predict2.c
 *
 * Code generation for function 'predict2'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "predict2.h"
#include "predict2_emxutil.h"
#include "sortrows.h"
#include "MFCCmatch.h"
#include "MFCCmean.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 13,    /* lineNo */
  "predict2",                          /* fcnName */
  "D:\\git\\vcr\\matlab\\lib\\predict2.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 14,  /* lineNo */
  "predict2",                          /* fcnName */
  "D:\\git\\vcr\\matlab\\lib\\predict2.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 18,  /* lineNo */
  "predict2",                          /* fcnName */
  "D:\\git\\vcr\\matlab\\lib\\predict2.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 19,  /* lineNo */
  "predict2",                          /* fcnName */
  "D:\\git\\vcr\\matlab\\lib\\predict2.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 20,  /* lineNo */
  "predict2",                          /* fcnName */
  "D:\\git\\vcr\\matlab\\lib\\predict2.m"/* pathName */
};

static emlrtRTEInfo emlrtRTEI = { 1,   /* lineNo */
  19,                                  /* colNo */
  "predict2",                          /* fName */
  "D:\\git\\vcr\\matlab\\lib\\predict2.m"/* pName */
};

/* Function Definitions */
real_T predict2(const emlrtStack *sp, const emxArray_real_T *mfcc1, const cell_0
                *mfccTab)
{
  real_T classe;
  emxArray_real_T *mfccTabNew_f1;
  int32_T ixstart;
  int32_T loop_ub;
  emxArray_real_T *mfccTabNew_f101;
  real_T mfccTabNew_f71;
  real_T mfccTabNew_f81;
  real_T mfccTabNew_f130;
  real_T mfccTabNew_f121;
  real_T mfccTabNew_f72;
  real_T mfccTabNew_f82;
  real_T mfccTabNew_f122;
  real_T mfccTabNew_f73;
  real_T mfccTabNew_f83;
  real_T mfccTabNew_f123;
  real_T mfccTabNew_f74;
  real_T mfccTabNew_f84;
  real_T mfccTabNew_f124;
  real_T mfccTabNew_f75;
  real_T mfccTabNew_f85;
  real_T mfccTabNew_f125;
  real_T mfccTabNew_f76;
  real_T mfccTabNew_f86;
  real_T mfccTabNew_f126;
  real_T mfccTabNew_f77;
  real_T mfccTabNew_f87;
  real_T mfccTabNew_f127;
  real_T mfccTabNew_f78;
  real_T mfccTabNew_f88;
  real_T mfccTabNew_f128;
  real_T mfccTabNew_f79;
  real_T mfccTabNew_f89;
  real_T mfccTabNew_f129;
  real_T mfccTabNew_f80;
  real_T mfccTabNew_f90;
  real_T tmp[10];
  real_T rows1[10];
  real_T sp1[10];
  real_T rows2[10];
  real_T sp2[10];
  real_T sp3[10];
  real_T b_tmp[3];
  int32_T ix;
  boolean_T exitg1;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &mfccTabNew_f1, 2, &emlrtRTEI, true);

  /* PREDICT Summary of this function goes here */
  /*    Detailed explanation goes here */
  /* mfccNew = cell(size(mfccTab,1),3); */
  ixstart = mfccTabNew_f1->size[0] * mfccTabNew_f1->size[1];
  mfccTabNew_f1->size[0] = mfccTab->f1->size[0];
  mfccTabNew_f1->size[1] = 12;
  emxEnsureCapacity_real_T(sp, mfccTabNew_f1, ixstart, &emlrtRTEI);
  loop_ub = mfccTab->f1->size[0] * mfccTab->f1->size[1];
  for (ixstart = 0; ixstart < loop_ub; ixstart++) {
    mfccTabNew_f1->data[ixstart] = mfccTab->f1->data[ixstart];
  }

  emxInit_real_T(sp, &mfccTabNew_f101, 2, &emlrtRTEI, true);
  st.site = &emlrtRSI;
  mfccTabNew_f71 = MFCCmatch(&st, mfcc1, mfccTabNew_f1);

  /*  dtw wrt sp 1 */
  st.site = &b_emlrtRSI;
  mfccTabNew_f81 = MFCCmatch(&st, mfcc1, mfccTab->f31);

  /*  dtw wrt sp 2 */
  /*  10: dtw between sp1 and sp2 */
  /*  12: mean MFCC between sp1 and sp2 */
  /*  13: dtw wrt mean MFCC  */
  st.site = &c_emlrtRSI;
  b_MFCCmatch(&st, mfccTab->f1, mfccTab->f31, &mfccTabNew_f130, mfccTabNew_f101);
  st.site = &d_emlrtRSI;
  MFCCmean(&st, mfccTab->f1, mfccTab->f31, mfccTabNew_f101, mfccTabNew_f1);
  st.site = &e_emlrtRSI;
  mfccTabNew_f121 = MFCCmatch(&st, mfcc1, mfccTabNew_f1);
  st.site = &emlrtRSI;
  mfccTabNew_f72 = MFCCmatch(&st, mfcc1, mfccTab->f2);

  /*  dtw wrt sp 1 */
  st.site = &b_emlrtRSI;
  mfccTabNew_f82 = MFCCmatch(&st, mfcc1, mfccTab->f32);

  /*  dtw wrt sp 2 */
  /*  10: dtw between sp1 and sp2 */
  /*  12: mean MFCC between sp1 and sp2 */
  /*  13: dtw wrt mean MFCC  */
  st.site = &c_emlrtRSI;
  b_MFCCmatch(&st, mfccTab->f2, mfccTab->f32, &mfccTabNew_f130, mfccTabNew_f101);
  st.site = &d_emlrtRSI;
  MFCCmean(&st, mfccTab->f2, mfccTab->f32, mfccTabNew_f101, mfccTabNew_f1);
  st.site = &e_emlrtRSI;
  mfccTabNew_f122 = MFCCmatch(&st, mfcc1, mfccTabNew_f1);
  st.site = &emlrtRSI;
  mfccTabNew_f73 = MFCCmatch(&st, mfcc1, mfccTab->f3);

  /*  dtw wrt sp 1 */
  st.site = &b_emlrtRSI;
  mfccTabNew_f83 = MFCCmatch(&st, mfcc1, mfccTab->f33);

  /*  dtw wrt sp 2 */
  /*  10: dtw between sp1 and sp2 */
  /*  12: mean MFCC between sp1 and sp2 */
  /*  13: dtw wrt mean MFCC  */
  st.site = &c_emlrtRSI;
  b_MFCCmatch(&st, mfccTab->f3, mfccTab->f33, &mfccTabNew_f130, mfccTabNew_f101);
  st.site = &d_emlrtRSI;
  MFCCmean(&st, mfccTab->f3, mfccTab->f33, mfccTabNew_f101, mfccTabNew_f1);
  st.site = &e_emlrtRSI;
  mfccTabNew_f123 = MFCCmatch(&st, mfcc1, mfccTabNew_f1);
  st.site = &emlrtRSI;
  mfccTabNew_f74 = MFCCmatch(&st, mfcc1, mfccTab->f4);

  /*  dtw wrt sp 1 */
  st.site = &b_emlrtRSI;
  mfccTabNew_f84 = MFCCmatch(&st, mfcc1, mfccTab->f34);

  /*  dtw wrt sp 2 */
  /*  10: dtw between sp1 and sp2 */
  /*  12: mean MFCC between sp1 and sp2 */
  /*  13: dtw wrt mean MFCC  */
  st.site = &c_emlrtRSI;
  b_MFCCmatch(&st, mfccTab->f4, mfccTab->f34, &mfccTabNew_f130, mfccTabNew_f101);
  st.site = &d_emlrtRSI;
  MFCCmean(&st, mfccTab->f4, mfccTab->f34, mfccTabNew_f101, mfccTabNew_f1);
  st.site = &e_emlrtRSI;
  mfccTabNew_f124 = MFCCmatch(&st, mfcc1, mfccTabNew_f1);
  st.site = &emlrtRSI;
  mfccTabNew_f75 = MFCCmatch(&st, mfcc1, mfccTab->f5);

  /*  dtw wrt sp 1 */
  st.site = &b_emlrtRSI;
  mfccTabNew_f85 = MFCCmatch(&st, mfcc1, mfccTab->f35);

  /*  dtw wrt sp 2 */
  /*  10: dtw between sp1 and sp2 */
  /*  12: mean MFCC between sp1 and sp2 */
  /*  13: dtw wrt mean MFCC  */
  st.site = &c_emlrtRSI;
  b_MFCCmatch(&st, mfccTab->f5, mfccTab->f35, &mfccTabNew_f130, mfccTabNew_f101);
  st.site = &d_emlrtRSI;
  MFCCmean(&st, mfccTab->f5, mfccTab->f35, mfccTabNew_f101, mfccTabNew_f1);
  st.site = &e_emlrtRSI;
  mfccTabNew_f125 = MFCCmatch(&st, mfcc1, mfccTabNew_f1);
  st.site = &emlrtRSI;
  mfccTabNew_f76 = MFCCmatch(&st, mfcc1, mfccTab->f6);

  /*  dtw wrt sp 1 */
  st.site = &b_emlrtRSI;
  mfccTabNew_f86 = MFCCmatch(&st, mfcc1, mfccTab->f36);

  /*  dtw wrt sp 2 */
  /*  10: dtw between sp1 and sp2 */
  /*  12: mean MFCC between sp1 and sp2 */
  /*  13: dtw wrt mean MFCC  */
  st.site = &c_emlrtRSI;
  b_MFCCmatch(&st, mfccTab->f6, mfccTab->f36, &mfccTabNew_f130, mfccTabNew_f101);
  st.site = &d_emlrtRSI;
  MFCCmean(&st, mfccTab->f6, mfccTab->f36, mfccTabNew_f101, mfccTabNew_f1);
  st.site = &e_emlrtRSI;
  mfccTabNew_f126 = MFCCmatch(&st, mfcc1, mfccTabNew_f1);
  st.site = &emlrtRSI;
  mfccTabNew_f77 = MFCCmatch(&st, mfcc1, mfccTab->f7);

  /*  dtw wrt sp 1 */
  st.site = &b_emlrtRSI;
  mfccTabNew_f87 = MFCCmatch(&st, mfcc1, mfccTab->f37);

  /*  dtw wrt sp 2 */
  /*  10: dtw between sp1 and sp2 */
  /*  12: mean MFCC between sp1 and sp2 */
  /*  13: dtw wrt mean MFCC  */
  st.site = &c_emlrtRSI;
  b_MFCCmatch(&st, mfccTab->f7, mfccTab->f37, &mfccTabNew_f130, mfccTabNew_f101);
  st.site = &d_emlrtRSI;
  MFCCmean(&st, mfccTab->f7, mfccTab->f37, mfccTabNew_f101, mfccTabNew_f1);
  st.site = &e_emlrtRSI;
  mfccTabNew_f127 = MFCCmatch(&st, mfcc1, mfccTabNew_f1);
  st.site = &emlrtRSI;
  mfccTabNew_f78 = MFCCmatch(&st, mfcc1, mfccTab->f8);

  /*  dtw wrt sp 1 */
  st.site = &b_emlrtRSI;
  mfccTabNew_f88 = MFCCmatch(&st, mfcc1, mfccTab->f38);

  /*  dtw wrt sp 2 */
  /*  10: dtw between sp1 and sp2 */
  /*  12: mean MFCC between sp1 and sp2 */
  /*  13: dtw wrt mean MFCC  */
  st.site = &c_emlrtRSI;
  b_MFCCmatch(&st, mfccTab->f8, mfccTab->f38, &mfccTabNew_f130, mfccTabNew_f101);
  st.site = &d_emlrtRSI;
  MFCCmean(&st, mfccTab->f8, mfccTab->f38, mfccTabNew_f101, mfccTabNew_f1);
  st.site = &e_emlrtRSI;
  mfccTabNew_f128 = MFCCmatch(&st, mfcc1, mfccTabNew_f1);
  st.site = &emlrtRSI;
  mfccTabNew_f79 = MFCCmatch(&st, mfcc1, mfccTab->f9);

  /*  dtw wrt sp 1 */
  st.site = &b_emlrtRSI;
  mfccTabNew_f89 = MFCCmatch(&st, mfcc1, mfccTab->f39);

  /*  dtw wrt sp 2 */
  /*  10: dtw between sp1 and sp2 */
  /*  12: mean MFCC between sp1 and sp2 */
  /*  13: dtw wrt mean MFCC  */
  st.site = &c_emlrtRSI;
  b_MFCCmatch(&st, mfccTab->f9, mfccTab->f39, &mfccTabNew_f130, mfccTabNew_f101);
  st.site = &d_emlrtRSI;
  MFCCmean(&st, mfccTab->f9, mfccTab->f39, mfccTabNew_f101, mfccTabNew_f1);
  st.site = &e_emlrtRSI;
  mfccTabNew_f129 = MFCCmatch(&st, mfcc1, mfccTabNew_f1);
  st.site = &emlrtRSI;
  mfccTabNew_f80 = MFCCmatch(&st, mfcc1, mfccTab->f10);

  /*  dtw wrt sp 1 */
  st.site = &b_emlrtRSI;
  mfccTabNew_f90 = MFCCmatch(&st, mfcc1, mfccTab->f40);

  /*  dtw wrt sp 2 */
  /*  10: dtw between sp1 and sp2 */
  /*  12: mean MFCC between sp1 and sp2 */
  /*  13: dtw wrt mean MFCC  */
  st.site = &c_emlrtRSI;
  b_MFCCmatch(&st, mfccTab->f10, mfccTab->f40, &mfccTabNew_f130, mfccTabNew_f101);
  st.site = &d_emlrtRSI;
  MFCCmean(&st, mfccTab->f10, mfccTab->f40, mfccTabNew_f101, mfccTabNew_f1);
  st.site = &e_emlrtRSI;
  mfccTabNew_f130 = MFCCmatch(&st, mfcc1, mfccTabNew_f1);
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
  memcpy(&rows2[0], &tmp[0], 10U * sizeof(real_T));
  sortrows(rows2, sp2);
  tmp[0] = mfccTabNew_f121;
  tmp[1] = mfccTabNew_f122;
  tmp[2] = mfccTabNew_f123;
  tmp[3] = mfccTabNew_f124;
  tmp[4] = mfccTabNew_f125;
  tmp[5] = mfccTabNew_f126;
  tmp[6] = mfccTabNew_f127;
  tmp[7] = mfccTabNew_f128;
  tmp[8] = mfccTabNew_f129;
  tmp[9] = mfccTabNew_f130;

  /* rows2 = rows2(1:2,[9,5,6]); */
  sortrows(tmp, sp3);

  /* sp3 = sp3(1); */
  /* rows3 = rows3(1:2,12); */
  /* [~, sp3] = sortrows(horzcat(mfccTab,mfccNew{:,1}),7); */
  /* if rows1(1,3)<rows2(1,3) */
  if (rows1[0] < rows2[0]) {
    if (sp1[0] == sp3[0]) {
      classe = sp1[0] - 1.0;
    } else if (sp3[0] == sp2[0]) {
      classe = sp2[0] - 1.0;
    } else if ((tmp[0] < rows1[0]) && (tmp[0] < rows2[0])) {
      classe = sp3[0] - 1.0;
    } else {
      b_tmp[0] = rows1[0];
      b_tmp[1] = rows2[0];
      b_tmp[2] = tmp[0];
      mfccTabNew_f130 = rows1[0];
      loop_ub = 0;
      for (ix = 1; ix + 1 < 4; ix++) {
        if (b_tmp[ix] < mfccTabNew_f130) {
          mfccTabNew_f130 = b_tmp[ix];
          loop_ub = ix;
        }
      }

      b_tmp[0] = sp1[0];
      b_tmp[1] = sp2[0];
      b_tmp[2] = sp3[0];
      classe = b_tmp[loop_ub] - 1.0;
    }
  } else if (sp2[0] == sp3[0]) {
    classe = sp2[0] - 1.0;
  } else if (sp3[0] == sp1[0]) {
    classe = sp1[0] - 1.0;
  } else if ((tmp[0] < rows1[0]) && (tmp[0] < rows2[0])) {
    classe = sp3[0] - 1.0;
  } else {
    b_tmp[0] = rows1[0];
    b_tmp[1] = rows2[0];
    b_tmp[2] = tmp[0];
    ixstart = 1;
    mfccTabNew_f130 = rows1[0];
    loop_ub = 0;
    if (muDoubleScalarIsNaN(rows1[0])) {
      ix = 2;
      exitg1 = false;
      while ((!exitg1) && (ix < 4)) {
        ixstart = ix;
        if (!muDoubleScalarIsNaN(b_tmp[ix - 1])) {
          mfccTabNew_f130 = b_tmp[ix - 1];
          loop_ub = ix - 1;
          exitg1 = true;
        } else {
          ix++;
        }
      }
    }

    if (ixstart < 3) {
      while (ixstart + 1 < 4) {
        if (b_tmp[ixstart] < mfccTabNew_f130) {
          mfccTabNew_f130 = b_tmp[ixstart];
          loop_ub = ixstart;
        }

        ixstart++;
      }
    }

    b_tmp[0] = sp1[0];
    b_tmp[1] = sp2[0];
    b_tmp[2] = sp3[0];
    classe = b_tmp[loop_ub] - 1.0;
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return classe;
}

/* End of code generation (predict2.c) */
