#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_1800c9ae0 ----
void FUN_1800c9ae0(float *param_1,ulonglong param_2)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = ceilf((float)param_2 / *param_1);
  fVar1 = DAT_1801d8f34;
  lVar2 = 0;
  if ((DAT_1801d8f34 <= fVar5) && (fVar5 = fVar5 - DAT_1801d8f34, fVar5 < DAT_1801d8f34)) {
    lVar2 = -0x8000000000000000;
  }
  fVar6 = ceilf((float)*(ulonglong *)(param_1 + 4) / *param_1);
  lVar3 = 0;
  if ((fVar1 <= fVar6) && (fVar6 = fVar6 - fVar1, fVar6 < fVar1)) {
    lVar3 = -0x8000000000000000;
  }
  uVar4 = (longlong)fVar6 + lVar3;
  if ((ulonglong)((longlong)fVar6 + lVar3) < (ulonglong)((longlong)fVar5 + lVar2)) {
    uVar4 = (longlong)fVar5 + lVar2;
  }
  if (*(ulonglong *)(param_1 + 0xe) < uVar4) {
    FUN_1800c9c40((longlong)param_1,uVar4);
  }
  return;
}

// ---- Function: FUN_1800c9bd0 ----
void FUN_1800c9bd0(longlong *param_1)

{
  int32_t *puVar1;
  int32_t *puVar2;
  
  puVar1 = (int32_t *)*param_1;
  *(int32_t *)puVar1[1] = 0;
  puVar1 = (int32_t *)*puVar1;
  while (puVar1 != (int32_t *)0x0) {
    puVar2 = (int32_t *)*puVar1;
    FUN_1800cb100(puVar1 + 0xc);
    thunk_FUN_18012d5e8(puVar1);
    puVar1 = puVar2;
  }
  thunk_FUN_18012d5e8((LPVOID)*param_1);
  return;
}

// ---- Function: FUN_1800c9c40 ----
void FUN_1800c9c40(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  int32_t *puVar5;
  int32_t *puVar6;
  code *pcVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  int32_t *puVar11;
  
  for (lVar10 = 0x3f; 0xfffffffffffffffU >> lVar10 == 0; lVar10 = lVar10 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar10 & 0x3f)) < param_2) {
    FUN_180123338(0x1801cc110);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  plVar1 = *(longlong **)(param_1 + 8);
  uVar9 = param_2 - 1 | 1;
  lVar10 = 0x3f;
  if (uVar9 != 0) {
    for (; uVar9 >> lVar10 == 0; lVar10 = lVar10 + -1) {
    }
  }
  lVar10 = 1L << ((char)lVar10 + 1U & 0x3f);
  FUN_1800a9140((ulonglong *)(param_1 + 0x18),lVar10 * 2,plVar1);
  *(longlong *)(param_1 + 0x38) = lVar10;
  *(longlong *)(param_1 + 0x30) = lVar10 + -1;
  plVar8 = (longlong *)**(int32_t **)(param_1 + 8);
joined_r0x0001800c9cb5:
  do {
    while( true ) {
      while( true ) {
        if (plVar8 == plVar1) {
          return;
        }
        uVar9 = plVar8[2];
        plVar2 = (longlong *)*plVar8;
        puVar11 = (int32_t *)
                  ((uVar9 >> 4 & *(ulonglong *)(param_1 + 0x30)) * 0x10 +
                  *(longlong *)(param_1 + 0x18));
        if ((longlong *)*puVar11 != plVar1) break;
        *puVar11 = plVar8;
        puVar11[1] = plVar8;
        plVar8 = plVar2;
      }
      plVar3 = (longlong *)puVar11[1];
      if (uVar9 != plVar3[2]) break;
      plVar3 = (longlong *)*plVar3;
      if (plVar3 != plVar8) {
        plVar4 = (longlong *)plVar8[1];
        *plVar4 = (longlong)plVar2;
        puVar5 = (int32_t *)plVar2[1];
        *puVar5 = plVar3;
        puVar6 = (int32_t *)plVar3[1];
        *puVar6 = plVar8;
        plVar3[1] = (longlong)puVar5;
        plVar2[1] = (longlong)plVar4;
        plVar8[1] = (longlong)puVar6;
      }
      puVar11[1] = plVar8;
      plVar8 = plVar2;
    }
    do {
      if ((longlong *)*puVar11 == plVar3) {
        plVar4 = (longlong *)plVar8[1];
        *plVar4 = (longlong)plVar2;
        puVar5 = (int32_t *)plVar2[1];
        *puVar5 = plVar3;
        puVar6 = (int32_t *)plVar3[1];
        *puVar6 = plVar8;
        plVar3[1] = (longlong)puVar5;
        plVar2[1] = (longlong)plVar4;
        plVar8[1] = (longlong)puVar6;
        *puVar11 = plVar8;
        plVar8 = plVar2;
        goto joined_r0x0001800c9cb5;
      }
      plVar3 = (longlong *)plVar3[1];
    } while (uVar9 != plVar3[2]);
    lVar10 = *plVar3;
    plVar3 = (longlong *)plVar8[1];
    *plVar3 = (longlong)plVar2;
    plVar4 = (longlong *)plVar2[1];
    *plVar4 = lVar10;
    puVar11 = *(int32_t **)(lVar10 + 8);
    *puVar11 = plVar8;
    *(longlong **)(lVar10 + 8) = plVar4;
    plVar2[1] = (longlong)plVar3;
    plVar8[1] = (longlong)puVar11;
    plVar8 = plVar2;
  } while( true );
}

