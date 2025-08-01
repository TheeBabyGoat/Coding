#include "FUN_1800b52a0.h"
#include <stdint.h>
#include <stddef.h>

int32_t * FUN_1800b52a0(int32_t *param_1,int32_t *param_2,int param_3,int *param_4,int32_t param_5,
             int32_t *param_6) {
int32_t *puVar1;
  int32_t uVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int32_t *puVar6;
  int iVar7;
  ulonglong uVar8;
  int32_t *puVar9;
  
  iVar3 = *param_4;
  cVar5 = *(char *)((longlong)param_4 + 9);
  if (*(char *)((longlong)param_4 + 9) == '\0') {
    cVar5 = '\x01';
  }
  iVar7 = 0;
  iVar4 = 0;
  if (param_3 < iVar3) {
    if (cVar5 == '\x01') {
      uVar8 = (ulonglong)*(byte *)((longlong)param_4 + 0xe);
      iVar7 = iVar3 - param_3;
      goto LAB_1800b536b;
    }
    if (cVar5 == '\x02') {
      iVar4 = iVar3 - param_3;
    }
    else {
      iVar4 = 0;
      if (cVar5 == '\x03') {
        iVar4 = (iVar3 - param_3) / 2;
        iVar7 = (iVar3 - iVar4) - param_3;
      }
    }
  }
  uVar8 = (ulonglong)*(byte *)((longlong)param_4 + 0xe);
  puVar1 = (int32_t *)((longlong)param_4 + 0xf);
  if (0 < iVar4) {
    puVar6 = puVar1;
    do {
      for (; puVar6 != puVar1 + uVar8; puVar6 = puVar6 + 1) {
        uVar2 = *puVar6;
        if ((ulonglong)param_2[3] < param_2[2] + 1) {
          (**(code **)*param_2)(param_2);
        }
        *(int32_t *)(param_2[1] + param_2[2]) = uVar2;
        param_2[2] = param_2[2] + 1;
      }
      iVar4 = iVar4 + -1;
      puVar6 = puVar1;
    } while (0 < iVar4);
  }
LAB_1800b536b:
  puVar9 = (int32_t *)((longlong)param_4 + 0xf);
  puVar1 = (int32_t *)param_6[2];
  for (puVar6 = (int32_t *)*param_6; puVar6 != puVar1; puVar6 = puVar6 + 1) {
    uVar2 = *puVar6;
    if ((ulonglong)param_2[3] < param_2[2] + 1) {
      (**(code **)*param_2)(param_2);
    }
    *(int32_t *)(param_2[1] + param_2[2]) = uVar2;
    param_2[2] = param_2[2] + 1;
  }
  if (0 < iVar7) {
    puVar1 = puVar9;
    do {
      for (; puVar1 != puVar9 + uVar8; puVar1 = puVar1 + 1) {
        uVar2 = *puVar1;
        if ((ulonglong)param_2[3] < param_2[2] + 1) {
          (**(code **)*param_2)(param_2);
        }
        *(int32_t *)(param_2[1] + param_2[2]) = uVar2;
        param_2[2] = param_2[2] + 1;
      }
      iVar7 = iVar7 + -1;
      puVar1 = puVar9;
    } while (0 < iVar7);
  }
  *param_1 = param_2;
  return param_1;
}
}

