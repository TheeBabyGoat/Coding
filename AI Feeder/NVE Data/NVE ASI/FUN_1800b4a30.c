#include "FUN_1800b4a30.h"
#include <stdint.h>
#include <stddef.h>

int32_t * FUN_1800b4a30(int32_t *param_1,int32_t *param_2,int param_3,int *param_4,int32_t param_5,
             int32_t *param_6) {
int32_t uVar1;
  int iVar2;
  int32_t *puVar3;
  int32_t *puVar4;
  int iVar5;
  char cVar6;
  int32_t *puVar7;
  int iVar8;
  ulonglong uVar9;
  int32_t *puVar10;
  
  iVar2 = *param_4;
  cVar6 = *(char *)((longlong)param_4 + 9);
  if (*(char *)((longlong)param_4 + 9) == '\0') {
    cVar6 = '\x01';
  }
  iVar8 = 0;
  iVar5 = 0;
  if (param_3 < iVar2) {
    if (cVar6 == '\x01') {
      uVar9 = (ulonglong)*(byte *)((longlong)param_4 + 0xe);
      iVar8 = iVar2 - param_3;
      goto LAB_1800b4afb;
    }
    if (cVar6 == '\x02') {
      iVar5 = iVar2 - param_3;
    }
    else {
      iVar5 = 0;
      if (cVar6 == '\x03') {
        iVar5 = (iVar2 - param_3) / 2;
        iVar8 = (iVar2 - iVar5) - param_3;
      }
    }
  }
  uVar9 = (ulonglong)*(byte *)((longlong)param_4 + 0xe);
  puVar10 = (int32_t *)((longlong)param_4 + 0xf);
  if (0 < iVar5) {
    puVar4 = puVar10;
    do {
      for (; puVar4 != puVar10 + uVar9; puVar4 = puVar4 + 1) {
        uVar1 = *puVar4;
        if ((ulonglong)param_2[3] < param_2[2] + 1) {
          (**(code **)*param_2)(param_2);
        }
        *(int32_t *)(param_2[2] + param_2[1]) = uVar1;
        param_2[2] = param_2[2] + 1;
      }
      iVar5 = iVar5 + -1;
      puVar4 = puVar10;
    } while (0 < iVar5);
  }
LAB_1800b4afb:
  puVar10 = (int32_t *)((longlong)param_4 + 0xf);
  puVar7 = (int32_t *)*param_6;
  if (0xf < (ulonglong)puVar7[3]) {
    puVar7 = (int32_t *)*puVar7;
  }
  puVar3 = (int32_t *)param_6[1];
  for (; puVar7 != puVar3; puVar7 = (int32_t *)((longlong)puVar7 + 1)) {
    uVar1 = *(int32_t *)puVar7;
    if ((ulonglong)param_2[3] < param_2[2] + 1) {
      (**(code **)*param_2)(param_2);
    }
    *(int32_t *)(param_2[2] + param_2[1]) = uVar1;
    param_2[2] = param_2[2] + 1;
  }
  if (0 < iVar8) {
    puVar4 = puVar10;
    do {
      for (; puVar4 != puVar10 + uVar9; puVar4 = puVar4 + 1) {
        uVar1 = *puVar4;
        if ((ulonglong)param_2[3] < param_2[2] + 1) {
          (**(code **)*param_2)(param_2);
        }
        *(int32_t *)(param_2[2] + param_2[1]) = uVar1;
        param_2[2] = param_2[2] + 1;
      }
      iVar8 = iVar8 + -1;
      puVar4 = puVar10;
    } while (0 < iVar8);
  }
  *param_1 = param_2;
  return param_1;
}
}

 FUN_1800b4a30(param_1,param_2,local_198[0],param_4,in_stack_fffffffffffffe48,&local_1a8);
    if (0xf < local_178) {
ppppuVar3 = (int32_t ****)local_190;
      if ((0xfff < local_178 + 1) &&
         (ppppuVar3 = (int32_t ****)local_190[-1],
         0x1f < (ulonglong)((longlong)local_190 + (-8 - (longlong)ppppuVar3)))) {
        FUN_18012b7b4();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      thunk_FUN_18012d5e8(ppppuVar3);
    }
}

