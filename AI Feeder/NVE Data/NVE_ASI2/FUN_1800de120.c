#include "FUN_1800de120.h"
#include <stdint.h>
#include <stddef.h>

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

void FUN_1800de120(void) {
ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  float fVar5;
  
  uVar1 = DAT_1801ec438;
  fVar5 = ceilf((float)(DAT_1801ec410 + 1) / _DAT_1801ec400);
  lVar2 = 0;
  if ((DAT_1801d8f34 <= fVar5) && (fVar5 = fVar5 - DAT_1801d8f34, fVar5 < DAT_1801d8f34)) {
    lVar2 = -0x8000000000000000;
  }
  uVar3 = 8;
  if (8 < (ulonglong)((longlong)fVar5 + lVar2)) {
    uVar3 = (longlong)fVar5 + lVar2;
  }
  uVar4 = uVar1;
  if ((uVar1 < uVar3) && ((0x1ff < uVar1 || (uVar4 = uVar1 * 8, uVar1 * 8 < uVar3)))) {
    uVar4 = uVar3;
  }
  FUN_1800de210(uVar3,uVar4);
  return;
}
}

 FUN_1800de120();
    puVar2 = *(int32_t **)(DAT_1801ec418 + 8 + (DAT_1801ec430 & uVar8) * 0x10);
    puVar9 = DAT_1801ec408;
    if (puVar2 != DAT_1801ec408) {
iVar1 = *(int *)(puVar2 + 2);
      puVar9 = puVar2;
      while (*(int *)(puVar7 + 2) != iVar1) {
        if (puVar9 == *(int32_t **)(DAT_1801ec418 + (DAT_1801ec430 & uVar8) * 0x10))
        goto LAB_180116c98;
        puVar9 = (int32_t *)puVar9[1];
        iVar1 = *(int *)(puVar9 + 2);
      }
      puVar9 = (int32_t *)*puVar9;
    }
}

