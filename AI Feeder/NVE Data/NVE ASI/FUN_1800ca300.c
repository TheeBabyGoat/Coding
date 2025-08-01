#include "FUN_1800ca300.h"
#include <stdint.h>
#include <stddef.h>

int32_t * FUN_1800ca300(float *param_1,int32_t *param_2,ulonglong *param_3) {
longlong *plVar1;
  ulonglong uVar2;
  int32_t *puVar3;
  code *pcVar4;
  int32_t *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  float fVar11;
  
  uVar10 = *param_3 >> 4;
  plVar1 = *(longlong **)
            (*(longlong *)(param_1 + 6) + 8 + (uVar10 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
  plVar9 = *(longlong **)(param_1 + 2);
  if (plVar1 != plVar9) {
    uVar2 = plVar1[2];
    while (*param_3 != uVar2) {
      plVar9 = plVar1;
      if (plVar1 == *(longlong **)
                     (*(longlong *)(param_1 + 6) + (uVar10 & *(ulonglong *)(param_1 + 0xc)) * 0x10))
      goto LAB_1800ca38b;
      plVar1 = (longlong *)plVar1[1];
      uVar2 = plVar1[2];
    }
    plVar9 = (longlong *)*plVar1;
    if (plVar1 != (longlong *)0x0) {
      *param_2 = plVar1;
      *(int32_t *)(param_2 + 1) = 0;
      return param_2;
    }
  }
LAB_1800ca38b:
  if (*(longlong *)(param_1 + 4) == 0x1ffffffffffffff) {
    FUN_180123338(0x1801cc0f0);
    pcVar4 = (code *)swi(3);
    puVar5 = (int32_t *)(*pcVar4)();
    return puVar5;
  }
  puVar5 = (int32_t *)operator_new(0x80);
  puVar5[2] = *param_3;
  *(int32_t *)((longlong)puVar5 + 0x1c) = 0;
  *(int32_t *)((longlong)puVar5 + 0x24) = 0;
  *(int32_t *)((longlong)puVar5 + 0x2c) = 0;
  *(int32_t *)((longlong)puVar5 + 0x34) = 0;
  *(int32_t *)((longlong)puVar5 + 0x3c) = 0;
  *(int32_t *)((longlong)puVar5 + 0x44) = 0;
  *(int32_t *)((longlong)puVar5 + 0x4c) = 0;
  *(int32_t *)((longlong)puVar5 + 0x54) = 0;
  *(int32_t *)((longlong)puVar5 + 0x5c) = 0;
  *(int32_t *)((longlong)puVar5 + 100) = 0;
  *(int32_t *)((longlong)puVar5 + 0x6c) = 0;
  *(int32_t *)((longlong)puVar5 + 0x74) = 0;
  *(int32_t *)((longlong)puVar5 + 0x7c) = 0;
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0x3f800000;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[10] = 0;
  *(int32_t *)(puVar5 + 0xb) = 0;
  *(int32_t *)((longlong)puVar5 + 0x5c) = 0x3f800000;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0;
  *(int32_t *)(puVar5 + 0xf) = 0;
  uVar2 = *(ulonglong *)(param_1 + 0xe);
  fVar11 = (float)(*(longlong *)(param_1 + 4) + 1);
  if (*param_1 < fVar11 / (float)uVar2) {
    fVar11 = ceilf(fVar11 / *param_1);
    lVar6 = 0;
    if ((DAT_1801d8f34 <= fVar11) && (fVar11 = fVar11 - DAT_1801d8f34, fVar11 < DAT_1801d8f34)) {
      lVar6 = -0x8000000000000000;
    }
    uVar7 = 8;
    if (8 < (ulonglong)((longlong)fVar11 + lVar6)) {
      uVar7 = (longlong)fVar11 + lVar6;
    }
    uVar8 = uVar2;
    if ((uVar2 < uVar7) && ((0x1ff < uVar2 || (uVar8 = uVar2 * 8, uVar2 * 8 < uVar7)))) {
      uVar8 = uVar7;
    }
    FUN_1800c9c40((longlong)param_1,uVar8);
    plVar1 = *(longlong **)
              (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar10) * 0x10);
    plVar9 = *(longlong **)(param_1 + 2);
    if (plVar1 != plVar9) {
      lVar6 = plVar1[2];
      plVar9 = plVar1;
      while (puVar5[2] != lVar6) {
        if (plVar9 == *(longlong **)
                       (*(longlong *)(param_1 + 6) + (*(ulonglong *)(param_1 + 0xc) & uVar10) * 0x10
                       )) goto LAB_1800ca54a;
        plVar9 = (longlong *)plVar9[1];
        lVar6 = plVar9[2];
      }
      plVar9 = (longlong *)*plVar9;
    }
  }
LAB_1800ca54a:
  puVar3 = (int32_t *)plVar9[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar5 = plVar9;
  puVar5[1] = puVar3;
  *puVar3 = puVar5;
  plVar9[1] = (longlong)puVar5;
  uVar10 = uVar10 & *(ulonglong *)(param_1 + 0xc);
  lVar6 = *(longlong *)(param_1 + 6);
  plVar1 = *(longlong **)(lVar6 + uVar10 * 0x10);
  if (plVar1 == *(longlong **)(param_1 + 2)) {
    *(int32_t **)(lVar6 + uVar10 * 0x10) = puVar5;
  }
  else {
    if (plVar1 == plVar9) {
      *(int32_t **)(lVar6 + uVar10 * 0x10) = puVar5;
      goto LAB_1800ca597;
    }
    if (*(int32_t **)(lVar6 + 8 + uVar10 * 0x10) != puVar3) goto LAB_1800ca597;
  }
  *(int32_t **)(lVar6 + 8 + uVar10 * 0x10) = puVar5;
LAB_1800ca597:
  *param_2 = puVar5;
  *(int32_t *)(param_2 + 1) = 1;
  return param_2;
}
}

