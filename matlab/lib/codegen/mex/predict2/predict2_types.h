/*
 * predict2_types.h
 *
 * Code generation for function 'predict2'
 *
 */

#ifndef PREDICT2_TYPES_H
#define PREDICT2_TYPES_H

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T

struct emxArray_real_T
{
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_real_T*/

#ifndef typedef_emxArray_real_T
#define typedef_emxArray_real_T

typedef struct emxArray_real_T emxArray_real_T;

#endif                                 /*typedef_emxArray_real_T*/

#ifndef typedef_cell_0
#define typedef_cell_0

typedef struct {
  emxArray_real_T *f1;
  emxArray_real_T *f2;
  emxArray_real_T *f3;
  emxArray_real_T *f4;
  emxArray_real_T *f5;
  emxArray_real_T *f6;
  emxArray_real_T *f7;
  emxArray_real_T *f8;
  emxArray_real_T *f9;
  emxArray_real_T *f10;
  real_T f11;
  real_T f12;
  real_T f13;
  real_T f14;
  real_T f15;
  real_T f16;
  real_T f17;
  real_T f18;
  real_T f19;
  real_T f20;
  real_T f21;
  real_T f22;
  real_T f23;
  real_T f24;
  real_T f25;
  real_T f26;
  real_T f27;
  real_T f28;
  real_T f29;
  real_T f30;
  emxArray_real_T *f31;
  emxArray_real_T *f32;
  emxArray_real_T *f33;
  emxArray_real_T *f34;
  emxArray_real_T *f35;
  emxArray_real_T *f36;
  emxArray_real_T *f37;
  emxArray_real_T *f38;
  emxArray_real_T *f39;
  emxArray_real_T *f40;
  real_T f41;
  real_T f42;
  real_T f43;
  real_T f44;
  real_T f45;
  real_T f46;
  real_T f47;
  real_T f48;
  real_T f49;
  real_T f50;
  real_T f51;
  real_T f52;
  real_T f53;
  real_T f54;
  real_T f55;
  real_T f56;
  real_T f57;
  real_T f58;
  real_T f59;
  real_T f60;
} cell_0;

#endif                                 /*typedef_cell_0*/
#endif

/* End of code generation (predict2_types.h) */
