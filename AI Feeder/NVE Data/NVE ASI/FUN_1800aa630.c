#include "FUN_1800aa630.h"
#include <stdint.h>
#include <stddef.h>

 FUN_1800aa630(param_2,puVar8,param_3 + -8);
  }
  else {
    lVar12 = lVar12 + 1 >> 3;
    FUN_1800aa630(param_2,param_2 + lVar12 * 8,param_2 + lVar12 * 0x10);
    FUN_1800aa630(puVar8 + lVar12 * -8,puVar8,puVar8 + lVar12 * 8);
    FUN_1800aa630(param_3 + lVar12 * -0x10 + -8,param_3 + lVar12 * -8 + -8,param_3 + -8);
    FUN_1800aa630(param_2 + lVar12 * 8,puVar8,param_3 + lVar12 * -8 + -8);
  }
  puVar13 = puVar8 + 8;
  puVar15 = puVar8;
  if (param_2 < puVar8) {
while( true ) {
      puVar11 = puVar15 + -8;
      local_88 = puVar8;
      if (7 < *(ulonglong *)(puVar15 + 6)) {
        local_88 = *(uint **)puVar8;
      }
      local_80 = *(int32_t *)(puVar15 + 4);
      iVar7 = FUN_1800aa740(puVar11,&local_88);
      if ((iVar7 != 0) && (iVar7 < 0)) break;
      local_78 = puVar11;
      if (7 < *(ulonglong *)(puVar15 + -2)) {
        local_78 = *(uint **)puVar11;
      }
      local_70 = *(int32_t *)(puVar15 + -4);
      iVar7 = FUN_1800aa740(puVar8,&local_78);
      if (((iVar7 != 0) && (iVar7 < 0)) ||
         (puVar8 = puVar8 + -8, puVar15 = puVar11, puVar8 <= param_2)) break;
    }
  }
}

void FUN_1800aa630(uint *param_1,uint *param_2,uint *param_3) {
int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int iVar6;
  uint *local_28;
  int32_t local_20;
  
  local_28 = param_1;
  if (7 < *(ulonglong *)(param_1 + 6)) {
    local_28 = *(uint **)param_1;
  }
  local_20 = *(int32_t *)(param_1 + 4);
  iVar6 = FUN_1800aa740(param_2,&local_28);
  if (((iVar6 != 0) && (iVar6 < 0)) && (param_2 != param_1)) {
    uVar1 = *(int32_t *)(param_1 + 2);
    uVar2 = *(int32_t *)param_2;
    uVar3 = *(int32_t *)(param_2 + 2);
    uVar4 = *(int32_t *)(param_2 + 4);
    uVar5 = *(int32_t *)(param_2 + 6);
    *(int32_t *)param_2 = *(int32_t *)param_1;
    *(int32_t *)(param_2 + 2) = uVar1;
    uVar1 = *(int32_t *)(param_1 + 6);
    *(int32_t *)(param_2 + 4) = *(int32_t *)(param_1 + 4);
    *(int32_t *)(param_2 + 6) = uVar1;
    *(int32_t *)param_1 = uVar2;
    *(int32_t *)(param_1 + 2) = uVar3;
    *(int32_t *)(param_1 + 4) = uVar4;
    *(int32_t *)(param_1 + 6) = uVar5;
  }
  local_28 = param_2;
  if (7 < *(ulonglong *)(param_2 + 6)) {
    local_28 = *(uint **)param_2;
  }
  local_20 = *(int32_t *)(param_2 + 4);
  iVar6 = FUN_1800aa740(param_3,&local_28);
  if ((iVar6 != 0) && (iVar6 < 0)) {
    if (param_3 != param_2) {
      uVar1 = *(int32_t *)(param_2 + 2);
      uVar2 = *(int32_t *)param_3;
      uVar3 = *(int32_t *)(param_3 + 2);
      uVar4 = *(int32_t *)(param_3 + 4);
      uVar5 = *(int32_t *)(param_3 + 6);
      *(int32_t *)param_3 = *(int32_t *)param_2;
      *(int32_t *)(param_3 + 2) = uVar1;
      uVar1 = *(int32_t *)(param_2 + 6);
      *(int32_t *)(param_3 + 4) = *(int32_t *)(param_2 + 4);
      *(int32_t *)(param_3 + 6) = uVar1;
      *(int32_t *)param_2 = uVar2;
      *(int32_t *)(param_2 + 2) = uVar3;
      *(int32_t *)(param_2 + 4) = uVar4;
      *(int32_t *)(param_2 + 6) = uVar5;
    }
    local_28 = param_1;
    if (7 < *(ulonglong *)(param_1 + 6)) {
      local_28 = *(uint **)param_1;
    }
    local_20 = *(int32_t *)(param_1 + 4);
    iVar6 = FUN_1800aa740(param_2,&local_28);
    if (((iVar6 != 0) && (iVar6 < 0)) && (param_2 != param_1)) {
      uVar1 = *(int32_t *)(param_1 + 2);
      uVar2 = *(int32_t *)param_2;
      uVar3 = *(int32_t *)(param_2 + 2);
      uVar4 = *(int32_t *)(param_2 + 4);
      uVar5 = *(int32_t *)(param_2 + 6);
      *(int32_t *)param_2 = *(int32_t *)param_1;
      *(int32_t *)(param_2 + 2) = uVar1;
      uVar1 = *(int32_t *)(param_1 + 6);
      *(int32_t *)(param_2 + 4) = *(int32_t *)(param_1 + 4);
      *(int32_t *)(param_2 + 6) = uVar1;
      *(int32_t *)param_1 = uVar2;
      *(int32_t *)(param_1 + 2) = uVar3;
      *(int32_t *)(param_1 + 4) = uVar4;
      *(int32_t *)(param_1 + 6) = uVar5;
    }
  }
  return;
}
}

