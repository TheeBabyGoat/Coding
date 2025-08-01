#include "FUN_1800a9d30.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800a9d30(int32_t *param_1,uint *param_2,uint *param_3) {
ulonglong uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  longlong lVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  uint *local_88;
  int32_t local_80;
  uint *local_78;
  int32_t local_70;
  uint *local_68;
  int32_t *local_60;
  uint *local_58;
  int32_t local_50;
  uint *local_48;
  int32_t local_40;
  
  puVar8 = param_2 + ((longlong)param_3 - (longlong)param_2 >> 6) * 8;
  lVar12 = (longlong)param_3 + (-0x20 - (longlong)param_2) >> 5;
  local_68 = param_3;
  local_60 = param_1;
  if (lVar12 < 0x29) {
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
  puVar15 = puVar13;
  puVar11 = puVar8;
  if (puVar13 < param_3) {
    local_70 = *(int32_t *)(puVar8 + 4);
    uVar1 = *(ulonglong *)(puVar8 + 6);
    while( true ) {
      local_78 = puVar8;
      if (7 < uVar1) {
        local_78 = *(uint **)puVar8;
      }
      iVar7 = FUN_1800aa740(puVar13,&local_78);
      puVar15 = puVar13;
      if ((iVar7 != 0) && (iVar7 < 0)) break;
      local_88 = puVar13;
      if (7 < *(ulonglong *)(puVar13 + 6)) {
        local_88 = *(uint **)puVar13;
      }
      local_80 = *(int32_t *)(puVar13 + 4);
      iVar7 = FUN_1800aa740(puVar8,&local_88);
      if (((iVar7 != 0) && (iVar7 < 0)) ||
         (puVar13 = puVar13 + 8, puVar15 = puVar13, param_3 <= puVar13)) break;
    }
  }
joined_r0x0001800a9ed4:
  do {
    puVar9 = puVar11;
    puVar14 = puVar15;
    puVar15 = puVar8;
    if (param_3 <= puVar13) {
joined_r0x0001800a9f6f:
      for (; param_2 < puVar8; puVar8 = puVar8 + -8) {
        puVar11 = puVar15 + -8;
        local_58 = puVar9;
        if (7 < *(ulonglong *)(puVar9 + 6)) {
          local_58 = *(uint **)puVar9;
        }
        local_50 = *(int32_t *)(puVar9 + 4);
        iVar7 = FUN_1800aa740(puVar11,&local_58);
        if ((iVar7 == 0) || (puVar10 = puVar9, -1 < iVar7)) {
          local_48 = puVar11;
          if (7 < *(ulonglong *)(puVar15 + -2)) {
            local_48 = *(uint **)puVar11;
          }
          local_40 = *(int32_t *)(puVar15 + -4);
          iVar7 = FUN_1800aa740(puVar9,&local_48);
          if ((iVar7 != 0) && (param_3 = local_68, iVar7 < 0)) break;
          puVar10 = puVar9 + -8;
          if ((puVar9 + -8 != puVar11) && (puVar10 != puVar11)) {
            uVar2 = *(int32_t *)(puVar15 + -6);
            uVar3 = *(int32_t *)puVar10;
            uVar4 = *(int32_t *)(puVar9 + -6);
            uVar5 = *(int32_t *)(puVar9 + -4);
            uVar6 = *(int32_t *)(puVar9 + -2);
            *(int32_t *)puVar10 = *(int32_t *)puVar11;
            *(int32_t *)(puVar9 + -6) = uVar2;
            uVar2 = *(int32_t *)(puVar15 + -2);
            *(int32_t *)(puVar9 + -4) = *(int32_t *)(puVar15 + -4);
            *(int32_t *)(puVar9 + -2) = uVar2;
            *(int32_t *)puVar11 = uVar3;
            *(int32_t *)(puVar15 + -6) = uVar4;
            *(int32_t *)(puVar15 + -4) = uVar5;
            *(int32_t *)(puVar15 + -2) = uVar6;
          }
        }
        puVar9 = puVar10;
        param_3 = local_68;
        puVar15 = puVar11;
      }
      if (puVar8 == param_2) {
        if (puVar13 == param_3) {
          *local_60 = puVar9;
          local_60[1] = puVar14;
          return;
        }
        if ((puVar14 != puVar13) && (puVar9 != puVar14)) {
          uVar2 = *(int32_t *)(puVar14 + 2);
          uVar3 = *(int32_t *)puVar9;
          uVar4 = *(int32_t *)(puVar9 + 2);
          uVar5 = *(int32_t *)(puVar9 + 4);
          uVar6 = *(int32_t *)(puVar9 + 6);
          *(int32_t *)puVar9 = *(int32_t *)puVar14;
          *(int32_t *)(puVar9 + 2) = uVar2;
          uVar2 = *(int32_t *)(puVar14 + 6);
          *(int32_t *)(puVar9 + 4) = *(int32_t *)(puVar14 + 4);
          *(int32_t *)(puVar9 + 6) = uVar2;
          *(int32_t *)puVar14 = uVar3;
          *(int32_t *)(puVar14 + 2) = uVar4;
          *(int32_t *)(puVar14 + 4) = uVar5;
          *(int32_t *)(puVar14 + 6) = uVar6;
        }
        if (puVar9 != puVar13) {
          uVar2 = *(int32_t *)(puVar13 + 2);
          uVar3 = *(int32_t *)puVar9;
          uVar4 = *(int32_t *)(puVar9 + 2);
          uVar5 = *(int32_t *)(puVar9 + 4);
          uVar6 = *(int32_t *)(puVar9 + 6);
          *(int32_t *)puVar9 = *(int32_t *)puVar13;
          *(int32_t *)(puVar9 + 2) = uVar2;
          uVar2 = *(int32_t *)(puVar13 + 6);
          *(int32_t *)(puVar9 + 4) = *(int32_t *)(puVar13 + 4);
          *(int32_t *)(puVar9 + 6) = uVar2;
          *(int32_t *)puVar13 = uVar3;
          *(int32_t *)(puVar13 + 2) = uVar4;
          *(int32_t *)(puVar13 + 4) = uVar5;
          *(int32_t *)(puVar13 + 6) = uVar6;
        }
        puVar13 = puVar13 + 8;
        puVar15 = puVar14 + 8;
        puVar11 = puVar9 + 8;
      }
      else {
        puVar10 = puVar8 + -8;
        if (puVar13 == param_3) {
          puVar11 = puVar9 + -8;
          if (puVar10 != puVar11) {
            uVar2 = *(int32_t *)(puVar9 + -6);
            uVar3 = *(int32_t *)puVar10;
            uVar4 = *(int32_t *)(puVar8 + -6);
            uVar5 = *(int32_t *)(puVar8 + -4);
            uVar6 = *(int32_t *)(puVar8 + -2);
            *(int32_t *)puVar10 = *(int32_t *)puVar11;
            *(int32_t *)(puVar8 + -6) = uVar2;
            uVar2 = *(int32_t *)(puVar9 + -2);
            *(int32_t *)(puVar8 + -4) = *(int32_t *)(puVar9 + -4);
            *(int32_t *)(puVar8 + -2) = uVar2;
            *(int32_t *)puVar11 = uVar3;
            *(int32_t *)(puVar9 + -6) = uVar4;
            *(int32_t *)(puVar9 + -4) = uVar5;
            *(int32_t *)(puVar9 + -2) = uVar6;
          }
          puVar15 = puVar14 + -8;
          puVar8 = puVar10;
          if (puVar11 != puVar15) {
            uVar2 = *(int32_t *)(puVar14 + -6);
            uVar3 = *(int32_t *)puVar11;
            uVar4 = *(int32_t *)(puVar9 + -6);
            uVar5 = *(int32_t *)(puVar9 + -4);
            uVar6 = *(int32_t *)(puVar9 + -2);
            *(int32_t *)puVar11 = *(int32_t *)puVar15;
            *(int32_t *)(puVar9 + -6) = uVar2;
            uVar2 = *(int32_t *)(puVar14 + -2);
            *(int32_t *)(puVar9 + -4) = *(int32_t *)(puVar14 + -4);
            *(int32_t *)(puVar9 + -2) = uVar2;
            *(int32_t *)puVar15 = uVar3;
            *(int32_t *)(puVar14 + -6) = uVar4;
            *(int32_t *)(puVar14 + -4) = uVar5;
            *(int32_t *)(puVar14 + -2) = uVar6;
          }
        }
        else {
          if (puVar13 != puVar10) {
            uVar2 = *(int32_t *)(puVar8 + -6);
            uVar3 = *(int32_t *)puVar13;
            uVar4 = *(int32_t *)(puVar13 + 2);
            uVar5 = *(int32_t *)(puVar13 + 4);
            uVar6 = *(int32_t *)(puVar13 + 6);
            *(int32_t *)puVar13 = *(int32_t *)puVar10;
            *(int32_t *)(puVar13 + 2) = uVar2;
            uVar2 = *(int32_t *)(puVar8 + -2);
            *(int32_t *)(puVar13 + 4) = *(int32_t *)(puVar8 + -4);
            *(int32_t *)(puVar13 + 6) = uVar2;
            *(int32_t *)puVar10 = uVar3;
            *(int32_t *)(puVar8 + -6) = uVar4;
            *(int32_t *)(puVar8 + -4) = uVar5;
            *(int32_t *)(puVar8 + -2) = uVar6;
          }
          puVar13 = puVar13 + 8;
          puVar15 = puVar14;
          puVar8 = puVar10;
          puVar11 = puVar9;
        }
      }
      goto joined_r0x0001800a9ed4;
    }
    local_78 = puVar13;
    if (7 < *(ulonglong *)(puVar13 + 6)) {
      local_78 = *(uint **)puVar13;
    }
    local_70 = *(int32_t *)(puVar13 + 4);
    iVar7 = FUN_1800aa740(puVar9,&local_78);
    if ((iVar7 == 0) || (-1 < iVar7)) {
      local_88 = puVar9;
      if (7 < *(ulonglong *)(puVar9 + 6)) {
        local_88 = *(uint **)puVar9;
      }
      local_80 = *(int32_t *)(puVar9 + 4);
      iVar7 = FUN_1800aa740(puVar13,&local_88);
      if ((iVar7 != 0) && (iVar7 < 0)) goto joined_r0x0001800a9f6f;
      if (puVar14 != puVar13) {
        uVar2 = *(int32_t *)(puVar13 + 2);
        uVar3 = *(int32_t *)puVar14;
        uVar4 = *(int32_t *)(puVar14 + 2);
        uVar5 = *(int32_t *)(puVar14 + 4);
        uVar6 = *(int32_t *)(puVar14 + 6);
        *(int32_t *)puVar14 = *(int32_t *)puVar13;
        *(int32_t *)(puVar14 + 2) = uVar2;
        uVar2 = *(int32_t *)(puVar13 + 6);
        *(int32_t *)(puVar14 + 4) = *(int32_t *)(puVar13 + 4);
        *(int32_t *)(puVar14 + 6) = uVar2;
        *(int32_t *)puVar13 = uVar3;
        *(int32_t *)(puVar13 + 2) = uVar4;
        *(int32_t *)(puVar13 + 4) = uVar5;
        *(int32_t *)(puVar13 + 6) = uVar6;
      }
      puVar14 = puVar14 + 8;
    }
    puVar13 = puVar13 + 8;
    puVar15 = puVar14;
    puVar11 = puVar9;
  } while( true );
}
}

