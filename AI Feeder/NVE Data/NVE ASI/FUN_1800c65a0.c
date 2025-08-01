#include "FUN_1800c65a0.h"
#include <stdint.h>
#include <stddef.h>

 FUN_1800c65a0(param_1);
    puVar3 = *(int32_t **)
              (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar9) * 0x10);
    puVar10 = *(int32_t **)pfVar1;
    if (puVar3 != puVar10) {
iVar2 = *(int *)(puVar3 + 2);
      puVar10 = puVar3;
      while (*(int *)(puVar8 + 2) != iVar2) {
        if (puVar10 ==
            *(int32_t **)
             (*(longlong *)(param_1 + 6) + (*(ulonglong *)(param_1 + 0xc) & uVar9) * 0x10))
        goto LAB_1800c6338;
        puVar10 = (int32_t *)puVar10[1];
        iVar2 = *(int *)(puVar10 + 2);
      }
      puVar10 = (int32_t *)*puVar10;
    }
}

void FUN_1800c65a0(float *param_1) {
ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  float fVar5;
  
  uVar1 = *(ulonglong *)(param_1 + 0xe);
  fVar5 = ceilf((float)(*(longlong *)(param_1 + 4) + 1) / *param_1);
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
  FUN_1800c6660((longlong)param_1,uVar4);
  return;
}
}

 FUN_1800c65a0(param_1);
    puVar3 = *(int32_t **)
              (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar8) * 0x10);
    puVar9 = *(int32_t **)pfVar1;
    if (puVar3 != puVar9) {
iVar2 = *(int *)(puVar3 + 2);
      puVar9 = puVar3;
      while (*(int *)(puVar7 + 2) != iVar2) {
        if (puVar9 == *(int32_t **)
                       (*(longlong *)(param_1 + 6) + (*(ulonglong *)(param_1 + 0xc) & uVar8) * 0x10)
           ) goto LAB_1800ce991;
        puVar9 = (int32_t *)puVar9[1];
        iVar2 = *(int *)(puVar9 + 2);
      }
      puVar9 = (int32_t *)*puVar9;
    }
}

 FUN_1800c65a0(param_1);
    puVar3 = *(int32_t **)
              (*(longlong *)(param_1 + 6) + 8 + (uVar9 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    puVar8 = *(int32_t **)pfVar1;
    if (puVar3 != puVar8) {
iVar2 = *(int *)(puVar3 + 2);
      puVar8 = puVar3;
      while (*(int *)(puVar7 + 2) != iVar2) {
        if (puVar8 == *(int32_t **)
                       (*(longlong *)(param_1 + 6) + (uVar9 & *(ulonglong *)(param_1 + 0xc)) * 0x10)
           ) goto LAB_1800de061;
        puVar8 = (int32_t *)puVar8[1];
        iVar2 = *(int *)(puVar8 + 2);
      }
      puVar8 = (int32_t *)*puVar8;
    }
}

 FUN_1800c65a0((float *)&DAT_1801f7300);
    puVar2 = *(int32_t **)(DAT_1801f7318 + 8 + (DAT_1801f7330 & uVar8) * 0x10);
    puVar9 = DAT_1801f7308;
    if (puVar2 != DAT_1801f7308) {
iVar1 = *(int *)(puVar2 + 2);
      puVar9 = puVar2;
      while (*(int *)(puVar7 + 2) != iVar1) {
        if (puVar9 == *(int32_t **)(DAT_1801f7318 + (DAT_1801f7330 & uVar8) * 0x10))
        goto LAB_180116eec;
        puVar9 = (int32_t *)puVar9[1];
        iVar1 = *(int *)(puVar9 + 2);
      }
      puVar9 = (int32_t *)*puVar9;
    }
}

