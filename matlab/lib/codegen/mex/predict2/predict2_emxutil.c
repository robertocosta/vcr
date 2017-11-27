/*
 * predict2_emxutil.c
 *
 * Code generation for function 'predict2_emxutil'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "predict2.h"
#include "predict2_emxutil.h"

/* Function Definitions */
void emxEnsureCapacity_real_T(const emlrtStack *sp, emxArray_real_T *emxArray,
  int32_T oldNumel, const emlrtRTEInfo *srcLocation)
{
  int32_T newNumel;
  int32_T i;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel = (int32_T)emlrtSizeMulR2012b((uint32_T)newNumel, (uint32_T)
      emxArray->size[i], srcLocation, sp);
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = emlrtCallocMex((uint32_T)i, sizeof(real_T));
    if (newData == NULL) {
      emlrtHeapAllocationErrorR2012b(srcLocation, sp);
    }

    if (emxArray->data != NULL) {
      memcpy(newData, (void *)emxArray->data, sizeof(real_T) * oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex((void *)emxArray->data);
      }
    }

    emxArray->data = (real_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

void emxFreeStruct_cell_0(cell_0 *pStruct)
{
  emxFree_real_T(&pStruct->f1);
  emxFree_real_T(&pStruct->f2);
  emxFree_real_T(&pStruct->f3);
  emxFree_real_T(&pStruct->f4);
  emxFree_real_T(&pStruct->f5);
  emxFree_real_T(&pStruct->f6);
  emxFree_real_T(&pStruct->f7);
  emxFree_real_T(&pStruct->f8);
  emxFree_real_T(&pStruct->f9);
  emxFree_real_T(&pStruct->f10);
  emxFree_real_T(&pStruct->f31);
  emxFree_real_T(&pStruct->f32);
  emxFree_real_T(&pStruct->f33);
  emxFree_real_T(&pStruct->f34);
  emxFree_real_T(&pStruct->f35);
  emxFree_real_T(&pStruct->f36);
  emxFree_real_T(&pStruct->f37);
  emxFree_real_T(&pStruct->f38);
  emxFree_real_T(&pStruct->f39);
  emxFree_real_T(&pStruct->f40);
}

void emxFree_real_T(emxArray_real_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_real_T *)NULL) {
    if (((*pEmxArray)->data != (real_T *)NULL) && (*pEmxArray)->canFreeData) {
      emlrtFreeMex((void *)(*pEmxArray)->data);
    }

    emlrtFreeMex((void *)(*pEmxArray)->size);
    emlrtFreeMex((void *)*pEmxArray);
    *pEmxArray = (emxArray_real_T *)NULL;
  }
}

void emxInitStruct_cell_0(const emlrtStack *sp, cell_0 *pStruct, const
  emlrtRTEInfo *srcLocation, boolean_T doPush)
{
  emxInit_real_T(sp, &pStruct->f1, 2, srcLocation, doPush);
  emxInit_real_T(sp, &pStruct->f2, 2, srcLocation, doPush);
  emxInit_real_T(sp, &pStruct->f3, 2, srcLocation, doPush);
  emxInit_real_T(sp, &pStruct->f4, 2, srcLocation, doPush);
  emxInit_real_T(sp, &pStruct->f5, 2, srcLocation, doPush);
  emxInit_real_T(sp, &pStruct->f6, 2, srcLocation, doPush);
  emxInit_real_T(sp, &pStruct->f7, 2, srcLocation, doPush);
  emxInit_real_T(sp, &pStruct->f8, 2, srcLocation, doPush);
  emxInit_real_T(sp, &pStruct->f9, 2, srcLocation, doPush);
  emxInit_real_T(sp, &pStruct->f10, 2, srcLocation, doPush);
  emxInit_real_T(sp, &pStruct->f31, 2, srcLocation, doPush);
  emxInit_real_T(sp, &pStruct->f32, 2, srcLocation, doPush);
  emxInit_real_T(sp, &pStruct->f33, 2, srcLocation, doPush);
  emxInit_real_T(sp, &pStruct->f34, 2, srcLocation, doPush);
  emxInit_real_T(sp, &pStruct->f35, 2, srcLocation, doPush);
  emxInit_real_T(sp, &pStruct->f36, 2, srcLocation, doPush);
  emxInit_real_T(sp, &pStruct->f37, 2, srcLocation, doPush);
  emxInit_real_T(sp, &pStruct->f38, 2, srcLocation, doPush);
  emxInit_real_T(sp, &pStruct->f39, 2, srcLocation, doPush);
  emxInit_real_T(sp, &pStruct->f40, 2, srcLocation, doPush);
}

void emxInit_real_T(const emlrtStack *sp, emxArray_real_T **pEmxArray, int32_T
                    numDimensions, const emlrtRTEInfo *srcLocation, boolean_T
                    doPush)
{
  emxArray_real_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_real_T *)emlrtMallocMex(sizeof(emxArray_real_T));
  if ((void *)*pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(sp, (void *)pEmxArray, (void (*)(void *))
      emxFree_real_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (real_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex((uint32_T)(sizeof(int32_T)
    * numDimensions));
  if ((void *)emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

/* End of code generation (predict2_emxutil.c) */
