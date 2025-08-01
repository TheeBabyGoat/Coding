#include "FUN_1800e1d20.h"
#include <stdint.h>
#include <stddef.h>

int32_t * FUN_1800e1d20(int32_t param_1,int32_t *param_2,byte *param_3) {
int32_t *puVar1;
  int32_t *puVar2;
  code *pcVar3;
  ulonglong uVar4;
  int32_t *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int32_t *puVar9;
  ulonglong uVar10;
  float fVar11;
  
  uVar8 = (((((((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1])
                * 0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
              0x100000001b3 ^ (ulonglong)param_3[4]) * 0x100000001b3 ^ (ulonglong)param_3[5]) *
            0x100000001b3 ^ (ulonglong)param_3[6]) * 0x100000001b3 ^ (ulonglong)param_3[7]) *
          0x100000001b3;
  puVar5 = *(int32_t **)(DAT_1801fcab8 + 8 + (uVar8 & DAT_1801fcad0) * 0x10);
  puVar9 = DAT_1801fcaa8;
  if (puVar5 != DAT_1801fcaa8) {
    lVar6 = puVar5[2];
    puVar9 = puVar5;
    while( true ) {
      if (*(longlong *)param_3 == lVar6) {
        *param_2 = puVar9;
        *(int32_t *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar9 == *(int32_t **)(DAT_1801fcab8 + (uVar8 & DAT_1801fcad0) * 0x10)) break;
      puVar9 = (int32_t *)puVar9[1];
      lVar6 = puVar9[2];
    }
  }
  if (DAT_1801fcab0 == 0x7ffffffffffffff) {
    FUN_180123338(0x1801cc0f0);
    pcVar3 = (code *)swi(3);
    puVar5 = (int32_t *)(*pcVar3)();
    return puVar5;
  }
  puVar5 = (int32_t *)operator_new(0x20);
  puVar5[2] = *(int32_t *)param_3;
  *(int32_t *)(puVar5 + 3) = 0;
  uVar4 = DAT_1801fcad8;
  if (DAT_1801fcaa0 < (float)(DAT_1801fcab0 + 1) / (float)DAT_1801fcad8) {
    fVar11 = ceilf((float)(DAT_1801fcab0 + 1) / DAT_1801fcaa0);
    lVar6 = 0;
    if ((DAT_1801d8f34 <= fVar11) && (fVar11 = fVar11 - DAT_1801d8f34, fVar11 < DAT_1801d8f34)) {
      lVar6 = -0x8000000000000000;
    }
    uVar7 = 8;
    if (8 < (ulonglong)((longlong)fVar11 + lVar6)) {
      uVar7 = (longlong)fVar11 + lVar6;
    }
    uVar10 = uVar4;
    if ((uVar4 < uVar7) && ((0x1ff < uVar4 || (uVar10 = uVar4 * 8, uVar4 * 8 < uVar7)))) {
      uVar10 = uVar7;
    }
    FUN_1800e2020(uVar7,uVar10);
    puVar1 = *(int32_t **)(DAT_1801fcab8 + 8 + (DAT_1801fcad0 & uVar8) * 0x10);
    puVar9 = DAT_1801fcaa8;
    if (puVar1 != DAT_1801fcaa8) {
      lVar6 = puVar1[2];
      puVar9 = puVar1;
      while (puVar5[2] != lVar6) {
        if (puVar9 == *(int32_t **)(DAT_1801fcab8 + (DAT_1801fcad0 & uVar8) * 0x10))
        goto LAB_1800e1f99;
        puVar9 = (int32_t *)puVar9[1];
        lVar6 = puVar9[2];
      }
      puVar9 = (int32_t *)*puVar9;
    }
  }
LAB_1800e1f99:
  puVar1 = (int32_t *)puVar9[1];
  DAT_1801fcab0 = DAT_1801fcab0 + 1;
  *puVar5 = puVar9;
  puVar5[1] = puVar1;
  *puVar1 = puVar5;
  puVar9[1] = puVar5;
  lVar6 = DAT_1801fcab8;
  uVar8 = DAT_1801fcad0 & uVar8;
  puVar2 = *(int32_t **)(DAT_1801fcab8 + uVar8 * 0x10);
  if (puVar2 == DAT_1801fcaa8) {
    *(int32_t **)(DAT_1801fcab8 + uVar8 * 0x10) = puVar5;
  }
  else {
    if (puVar2 == puVar9) {
      *(int32_t **)(DAT_1801fcab8 + uVar8 * 0x10) = puVar5;
      goto LAB_1800e1ff8;
    }
    if (*(int32_t **)(DAT_1801fcab8 + 8 + uVar8 * 0x10) != puVar1) goto LAB_1800e1ff8;
  }
  *(int32_t **)(lVar6 + 8 + uVar8 * 0x10) = puVar5;
LAB_1800e1ff8:
  *param_2 = puVar5;
  *(int32_t *)(param_2 + 1) = 1;
  return param_2;
}
}

