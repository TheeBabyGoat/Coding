#include "FUN_1800c9e80.h"
#include <stdint.h>
#include <stddef.h>

int32_t * FUN_1800c9e80(longlong *param_1) {
int32_t *puVar1;
  int32_t uVar2;
  LPVOID pvVar3;
  code *pcVar4;
  int32_t *puVar5;
  void *pvVar6;
  int32_t *puVar7;
  longlong lVar8;
  LPVOID pvVar9;
  
  puVar5 = (int32_t *)operator_new(0x60);
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  *(int32_t *)(puVar5 + 4) = 0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  pvVar6 = operator_new(0x90);
  *(void **)pvVar6 = pvVar6;
  *(void **)((longlong)pvVar6 + 8) = pvVar6;
  puVar5[5] = pvVar6;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[10] = 7;
  puVar5[0xb] = 8;
  *(int32_t *)(puVar5 + 4) = 0x3f800000;
  uVar2 = puVar5[5];
  puVar7 = (int32_t *)operator_new(0x80);
  pvVar3 = (LPVOID)puVar5[7];
  lVar8 = puVar5[9] - (longlong)pvVar3 >> 3;
  if (lVar8 != 0) {
    pvVar9 = pvVar3;
    if ((0xfff < (ulonglong)(lVar8 * 8)) &&
       (pvVar9 = *(LPVOID *)((longlong)pvVar3 + -8),
       0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar9)))) {
      FUN_18012b7b4();
      pcVar4 = (code *)swi(3);
      puVar7 = (int32_t *)(*pcVar4)();
      return puVar7;
    }
    thunk_FUN_18012d5e8(pvVar9);
  }
  puVar5[7] = puVar7;
  puVar1 = puVar7 + 0x10;
  puVar5[8] = puVar1;
  puVar5[9] = puVar1;
  for (; puVar7 != puVar1; puVar7 = puVar7 + 1) {
    *puVar7 = uVar2;
  }
  (**(code **)(*param_1 + 0x10))(param_1,&DAT_1801cc1e0,puVar5);
  return puVar5;
}
}

