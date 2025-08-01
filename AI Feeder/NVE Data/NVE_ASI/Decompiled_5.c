#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_1800a9d30 ----
void FUN_1800a9d30(int32_t *param_1,uint *param_2,uint *param_3)

{
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

// ---- Function: FUN_1800aa140 ----
int32_t * FUN_1800aa140(longlong *param_1,int32_t *param_2,int32_t *param_3)

{
  ulonglong uVar1;
  int32_t *puVar2;
  longlong lVar3;
  int32_t *puVar4;
  longlong *plVar5;
  LPVOID pvVar6;
  code *pcVar7;
  int32_t uVar8;
  longlong lVar9;
  void *pvVar10;
  int32_t *puVar11;
  int32_t *puVar12;
  ulonglong uVar13;
  LPVOID pvVar14;
  longlong *plVar15;
  ulonglong uVar16;
  int32_t *puVar17;
  
  lVar3 = *param_1;
  lVar9 = param_1[1] - lVar3 >> 5;
  if (lVar9 == 0x7ffffffffffffff) {
    FUN_1800aa480();
    pcVar7 = (code *)swi(3);
    puVar12 = (int32_t *)(*pcVar7)();
    return puVar12;
  }
  uVar1 = lVar9 + 1;
  uVar13 = param_1[2] - lVar3 >> 5;
  if (uVar13 <= 0x7ffffffffffffff - (uVar13 >> 1)) {
    uVar13 = (uVar13 >> 1) + uVar13;
    uVar16 = uVar1;
    if (uVar1 <= uVar13) {
      uVar16 = uVar13;
    }
    if (uVar16 < 0x800000000000000) {
      uVar13 = uVar16 * 0x20;
      if (uVar13 == 0) {
        puVar12 = (int32_t *)0x0;
      }
      else if (uVar13 < 0x1000) {
        puVar12 = (int32_t *)operator_new(uVar13);
      }
      else {
        if (uVar13 + 0x27 <= uVar13) goto LAB_1800aa3d7;
        pvVar10 = operator_new(uVar13 + 0x27);
        if (pvVar10 == (void *)0x0) {
          FUN_18012b7b4();
          pcVar7 = (code *)swi(3);
          puVar12 = (int32_t *)(*pcVar7)();
          return puVar12;
        }
        puVar12 = (int32_t *)((longlong)pvVar10 + 0x27U & 0xffffffffffffffe0);
        puVar12[-1] = pvVar10;
      }
      puVar2 = (int32_t *)(((longlong)param_2 - lVar3 & 0xffffffffffffffe0U) + (longlong)puVar12)
      ;
      FUN_1800b9f10(puVar2,param_3);
      puVar4 = (int32_t *)param_1[1];
      puVar11 = (int32_t *)*param_1;
      puVar17 = puVar12;
      if (param_2 == puVar4) {
        for (; puVar11 != puVar4; puVar11 = puVar11 + 4) {
          *puVar17 = 0;
          puVar17[1] = 0;
          puVar17[2] = 0;
          puVar17[3] = 0;
          uVar8 = puVar11[1];
          *puVar17 = *puVar11;
          puVar17[1] = uVar8;
          uVar8 = puVar11[3];
          puVar17[2] = puVar11[2];
          puVar17[3] = uVar8;
          *(int32_t *)puVar11 = 0;
          puVar11[2] = 0;
          puVar11[3] = 7;
          puVar17 = puVar17 + 4;
        }
      }
      else {
        for (; puVar11 != param_2; puVar11 = puVar11 + 4) {
          *puVar17 = 0;
          puVar17[1] = 0;
          puVar17[2] = 0;
          puVar17[3] = 0;
          uVar8 = puVar11[1];
          *puVar17 = *puVar11;
          puVar17[1] = uVar8;
          uVar8 = puVar11[3];
          puVar17[2] = puVar11[2];
          puVar17[3] = uVar8;
          *(int32_t *)puVar11 = 0;
          puVar11[2] = 0;
          puVar11[3] = 7;
          puVar17 = puVar17 + 4;
        }
        puVar4 = (int32_t *)param_1[1];
        puVar11 = puVar2;
        if (param_2 != puVar4) {
          do {
            puVar17 = puVar11 + 4;
            *puVar17 = 0;
            puVar11[5] = 0;
            puVar11[6] = 0;
            puVar11[7] = 0;
            uVar8 = param_2[1];
            *puVar17 = *param_2;
            puVar11[5] = uVar8;
            uVar8 = param_2[3];
            puVar11[6] = param_2[2];
            puVar11[7] = uVar8;
            *(int32_t *)param_2 = 0;
            param_2[2] = 0;
            param_2[3] = 7;
            param_2 = param_2 + 4;
            puVar11 = puVar17;
          } while (param_2 != puVar4);
        }
      }
      plVar15 = (longlong *)*param_1;
      if (plVar15 != (longlong *)0x0) {
        plVar5 = (longlong *)param_1[1];
        for (; plVar15 != plVar5; plVar15 = plVar15 + 4) {
          FUN_1800ba040(plVar15);
        }
        pvVar6 = (LPVOID)*param_1;
        pvVar14 = pvVar6;
        if ((0xfff < (param_1[2] - (longlong)pvVar6 & 0xffffffffffffffe0U)) &&
           (pvVar14 = *(LPVOID *)((longlong)pvVar6 + -8),
           0x1f < (ulonglong)((longlong)pvVar6 + (-8 - (longlong)pvVar14)))) {
          FUN_18012b7b4();
          goto LAB_1800aa3d7;
        }
        thunk_FUN_18012d5e8(pvVar14);
      }
      *param_1 = (longlong)puVar12;
      param_1[1] = (longlong)(puVar12 + uVar1 * 4);
      param_1[2] = (longlong)(puVar12 + uVar16 * 4);
      return puVar2;
    }
  }
LAB_1800aa3d7:
  FUN_1800ba8a0();
  pcVar7 = (code *)swi(3);
  puVar12 = (int32_t *)(*pcVar7)();
  return puVar12;
}

// ---- Function: FUN_1800aa3f0 ----
void FUN_1800aa3f0(longlong param_1)

{
  longlong *plVar1;
  LPVOID pvVar2;
  code *pcVar3;
  LPVOID pvVar4;
  longlong *plVar5;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  plVar1 = *(longlong **)(param_1 + 0x20);
  for (plVar5 = *(longlong **)(param_1 + 0x18); plVar5 != plVar1; plVar5 = plVar5 + 4) {
    FUN_1800ba040(plVar5);
  }
  pvVar2 = *(LPVOID *)(param_1 + 8);
  pvVar4 = pvVar2;
  if ((0xfff < (ulonglong)(*(longlong *)(param_1 + 0x10) << 5)) &&
     (pvVar4 = *(LPVOID *)((longlong)pvVar2 + -8),
     0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar4)))) {
    FUN_18012b7b4();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  thunk_FUN_18012d5e8(pvVar4);
  return;
}

