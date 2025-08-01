#include "FUN_1800a8b70.h"
#include <stdint.h>
#include <stddef.h>

int32_t * FUN_1800a8b70(int32_t *param_1) {
int32_t *puVar1;
  int32_t uVar2;
  LPVOID pvVar3;
  code *pcVar4;
  void *pvVar5;
  int32_t *puVar6;
  longlong lVar7;
  int32_t *puVar8;
  LPVOID pvVar9;
  
  *param_1 = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *(int32_t *)(param_1 + 4) = 0;
  pvVar5 = operator_new(0x18);
  *(void **)pvVar5 = pvVar5;
  *(void **)((longlong)pvVar5 + 8) = pvVar5;
  *(void **)(param_1 + 2) = pvVar5;
  *(int32_t *)(param_1 + 6) = 0;
  *(int32_t *)(param_1 + 8) = 0;
  *(int32_t *)(param_1 + 10) = 0;
  *(int32_t *)(param_1 + 0xc) = 7;
  *(int32_t *)(param_1 + 0xe) = 8;
  *param_1 = 0x3f800000;
  uVar2 = *(int32_t *)(param_1 + 2);
  puVar6 = (int32_t *)operator_new(0x80);
  pvVar3 = *(LPVOID *)(param_1 + 6);
  lVar7 = *(longlong *)(param_1 + 10) - (longlong)pvVar3 >> 3;
  if (lVar7 != 0) {
    pvVar9 = pvVar3;
    if ((0xfff < (ulonglong)(lVar7 * 8)) &&
       (pvVar9 = *(LPVOID *)((longlong)pvVar3 + -8),
       0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar9)))) {
      FUN_18012b7b4();
      pcVar4 = (code *)swi(3);
      puVar8 = (int32_t *)(*pcVar4)();
      return puVar8;
    }
    thunk_FUN_18012d5e8(pvVar9);
  }
  *(int32_t **)(param_1 + 6) = puVar6;
  puVar1 = puVar6 + 0x10;
  *(int32_t **)(param_1 + 8) = puVar1;
  *(int32_t **)(param_1 + 10) = puVar1;
  for (; puVar6 != puVar1; puVar6 = puVar6 + 1) {
    *puVar6 = uVar2;
  }
  return param_1;
}
}