// ---- Function: FUN_1800c9e80 ----
int32_t * FUN_1800c9e80(longlong *param_1)

{
  int32_t *puVar1;
  int32_t uVar2;
  LPVOID pvVar3;
  code *pcVar4;
  int32_t *puVar5;
  void *pvVar6;
  int32_t *puVar7;
  longlong lVar8;
  LPVOID pvVar9;
  
  puVar5 = (int32_t *)operator_new(0x60);
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  *(int32_t *)(puVar5 + 4) = 0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  pvVar6 = operator_new(0x90);
  *(void **)pvVar6 = pvVar6;
  *(void **)((longlong)pvVar6 + 8) = pvVar6;
  puVar5[5] = pvVar6;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[10] = 7;
  puVar5[0xb] = 8;
  *(int32_t *)(puVar5 + 4) = 0x3f800000;
  uVar2 = puVar5[5];
  puVar7 = (int32_t *)operator_new(0x80);
  pvVar3 = (LPVOID)puVar5[7];
  lVar8 = puVar5[9] - (longlong)pvVar3 >> 3;
  if (lVar8 != 0) {
    pvVar9 = pvVar3;
    if ((0xfff < (ulonglong)(lVar8 * 8)) &&
       (pvVar9 = *(LPVOID *)((longlong)pvVar3 + -8),
       0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar9)))) {
      FUN_18012b7b4();
      pcVar4 = (code *)swi(3);
      puVar7 = (int32_t *)(*pcVar4)();
      return puVar7;
    }
    thunk_FUN_18012d5e8(pvVar9);
  }
  puVar5[7] = puVar7;
  puVar1 = puVar7 + 0x10;
  puVar5[8] = puVar1;
  puVar5[9] = puVar1;
  for (; puVar7 != puVar1; puVar7 = puVar7 + 1) {
    *puVar7 = uVar2;
  }
  (**(code **)(*param_1 + 0x10))(param_1,&DAT_1801cc1e0,puVar5);
  return puVar5;
}

// ---- Function: FUN_1800ca000 ----
void FUN_1800ca000(longlong *param_1)

{
  LPVOID local_res8;
  
  (**(code **)(*param_1 + 8))(param_1,&DAT_1801cc1d0,&local_res8);
  if (local_res8 != (LPVOID)0x0) {
    FUN_1800c76d0((longlong)local_res8 + 0x28);
    thunk_FUN_18012d5e8(local_res8);
  }
  (**(code **)(*param_1 + 0x10))(param_1,&DAT_1801cc1d0,0);
  return;
}