// ---- Function: FUN_1800aa480 ----
void FUN_1800aa480(void)

{
  code *pcVar1;
  
  FUN_180123338(0x1801879f8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// ---- Function: FUN_1800aa4a0 ----
void FUN_1800aa4a0(longlong param_1,longlong param_2,ulonglong param_3,uint *param_4)

{
  int iVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  uint *local_38;
  int32_t local_30;
  
  lVar5 = (longlong)(param_3 - 1) >> 1;
  lVar4 = param_2;
  lVar3 = param_2;
  if (param_2 < lVar5) {
    do {
      puVar2 = (uint *)((lVar4 * 2 + 2) * 0x20 + param_1);
      local_38 = puVar2 + -8;
      if (7 < *(ulonglong *)(puVar2 + -2)) {
        local_38 = *(uint **)(puVar2 + -8);
      }
      local_30 = *(int32_t *)(puVar2 + -4);
      iVar1 = FUN_1800aa740(puVar2,&local_38);
      if ((iVar1 != 0) && (bVar6 = -1 < iVar1, iVar1 = 0xff, bVar6)) {
        iVar1 = 1;
      }
      lVar3 = lVar4 * 2 + ((longlong)(char)iVar1 >> 0x3f) + 2;
      FUN_1800b7d30((longlong *)(lVar4 * 0x20 + param_1),(longlong *)(lVar3 * 0x20 + param_1));
      lVar4 = lVar3;
    } while (lVar3 < lVar5);
  }
  if ((lVar3 == lVar5) && ((param_3 & 1) == 0)) {
    FUN_1800b7d30((longlong *)(lVar3 * 0x20 + param_1),
                  (longlong *)(param_1 + -0x20 + param_3 * 0x20));
    lVar3 = param_3 - 1;
  }
  while (param_2 < lVar3) {
    lVar4 = lVar3 + -1 >> 1;
    local_38 = param_4;
    if (7 < *(ulonglong *)(param_4 + 6)) {
      local_38 = *(uint **)param_4;
    }
    local_30 = *(int32_t *)(param_4 + 4);
    puVar2 = (uint *)(lVar4 * 0x20 + param_1);
    iVar1 = FUN_1800aa740(puVar2,&local_38);
    if ((iVar1 == 0) || (-1 < iVar1)) break;
    FUN_1800b7d30((longlong *)(lVar3 * 0x20 + param_1),(longlong *)puVar2);
    lVar3 = lVar4;
  }
  FUN_1800b7d30((longlong *)(lVar3 * 0x20 + param_1),(longlong *)param_4);
  return;
}

// ---- Function: FUN_1800aa630 ----
void FUN_1800aa630(uint *param_1,uint *param_2,uint *param_3)

{
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

// ---- Function: FUN_1800aa740 ----
int FUN_1800aa740(uint *param_1,int32_t *param_2)

{
  uint *puVar1;
  uint *puVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  ulonglong uVar8;
  uint *puVar9;
  int iVar10;
  uint *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  
  puVar9 = param_1;
  if (7 < *(ulonglong *)(param_1 + 6)) {
    puVar9 = *(uint **)param_1;
  }
  puVar1 = (uint *)((longlong)puVar9 + *(longlong *)(param_1 + 4) * 2);
  puVar6 = FUN_1800b7dd0(puVar9,puVar1);
  puVar11 = (uint *)*param_2;
  puVar2 = (uint *)((longlong)puVar11 + param_2[1] * 2);
  puVar7 = FUN_1800b7dd0(puVar11,puVar2);
  uVar12 = (longlong)puVar7 - (longlong)puVar11 >> 1;
  uVar13 = (longlong)puVar6 - (longlong)puVar9 >> 1;
  uVar8 = uVar13;
  if (uVar12 < uVar13) {
    uVar8 = uVar12;
  }
  if (uVar8 != 0) {
    lVar14 = (longlong)puVar9 - (longlong)puVar11;
    do {
      uVar3 = *(ushort *)((longlong)puVar11 + lVar14);
      if (uVar3 != (ushort)*puVar11) {
        if ((ushort)*puVar11 <= uVar3) {
          return 1;
        }
        return -1;
      }
      puVar11 = (uint *)((longlong)puVar11 + 2);
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  if (uVar13 < uVar12) {
    iVar5 = -1;
  }
  else {
    puVar9 = puVar6;
    if (uVar12 < uVar13) {
      iVar5 = 1;
    }
    else {
      for (; (puVar11 = puVar7, puVar9 != puVar1 &&
             (((short)*puVar9 == 0x5c || ((short)*puVar9 == 0x2f))));
          puVar9 = (uint *)((longlong)puVar9 + 2)) {
      }
      for (; (puVar11 != puVar2 && (((short)*puVar11 == 0x5c || ((short)*puVar11 == 0x2f))));
          puVar11 = (uint *)((longlong)puVar11 + 2)) {
      }
      iVar5 = (uint)(puVar6 != puVar9) - (uint)(puVar7 != puVar11);
      if (iVar5 == 0) {
        iVar5 = (uint)(puVar11 == puVar2) - (uint)(puVar9 == puVar1);
        while ((puVar9 != puVar1 && (iVar5 == 0))) {
          uVar3 = (ushort)*puVar9;
          if ((uVar3 == 0x5c) || (uVar3 == 0x2f)) {
            iVar5 = 1;
          }
          else {
            iVar5 = 0;
          }
          uVar4 = (ushort)*puVar11;
          if ((uVar4 == 0x5c) || (uVar4 == 0x2f)) {
            iVar10 = 1;
          }
          else {
            iVar10 = 0;
          }
          if (iVar10 - iVar5 != 0) {
            return iVar10 - iVar5;
          }
          if ((char)iVar5 == '\0') {
            if ((uint)uVar3 - (uint)uVar4 != 0) {
              return (uint)uVar3 - (uint)uVar4;
            }
            puVar9 = (uint *)((longlong)puVar9 + 2);
            puVar11 = (uint *)((longlong)puVar11 + 2);
          }
          else {
            do {
              puVar9 = (uint *)((longlong)puVar9 + 2);
              if (puVar9 == puVar1) break;
            } while ((*(short *)puVar9 == 0x5c) || (*(short *)puVar9 == 0x2f));
            do {
              puVar11 = (uint *)((longlong)puVar11 + 2);
              if (puVar11 == puVar2) break;
            } while ((*(short *)puVar11 == 0x5c) || (*(short *)puVar11 == 0x2f));
          }
          iVar5 = (uint)(puVar11 == puVar2) - (uint)(puVar9 == puVar1);
        }
      }
    }
  }
  return iVar5;
}

// ---- Function: FUN_1800aa960 ----
int32_t *
FUN_1800aa960(int32_t *param_1,ulonglong param_2,int32_t param_3,longlong param_4,
             int32_t param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int32_t *puVar4;
  code *pcVar5;
  void *pvVar6;
  int32_t *puVar7;
  __uint64 _Var8;
  longlong lVar9;
  ulonglong uVar10;
  int32_t *puVar11;
  ulonglong uVar12;
  int32_t *puVar13;
  
  lVar2 = param_1[2];
  uVar12 = 0x7ffffffffffffffe;
  if (0x7ffffffffffffffeU - lVar2 < param_2) {
    FUN_1800ba540();
    pcVar5 = (code *)swi(3);
    puVar7 = (int32_t *)(*pcVar5)();
    return puVar7;
  }
  uVar10 = lVar2 + param_2 | 7;
  uVar3 = param_1[3];
  puVar7 = (int32_t *)0x0;
  if ((uVar10 < 0x7fffffffffffffff) && (uVar3 <= 0x7ffffffffffffffe - (uVar3 >> 1))) {
    uVar1 = uVar3 + (uVar3 >> 1);
    uVar12 = uVar10;
    if (uVar10 < uVar1) {
      uVar12 = uVar1;
    }
    if (0x7fffffffffffffff < uVar12 + 1) goto LAB_1800aab00;
    _Var8 = (uVar12 + 1) * 2;
    if (_Var8 != 0) goto LAB_1800aaa07;
  }
  else {
    _Var8 = 0xfffffffffffffffe;
LAB_1800aaa07:
    if (_Var8 < 0x1000) {
      puVar7 = (int32_t *)operator_new(_Var8);
    }
    else {
      if (_Var8 + 0x27 <= _Var8) {
LAB_1800aab00:
        FUN_1800ba8a0();
        pcVar5 = (code *)swi(3);
        puVar7 = (int32_t *)(*pcVar5)();
        return puVar7;
      }
      pvVar6 = operator_new(_Var8 + 0x27);
      if (pvVar6 == (void *)0x0) goto LAB_1800aaafa;
      puVar7 = (int32_t *)((longlong)pvVar6 + 0x27U & 0xffffffffffffffe0);
      puVar7[-1] = pvVar6;
    }
  }
  param_1[3] = uVar12;
  uVar12 = lVar2 * 2;
  param_1[2] = lVar2 + param_2;
  puVar13 = (int32_t *)(uVar12 + (longlong)puVar7);
  if (uVar3 < 8) {
    FUN_180150fd0(puVar7,param_1,uVar12);
    lVar9 = param_4;
    if (param_4 != 0) {
      for (; lVar9 != 0; lVar9 = lVar9 + -1) {
        *puVar13 = param_5;
        puVar13 = puVar13 + 1;
      }
    }
    *(int32_t *)((longlong)puVar7 + (lVar2 + param_4) * 2) = 0;
  }
  else {
    puVar4 = (int32_t *)*param_1;
    FUN_180150fd0(puVar7,puVar4,uVar12);
    lVar9 = param_4;
    if (param_4 != 0) {
      for (; lVar9 != 0; lVar9 = lVar9 + -1) {
        *puVar13 = param_5;
        puVar13 = puVar13 + 1;
      }
    }
    *(int32_t *)((longlong)puVar7 + (lVar2 + param_4) * 2) = 0;
    puVar11 = puVar4;
    if ((0xfff < uVar3 * 2 + 2) &&
       (puVar11 = (int32_t *)puVar4[-1],
       0x1f < (ulonglong)((longlong)puVar4 + (-8 - (longlong)puVar11)))) {
LAB_1800aaafa:
      FUN_18012b7b4();
      pcVar5 = (code *)swi(3);
      puVar7 = (int32_t *)(*pcVar5)();
      return puVar7;
    }
    thunk_FUN_18012d5e8(puVar11);
  }
  *param_1 = puVar7;
  return param_1;
}

// ---- Function: FUN_1800aab10 ----
LPWSTR FUN_1800aab10(LPWSTR param_1,UINT param_2,int32_t *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  int iVar3;
  int32_t uVar4;
  LPWSTR pWVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  LPWSTR pWVar8;
  
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  param_1[4] = L'\0';
  param_1[5] = L'\0';
  param_1[6] = L'\0';
  param_1[7] = L'\0';
  param_1[8] = L'\0';
  param_1[9] = L'\0';
  param_1[10] = L'\0';
  param_1[0xb] = L'\0';
  param_1[0xc] = L'\a';
  param_1[0xd] = L'\0';
  param_1[0xe] = L'\0';
  param_1[0xf] = L'\0';
  *param_1 = L'\0';
  uVar1 = param_3[1];
  if (uVar1 != 0) {
    if (0x7fffffff < uVar1) {
      FUN_1800b8f90(0x16);
      pcVar2 = (code *)swi(3);
      pWVar5 = (LPWSTR)(*pcVar2)();
      return pWVar5;
    }
    uVar4 = __std_fs_convert_narrow_to_wide(param_2,(LPCSTR)*param_3,(int)uVar1,(LPWSTR)0x0,0);
    iVar3 = (int)((ulonglong)uVar4 >> 0x20);
    if (iVar3 != 0) {
      FUN_1800b9500(iVar3);
      pcVar2 = (code *)swi(3);
      pWVar5 = (LPWSTR)(*pcVar2)();
      return pWVar5;
    }
    uVar1 = *(ulonglong *)(param_1 + 8);
    uVar7 = (ulonglong)(int)uVar4;
    if (uVar1 < uVar7) {
      uVar6 = uVar7 - uVar1;
      if (*(ulonglong *)(param_1 + 0xc) - uVar1 < uVar6) {
        FUN_1800aa960((int32_t *)param_1,uVar6,(ulonglong)param_1 & 0xff,uVar6,0);
      }
      else {
        *(ulonglong *)(param_1 + 8) = uVar7;
        pWVar5 = param_1;
        if (7 < *(ulonglong *)(param_1 + 0xc)) {
          pWVar5 = *(LPWSTR *)param_1;
        }
        pWVar8 = pWVar5 + uVar1;
        if (uVar6 != 0) {
          for (; uVar6 != 0; uVar6 = uVar6 - 1) {
            *pWVar8 = L'\0';
            pWVar8 = pWVar8 + 1;
          }
        }
        pWVar5[uVar7] = L'\0';
      }
    }
    else {
      *(ulonglong *)(param_1 + 8) = uVar7;
      pWVar5 = param_1;
      if (7 < *(ulonglong *)(param_1 + 0xc)) {
        pWVar5 = *(LPWSTR *)param_1;
      }
      pWVar5[uVar7] = L'\0';
    }
    pWVar5 = param_1;
    if (7 < *(ulonglong *)(param_1 + 0xc)) {
      pWVar5 = *(LPWSTR *)param_1;
    }
    uVar4 = __std_fs_convert_narrow_to_wide
                      (param_2,(LPCSTR)*param_3,*(int *)(param_3 + 1),pWVar5,(int)uVar4);
    iVar3 = (int)((ulonglong)uVar4 >> 0x20);
    if (iVar3 != 0) {
      FUN_1800b9500(iVar3);
      pcVar2 = (code *)swi(3);
      pWVar5 = (LPWSTR)(*pcVar2)();
      return pWVar5;
    }
  }
  return param_1;
}

// ---- Function: FUN_1800aac80 ----
int32_t *** FUN_1800aac80(int32_t ***param_1,int32_t *param_2,ulonglong *param_3)

{
  int32_t **ppuVar1;
  ulonglong uVar2;
  ulonglong local_18;
  ulonglong uStack_10;
  
  local_18 = *param_3;
  uStack_10 = param_3[1];
  FUN_1800b8dc0(param_1,&local_18,param_2);
  *param_1 = (int32_t **)&PTR_FUN_1801879a0;
  param_1[5] = (int32_t **)0x0;
  param_1[6] = (int32_t **)0x0;
  param_1[7] = (int32_t **)0x0;
  param_1[8] = (int32_t **)0x7;
  *(int32_t *)(param_1 + 5) = 0;
  param_1[9] = (int32_t **)0x0;
  param_1[10] = (int32_t **)0x0;
  param_1[0xb] = (int32_t **)0x0;
  param_1[0xc] = (int32_t **)0x7;
  *(int32_t *)(param_1 + 9) = 0;
  ppuVar1 = (int32_t **)"Unknown exception";
  if (param_1[1] != (int32_t **)0x0) {
    ppuVar1 = param_1[1];
  }
  param_1[0xd] = (int32_t **)0x0;
  param_1[0xe] = (int32_t **)0x0;
  param_1[0xf] = (int32_t **)0x0;
  param_1[0x10] = (int32_t **)0x0;
  uVar2 = 0xffffffffffffffff;
  do {
    uVar2 = uVar2 + 1;
  } while (*(char *)((longlong)ppuVar1 + uVar2) != '\0');
  FUN_1800ba360(param_1 + 0xd,ppuVar1,uVar2);
  return param_1;
}

// ---- Function: FUN_1800aad20 ----
void FUN_1800aad20(int32_t param_1,int32_t param_2)

{
  code *pcVar1;
  ulonglong *puVar2;
  ulonglong local_d8;
  ulonglong uStack_d0;
  int32_t local_c8 [4];
  int32_t local_b8 [4];
  int32_t **local_98 [19];
  
  puVar2 = (ulonglong *)FUN_1800b94e0(local_c8,param_2);
  local_d8 = *puVar2;
  uStack_d0 = puVar2[1];
  FUN_1800ba470(local_b8,(int32_t *)"directory_iterator::operator++");
  FUN_1800aac80(local_98,local_b8,&local_d8);
  FUN_1801279a8((longlong *)local_98,&DAT_1801e8f98);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// ---- Function: FUN_1800aad80 ----
void FUN_1800aad80(int32_t *param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  int32_t uVar2;
  char cVar3;
  int32_t uVar4;
  code *pcVar5;
  short sVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  int32_t extraout_var;
  int32_t extraout_var_00;
  longlong lVar11;
  int32_t *puVar12;
  char *pcVar13;
  int32_t *puVar14;
  char *pcVar15;
  int32_t *puVar16;
  int32_t auStackY_158 [32];
  char *local_128;
  int32_t local_120;
  int32_t uStack_11c;
  int32_t uStack_118;
  int32_t uStack_114;
  longlong local_110;
  char local_108 [24];
  char local_f0 [24];
  char local_d8 [24];
  char local_c0 [24];
  char local_a8 [24];
  char local_90 [24];
  char local_78 [24];
  char local_60 [24];
  ulonglong local_48 [4];
  
  local_48[0] = DAT_1801eb080 ^ (ulonglong)auStackY_158;
  switch(*param_1) {
  case 0:
    *param_2 = *param_3;
    goto LAB_1800aae54;
  case 1:
    puVar12 = (int32_t *)*param_3;
    FUN_1800b5650((longlong *)&local_128,(int32_t *)local_c0,(int32_t *)local_a8,
                  *(uint *)(param_1 + 8),10);
    pcVar15 = local_128;
    for (pcVar13 = local_c0; pcVar13 != pcVar15; pcVar13 = pcVar13 + 1) {
      cVar3 = *pcVar13;
      if ((ulonglong)puVar12[3] < puVar12[2] + 1) {
        (**(code **)*puVar12)(puVar12);
      }
      *(char *)(puVar12[2] + puVar12[1]) = cVar3;
      puVar12[2] = puVar12[2] + 1;
    }
    break;
  case 2:
    puVar12 = (int32_t *)*param_3;
    FUN_1800b4050((longlong *)&local_128,(int32_t *)local_a8,(longlong)local_90,
                  (ulonglong)*(uint *)(param_1 + 8),10);
    pcVar15 = local_128;
    for (pcVar13 = local_a8; pcVar13 != pcVar15; pcVar13 = pcVar13 + 1) {
      cVar3 = *pcVar13;
      if ((ulonglong)puVar12[3] < puVar12[2] + 1) {
        (**(code **)*puVar12)(puVar12);
      }
      *(char *)(puVar12[1] + puVar12[2]) = cVar3;
      puVar12[2] = puVar12[2] + 1;
    }
    break;
  case 3:
    puVar12 = (int32_t *)*param_3;
    FUN_1800aca60((longlong *)&local_128,(int32_t *)local_90,(int32_t *)local_78,
                  *(ulonglong *)(param_1 + 8),10);
    pcVar15 = local_128;
    for (pcVar13 = local_90; pcVar13 != pcVar15; pcVar13 = pcVar13 + 1) {
      cVar3 = *pcVar13;
      if ((ulonglong)puVar12[3] < puVar12[2] + 1) {
        (**(code **)*puVar12)(puVar12);
      }
      *(char *)(puVar12[2] + puVar12[1]) = cVar3;
      puVar12[2] = puVar12[2] + 1;
    }
    break;
  case 4:
    puVar12 = (int32_t *)*param_3;
    FUN_1800b3370((longlong *)&local_128,(int32_t *)local_78,(longlong)local_60,
                  *(ulonglong *)(param_1 + 8),10);
    pcVar15 = local_128;
    for (pcVar13 = local_78; pcVar13 != pcVar15; pcVar13 = pcVar13 + 1) {
      cVar3 = *pcVar13;
      if ((ulonglong)puVar12[3] < puVar12[2] + 1) {
        (**(code **)*puVar12)(puVar12);
      }
      *(char *)(puVar12[1] + puVar12[2]) = cVar3;
      puVar12[2] = puVar12[2] + 1;
    }
    break;
  case 5:
    puVar12 = (int32_t *)*param_3;
    pcVar13 = "false";
    if (param_1[8] != '\0') {
      pcVar13 = "true";
    }
    cVar3 = *pcVar13;
    while (cVar3 != '\0') {
      cVar3 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      if ((ulonglong)puVar12[3] < puVar12[2] + 1) {
        (**(code **)*puVar12)(puVar12);
      }
      *(char *)(puVar12[2] + puVar12[1]) = cVar3;
      puVar12[2] = puVar12[2] + 1;
      cVar3 = *pcVar13;
    }
    break;
  case 6:
    puVar12 = (int32_t *)*param_3;
    uVar4 = param_1[8];
    if ((ulonglong)puVar12[3] < puVar12[2] + 1) {
      (**(code **)*puVar12)(puVar12);
    }
    *(int32_t *)(puVar12[1] + puVar12[2]) = uVar4;
    puVar12[2] = puVar12[2] + 1;
    break;
  case 7:
    uVar1 = *(uint *)(param_1 + 8);
    puVar12 = (int32_t *)*param_3;
    sVar6 = _fdclass(uVar1);
    if (sVar6 == 2) {
      uVar8 = FUN_18012d6a4(uVar1);
      if (uVar8 != 0) {
        local_108[0] = '-';
      }
      pcVar13 = local_108;
      if (uVar8 != 0) {
        pcVar13 = local_108 + 1;
      }
      *(short *)pcVar13 = (short)DAT_18018338c;
      pcVar15 = pcVar13 + 3;
      pcVar13[2] = (char)((uint)DAT_18018338c >> 0x10);
      if (pcVar15 == local_108) goto LAB_1800ab0c0;
    }
    else {
LAB_1800ab0c0:
      plVar10 = FUN_1800add90((longlong *)&local_128,local_108,local_f0,uVar1);
      pcVar15 = (char *)*plVar10;
    }
    for (pcVar13 = local_108; pcVar13 != pcVar15; pcVar13 = pcVar13 + 1) {
      cVar3 = *pcVar13;
      if ((ulonglong)puVar12[3] < puVar12[2] + 1) {
        (**(code **)*puVar12)(puVar12);
      }
      *(char *)(puVar12[1] + puVar12[2]) = cVar3;
      puVar12[2] = puVar12[2] + 1;
    }
    break;
  case 8:
    uVar2 = *(int32_t *)(param_1 + 8);
    puVar12 = (int32_t *)*param_3;
    sVar6 = _dclass(uVar2);
    if (sVar6 == 2) {
      uVar7 = FUN_18012d654(uVar2);
      iVar9 = (int)CONCAT62(extraout_var,uVar7);
      if (iVar9 != 0) {
        local_f0[0] = '-';
      }
      pcVar13 = local_f0;
      if (iVar9 != 0) {
        pcVar13 = local_f0 + 1;
      }
      *(short *)pcVar13 = (short)DAT_18018338c;
      pcVar13[2] = (char)((uint)DAT_18018338c >> 0x10);
      pcVar15 = pcVar13 + 3;
      if (pcVar13 + 3 == local_f0) goto LAB_1800ab17e;
    }
    else {
LAB_1800ab17e:
      FUN_1800b0670((longlong *)&local_128,(int32_t (*) [32])local_f0,
                    (int32_t (*) [32])local_d8);
      pcVar15 = local_128;
    }
    for (pcVar13 = local_f0; pcVar13 != pcVar15; pcVar13 = pcVar13 + 1) {
      cVar3 = *pcVar13;
      if ((ulonglong)puVar12[3] < puVar12[2] + 1) {
        (**(code **)*puVar12)(puVar12);
      }
      *(char *)(puVar12[1] + puVar12[2]) = cVar3;
      puVar12[2] = puVar12[2] + 1;
    }
    break;
  case 9:
    uVar2 = *(int32_t *)(param_1 + 8);
    puVar12 = (int32_t *)*param_3;
    sVar6 = _dclass(uVar2);
    if (sVar6 == 2) {
      uVar7 = FUN_18012d654(uVar2);
      iVar9 = (int)CONCAT62(extraout_var_00,uVar7);
      if (iVar9 != 0) {
        local_d8[0] = '-';
      }
      pcVar13 = local_d8;
      if (iVar9 != 0) {
        pcVar13 = local_d8 + 1;
      }
      *(short *)pcVar13 = (short)DAT_18018338c;
      pcVar13[2] = (char)((uint)DAT_18018338c >> 0x10);
      pcVar15 = pcVar13 + 3;
      if (pcVar13 + 3 == local_d8) goto LAB_1800ab23a;
    }
    else {
LAB_1800ab23a:
      FUN_1800b0670((longlong *)&local_128,(int32_t (*) [32])local_d8,
                    (int32_t (*) [32])local_c0);
      pcVar15 = local_128;
    }
    for (pcVar13 = local_d8; pcVar13 != pcVar15; pcVar13 = pcVar13 + 1) {
      cVar3 = *pcVar13;
      if ((ulonglong)puVar12[3] < puVar12[2] + 1) {
        (**(code **)*puVar12)(puVar12);
      }
      *(char *)(puVar12[1] + puVar12[2]) = cVar3;
      puVar12[2] = puVar12[2] + 1;
    }
    break;
  case 10:
    puVar12 = (int32_t *)*param_3;
    FUN_1800b3370((longlong *)&local_128,(int32_t *)local_60,(longlong)local_48,
                  *(ulonglong *)(param_1 + 8),0x10);
    if ((ulonglong)puVar12[3] < puVar12[2] + 1) {
      (**(code **)*puVar12)(puVar12);
    }
    *(int32_t *)(puVar12[2] + puVar12[1]) = 0x30;
    puVar12[2] = puVar12[2] + 1;
    if ((ulonglong)puVar12[3] < puVar12[2] + 1) {
      (**(code **)*puVar12)(puVar12);
    }
    pcVar15 = local_128;
    *(int32_t *)(puVar12[1] + puVar12[2]) = 0x78;
    lVar11 = puVar12[2] + 1;
    puVar12[2] = lVar11;
    for (pcVar13 = local_60; pcVar13 != pcVar15; pcVar13 = pcVar13 + 1) {
      cVar3 = *pcVar13;
      if ((ulonglong)puVar12[3] < lVar11 + 1U) {
        (**(code **)*puVar12)(puVar12);
      }
      *(char *)(puVar12[1] + puVar12[2]) = cVar3;
      puVar12[2] = puVar12[2] + 1;
      lVar11 = puVar12[2];
    }
    break;
  case 0xb:
    pcVar13 = *(char **)(param_1 + 8);
    puVar12 = (int32_t *)*param_3;
    if (pcVar13 == (char *)0x0) {
      FUN_1800b7ac0(0x180184f48);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    cVar3 = *pcVar13;
    while (cVar3 != '\0') {
      cVar3 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      if ((ulonglong)puVar12[3] < puVar12[2] + 1) {
        (**(code **)*puVar12)(puVar12);
      }
      *(char *)(puVar12[2] + puVar12[1]) = cVar3;
      puVar12[2] = puVar12[2] + 1;
      cVar3 = *pcVar13;
    }
    break;
  case 0xc:
    puVar14 = *(int32_t **)(param_1 + 8);
    puVar12 = (int32_t *)*param_3;
    puVar16 = puVar14 + *(longlong *)(param_1 + 0x10);
    for (; puVar14 != puVar16; puVar14 = puVar14 + 1) {
      uVar4 = *puVar14;
      if ((ulonglong)puVar12[3] < puVar12[2] + 1) {
        (**(code **)*puVar12)(puVar12);
      }
      *(int32_t *)(puVar12[1] + puVar12[2]) = uVar4;
      puVar12[2] = puVar12[2] + 1;
    }
    break;
  case 0xd:
    local_128 = (char *)*param_3;
    local_120 = (int32_t)param_3[1];
    uStack_11c = *(int32_t *)((longlong)param_3 + 0xc);
    uStack_118 = (int32_t)param_3[2];
    uStack_114 = *(int32_t *)((longlong)param_3 + 0x14);
    local_110 = param_3[3];
    (**(code **)(param_1 + 0x10))(param_3[4],&local_128,*(int32_t *)(param_1 + 8));
    *param_2 = (longlong)local_128;
    goto LAB_1800aae54;
  default:
    FUN_18012b7b4();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  *param_2 = (longlong)puVar12;
LAB_1800aae54:
  FUN_1801252c0(local_48[0] ^ (ulonglong)auStackY_158);
  return;
}

// ---- Function: FUN_1800ab4a0 ----
void FUN_1800ab4a0(void)

{
  code *pcVar1;
  
  FUN_1800b7ac0(0x180182e08);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// ---- Function: FUN_1800ab4c0 ----
void FUN_1800ab4c0(int32_t *param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  
  uVar2 = param_1[1];
  switch((uint)*param_1 & 0xff) {
  case 0:
    FUN_1800ab4a0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  case 1:
    if ((int)uVar2 < 0) {
LAB_1800ab530:
      FUN_1800b7ac0(0x180182e28);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar2 = (ulonglong)(int)uVar2;
    break;
  case 2:
    uVar2 = uVar2 & 0xffffffff;
    break;
  case 3:
    if ((longlong)uVar2 < 0) goto LAB_1800ab530;
    break;
  case 4:
    break;
  case 5:
    FUN_1800ab4a0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  case 6:
    FUN_1800ab4a0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  case 7:
    FUN_1800ab4a0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  case 8:
    FUN_1800ab4a0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  case 9:
    FUN_1800ab4a0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  case 10:
    FUN_1800ab4a0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  case 0xb:
    FUN_1800ab4a0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  case 0xc:
    FUN_1800ab4a0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  case 0xd:
    FUN_1800ab4a0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  default:
    FUN_18012b7b4();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (0x7fffffff < uVar2) {
    FUN_1800b7ac0(0x180182e70);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// ---- Function: FUN_1800ab5c0 ----
char * FUN_1800ab5c0(char *param_1,char *param_2,longlong *param_3)

{
  char cVar1;
  int32_t *puVar2;
  ulonglong uVar3;
  code *pcVar4;
  uint uVar5;
  int32_t uVar6;
  char *pcVar7;
  char local_48 [32];
  int32_t local_28 [4];
  
  cVar1 = *param_1;
  if ((cVar1 == '}') || (cVar1 == ':')) {
    puVar2 = (int32_t *)*param_3;
    uVar3 = *(ulonglong *)(puVar2[1] + 0x18);
    if ((longlong)uVar3 < 0) {
      FUN_1800b7ac0(0x180187868);
      pcVar4 = (code *)swi(3);
      pcVar7 = (char *)(*pcVar4)();
      return pcVar7;
    }
    *(ulonglong *)(puVar2[1] + 0x18) = uVar3 + 1;
    FUN_1800ab850(puVar2[2],(int32_t *)local_48,uVar3);
joined_r0x0001800ab6e1:
    if (local_48[0] != '\0') {
      uVar6 = FUN_1800ab4c0(local_28);
      *(int32_t *)*puVar2 = uVar6;
      return param_1;
    }
    FUN_1800b7ac0(0x180182e88);
    pcVar4 = (code *)swi(3);
    pcVar7 = (char *)(*pcVar4)();
    return pcVar7;
  }
  if ((byte)(cVar1 - 0x30U) < 10) {
    uVar5 = 0;
    if (cVar1 == '0') {
      param_1 = param_1 + 1;
    }
    else {
      do {
        if (0xccccccc < uVar5) goto LAB_1800ab70c;
        cVar1 = *param_1;
        param_1 = param_1 + 1;
        uVar5 = ((int)cVar1 + uVar5 * 10) - 0x30;
      } while (((param_1 != param_2) && ('/' < *param_1)) && (*param_1 < ':'));
      if (0x7fffffff < uVar5) {
LAB_1800ab70c:
        FUN_1800b7ac0(0x180187818);
        pcVar4 = (code *)swi(3);
        pcVar7 = (char *)(*pcVar4)();
        return pcVar7;
      }
    }
    if ((param_1 != param_2) && ((*param_1 == '}' || (*param_1 == ':')))) {
      puVar2 = (int32_t *)*param_3;
      if (0 < *(longlong *)(puVar2[1] + 0x18)) {
        FUN_1800b7ac0(0x180187830);
        pcVar4 = (code *)swi(3);
        pcVar7 = (char *)(*pcVar4)();
        return pcVar7;
      }
      *(int32_t *)(puVar2[1] + 0x18) = 0xffffffffffffffff;
      FUN_1800ab850(puVar2[2],(int32_t *)local_48,(ulonglong)uVar5);
      goto joined_r0x0001800ab6e1;
    }
  }
  FUN_1800b7ac0(0x1801878a0);
  pcVar4 = (code *)swi(3);
  pcVar7 = (char *)(*pcVar4)();
  return pcVar7;
}

// ---- Function: FUN_1800ab730 ----
void FUN_1800ab730(void)

{
  code *pcVar1;
  
  FUN_1800b7ac0(0x180182e38);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// ---- Function: FUN_1800ab750 ----
void FUN_1800ab750(int32_t *param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  
  uVar2 = param_1[1];
  switch((uint)*param_1 & 0xff) {
  case 0:
    FUN_1800ab730();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  case 1:
    if ((int)uVar2 < 0) {
LAB_1800ab7c0:
      FUN_1800b7ac0(0x180182e58);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar2 = (ulonglong)(int)uVar2;
    break;
  case 2:
    uVar2 = uVar2 & 0xffffffff;
    break;
  case 3:
    if ((longlong)uVar2 < 0) goto LAB_1800ab7c0;
    break;
  case 4:
    break;
  case 5:
    FUN_1800ab730();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  case 6:
    FUN_1800ab730();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  case 7:
    FUN_1800ab730();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  case 8:
    FUN_1800ab730();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  case 9:
    FUN_1800ab730();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  case 10:
    FUN_1800ab730();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  case 0xb:
    FUN_1800ab730();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  case 0xc:
    FUN_1800ab730();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  case 0xd:
    FUN_1800ab730();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  default:
    FUN_18012b7b4();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (0x7fffffff < uVar2) {
    FUN_1800b7ac0(0x180182e70);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

