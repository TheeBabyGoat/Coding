#include "FUN_1800ca060.h"
#include <stdint.h>
#include <stddef.h>

int32_t * FUN_1800ca060(float *param_1,int32_t *param_2,ulonglong *param_3) {
longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  int32_t *puVar4;
  code *pcVar5;
  ulonglong uVar6;
  int32_t *puVar7;
  longlong *plVar8;
  float fVar9;
  
  uVar6 = *param_3 >> 4;
  plVar1 = *(longlong **)
            (*(longlong *)(param_1 + 6) + 8 + (uVar6 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
  plVar8 = *(longlong **)(param_1 + 2);
  if (plVar1 != plVar8) {
    uVar2 = plVar1[2];
    while (*param_3 != uVar2) {
      plVar8 = plVar1;
      if (plVar1 == *(longlong **)
                     (*(longlong *)(param_1 + 6) + (uVar6 & *(ulonglong *)(param_1 + 0xc)) * 0x10))
      goto LAB_1800ca0f6;
      plVar1 = (longlong *)plVar1[1];
      uVar2 = plVar1[2];
    }
    plVar8 = (longlong *)*plVar1;
    if (plVar1 != (longlong *)0x0) {
      *param_2 = plVar1;
      *(int32_t *)(param_2 + 1) = 0;
      return param_2;
    }
  }
LAB_1800ca0f6:
  if (*(longlong *)(param_1 + 4) == 0x1c71c71c71c71c7) {
    FUN_180123338(0x1801cc0f0);
    pcVar5 = (code *)swi(3);
    puVar7 = (int32_t *)(*pcVar5)();
    return puVar7;
  }
  puVar7 = (int32_t *)operator_new(0x90);
  puVar7[2] = *param_3;
  *(int32_t *)((longlong)puVar7 + 0x1c) = 0;
  *(int32_t *)((longlong)puVar7 + 0x24) = 0;
  *(int32_t *)((longlong)puVar7 + 0x2c) = 0;
  *(int32_t *)((longlong)puVar7 + 0x34) = 0;
  *(int32_t *)((longlong)puVar7 + 0x3c) = 0;
  *(int32_t *)((longlong)puVar7 + 0x44) = 0;
  *(int32_t *)((longlong)puVar7 + 0x4c) = 0;
  *(int32_t *)((longlong)puVar7 + 0x54) = 0;
  *(int32_t *)((longlong)puVar7 + 0x5c) = 0;
  *(int32_t *)((longlong)puVar7 + 100) = 0;
  *(int32_t *)((longlong)puVar7 + 0x6c) = 0;
  *(int32_t *)((longlong)puVar7 + 0x74) = 0;
  *(int32_t *)((longlong)puVar7 + 0x7c) = 0;
  *(int32_t *)((longlong)puVar7 + 0x84) = 0;
  puVar7[3] = 0;
  puVar7[4] = 0;
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0x3f800000;
  puVar7[8] = 0;
  puVar7[9] = 0;
  puVar7[10] = 0;
  *(int32_t *)(puVar7 + 0xb) = 0;
  *(int32_t *)((longlong)puVar7 + 0x5c) = 0x3f800000;
  puVar7[0xc] = 0;
  puVar7[0xd] = 0;
  puVar7[0xe] = 0;
  *(int32_t *)(puVar7 + 0xf) = 0;
  puVar7[0x10] = 0xffffffffffffffff;
  puVar7[0x11] = 0xffffffffffffffff;
  fVar9 = (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe);
  if (*param_1 <= fVar9 && fVar9 != *param_1) {
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
LAB_1800ca27f:
  puVar4 = (int32_t *)plVar8[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar7 = plVar8;
  puVar7[1] = puVar4;
  *puVar4 = puVar7;
  plVar8[1] = (longlong)puVar7;
  uVar6 = *(ulonglong *)(param_1 + 0xc) & uVar6;
  lVar3 = *(longlong *)(param_1 + 6);
  plVar1 = *(longlong **)(lVar3 + uVar6 * 0x10);
  if (plVar1 == *(longlong **)(param_1 + 2)) {
    *(int32_t **)(lVar3 + uVar6 * 0x10) = puVar7;
  }
  else {
    if (plVar1 == plVar8) {
      *(int32_t **)(lVar3 + uVar6 * 0x10) = puVar7;
      goto LAB_1800ca2c8;
    }
    if (*(int32_t **)(lVar3 + 8 + uVar6 * 0x10) != puVar4) goto LAB_1800ca2c8;
  }
  *(int32_t **)(lVar3 + 8 + uVar6 * 0x10) = puVar7;
LAB_1800ca2c8:
  *param_2 = puVar7;
  *(int32_t *)(param_2 + 1) = 1;
  return param_2;
}
}

