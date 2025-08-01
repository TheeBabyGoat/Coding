#include "FUN_1800add90.h"
#include <stdint.h>
#include <stddef.h>

longlong * FUN_1800add90(longlong *param_1,char *param_2,char *param_3,uint param_4) {
uint uVar1;
  char *pcVar2;
  ulonglong uVar3;
  char *local_18;
  int32_t local_10;
  
  uVar1 = param_4;
  if ((int)param_4 < 0) {
    if (param_2 == param_3) {
      *(int32_t *)(param_1 + 1) = 0x84;
      *param_1 = (longlong)param_3;
      return param_1;
    }
    *param_2 = '-';
    param_2 = param_2 + 1;
    uVar1 = param_4 & 0x7fffffff;
  }
  if ((uVar1 & 0x7f800000) == 0x7f800000) {
    uVar1 = uVar1 & 0x7fffff;
    if (uVar1 == 0) {
      pcVar2 = "inf";
      uVar3 = 3;
    }
    else if (((int)param_4 < 0) && (uVar1 == 0x400000)) {
      pcVar2 = "nan(ind)";
      uVar3 = 8;
    }
    else if (uVar1 >> 0x16 == 0) {
      pcVar2 = "nan(snan)";
      uVar3 = 9;
    }
    else {
      pcVar2 = "nan";
      uVar3 = 3;
    }
    if ((longlong)param_3 - (longlong)param_2 < (longlong)uVar3) {
      *(int32_t *)(param_1 + 1) = 0x84;
      *param_1 = (longlong)param_3;
    }
    else {
      FUN_180150fd0((int32_t *)param_2,(int32_t *)pcVar2,uVar3);
      *(int32_t *)(param_1 + 1) = 0;
      *param_1 = (longlong)(param_2 + uVar3);
    }
  }
  else {
    if (uVar1 == 0) {
      if (param_2 == param_3) {
        local_10 = 0x84;
      }
      else {
        *param_2 = '0';
        param_3 = param_2 + 1;
        local_10 = 0;
      }
    }
    else {
      uVar3 = FUN_1800adf10(uVar1 & 0x7fffff,uVar1 >> 0x17);
      FUN_1800ae6e0((longlong *)&local_18,param_2,(longlong)param_3,uVar3,0,uVar1 & 0x7fffff,
                    uVar1 >> 0x17);
      param_3 = local_18;
    }
    *(int32_t *)(param_1 + 1) = local_10;
    *param_1 = (longlong)param_3;
  }
  return param_1;
}
}

