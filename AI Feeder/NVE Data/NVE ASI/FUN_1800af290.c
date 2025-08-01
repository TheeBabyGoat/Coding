#include "FUN_1800af290.h"
#include <stdint.h>
#include <stddef.h>

longlong * FUN_1800af290(longlong *param_1,int32_t (*param_2) [32],int32_t (*param_3) [32],
             int32_t param_4,int param_5,uint param_6) {
longlong *extraout_RAX;
  float fVar1;
  uint uVar2;
  char *pcVar3;
  ulonglong uVar4;
  int32_t in_XMM3 [16];
  int32_t local_18 [2];
  
  fVar1 = in_XMM3._0_4_;
  if (in_XMM3[3] < '\0') {
    if (param_2 == param_3) {
      *param_1 = (longlong)param_3;
      *(int32_t *)(param_1 + 1) = 0x84;
      return param_1;
    }
    (*param_2)[0] = 0x2d;
    param_2 = (int32_t (*) [32])(*param_2 + 1);
    fVar1 = ABS(fVar1);
  }
  if (((uint)fVar1 & 0x7f800000) == 0x7f800000) {
    uVar2 = (uint)fVar1 & 0x7fffff;
    if (uVar2 == 0) {
      pcVar3 = "inf";
      uVar4 = 3;
    }
    else if ((in_XMM3[3] < '\0') && (uVar2 == 0x400000)) {
      pcVar3 = "nan(ind)";
      uVar4 = 8;
    }
    else if (uVar2 >> 0x16 == 0) {
      pcVar3 = "nan(snan)";
      uVar4 = 9;
    }
    else {
      pcVar3 = "nan";
      uVar4 = 3;
    }
    if ((longlong)param_3 - (longlong)param_2 < (longlong)uVar4) {
      *param_1 = (longlong)param_3;
      *(int32_t *)(param_1 + 1) = 0x84;
      return param_1;
    }
    FUN_180150fd0((int32_t *)param_2,(int32_t *)pcVar3,uVar4);
    *(int32_t *)(param_1 + 1) = 0;
    *param_1 = (longlong)(*param_2 + uVar4);
    return param_1;
  }
  if (param_5 == 1) {
    if ((int)param_6 < 1000000000) {
      uVar2 = 6;
      if (-1 < (int)param_6) {
        uVar2 = param_6;
      }
      FUN_1800b2380(param_1,param_2,param_3,(ulonglong)(double)fVar1,uVar2);
      return param_1;
    }
  }
  else {
    if (param_5 != 2) {
      if (param_5 != 3) {
        FUN_1800af0e0(param_1,(char *)param_2,(longlong)param_3,(uint)fVar1,param_6);
        return param_1;
      }
      FUN_1800aedf0(param_1,(int32_t *)param_2,(int32_t *)param_3,fVar1,param_6);
      return param_1;
    }
    if ((int)param_6 < 1000000000) {
      uVar2 = 6;
      if (-1 < (int)param_6) {
        uVar2 = param_6;
      }
      FUN_1800b1a00(local_18,param_2,param_3,(ulonglong)(double)fVar1,uVar2);
      *param_1 = *extraout_RAX;
      *(int *)(param_1 + 1) = (int)extraout_RAX[1];
      return param_1;
    }
  }
  *(int32_t *)(param_1 + 1) = 0x84;
  *param_1 = (longlong)param_3;
  return param_1;
}
}

