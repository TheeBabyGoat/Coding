#include "FUN_1800b3170.h"
#include <stdint.h>
#include <stddef.h>

longlong * FUN_1800b3170(longlong *param_1,int32_t (*param_2) [32],int32_t (*param_3) [32],
             int32_t param_4,int param_5,uint param_6) {
uint uVar1;
  longlong *extraout_RAX;
  ulonglong uVar2;
  char *pcVar3;
  int32_t in_XMM3 [16];
  int32_t local_18 [2];
  
  uVar2 = in_XMM3._0_8_;
  if (in_XMM3[7] < '\0') {
    if (param_2 == param_3) {
      *param_1 = (longlong)param_3;
      *(int32_t *)(param_1 + 1) = 0x84;
      return param_1;
    }
    (*param_2)[0] = 0x2d;
    param_2 = (int32_t (*) [32])(*param_2 + 1);
    uVar2 = uVar2 & 0x7fffffffffffffff;
  }
  if ((uVar2 & 0x7ff0000000000000) == 0x7ff0000000000000) {
    if ((uVar2 & 0xfffffffffffff) == 0) {
      pcVar3 = "inf";
      uVar2 = 3;
    }
    else if ((in_XMM3[7] < '\0') && ((uVar2 & 0xfffffffffffff) == 0x8000000000000)) {
      pcVar3 = "nan(ind)";
      uVar2 = 8;
    }
    else if ((uVar2 & 0x8000000000000) == 0) {
      pcVar3 = "nan(snan)";
      uVar2 = 9;
    }
    else {
      pcVar3 = "nan";
      uVar2 = 3;
    }
    if ((longlong)param_3 - (longlong)param_2 < (longlong)uVar2) {
      *param_1 = (longlong)param_3;
      *(int32_t *)(param_1 + 1) = 0x84;
      return param_1;
    }
    FUN_180150fd0((int32_t *)param_2,(int32_t *)pcVar3,uVar2);
    *(int32_t *)(param_1 + 1) = 0;
    *param_1 = (longlong)(*param_2 + uVar2);
    return param_1;
  }
  if (param_5 == 1) {
    if ((int)param_6 < 1000000000) {
      uVar1 = 6;
      if (-1 < (int)param_6) {
        uVar1 = param_6;
      }
      FUN_1800b2380(param_1,param_2,param_3,uVar2,uVar1);
      return param_1;
    }
  }
  else {
    if (param_5 != 2) {
      if (param_5 != 3) {
        FUN_1800b2f90(param_1,(char *)param_2,(longlong)param_3,uVar2,param_6);
        return param_1;
      }
      FUN_1800b2c60(param_1,(int32_t *)param_2,(int32_t *)param_3,uVar2,param_6);
      return param_1;
    }
    if ((int)param_6 < 1000000000) {
      uVar1 = 6;
      if (-1 < (int)param_6) {
        uVar1 = param_6;
      }
      FUN_1800b1a00(local_18,param_2,param_3,uVar2,uVar1);
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

