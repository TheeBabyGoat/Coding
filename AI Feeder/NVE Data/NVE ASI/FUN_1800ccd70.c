#include "FUN_1800ccd70.h"
#include <stdint.h>
#include <stddef.h>

longlong FUN_1800ccd70(longlong *param_1,int32_t *param_2,ulonglong param_3) {
int *piVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar5 = param_3;
  if (param_1[0xd] == 0) {
    if (*(int32_t **)param_1[8] == (int32_t *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)param_1[0xb];
    }
    if (0 < (longlong)param_3) {
      if (0 < iVar3) {
        uVar4 = (longlong)iVar3;
        if ((longlong)param_3 < (longlong)iVar3) {
          uVar4 = param_3;
        }
        FUN_180150fd0(*(int32_t **)param_1[8],param_2,uVar4);
        uVar5 = param_3 - uVar4;
        param_2 = (int32_t *)((longlong)param_2 + uVar4);
        *(int *)param_1[0xb] = *(int *)param_1[0xb] - (int)uVar4;
        *(longlong *)param_1[8] = *(longlong *)param_1[8] + (longlong)(int)uVar4;
        if ((longlong)uVar5 < 1) goto LAB_1800cce85;
      }
      if (param_1[0x10] != 0) {
        uVar4 = FUN_18012e4a0(param_2,1,uVar5,param_1[0x10]);
        uVar5 = uVar5 - uVar4;
      }
    }
  }
  else if (0 < (longlong)param_3) {
    do {
      if ((*(int32_t **)param_1[8] == (int32_t *)0x0) ||
         (iVar3 = *(int *)param_1[0xb], iVar3 < 1)) {
        iVar3 = (**(code **)(*param_1 + 0x18))(param_1,*(int32_t *)param_2);
        if (iVar3 == -1) break;
        lVar2 = -1;
        uVar4 = 1;
      }
      else {
        uVar4 = uVar5;
        if ((longlong)iVar3 <= (longlong)uVar5) {
          uVar4 = (longlong)iVar3;
        }
        FUN_180150fd0(*(int32_t **)param_1[8],param_2,uVar4);
        piVar1 = (int *)param_1[0xb];
        lVar2 = -uVar4;
        *piVar1 = *piVar1 - (int)uVar4;
        *(longlong *)param_1[8] = *(longlong *)param_1[8] + (longlong)(int)uVar4;
      }
      uVar5 = uVar5 + lVar2;
      param_2 = (int32_t *)((longlong)param_2 + uVar4);
    } while (0 < (longlong)uVar5);
  }
LAB_1800cce85:
  return param_3 - uVar5;
}
}

