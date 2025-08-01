#include "FUN_1800b3590.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800b3590(int32_t *param_1,int32_t *param_2,int param_3,int *param_4,
                  int32_t param_5,int32_t *param_6) {
int32_t *puVar1;
  int32_t uVar2;
  int32_t *puVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  int32_t *puVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  int32_t *puVar11;
  
  iVar5 = *param_4;
  cVar6 = *(char *)((longlong)param_4 + 9);
  if (*(char *)((longlong)param_4 + 9) == '\0') {
    cVar6 = '\x02';
  }
  iVar9 = 0;
  iVar4 = 0;
  if (param_3 < iVar5) {
    if (cVar6 == '\x01') {
      uVar10 = (ulonglong)*(byte *)((longlong)param_4 + 0xe);
      iVar9 = iVar5 - param_3;
      goto LAB_1800b3656;
    }
    if (cVar6 == '\x02') {
      iVar4 = iVar5 - param_3;
    }
    else {
      iVar4 = 0;
      if (cVar6 == '\x03') {
        iVar4 = (iVar5 - param_3) / 2;
        iVar9 = (iVar5 - iVar4) - param_3;
      }
    }
  }
  uVar10 = (ulonglong)*(byte *)((longlong)param_4 + 0xe);
  puVar1 = (int32_t *)((longlong)param_4 + 0xf);
  if (0 < iVar4) {
    puVar7 = puVar1;
    do {
      for (; puVar7 != puVar1 + uVar10; puVar7 = puVar7 + 1) {
        uVar2 = *puVar7;
        if ((ulonglong)param_2[3] < param_2[2] + 1) {
          (**(code **)*param_2)(param_2);
        }
        *(int32_t *)(param_2[1] + param_2[2]) = uVar2;
        param_2[2] = param_2[2] + 1;
      }
      iVar4 = iVar4 + -1;
      puVar7 = puVar1;
    } while (0 < iVar4);
  }
LAB_1800b3656:
  puVar3 = param_6;
  puVar11 = (int32_t *)((longlong)param_4 + 0xf);
  puVar7 = (int32_t *)*param_6;
  puVar1 = puVar7 + 2;
  for (; puVar7 != puVar1; puVar7 = puVar7 + 1) {
    uVar2 = *puVar7;
    if ((ulonglong)param_2[3] < param_2[2] + 1) {
      (**(code **)*param_2)(param_2);
    }
    *(int32_t *)(param_2[1] + param_2[2]) = uVar2;
    param_2[2] = param_2[2] + 1;
  }
  if (*(char *)puVar3[1] != '\0') {
    if ((*(int *)puVar3[2] < *(int *)puVar3[3]) &&
       (iVar5 = *(int *)puVar3[3] - *(int *)puVar3[2], lVar8 = (longlong)iVar5, 0 < iVar5)) {
      do {
        if ((ulonglong)param_2[3] < param_2[2] + 1) {
          (**(code **)*param_2)(param_2);
        }
        lVar8 = lVar8 + -1;
        *(int32_t *)(param_2[1] + param_2[2]) = 0x30;
        param_2[2] = param_2[2] + 1;
      } while (0 < lVar8);
    }
  }
  FUN_1800b6180(&param_6,(int32_t *)puVar3[4],*(int32_t **)puVar3[5],param_2);
  puVar3 = param_6;
  if (0 < iVar9) {
    puVar1 = puVar11;
    do {
      for (; puVar1 != puVar11 + uVar10; puVar1 = puVar1 + 1) {
        uVar2 = *puVar1;
        if ((ulonglong)puVar3[3] < puVar3[2] + 1) {
          (**(code **)*puVar3)(puVar3);
        }
        *(int32_t *)(puVar3[1] + puVar3[2]) = uVar2;
        puVar3[2] = puVar3[2] + 1;
      }
      iVar9 = iVar9 + -1;
      puVar1 = puVar11;
    } while (0 < iVar9);
  }
  *param_1 = puVar3;
  return;
}
}

 FUN_1800b3590(param_1,param_2,local_a0[0],param_4,CONCAT44(in_stack_ffffffffffffff4c,uVar8),
                  &local_88);
  }
  else {
    puVar6 = &local_a4;
    local_a8[0] = '\x01';
    do {
      uVar2 = *(int32_t *)puVar6;
      if ((ulonglong)param_2[3] < param_2[2] + 1) {
(**(code **)*param_2)(param_2);
      }
}