// ---- Function: FUN_1800ca060 ----
int32_t * FUN_1800ca060(float *param_1,int32_t *param_2,ulonglong *param_3)

{
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

// ---- Function: FUN_1800ca300 ----
int32_t * FUN_1800ca300(float *param_1,int32_t *param_2,ulonglong *param_3)

{
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

// ---- Function: FUN_1800ca5d0 ----
void FUN_1800ca5d0(ulonglong *param_1,int32_t *param_2,ulonglong param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int32_t *puVar4;
  int32_t *puVar5;
  
  puVar5 = (int32_t *)*param_1;
  uVar2 = (longlong)(param_1[2] - (longlong)puVar5) / 0x28;
  if (uVar2 < param_3) {
    if (0x666666666666666 < param_3) {
      FUN_1800aa480();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar3 = 0x666666666666666;
    if ((uVar2 <= 0x666666666666666 - (uVar2 >> 1)) &&
       (uVar3 = uVar2 + (uVar2 >> 1), uVar3 < param_3)) {
      uVar3 = param_3;
    }
    if (puVar5 != (int32_t *)0x0) {
      puVar4 = puVar5;
      if ((0xfff < uVar2 * 0x28) &&
         (puVar4 = (int32_t *)puVar5[-1],
         0x1f < (ulonglong)((longlong)puVar5 + (-8 - (longlong)puVar4)))) {
        FUN_18012b7b4();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      thunk_FUN_18012d5e8(puVar4);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    FUN_1800ca8d0(param_1,uVar3);
    puVar5 = (int32_t *)*param_1;
    uVar2 = param_3 * 0x28;
    FUN_180150fd0(puVar5,param_2,uVar2);
  }
  else {
    uVar2 = (longlong)(param_1[1] - (longlong)puVar5) / 0x28;
    if (uVar2 < param_3) {
      FUN_180150fd0(puVar5,param_2,uVar2 * 0x28);
      puVar5 = (int32_t *)param_1[1];
      param_2 = param_2 + uVar2 * 5;
      param_3 = param_3 - uVar2;
    }
    uVar2 = param_3 * 0x28;
    FUN_180150fd0(puVar5,param_2,uVar2);
  }
  param_1[1] = uVar2 + (longlong)puVar5;
  return;
}

// ---- Function: FUN_1800ca750 ----
void FUN_1800ca750(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1800cb100((longlong *)(*(longlong *)(param_1 + 8) + 0x60));
  }
  if (*(LPVOID *)(param_1 + 8) != (LPVOID)0x0) {
    thunk_FUN_18012d5e8(*(LPVOID *)(param_1 + 8));
    return;
  }
  return;
}

// ---- Function: FUN_1800ca790 ----
void FUN_1800ca790(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1800cb100((longlong *)(*(longlong *)(param_1 + 8) + 0x60));
  }
  if (*(LPVOID *)(param_1 + 8) != (LPVOID)0x0) {
    thunk_FUN_18012d5e8(*(LPVOID *)(param_1 + 8));
    return;
  }
  return;
}

// ---- Function: FUN_1800ca7d0 ----
void FUN_1800ca7d0(float *param_1)

{
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

// ---- Function: FUN_1800ca8d0 ----
void FUN_1800ca8d0(ulonglong *param_1,ulonglong param_2)

{
  code *pcVar1;
  void *pvVar2;
  void *pvVar3;
  ulonglong uVar4;
  
  if (param_2 < 0x666666666666667) {
    uVar4 = param_2 * 0x28;
    if (uVar4 == 0) {
      pvVar3 = (void *)0x0;
    }
    else if (uVar4 < 0x1000) {
      pvVar3 = operator_new(uVar4);
    }
    else {
      if (uVar4 + 0x27 <= uVar4) goto LAB_1800ca94b;
      pvVar2 = operator_new(uVar4 + 0x27);
      if (pvVar2 == (void *)0x0) {
        FUN_18012b7b4();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pvVar3 = (void *)((longlong)pvVar2 + 0x27U & 0xffffffffffffffe0);
      *(void **)((longlong)pvVar3 - 8) = pvVar2;
    }
    *param_1 = (ulonglong)pvVar3;
    param_1[1] = (ulonglong)pvVar3;
    param_1[2] = (ulonglong)((longlong)pvVar3 + uVar4);
    return;
  }
LAB_1800ca94b:
  FUN_1800ba8a0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// ---- Function: FUN_1800ca960 ----
void FUN_1800ca960(longlong *param_1,int32_t *param_2,int32_t *param_3,ulonglong param_4)

{
  int32_t *puVar1;
  LPVOID pvVar2;
  code *pcVar3;
  longlong lVar4;
  void *pvVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int32_t *puVar8;
  int32_t *puVar9;
  ulonglong uVar10;
  int32_t *puVar11;
  LPVOID pvVar12;
  ulonglong uVar13;
  
  if (param_4 != 0) {
    puVar9 = (int32_t *)*param_1;
    puVar1 = (int32_t *)param_1[1];
    if (param_4 <= (ulonglong)((param_1[2] - (longlong)puVar1) / 0x28)) {
      uVar6 = ((longlong)puVar1 - (longlong)param_2) / 0x28;
      uVar10 = param_4 * 0x28;
      if (param_4 < uVar6) {
        FUN_180150fd0(puVar1,puVar1 + param_4 * -5,uVar10);
        param_1[1] = (longlong)(puVar1 + ((longlong)uVar10 / 0x28) * 5);
        uVar6 = (longlong)(puVar1 + param_4 * -5) - (longlong)param_2;
        FUN_180150fd0((int32_t *)((longlong)puVar1 - uVar6),param_2,uVar6);
        FUN_180150fd0(param_2,param_3,uVar10);
        return;
      }
      FUN_180150fd0(param_2 + param_4 * 5,param_2,(longlong)puVar1 - (longlong)param_2);
      param_1[1] = (longlong)(param_2 + param_4 * 5 + uVar6 * 5);
      FUN_180150fd0(param_2,param_3,uVar10);
      return;
    }
    uVar6 = (longlong)puVar1 - (longlong)puVar9;
    if (0x666666666666666U - (longlong)uVar6 / 0x28 < param_4) {
      FUN_1800aa480();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar10 = (longlong)uVar6 / 0x28 + param_4;
    uVar13 = (param_1[2] - (longlong)puVar9) / 0x28;
    if (0x666666666666666 - (uVar13 >> 1) < uVar13) {
LAB_1800cac68:
      FUN_1800ba8a0();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar13 = (uVar13 >> 1) + uVar13;
    uVar7 = uVar10;
    if (uVar10 <= uVar13) {
      uVar7 = uVar13;
    }
    if (0x666666666666666 < uVar7) goto LAB_1800cac68;
    uVar13 = uVar7 * 0x28;
    if (uVar13 == 0) {
      puVar11 = (int32_t *)0x0;
    }
    else if (uVar13 < 0x1000) {
      puVar11 = (int32_t *)operator_new(uVar13);
    }
    else {
      if (uVar13 + 0x27 <= uVar13) goto LAB_1800cac68;
      pvVar5 = operator_new(uVar13 + 0x27);
      if (pvVar5 == (void *)0x0) goto LAB_1800cac74;
      puVar11 = (int32_t *)((longlong)pvVar5 + 0x27U & 0xffffffffffffffe0);
      puVar11[-1] = pvVar5;
    }
    lVar4 = ((longlong)param_2 - (longlong)puVar9) / 0x28;
    FUN_180150fd0(puVar11 + lVar4 * 5,param_3,param_4 * 0x28);
    if ((param_4 != 1) || (puVar8 = puVar11, param_2 != puVar1)) {
      FUN_180150fd0(puVar11,puVar9,(longlong)param_2 - (longlong)puVar9);
      uVar6 = (longlong)puVar1 - (longlong)param_2;
      puVar8 = puVar11 + (lVar4 + param_4) * 5;
      puVar9 = param_2;
    }
    FUN_180150fd0(puVar8,puVar9,uVar6);
    pvVar2 = (LPVOID)*param_1;
    if (pvVar2 != (LPVOID)0x0) {
      pvVar12 = pvVar2;
      if ((0xfff < (ulonglong)(((param_1[2] - (longlong)pvVar2) / 0x28) * 0x28)) &&
         (pvVar12 = *(LPVOID *)((longlong)pvVar2 + -8),
         0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar12)))) {
LAB_1800cac74:
        FUN_18012b7b4();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      thunk_FUN_18012d5e8(pvVar12);
    }
    *param_1 = (longlong)puVar11;
    param_1[1] = (longlong)(puVar11 + uVar10 * 5);
    param_1[2] = (longlong)(puVar11 + uVar7 * 5);
  }
  return;
}

// ---- Function: FUN_1800cac80 ----
int32_t * FUN_1800cac80(longlong *param_1,int32_t *param_2,int32_t *param_3)

{
  ulonglong uVar1;
  int32_t *puVar2;
  longlong lVar3;
  int32_t *puVar4;
  LPVOID pvVar5;
  code *pcVar6;
  longlong lVar7;
  void *pvVar8;
  int32_t *puVar9;
  ulonglong uVar10;
  int32_t *puVar11;
  LPVOID pvVar12;
  ulonglong uVar13;
  
  lVar3 = *param_1;
  lVar7 = param_1[1] - lVar3 >> 3;
  if (lVar7 == 0x1fffffffffffffff) {
    FUN_1800aa480();
    pcVar6 = (code *)swi(3);
    puVar9 = (int32_t *)(*pcVar6)();
    return puVar9;
  }
  uVar10 = param_1[2] - lVar3 >> 3;
  uVar1 = lVar7 + 1;
  if (0x1fffffffffffffff - (uVar10 >> 1) < uVar10) {
LAB_1800cae13:
    FUN_1800ba8a0();
    pcVar6 = (code *)swi(3);
    puVar9 = (int32_t *)(*pcVar6)();
    return puVar9;
  }
  uVar10 = (uVar10 >> 1) + uVar10;
  uVar13 = uVar1;
  if (uVar1 <= uVar10) {
    uVar13 = uVar10;
  }
  if (0x1fffffffffffffff < uVar13) goto LAB_1800cae13;
  uVar10 = uVar13 * 8;
  if (uVar10 == 0) {
    puVar9 = (int32_t *)0x0;
  }
  else if (uVar10 < 0x1000) {
    puVar9 = (int32_t *)operator_new(uVar10);
  }
  else {
    if (uVar10 + 0x27 <= uVar10) goto LAB_1800cae13;
    pvVar8 = operator_new(uVar10 + 0x27);
    if (pvVar8 == (void *)0x0) goto LAB_1800cae0d;
    puVar9 = (int32_t *)((longlong)pvVar8 + 0x27U & 0xffffffffffffffe0);
    puVar9[-1] = pvVar8;
  }
  puVar2 = puVar9 + ((longlong)param_2 - lVar3 >> 3);
  *puVar2 = *param_3;
  puVar4 = (int32_t *)*param_1;
  if (param_2 == (int32_t *)param_1[1]) {
    uVar10 = param_1[1] - (longlong)puVar4;
    puVar11 = puVar9;
    param_2 = puVar4;
  }
  else {
    FUN_180150fd0(puVar9,puVar4,(longlong)param_2 - (longlong)puVar4);
    puVar11 = puVar2 + 1;
    uVar10 = param_1[1] - (longlong)param_2;
  }
  FUN_180150fd0(puVar11,param_2,uVar10);
  pvVar5 = (LPVOID)*param_1;
  if (pvVar5 != (LPVOID)0x0) {
    pvVar12 = pvVar5;
    if ((0xfff < (param_1[2] - (longlong)pvVar5 & 0xfffffffffffffff8U)) &&
       (pvVar12 = *(LPVOID *)((longlong)pvVar5 + -8),
       0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)pvVar12)))) {
LAB_1800cae0d:
      FUN_18012b7b4();
      pcVar6 = (code *)swi(3);
      puVar9 = (int32_t *)(*pcVar6)();
      return puVar9;
    }
    thunk_FUN_18012d5e8(pvVar12);
  }
  *param_1 = (longlong)puVar9;
  param_1[1] = (longlong)(puVar9 + uVar1);
  param_1[2] = (longlong)(puVar9 + uVar13);
  return puVar2;
}

// ---- Function: FUN_1800cae20 ----
int32_t * FUN_1800cae20(float *param_1,int32_t *param_2,ulonglong *param_3)

{
  int32_t *puVar1;
  longlong lVar2;
  int32_t *puVar3;
  code *pcVar4;
  int32_t uVar5;
  int32_t *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int32_t *puVar9;
  float fVar10;
  
  uVar8 = *param_3 >> 4;
  puVar6 = *(int32_t **)
            (*(longlong *)(param_1 + 6) + 8 + (uVar8 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
  puVar9 = *(int32_t **)(param_1 + 2);
  if (puVar6 != puVar9) {
    uVar7 = puVar6[2];
    puVar9 = puVar6;
    while( true ) {
      if (*param_3 == uVar7) {
        *param_2 = puVar9;
        *(int32_t *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar9 == *(int32_t **)
                     (*(longlong *)(param_1 + 6) + (uVar8 & *(ulonglong *)(param_1 + 0xc)) * 0x10))
      break;
      puVar9 = (int32_t *)puVar9[1];
      uVar7 = puVar9[2];
    }
  }
  if (*(longlong *)(param_1 + 4) == 0x1c71c71c71c71c7) {
LAB_1800cb0e8:
    FUN_180123338(0x1801cc0f0);
    pcVar4 = (code *)swi(3);
    puVar6 = (int32_t *)(*pcVar4)();
    return puVar6;
  }
  puVar6 = (int32_t *)operator_new(0x90);
  puVar6[2] = *param_3;
  uVar7 = param_3[2];
  puVar6[3] = param_3[1];
  puVar6[4] = uVar7;
  uVar7 = param_3[4];
  puVar6[5] = param_3[3];
  puVar6[6] = uVar7;
  *(int *)(puVar6 + 7) = (int)param_3[5];
  uVar5 = *(int32_t *)((longlong)param_3 + 0x34);
  *(int32_t *)((longlong)puVar6 + 0x3c) = *(int32_t *)((longlong)param_3 + 0x2c);
  *(int32_t *)((longlong)puVar6 + 0x44) = uVar5;
  uVar5 = *(int32_t *)((longlong)param_3 + 0x44);
  *(int32_t *)((longlong)puVar6 + 0x4c) = *(int32_t *)((longlong)param_3 + 0x3c);
  *(int32_t *)((longlong)puVar6 + 0x54) = uVar5;
  *(int32_t *)((longlong)puVar6 + 0x5c) = *(int32_t *)((longlong)param_3 + 0x4c);
  puVar6[0xc] = 0;
  puVar6[0xd] = 0;
  puVar6[0xe] = 0;
  uVar7 = (longlong)(param_3[0xb] - param_3[10]) / 0x28;
  if (uVar7 != 0) {
    if (0x666666666666666 < uVar7) {
      FUN_1800aa480();
      goto LAB_1800cb0e8;
    }
    FUN_1800ca8d0(puVar6 + 0xc,uVar7);
    puVar1 = (int32_t *)puVar6[0xc];
    uVar7 = param_3[0xb] - (longlong)param_3[10];
    FUN_180150fd0(puVar1,(int32_t *)param_3[10],uVar7);
    puVar6[0xd] = puVar1 + ((longlong)uVar7 / 0x28) * 5;
  }
  *(char *)(puVar6 + 0xf) = (char)param_3[0xd];
  *(int32_t *)((longlong)puVar6 + 0x79) = *(int32_t *)((longlong)param_3 + 0x69);
  puVar6[0x10] = param_3[0xe];
  puVar6[0x11] = param_3[0xf];
  fVar10 = (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe);
  if (*param_1 <= fVar10 && fVar10 != *param_1) {
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
LAB_1800cb086:
  puVar1 = (int32_t *)puVar9[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar6 = puVar9;
  puVar6[1] = puVar1;
  *puVar1 = puVar6;
  puVar9[1] = puVar6;
  uVar8 = *(ulonglong *)(param_1 + 0xc) & uVar8;
  lVar2 = *(longlong *)(param_1 + 6);
  puVar3 = *(int32_t **)(lVar2 + uVar8 * 0x10);
  if (puVar3 == *(int32_t **)(param_1 + 2)) {
    *(int32_t **)(lVar2 + uVar8 * 0x10) = puVar6;
  }
  else {
    if (puVar3 == puVar9) {
      *(int32_t **)(lVar2 + uVar8 * 0x10) = puVar6;
      goto LAB_1800cb0d5;
    }
    if (*(int32_t **)(lVar2 + 8 + uVar8 * 0x10) != puVar1) goto LAB_1800cb0d5;
  }
  *(int32_t **)(lVar2 + 8 + uVar8 * 0x10) = puVar6;
LAB_1800cb0d5:
  *param_2 = puVar6;
  *(int32_t *)(param_2 + 1) = 1;
  return param_2;
}

// ---- Function: FUN_1800cb100 ----
void FUN_1800cb100(longlong *param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  LPVOID pvVar3;
  
  pvVar1 = (LPVOID)*param_1;
  if (pvVar1 != (LPVOID)0x0) {
    pvVar3 = pvVar1;
    if ((0xfff < (ulonglong)(((param_1[2] - (longlong)pvVar1) / 0x28) * 0x28)) &&
       (pvVar3 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3)))) {
      FUN_18012b7b4();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    thunk_FUN_18012d5e8(pvVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

// ---- Function: FUN_1800cb180 ----
uint FUN_1800cb180(uint param_1)

{
  if (param_1 < 0x42475331) {
    if (param_1 == 0x42475330) {
      return 0x42475331;
    }
    switch(param_1) {
    case 1:
      return 2;
    case 5:
      return 6;
    case 9:
      return 10;
    case 0xf:
      return 0x10;
    case 0x13:
    case 0x14:
      return 0x15;
    case 0x17:
      return 0x18;
    case 0x1b:
    case 0x1c:
      return 0x1c;
    case 0x1d:
      return 0x1d;
    case 0x21:
      return 0x22;
    case 0x27:
    case 0x28:
      return 0x29;
    case 0x2c:
    case 0x2d:
      return 0x2e;
    case 0x30:
      return 0x31;
    case 0x35:
      return 0x36;
    case 0x37:
      return 0x38;
    case 0x3c:
      return 0x3d;
    case 0x46:
    case 0x47:
      return 0x47;
    case 0x48:
      return 0x48;
    case 0x49:
    case 0x4a:
      return 0x4a;
    case 0x4b:
      return 0x4b;
    case 0x4c:
    case 0x4d:
      return 0x4d;
    case 0x4e:
      return 0x4e;
    case 0x4f:
      return 0x50;
    case 0x52:
      return 0x53;
    case 0x57:
    case 0x5a:
      return 0x57;
    case 0x58:
    case 0x5c:
      return 0x58;
    case 0x5b:
      return 0x5b;
    case 0x5d:
      return 0x5d;
    case 0x5e:
      return 0x5f;
    case 0x61:
    case 0x62:
      return 0x62;
    case 99:
      return 99;
    }
  }
  else {
    if (param_1 == 0x424757b9) {
      return 0x424757b9;
    }
    if (param_1 == 0x424757ba) {
      return 0x424757ba;
    }
  }
  return param_1;
}

