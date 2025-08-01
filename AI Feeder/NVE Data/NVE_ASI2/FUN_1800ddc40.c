#include "FUN_1800ddc40.h"
#include <stdint.h>
#include <stddef.h>

int32_t * FUN_1800ddc40(int32_t param_1,int32_t *param_2,byte *param_3) {
int iVar1;
  int32_t *puVar2;
  int32_t *puVar3;
  code *pcVar4;
  longlong lVar5;
  void *pvVar6;
  ulonglong uVar7;
  int32_t *puVar8;
  int32_t *puVar9;
  
  uVar7 = (((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1]) *
            0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
          0x100000001b3;
  puVar9 = *(int32_t **)(DAT_1801ec418 + 8 + (uVar7 & DAT_1801ec430) * 0x10);
  puVar8 = DAT_1801ec408;
  if (puVar9 != DAT_1801ec408) {
    iVar1 = *(int *)(puVar9 + 2);
    puVar8 = puVar9;
    while( true ) {
      if (*(int *)param_3 == iVar1) {
        *param_2 = puVar8;
        *(int32_t *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar8 == *(int32_t **)(DAT_1801ec418 + (uVar7 & DAT_1801ec430) * 0x10)) break;
      puVar8 = (int32_t *)puVar8[1];
      iVar1 = *(int *)(puVar8 + 2);
    }
  }
  if (DAT_1801ec410 == 0x84432a1b61e7b) {
    FUN_180123338(0x1801cc0f0);
LAB_1800ddea9:
    FUN_18012b7b4();
    pcVar4 = (code *)swi(3);
    puVar9 = (int32_t *)(*pcVar4)();
    return puVar9;
  }
  pvVar6 = operator_new(0x1f1f);
  if (pvVar6 == (void *)0x0) goto LAB_1800ddea9;
  puVar9 = (int32_t *)((longlong)pvVar6 + 0x27U & 0xffffffffffffffe0);
  puVar9[-1] = pvVar6;
  *(int32_t *)(puVar9 + 2) = *(int32_t *)param_3;
  FUN_180151670((int32_t (*) [32])(puVar9 + 3),0,0x1ee0);
  FUN_1800a6b30((longlong)(puVar9 + 3));
  if (_DAT_1801ec400 < (float)(DAT_1801ec410 + 1) / (float)DAT_1801ec438) {
    FUN_1800de120();
    puVar2 = *(int32_t **)(DAT_1801ec418 + 8 + (DAT_1801ec430 & uVar7) * 0x10);
    puVar8 = DAT_1801ec408;
    if (puVar2 != DAT_1801ec408) {
      iVar1 = *(int *)(puVar2 + 2);
      puVar8 = puVar2;
      while (*(int *)(puVar9 + 2) != iVar1) {
        if (puVar8 == *(int32_t **)(DAT_1801ec418 + (DAT_1801ec430 & uVar7) * 0x10))
        goto LAB_1800dde30;
        puVar8 = (int32_t *)puVar8[1];
        iVar1 = *(int *)(puVar8 + 2);
      }
      puVar8 = (int32_t *)*puVar8;
    }
  }
LAB_1800dde30:
  puVar2 = (int32_t *)puVar8[1];
  DAT_1801ec410 = DAT_1801ec410 + 1;
  *puVar9 = puVar8;
  puVar9[1] = puVar2;
  *puVar2 = puVar9;
  puVar8[1] = puVar9;
  lVar5 = DAT_1801ec418;
  uVar7 = DAT_1801ec430 & uVar7;
  puVar3 = *(int32_t **)(DAT_1801ec418 + uVar7 * 0x10);
  if (puVar3 == DAT_1801ec408) {
    *(int32_t **)(DAT_1801ec418 + uVar7 * 0x10) = puVar9;
  }
  else {
    if (puVar3 == puVar8) {
      *(int32_t **)(DAT_1801ec418 + uVar7 * 0x10) = puVar9;
      goto LAB_1800dde8f;
    }
    if (*(int32_t **)(DAT_1801ec418 + 8 + uVar7 * 0x10) != puVar2) goto LAB_1800dde8f;
  }
  *(int32_t **)(lVar5 + 8 + uVar7 * 0x10) = puVar9;
LAB_1800dde8f:
  *param_2 = puVar9;
  *(int32_t *)(param_2 + 1) = 1;
  return param_2;
}
}

