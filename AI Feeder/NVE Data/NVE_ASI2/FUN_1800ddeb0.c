#include "FUN_1800ddeb0.h"
#include <stdint.h>
#include <stddef.h>

int32_t * FUN_1800ddeb0(float *param_1,int32_t *param_2,byte *param_3) {
float *pfVar1;
  int iVar2;
  int32_t *puVar3;
  longlong lVar4;
  int32_t *puVar5;
  code *pcVar6;
  int32_t *puVar7;
  int32_t *puVar8;
  ulonglong uVar9;
  float fVar10;
  
  uVar9 = (((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1]) *
            0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
          0x100000001b3;
  puVar7 = *(int32_t **)
            (*(longlong *)(param_1 + 6) + 8 + (uVar9 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
  pfVar1 = param_1 + 2;
  puVar8 = *(int32_t **)pfVar1;
  if (puVar7 != puVar8) {
    iVar2 = *(int *)(puVar7 + 2);
    puVar8 = puVar7;
    while( true ) {
      if (*(int *)param_3 == iVar2) {
        *param_2 = puVar8;
        *(int32_t *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar8 == *(int32_t **)
                     (*(longlong *)(param_1 + 6) + (uVar9 & *(ulonglong *)(param_1 + 0xc)) * 0x10))
      break;
      puVar8 = (int32_t *)puVar8[1];
      iVar2 = *(int *)(puVar8 + 2);
    }
  }
  if (*(longlong *)(param_1 + 4) == 0x7ffffffffffffff) {
    FUN_180123338(0x1801cc0f0);
    pcVar6 = (code *)swi(3);
    puVar7 = (int32_t *)(*pcVar6)();
    return puVar7;
  }
  puVar7 = (int32_t *)operator_new(0x20);
  *(int32_t *)(puVar7 + 2) = *(int32_t *)param_3;
  puVar7[3] = 0;
  fVar10 = (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe);
  if (*param_1 <= fVar10 && fVar10 != *param_1) {
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
LAB_1800de061:
  puVar3 = (int32_t *)puVar8[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar7 = puVar8;
  puVar7[1] = puVar3;
  *puVar3 = puVar7;
  puVar8[1] = puVar7;
  uVar9 = uVar9 & *(ulonglong *)(param_1 + 0xc);
  lVar4 = *(longlong *)(param_1 + 6);
  puVar5 = *(int32_t **)(lVar4 + uVar9 * 0x10);
  if (puVar5 == *(int32_t **)pfVar1) {
    *(int32_t **)(lVar4 + uVar9 * 0x10) = puVar7;
  }
  else {
    if (puVar5 == puVar8) {
      *(int32_t **)(lVar4 + uVar9 * 0x10) = puVar7;
      goto LAB_1800de0ae;
    }
    if (*(int32_t **)(lVar4 + 8 + uVar9 * 0x10) != puVar3) goto LAB_1800de0ae;
  }
  *(int32_t **)(lVar4 + 8 + uVar9 * 0x10) = puVar7;
LAB_1800de0ae:
  *param_2 = puVar7;
  *(int32_t *)(param_2 + 1) = 1;
  return param_2;
}
}

