#include "FUN_1800ca7d0.h"
#include <stdint.h>
#include <stddef.h>

 FUN_1800ca7d0(param_1);
    plVar1 = *(longlong **)
              (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar6) * 0x10);
    plVar8 = *(longlong **)(param_1 + 2);
    if (plVar1 != plVar8) {
lVar3 = plVar1[2];
      plVar8 = plVar1;
      while (puVar7[2] != lVar3) {
        if (plVar8 == *(longlong **)
                       (*(longlong *)(param_1 + 6) + (*(ulonglong *)(param_1 + 0xc) & uVar6) * 0x10)
           ) goto LAB_1800ca27f;
        plVar8 = (longlong *)plVar8[1];
        lVar3 = plVar8[2];
      }
      plVar8 = (longlong *)*plVar8;
    }
}

void FUN_1800ca7d0(float *param_1) {
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
  FUN_1800c9c40((longlong)param_1,uVar4);
  return;
}
}

 FUN_1800ca7d0(param_1);
    puVar1 = *(int32_t **)
              (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar8) * 0x10);
    puVar9 = *(int32_t **)(param_1 + 2);
    if (puVar1 != puVar9) {
lVar2 = puVar1[2];
      puVar9 = puVar1;
      while (puVar6[2] != lVar2) {
        if (puVar9 == *(int32_t **)
                       (*(longlong *)(param_1 + 6) + (*(ulonglong *)(param_1 + 0xc) & uVar8) * 0x10)
           ) goto LAB_1800cb086;
        puVar9 = (int32_t *)puVar9[1];
        lVar2 = puVar9[2];
      }
      puVar9 = (int32_t *)*puVar9;
    }
}

