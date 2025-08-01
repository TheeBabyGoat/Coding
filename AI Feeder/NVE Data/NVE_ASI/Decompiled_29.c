#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_1800ddb30 ----
void FUN_1800ddb30(int param_1)

{
  if (param_1 == 0) {
    _DAT_1801ec568 = 0x3f236545;
    _DAT_1801ec570 = 0x3f43c3c6;
    _DAT_1801ec578 = 0x3f800000;
    _DAT_1801ec580 = 0x3f34b4c0;
  }
  else {
    if (param_1 == 1) {
      _DAT_1801ec564 = 0x3de06855;
      _DAT_1801ec568 = 0x3f800000;
      _DAT_1801ec570 = 0x3f61e1e3;
      _DAT_1801ec578 = 0x3f800000;
      _DAT_1801ec580 = 0x3f0dcdd5;
      _DAT_1801ec588 = 0;
      _DAT_1801ec560 = 0x3d5cdd51;
      return;
    }
    if (param_1 != 2) {
      return;
    }
    _DAT_1801ec568 = 0x3e2930be;
    _DAT_1801ec570 = 0x3f800000;
    _DAT_1801ec578 = 0x3d70f16f;
    _DAT_1801ec580 = 0x3e9696a200000000;
  }
  _DAT_1801ec570 = _DAT_1801ec570 << 0x20;
  _DAT_1801ec588 = 0x3f800000;
  _DAT_1801ec564 = 0x3f800000;
  _DAT_1801ec560 = 0x3d5cdd51;
  return;
}

// ---- Function: FUN_1800ddc20 ----
void FUN_1800ddc20(void)

{
  code *pcVar1;
  
  FUN_18012335c(0x1801d52f8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// ---- Function: FUN_1800ddc40 ----
int32_t * FUN_1800ddc40(int32_t param_1,int32_t *param_2,byte *param_3)

{
  int iVar1;
  int32_t *puVar2;
  int32_t *puVar3;
  code *pcVar4;
  longlong lVar5;
  void *pvVar6;
  ulonglong uVar7;
  int32_t *puVar8;
  int32_t *puVar9;
  
  uVar7 = (((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1]) *
            0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
          0x100000001b3;
  puVar9 = *(int32_t **)(DAT_1801ec418 + 8 + (uVar7 & DAT_1801ec430) * 0x10);
  puVar8 = DAT_1801ec408;
  if (puVar9 != DAT_1801ec408) {
    iVar1 = *(int *)(puVar9 + 2);
    puVar8 = puVar9;
    while( true ) {
      if (*(int *)param_3 == iVar1) {
        *param_2 = puVar8;
        *(int32_t *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar8 == *(int32_t **)(DAT_1801ec418 + (uVar7 & DAT_1801ec430) * 0x10)) break;
      puVar8 = (int32_t *)puVar8[1];
      iVar1 = *(int *)(puVar8 + 2);
    }
  }
  if (DAT_1801ec410 == 0x84432a1b61e7b) {
    FUN_180123338(0x1801cc0f0);
LAB_1800ddea9:
    FUN_18012b7b4();
    pcVar4 = (code *)swi(3);
    puVar9 = (int32_t *)(*pcVar4)();
    return puVar9;
  }
  pvVar6 = operator_new(0x1f1f);
  if (pvVar6 == (void *)0x0) goto LAB_1800ddea9;
  puVar9 = (int32_t *)((longlong)pvVar6 + 0x27U & 0xffffffffffffffe0);
  puVar9[-1] = pvVar6;
  *(int32_t *)(puVar9 + 2) = *(int32_t *)param_3;
  FUN_180151670((int32_t (*) [32])(puVar9 + 3),0,0x1ee0);
  FUN_1800a6b30((longlong)(puVar9 + 3));
  if (_DAT_1801ec400 < (float)(DAT_1801ec410 + 1) / (float)DAT_1801ec438) {
    FUN_1800de120();
    puVar2 = *(int32_t **)(DAT_1801ec418 + 8 + (DAT_1801ec430 & uVar7) * 0x10);
    puVar8 = DAT_1801ec408;
    if (puVar2 != DAT_1801ec408) {
      iVar1 = *(int *)(puVar2 + 2);
      puVar8 = puVar2;
      while (*(int *)(puVar9 + 2) != iVar1) {
        if (puVar8 == *(int32_t **)(DAT_1801ec418 + (DAT_1801ec430 & uVar7) * 0x10))
        goto LAB_1800dde30;
        puVar8 = (int32_t *)puVar8[1];
        iVar1 = *(int *)(puVar8 + 2);
      }
      puVar8 = (int32_t *)*puVar8;
    }
  }
LAB_1800dde30:
  puVar2 = (int32_t *)puVar8[1];
  DAT_1801ec410 = DAT_1801ec410 + 1;
  *puVar9 = puVar8;
  puVar9[1] = puVar2;
  *puVar2 = puVar9;
  puVar8[1] = puVar9;
  lVar5 = DAT_1801ec418;
  uVar7 = DAT_1801ec430 & uVar7;
  puVar3 = *(int32_t **)(DAT_1801ec418 + uVar7 * 0x10);
  if (puVar3 == DAT_1801ec408) {
    *(int32_t **)(DAT_1801ec418 + uVar7 * 0x10) = puVar9;
  }
  else {
    if (puVar3 == puVar8) {
      *(int32_t **)(DAT_1801ec418 + uVar7 * 0x10) = puVar9;
      goto LAB_1800dde8f;
    }
    if (*(int32_t **)(DAT_1801ec418 + 8 + uVar7 * 0x10) != puVar2) goto LAB_1800dde8f;
  }
  *(int32_t **)(lVar5 + 8 + uVar7 * 0x10) = puVar9;
LAB_1800dde8f:
  *param_2 = puVar9;
  *(int32_t *)(param_2 + 1) = 1;
  return param_2;
}

// ---- Function: FUN_1800ddeb0 ----
int32_t * FUN_1800ddeb0(float *param_1,int32_t *param_2,byte *param_3)

{
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

// ---- Function: FUN_1800de0d0 ----
void FUN_1800de0d0(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1800a6c20(*(longlong *)(param_1 + 8) + 0x18);
  }
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    if ((lVar1 - (longlong)*(LPVOID *)(lVar1 + -8)) - 8U < 0x20) {
      thunk_FUN_18012d5e8(*(LPVOID *)(lVar1 + -8));
      return;
    }
    FUN_18012b7b4();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// ---- Function: FUN_1800de120 ----
void FUN_1800de120(void)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  float fVar5;
  
  uVar1 = DAT_1801ec438;
  fVar5 = ceilf((float)(DAT_1801ec410 + 1) / _DAT_1801ec400);
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
  FUN_1800de210(uVar3,uVar4);
  return;
}

// ---- Function: FUN_1800de1d0 ----
void FUN_1800de1d0(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == 0) {
    return;
  }
  if ((lVar1 - (longlong)*(LPVOID *)(lVar1 + -8)) - 8U < 0x20) {
    thunk_FUN_18012d5e8(*(LPVOID *)(lVar1 + -8));
    return;
  }
  FUN_18012b7b4();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// ---- Function: FUN_1800de210 ----
void FUN_1800de210(int32_t param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int32_t *puVar3;
  int32_t *puVar4;
  int32_t *puVar5;
  code *pcVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  int32_t *puVar11;
  
  plVar8 = DAT_1801ec408;
  for (lVar10 = 0x3f; 0xfffffffffffffffU >> lVar10 == 0; lVar10 = lVar10 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar10 & 0x3f)) < param_2) {
    FUN_180123338(0x1801cc110);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar9 = param_2 - 1 | 1;
  lVar10 = 0x3f;
  if (uVar9 != 0) {
    for (; uVar9 >> lVar10 == 0; lVar10 = lVar10 + -1) {
    }
  }
  lVar10 = 1L << ((char)lVar10 + 1U & 0x3f);
  FUN_1800a9140((ulonglong *)&DAT_1801ec418,lVar10 * 2,DAT_1801ec408);
  DAT_1801ec430 = lVar10 - 1;
  DAT_1801ec438 = lVar10;
  plVar7 = (longlong *)*DAT_1801ec408;
joined_r0x0001800de288:
  do {
    while( true ) {
      while( true ) {
        if (plVar7 == plVar8) {
          return;
        }
        plVar1 = (longlong *)*plVar7;
        puVar11 = (int32_t *)
                  (((((((ulonglong)*(byte *)(plVar7 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar7 + 0x11)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar7 + 0x12)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar7 + 0x13)) * 0x100000001b3 & DAT_1801ec430)
                   * 0x10 + DAT_1801ec418);
        if ((longlong *)*puVar11 != plVar8) break;
        *puVar11 = plVar7;
        puVar11[1] = plVar7;
        plVar7 = plVar1;
      }
      plVar2 = (longlong *)puVar11[1];
      if ((int)plVar7[2] != (int)plVar2[2]) break;
      plVar2 = (longlong *)*plVar2;
      if (plVar2 != plVar7) {
        puVar3 = (int32_t *)plVar7[1];
        *puVar3 = plVar1;
        puVar4 = (int32_t *)plVar1[1];
        *puVar4 = plVar2;
        puVar5 = (int32_t *)plVar2[1];
        *puVar5 = plVar7;
        plVar2[1] = (longlong)puVar4;
        plVar1[1] = (longlong)puVar3;
        plVar7[1] = (longlong)puVar5;
      }
      puVar11[1] = plVar7;
      plVar7 = plVar1;
    }
    do {
      if ((longlong *)*puVar11 == plVar2) {
        puVar3 = (int32_t *)plVar7[1];
        *puVar3 = plVar1;
        puVar4 = (int32_t *)plVar1[1];
        *puVar4 = plVar2;
        puVar5 = (int32_t *)plVar2[1];
        *puVar5 = plVar7;
        plVar2[1] = (longlong)puVar4;
        plVar1[1] = (longlong)puVar3;
        plVar7[1] = (longlong)puVar5;
        *puVar11 = plVar7;
        plVar7 = plVar1;
        goto joined_r0x0001800de288;
      }
      plVar2 = (longlong *)plVar2[1];
    } while ((int)plVar7[2] != (int)plVar2[2]);
    lVar10 = *plVar2;
    puVar11 = (int32_t *)plVar7[1];
    *puVar11 = plVar1;
    plVar2 = (longlong *)plVar1[1];
    *plVar2 = lVar10;
    puVar3 = *(int32_t **)(lVar10 + 8);
    *puVar3 = plVar7;
    *(longlong **)(lVar10 + 8) = plVar2;
    plVar1[1] = (longlong)puVar11;
    plVar7[1] = (longlong)puVar3;
    plVar7 = plVar1;
  } while( true );
}

// ---- Function: FUN_1800de3d0 ----
longlong * FUN_1800de3d0(longlong param_1)

{
  longlong *plVar1;
  int32_t *puVar2;
  longlong lVar3;
  int32_t *puVar4;
  longlong lVar5;
  code *pcVar6;
  longlong *in_RAX;
  int32_t *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  int32_t local_res8;
  
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    plVar8 = *(longlong **)(param_1 + 8);
    if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x38) >> 3) {
      plVar1 = (longlong *)*plVar8;
      if (plVar1 == plVar8) {
        return plVar8;
      }
      puVar2 = (int32_t *)plVar1[1];
      lVar3 = *(longlong *)(param_1 + 0x18);
      puVar4 = *(int32_t **)(param_1 + 8);
      plVar12 = (longlong *)
                (((((((ulonglong)*(byte *)(plVar1 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar1 + 0x11)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar1 + 0x12)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar1 + 0x13)) * 0x100000001b3 &
                 *(ulonglong *)(param_1 + 0x30)) * 0x10 + lVar3);
      lVar5 = *plVar12;
      plVar11 = (longlong *)plVar12[1];
      plVar9 = plVar1;
      do {
        plVar10 = (longlong *)*plVar9;
        FUN_1800a6c20((longlong)(plVar9 + 3));
        if (0x1f < (ulonglong)((longlong)plVar9 + (-8 - plVar9[-1]))) {
LAB_1800de6da:
          FUN_18012b7b4();
          pcVar6 = (code *)swi(3);
          plVar8 = (longlong *)(*pcVar6)();
          return plVar8;
        }
        thunk_FUN_18012d5e8((LPVOID)plVar9[-1]);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
        if (plVar9 == plVar11) {
          puVar7 = puVar2;
          if ((longlong *)lVar5 == plVar1) {
            *plVar12 = (longlong)puVar4;
            puVar7 = puVar4;
          }
          plVar12[1] = (longlong)puVar7;
          while (plVar10 != plVar8) {
            plVar12 = (longlong *)
                      (((((((ulonglong)*(byte *)(plVar10 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3
                          ^ (ulonglong)*(byte *)((longlong)plVar10 + 0x11)) * 0x100000001b3 ^
                         (ulonglong)*(byte *)((longlong)plVar10 + 0x12)) * 0x100000001b3 ^
                        (ulonglong)*(byte *)((longlong)plVar10 + 0x13)) * 0x100000001b3 &
                       *(ulonglong *)(param_1 + 0x30)) * 0x10 + lVar3);
            plVar1 = (longlong *)plVar12[1];
            plVar11 = plVar10;
            while( true ) {
              plVar10 = (longlong *)*plVar11;
              FUN_1800a6c20((longlong)(plVar11 + 3));
              if (0x1f < (ulonglong)((longlong)plVar11 + (-8 - plVar11[-1]))) goto LAB_1800de6da;
              thunk_FUN_18012d5e8((LPVOID)plVar11[-1]);
              *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
              if (plVar11 == plVar1) break;
              plVar11 = plVar10;
              if (plVar10 == plVar8) goto LAB_1800de5c1;
            }
            *plVar12 = (longlong)puVar4;
            plVar12[1] = (longlong)puVar4;
          }
          goto LAB_1800de5c5;
        }
        plVar9 = plVar10;
        if (plVar10 == plVar8) {
          if ((longlong *)lVar5 == plVar1) {
LAB_1800de5c1:
            *plVar12 = (longlong)plVar10;
          }
LAB_1800de5c5:
          *puVar2 = plVar10;
          plVar10[1] = (longlong)puVar2;
          return plVar8;
        }
      } while( true );
    }
    *(int32_t *)plVar8[1] = 0;
    puVar2 = (int32_t *)*plVar8;
    while (puVar2 != (int32_t *)0x0) {
      puVar4 = (int32_t *)*puVar2;
      FUN_1800a6c20((longlong)(puVar2 + 3));
      if (0x1f < (ulonglong)((longlong)puVar2 + (-8 - (longlong)puVar2[-1]))) {
        FUN_18012b7b4();
        pcVar6 = (code *)swi(3);
        plVar8 = (longlong *)(*pcVar6)();
        return plVar8;
      }
      thunk_FUN_18012d5e8((LPVOID)puVar2[-1]);
      puVar2 = puVar4;
    }
    *(int32_t *)*(int32_t *)(param_1 + 8) = *(int32_t *)(param_1 + 8);
    *(longlong *)(*(longlong *)(param_1 + 8) + 8) = *(longlong *)(param_1 + 8);
    *(int32_t *)(param_1 + 0x10) = 0;
    local_res8 = *(int32_t *)(param_1 + 8);
    in_RAX = (longlong *)
             FUN_1800a9480(*(int32_t **)(param_1 + 0x18),*(int32_t **)(param_1 + 0x20),
                           &local_res8);
  }
  return in_RAX;
}

// ---- Function: FUN_1800de6e0 ----
longlong * FUN_1800de6e0(longlong *param_1,int32_t *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  LPVOID pvVar3;
  code *pcVar4;
  void *pvVar5;
  longlong *plVar6;
  ulonglong uVar7;
  LPVOID pvVar8;
  ulonglong uVar9;
  int32_t *puVar10;
  
  uVar2 = param_1[3];
  if (param_3 <= uVar2) {
    plVar6 = param_1;
    if (0xf < uVar2) {
      plVar6 = (longlong *)*param_1;
    }
    param_1[2] = param_3;
    FUN_180150fd0(plVar6,param_2,param_3);
    *(int32_t *)((longlong)plVar6 + param_3) = 0;
    return param_1;
  }
  uVar9 = 0x7fffffffffffffff;
  if (0x7fffffffffffffff < param_3) {
    FUN_1800ba540();
    pcVar4 = (code *)swi(3);
    plVar6 = (longlong *)(*pcVar4)();
    return plVar6;
  }
  uVar7 = param_3 | 0xf;
  if ((uVar7 < 0x8000000000000000) && (uVar2 <= 0x7fffffffffffffff - (uVar2 >> 1))) {
    uVar1 = uVar2 + (uVar2 >> 1);
    uVar9 = uVar7;
    if (uVar7 < uVar1) {
      uVar9 = uVar1;
    }
    uVar1 = uVar9 + 1;
    if (uVar1 == 0) {
      puVar10 = (int32_t *)0x0;
    }
    else {
      if (0xfff < uVar1) {
        uVar7 = uVar9 + 0x28;
        if (uVar7 <= uVar1) {
          FUN_1800ba8a0();
          pcVar4 = (code *)swi(3);
          plVar6 = (longlong *)(*pcVar4)();
          return plVar6;
        }
        goto LAB_1800de79c;
      }
      puVar10 = (int32_t *)operator_new(uVar1);
    }
  }
  else {
    uVar7 = 0x8000000000000027;
LAB_1800de79c:
    pvVar5 = operator_new(uVar7);
    if (pvVar5 == (void *)0x0) goto LAB_1800de83b;
    puVar10 = (int32_t *)((longlong)pvVar5 + 0x27U & 0xffffffffffffffe0);
    puVar10[-1] = pvVar5;
  }
  param_1[2] = param_3;
  param_1[3] = uVar9;
  FUN_180150fd0(puVar10,param_2,param_3);
  *(int32_t *)((longlong)puVar10 + param_3) = 0;
  if (0xf < uVar2) {
    pvVar3 = (LPVOID)*param_1;
    pvVar8 = pvVar3;
    if ((0xfff < uVar2 + 1) &&
       (pvVar8 = *(LPVOID *)((longlong)pvVar3 + -8),
       0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar8)))) {
LAB_1800de83b:
      FUN_18012b7b4();
      pcVar4 = (code *)swi(3);
      plVar6 = (longlong *)(*pcVar4)();
      return plVar6;
    }
    thunk_FUN_18012d5e8(pvVar8);
  }
  *param_1 = (longlong)puVar10;
  return param_1;
}

// ---- Function: FUN_1800de850 ----
void FUN_1800de850(int32_t param_1,int32_t param_2,int32_t param_3,int32_t param_4)

{
  int32_t local_res10;
  int32_t local_res18;
  int32_t local_res20;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  (**(code **)(DAT_1801f3ae0 + 0x360))(param_1,&local_res10);
  return;
}

// ---- Function: FUN_1800de890 ----
int32_t FUN_1800de890(int32_t param_1)

{
  switch(param_1) {
  case 0x200:
    return 9;
  case 0x201:
    return 0x25;
  case 0x202:
    return 0x27;
  case 0x203:
    return 0x26;
  case 0x204:
    return 0x28;
  case 0x205:
    return 0x21;
  case 0x206:
    return 0x22;
  case 0x207:
    return 0x24;
  case 0x208:
    return 0x23;
  case 0x209:
    return 0x2d;
  case 0x20a:
    return 0x2e;
  case 0x20b:
    return 8;
  case 0x20c:
    return 0x20;
  case 0x20d:
    return 0xd;
  case 0x20e:
    return 0x1b;
  case 0x20f:
    return 0xa2;
  case 0x210:
    return 0xa0;
  case 0x211:
    return 0xa4;
  case 0x212:
    return 0x5b;
  case 0x213:
    return 0xa3;
  case 0x214:
    return 0xa1;
  case 0x215:
    return 0xa5;
  case 0x216:
    return 0x5c;
  case 0x217:
    return 0x5d;
  case 0x218:
    return 0x30;
  case 0x219:
    return 0x31;
  case 0x21a:
    return 0x32;
  case 0x21b:
    return 0x33;
  case 0x21c:
    return 0x34;
  case 0x21d:
    return 0x35;
  case 0x21e:
    return 0x36;
  case 0x21f:
    return 0x37;
  case 0x220:
    return 0x38;
  case 0x221:
    return 0x39;
  case 0x222:
    return 0x41;
  case 0x223:
    return 0x42;
  case 0x224:
    return 0x43;
  case 0x225:
    return 0x44;
  case 0x226:
    return 0x45;
  case 0x227:
    return 0x46;
  case 0x228:
    return 0x47;
  case 0x229:
    return 0x48;
  case 0x22a:
    return 0x49;
  case 0x22b:
    return 0x4a;
  case 0x22c:
    return 0x4b;
  case 0x22d:
    return 0x4c;
  case 0x22e:
    return 0x4d;
  case 0x22f:
    return 0x4e;
  case 0x230:
    return 0x4f;
  case 0x231:
    return 0x50;
  case 0x232:
    return 0x51;
  case 0x233:
    return 0x52;
  case 0x234:
    return 0x53;
  case 0x235:
    return 0x54;
  case 0x236:
    return 0x55;
  case 0x237:
    return 0x56;
  case 0x238:
    return 0x57;
  case 0x239:
    return 0x58;
  case 0x23a:
    return 0x59;
  case 0x23b:
    return 0x5a;
  case 0x23c:
    return 0x70;
  case 0x23d:
    return 0x71;
  case 0x23e:
    return 0x72;
  case 0x23f:
    return 0x73;
  case 0x240:
    return 0x74;
  case 0x241:
    return 0x75;
  case 0x242:
    return 0x76;
  case 0x243:
    return 0x77;
  case 0x244:
    return 0x78;
  case 0x245:
    return 0x79;
  case 0x246:
    return 0x7a;
  case 0x247:
    return 0x7b;
  case 0x248:
    return 0x7c;
  case 0x249:
    return 0x7d;
  case 0x24a:
    return 0x7e;
  case 0x24b:
    return 0x7f;
  case 0x24c:
    return 0x80;
  case 0x24d:
    return 0x81;
  case 0x24e:
    return 0x82;
  case 0x24f:
    return 0x83;
  case 0x250:
    return 0x84;
  case 0x251:
    return 0x85;
  case 0x252:
    return 0x86;
  case 0x253:
    return 0x87;
  case 0x254:
    return 0xde;
  case 0x255:
    return 0xbc;
  case 0x256:
    return 0xbd;
  case 599:
    return 0xbe;
  case 600:
    return 0xbf;
  case 0x259:
    return 0xba;
  case 0x25a:
    return 0xbb;
  case 0x25b:
    return 0xdb;
  case 0x25c:
    return 0xdc;
  case 0x25d:
    return 0xdd;
  case 0x25e:
    return 0xc0;
  case 0x25f:
    return 0x14;
  case 0x260:
    return 0x91;
  case 0x261:
    return 0x90;
  case 0x262:
    return 0x2c;
  case 0x263:
    return 0x13;
  case 0x264:
    return 0x60;
  case 0x265:
    return 0x61;
  case 0x266:
    return 0x62;
  case 0x267:
    return 99;
  case 0x268:
    return 100;
  case 0x269:
    return 0x65;
  case 0x26a:
    return 0x66;
  case 0x26b:
    return 0x67;
  case 0x26c:
    return 0x68;
  case 0x26d:
    return 0x69;
  case 0x26e:
    return 0x6e;
  case 0x26f:
    return 0x6f;
  case 0x270:
    return 0x6a;
  case 0x271:
    return 0x6d;
  case 0x272:
    return 0x6b;
  default:
    return 0;
  case 0x275:
    return 0xa6;
  case 0x276:
    return 0xa7;
  }
}

// ---- Function: FUN_1800ded60 ----
void FUN_1800ded60(void)

{
  int32_t uVar1;
  char cVar2;
  ulonglong uVar3;
  char cVar4;
  longlong *plVar5;
  code *pcVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t in_stack_ffffffffffffffd0;
  uint uVar9;
  
  uVar9 = (uint)((ulonglong)in_stack_ffffffffffffffd0 >> 0x20);
  cVar4 = '\x01';
  if (DAT_1801f3ad8 != (longlong *)0x0) {
    plVar5 = DAT_1801f3ad8;
    uVar3 = FUN_1800de890(0x2000);
    cVar2 = (**(code **)(*plVar5 + 0x60))(plVar5,uVar3 & 0xffffffff);
    if ((cVar2 != '\0') && (DAT_1801f3ad8 != (longlong *)0x0)) {
      plVar5 = DAT_1801f3ad8;
      uVar3 = FUN_1800de890(0x1000);
      cVar2 = (**(code **)(*plVar5 + 0x60))(plVar5,uVar3 & 0xffffffff);
      cVar4 = '\x01';
      if (cVar2 != '\0') {
        cVar4 = '\0';
      }
    }
  }
  uVar3 = (ulonglong)uVar9 << 0x20;
  (**(code **)(DAT_1801f3ae0 + 0x478))
            ("Headlight Intensity",&DAT_1801ebe38,0,DAT_1801d8eb4,&DAT_1801cb828,uVar3);
  (**(code **)(DAT_1801f3ae0 + 0x2a8))();
  uVar8 = 1;
  (**(code **)(DAT_1801f3ae0 + 0x478))
            ("Global Car Light Multiplier",&DAT_1801ebd78,0,DAT_1801d8ef4,&DAT_1801cb828,
             uVar3 & 0xffffffff00000000);
  pcVar6 = *(code **)(DAT_1801f3ae0 + 0x5e0);
  cVar2 = (*pcVar6)("Day Multipliers",0,0x20);
  uVar1 = DAT_1801d8e18;
  if (cVar2 != '\0') {
    uVar7 = CONCAT44(uVar8,DAT_1801d8f2c);
    (**(code **)(DAT_1801f3ae0 + 0x418))
              ("Headlights##day",&DAT_1801ebd74,DAT_1801d8e18,0,uVar7,&DAT_1801cb828,0);
    uVar7 = CONCAT44((int)((ulonglong)uVar7 >> 0x20),DAT_1801d8f2c);
    (**(code **)(DAT_1801f3ae0 + 0x418))
              ("Taillights##day",&DAT_1801ebd70,uVar1,0,uVar7,&DAT_1801cb828,0);
    uVar7 = CONCAT44((int)((ulonglong)uVar7 >> 0x20),DAT_1801d8f2c);
    (**(code **)(DAT_1801f3ae0 + 0x418))
              ("Indicators##day",&DAT_1801ebd6c,uVar1,0,uVar7,&DAT_1801cb828,0);
    uVar7 = CONCAT44((int)((ulonglong)uVar7 >> 0x20),DAT_1801d8f2c);
    (**(code **)(DAT_1801f3ae0 + 0x418))
              ("Reversing Lights##day",&DAT_1801ebd68,uVar1,0,uVar7,&DAT_1801cb828,0);
    uVar7 = CONCAT44((int)((ulonglong)uVar7 >> 0x20),DAT_1801d8f2c);
    (**(code **)(DAT_1801f3ae0 + 0x418))
              ("Default Lights##day",&DAT_1801ebd64,uVar1,0,uVar7,&DAT_1801cb828,0);
    uVar7 = CONCAT44((int)((ulonglong)uVar7 >> 0x20),DAT_1801d8f2c);
    (**(code **)(DAT_1801f3ae0 + 0x418))
              ("Brake Lights##day",&DAT_1801ebd60,uVar1,0,uVar7,&DAT_1801cb828,0);
    uVar7 = CONCAT44((int)((ulonglong)uVar7 >> 0x20),DAT_1801d8f2c);
    (**(code **)(DAT_1801f3ae0 + 0x418))
              ("Middle Brake Light##day",&DAT_1801ebd5c,uVar1,0,uVar7,&DAT_1801cb828,0);
    uVar7 = CONCAT44((int)((ulonglong)uVar7 >> 0x20),DAT_1801d8f2c);
    (**(code **)(DAT_1801f3ae0 + 0x418))
              ("Extra Lights##day",&DAT_1801ebd58,uVar1,0,uVar7,&DAT_1801cb828,0);
    pcVar6 = *(code **)(DAT_1801f3ae0 + 0x418);
    uVar7 = CONCAT44((int)((ulonglong)uVar7 >> 0x20),DAT_1801d8f2c);
    (*pcVar6)("Siren Lights##day",&DAT_1801ebd54,uVar1,0,uVar7,&DAT_1801cb828,0);
    uVar8 = (int32_t)((ulonglong)uVar7 >> 0x20);
  }
  FUN_1800df3e0("Reset##day_multipliers",cVar4,&LAB_1800df320,pcVar6);
  (**(code **)(DAT_1801f3ae0 + 0x2a8))();
  pcVar6 = *(code **)(DAT_1801f3ae0 + 0x5e0);
  cVar2 = (*pcVar6)("Night Multipliers",0,0x20);
  if (cVar2 != '\0') {
    (**(code **)(DAT_1801f3ae0 + 0x418))
              ("Headlights##night",&DAT_1801ebd50,uVar1,0,CONCAT44(uVar8,DAT_1801d8f2c),
               &DAT_1801cb828,0);
    (**(code **)(DAT_1801f3ae0 + 0x418))
              ("Taillights##night",&DAT_1801ebd4c,uVar1,0,DAT_1801d8f2c,&DAT_1801cb828,0);
    (**(code **)(DAT_1801f3ae0 + 0x418))
              ("Indicators##night",&DAT_1801ebd48,uVar1,0,DAT_1801d8f2c,&DAT_1801cb828,0);
    (**(code **)(DAT_1801f3ae0 + 0x418))
              ("Reversing Lights##night",&DAT_1801ebd44,uVar1,0,DAT_1801d8f2c,&DAT_1801cb828,0);
    (**(code **)(DAT_1801f3ae0 + 0x418))
              ("Default Lights##night",&DAT_1801ebd40,uVar1,0,DAT_1801d8f2c,&DAT_1801cb828,0);
    (**(code **)(DAT_1801f3ae0 + 0x418))
              ("Brake Lights##night",&DAT_1801ebd3c,uVar1,0,DAT_1801d8f2c,&DAT_1801cb828,0);
    (**(code **)(DAT_1801f3ae0 + 0x418))
              ("Middle Brake Light##night",&DAT_1801ebd38,uVar1,0,DAT_1801d8f2c,&DAT_1801cb828,0);
    (**(code **)(DAT_1801f3ae0 + 0x418))
              ("Extra Lights##night",&DAT_1801ebd34,uVar1,0,DAT_1801d8f2c,&DAT_1801cb828,0);
    (**(code **)(DAT_1801f3ae0 + 0x418))
              ("Siren Lights##night",&DAT_1801ebd30,uVar1,0,DAT_1801d8f2c,&DAT_1801cb828,0);
  }
  FUN_1800df3e0("Reset##night_multipliers",cVar4,&LAB_1800df380,pcVar6);
  return;
}

// ---- Function: FUN_1800df3e0 ----
void FUN_1800df3e0(int32_t param_1,char param_2,int32_t *param_3,int32_t *param_4)

{
  char cVar1;
  code *pcVar2;
  code *pcVar3;
  int32_t local_res20;
  
  if (param_2 != '\0') {
    param_4 = *(int32_t **)(DAT_1801f3ae0 + 0x880);
    (*(code *)param_4)(1);
  }
  local_res20 = 0;
  pcVar3 = *(code **)(DAT_1801f3ae0 + 0x388);
  cVar1 = (*pcVar3)(param_1,&local_res20);
  if (cVar1 != '\0') {
    (*(code *)param_3)();
  }
  if (param_2 != '\0') {
    pcVar2 = *(code **)(DAT_1801f3ae0 + 0x8b8);
    cVar1 = (*pcVar2)(0x400);
    if (cVar1 != '\0') {
      (**(code **)(DAT_1801f3ae0 + 0x6a0))();
      FUN_1800c70b0("Hold Control and Shift while clicking to reset.",pcVar2,pcVar3,param_4);
      (**(code **)(DAT_1801f3ae0 + 0x6a8))();
    }
    (**(code **)(DAT_1801f3ae0 + 0x888))();
  }
  return;
}

// ---- Function: FUN_1800df4a0 ----
void FUN_1800df4a0(void)

{
  float fVar1;
  char cVar2;
  size_t _Size;
  longlong lVar3;
  char cVar4;
  char *pcVar5;
  char *pcVar6;
  ulonglong uVar7;
  size_t sVar8;
  longlong *_Buf1;
  int32_t ****ppppuVar9;
  code *pcVar10;
  int32_t *_Buf2;
  longlong lVar11;
  code *pcVar12;
  int32_t *puVar13;
  code *pcVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar17;
  longlong *plVar18;
  bool bVar19;
  float fVar20;
  float fVar21;
  int32_t auStack_d8 [32];
  char *local_b8;
  int32_t uStack_b0;
  char *local_a8;
  int32_t uStack_a0;
  ulonglong local_98;
  ulonglong *local_90;
  ulonglong local_88;
  ulonglong *local_80;
  int32_t ***local_78 [3];
  ulonglong local_60;
  ulonglong local_58;
  
  _Buf2 = (int32_t *)PTR_DAT_1801ebdc0;
  local_58 = DAT_1801eb080 ^ (ulonglong)auStack_d8;
  pcVar5 = (char *)(**(code **)(DAT_1801f3ae0 + 8))();
  local_b8 = pcVar5;
  fVar20 = (float)(**(code **)(DAT_1801f3ae0 + 0x200))();
  fVar1 = *(float *)(pcVar5 + 0x54);
  fVar21 = (float)(**(code **)(DAT_1801f3ae0 + 0x2f8))();
  iVar15 = 0;
  uVar16 = DAT_1801fca28 - (longlong)DAT_1801fca20 >> 5;
  iVar17 = DAT_1801f3b1c;
  if (uVar16 != 0) {
    uVar7 = 0;
    puVar13 = DAT_1801fca20;
    if (uVar16 == 0) {
LAB_1800df990:
      FUN_1800ddc20();
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    do {
      pcVar6 = (char *)(DAT_1801fca20 + uVar7 * 4);
      if (0xf < (ulonglong)puVar13[3]) {
        pcVar6 = (char *)*puVar13;
      }
      lVar11 = (longlong)_Buf2 - (longlong)pcVar6;
      do {
        cVar4 = *pcVar6;
        cVar2 = pcVar6[lVar11];
        if (cVar4 != cVar2) break;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      iVar17 = iVar15;
      if (cVar4 == cVar2) break;
      iVar15 = iVar15 + 1;
      puVar13 = puVar13 + 4;
      uVar7 = (ulonglong)iVar15;
      iVar17 = DAT_1801f3b1c;
    } while (uVar7 < uVar16);
  }
  DAT_1801f3b1c = iVar17;
  (**(code **)(DAT_1801f3ae0 + 0x1e8))((fVar20 - (fVar1 + fVar1)) - (fVar21 + fVar21));
  local_90 = (ulonglong *)0x1801d5840;
  local_98 = 0xb000000000000000;
  local_88 = 1;
  local_80 = &local_98;
  local_a8 = "##arrow_combo_{}";
  uStack_a0 = 0x10;
  FUN_1800b7670((longlong *)local_78,(longlong *)&local_a8,&local_88);
  ppppuVar9 = local_78;
  if (0xf < local_60) {
    ppppuVar9 = (int32_t ****)local_78[0];
  }
  pcVar14 = *(code **)(DAT_1801f3ae0 + 0x3f0);
  cVar4 = (*pcVar14)(ppppuVar9,_Buf2,0x20);
  FUN_1800a6800((longlong *)local_78);
  if (cVar4 != '\0') {
    iVar17 = 0;
    if (DAT_1801fca28 - (longlong)DAT_1801fca20 >> 5 != 0) {
      local_a8 = (char *)0x0;
      lVar11 = 0;
      do {
        lVar3 = DAT_1801fca28;
        puVar13 = DAT_1801fca20;
        plVar18 = (longlong *)((longlong)DAT_1801fca20 + lVar11);
        sVar8 = 0xffffffffffffffff;
        do {
          sVar8 = sVar8 + 1;
        } while (*(char *)((longlong)_Buf2 + sVar8) != '\0');
        _Size = plVar18[2];
        uVar16 = plVar18[3];
        _Buf1 = plVar18;
        if (0xf < uVar16) {
          _Buf1 = (longlong *)*plVar18;
        }
        if (_Size == sVar8) {
          if (_Size == 0) {
            bVar19 = true;
          }
          else {
            iVar15 = memcmp(_Buf1,_Buf2,_Size);
            bVar19 = iVar15 == 0;
            uVar16 = plVar18[3];
          }
        }
        else {
          bVar19 = false;
        }
        local_98 = 0;
        if ((char *)(lVar3 - (longlong)puVar13 >> 5) <= local_a8) {
          FUN_1800ddc20();
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        if (0xf < uVar16) {
          plVar18 = (longlong *)*plVar18;
        }
        pcVar14 = (code *)&local_98;
        cVar4 = (**(code **)(DAT_1801f3ae0 + 0x5f0))(plVar18,bVar19,0);
        if (cVar4 != '\0') {
          DAT_1801f3b1c = iVar17;
          if ((ulonglong)(DAT_1801fca28 - (longlong)DAT_1801fca20 >> 5) <=
              (ulonglong)(longlong)iVar17) goto LAB_1800df990;
          _Buf2 = DAT_1801fca20 + (longlong)iVar17 * 4;
          if (0xf < *(ulonglong *)((longlong)DAT_1801fca20 + lVar11 + 0x18)) {
            _Buf2 = *(int32_t **)((longlong)DAT_1801fca20 + lVar11);
          }
        }
        if (bVar19 != false) {
          (**(code **)(DAT_1801f3ae0 + 0x8a0))();
        }
        iVar17 = iVar17 + 1;
        local_a8 = local_a8 + 1;
        lVar11 = lVar11 + 0x20;
      } while ((ulonglong)(longlong)iVar17 <
               (ulonglong)(DAT_1801fca28 - (longlong)DAT_1801fca20 >> 5));
    }
    (**(code **)(DAT_1801f3ae0 + 0x3f8))();
    pcVar5 = local_b8;
  }
  (**(code **)(DAT_1801f3ae0 + 0x1f0))();
  (**(code **)(DAT_1801f3ae0 + 0x2a0))(0,fVar1);
  local_80 = (ulonglong *)0x1801d5840;
  local_88 = 0xb000000000000000;
  local_98 = 1;
  local_90 = &local_88;
  local_b8 = "##arrow_combo_l_{}";
  uStack_b0 = 0x12;
  FUN_1800b7670((longlong *)local_78,(longlong *)&local_b8,&local_98);
  ppppuVar9 = local_78;
  if (0xf < local_60) {
    ppppuVar9 = (int32_t ****)local_78[0];
  }
  cVar4 = (**(code **)(DAT_1801f3ae0 + 0x3a0))(ppppuVar9,0);
  FUN_1800a6800((longlong *)local_78);
  if ((cVar4 != '\0') && (DAT_1801f3b1c = DAT_1801f3b1c + -1, DAT_1801f3b1c < 0)) {
    DAT_1801f3b1c = (int)(DAT_1801fca28 - (longlong)DAT_1801fca20 >> 5) + -1;
  }
  (**(code **)(DAT_1801f3ae0 + 0x2a0))(0,fVar1);
  local_80 = (ulonglong *)0x1801d5840;
  local_88 = 0xb000000000000000;
  local_98 = 1;
  local_90 = &local_88;
  local_b8 = "##arrow_combo_r_{}";
  uStack_b0 = 0x12;
  FUN_1800b7670((longlong *)local_78,(longlong *)&local_b8,&local_98);
  ppppuVar9 = local_78;
  if (0xf < local_60) {
    ppppuVar9 = (int32_t ****)local_78[0];
  }
  pcVar12 = *(code **)(DAT_1801f3ae0 + 0x3a0);
  cVar4 = (*pcVar12)(ppppuVar9,1);
  FUN_1800a6800((longlong *)local_78);
  if ((cVar4 != '\0') &&
     (DAT_1801f3b1c = DAT_1801f3b1c + 1,
     (ulonglong)(DAT_1801fca28 - (longlong)DAT_1801fca20 >> 5) <= (ulonglong)(longlong)DAT_1801f3b1c
     )) {
    DAT_1801f3b1c = 0;
  }
  pcVar10 = *(code **)(DAT_1801f3ae0 + 0x2a0);
  (*pcVar10)(0,*(int32_t *)(pcVar5 + 0x54));
  FUN_1800c70b0("Timecycle Modifier",pcVar10,pcVar12,pcVar14);
  FUN_1801252c0(local_58 ^ (ulonglong)auStack_d8);
  return;
}

// ---- Function: FUN_1800df9a0 ----
void FUN_1800df9a0(int32_t param_1,int32_t param_2,int32_t param_3,int32_t param_4)

{
  code *pcVar1;
  char cVar2;
  int32_t *puVar3;
  int32_t *puVar4;
  ulonglong *puVar5;
  int32_t auStack_3a8 [32];
  int32_t *local_388;
  int32_t local_380;
  int32_t *local_378;
  int32_t *local_370;
  int32_t *local_368;
  int32_t *local_360;
  ulonglong local_358 [3];
  int32_t uStack_340;
  char local_338 [8];
  int32_t uStack_330;
  int32_t local_328;
  int32_t uStack_320;
  char local_318 [8];
  int32_t uStack_310;
  int32_t local_308;
  int32_t uStack_300;
  char local_2f8 [8];
  int32_t uStack_2f0;
  int32_t local_2e8;
  int32_t uStack_2e0;
  char local_2d8 [8];
  int32_t uStack_2d0;
  int32_t local_2c8;
  int32_t uStack_2c0;
  char local_2b8 [8];
  int32_t uStack_2b0;
  int32_t local_2a8;
  int32_t uStack_2a0;
  char local_298 [8];
  int32_t uStack_290;
  int32_t local_288;
  int32_t uStack_280;
  char local_278 [8];
  int32_t uStack_270;
  int32_t local_268;
  int32_t uStack_260;
  char local_258 [8];
  int32_t uStack_250;
  int32_t local_248;
  int32_t uStack_240;
  char local_238 [8];
  int32_t uStack_230;
  int32_t local_228;
  int32_t uStack_220;
  char local_218 [8];
  int32_t uStack_210;
  int32_t local_208;
  int32_t uStack_200;
  char local_1f8 [8];
  int32_t uStack_1f0;
  int32_t local_1e8;
  int32_t uStack_1e0;
  char local_1d8 [8];
  int32_t uStack_1d0;
  int32_t local_1c8;
  int32_t uStack_1c0;
  char local_1b8 [8];
  int32_t uStack_1b0;
  int32_t local_1a8;
  int32_t uStack_1a0;
  char local_198 [8];
  int32_t uStack_190;
  int32_t local_188;
  int32_t uStack_180;
  char local_178 [8];
  int32_t uStack_170;
  int32_t local_168;
  int32_t uStack_160;
  char local_158 [8];
  int32_t uStack_150;
  int32_t local_148;
  int32_t uStack_140;
  char local_138 [8];
  int32_t uStack_130;
  int32_t local_128;
  int32_t uStack_120;
  char local_118 [8];
  int32_t uStack_110;
  int32_t local_108;
  int32_t uStack_100;
  char local_f8 [8];
  int32_t uStack_f0;
  int32_t local_e8;
  int32_t uStack_e0;
  char local_d8 [8];
  int32_t uStack_d0;
  int32_t local_c8;
  int32_t uStack_c0;
  char local_b8 [8];
  int32_t uStack_b0;
  int32_t local_a8;
  int32_t uStack_a0;
  char local_98 [8];
  int32_t uStack_90;
  int32_t local_88;
  int32_t uStack_80;
  char local_78 [8];
  int32_t uStack_70;
  int32_t local_68;
  int32_t uStack_60;
  char local_58 [8];
  int32_t uStack_50;
  int32_t local_48;
  int32_t uStack_40;
  char local_38 [8];
  int32_t uStack_30;
  int32_t local_28;
  int32_t uStack_20;
  ulonglong local_18 [2];
  
  local_18[0] = DAT_1801eb080 ^ (ulonglong)auStack_3a8;
  if (DAT_1801f3b20 == '\0') {
    FUN_1800c70b0("ScriptHook missing or not yet initialized.",param_2,param_3,param_4);
  }
  else {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x10) < DAT_1801fca18) {
      puVar4 = &DAT_1801fca18;
      FUN_180125398(&DAT_1801fca18);
      if (DAT_1801fca18 == -1) {
        local_358[1] = 0;
        local_358[2] = _DAT_1801d8f90;
        uStack_340 = _UNK_1801d8f98;
        local_358[0] = (ulonglong)_DAT_180182c84;
        local_328 = _DAT_1801d9000;
        uStack_320 = _UNK_1801d9008;
        local_338[0] = s_NG_filmic01_1801d55b0[0];
        local_338[1] = s_NG_filmic01_1801d55b0[1];
        local_338[2] = s_NG_filmic01_1801d55b0[2];
        local_338[3] = s_NG_filmic01_1801d55b0[3];
        local_338[4] = s_NG_filmic01_1801d55b0[4];
        local_338[5] = s_NG_filmic01_1801d55b0[5];
        local_338[6] = s_NG_filmic01_1801d55b0[6];
        local_338[7] = s_NG_filmic01_1801d55b0[7];
        uStack_330 = (ulonglong)CONCAT12(s_NG_filmic01_1801d55b0[10],s_NG_filmic01_1801d55b0._8_2_);
        local_308 = _DAT_1801d9000;
        uStack_300 = _UNK_1801d9008;
        local_318[0] = s_NG_filmic02_1801d55c0[0];
        local_318[1] = s_NG_filmic02_1801d55c0[1];
        local_318[2] = s_NG_filmic02_1801d55c0[2];
        local_318[3] = s_NG_filmic02_1801d55c0[3];
        local_318[4] = s_NG_filmic02_1801d55c0[4];
        local_318[5] = s_NG_filmic02_1801d55c0[5];
        local_318[6] = s_NG_filmic02_1801d55c0[6];
        local_318[7] = s_NG_filmic02_1801d55c0[7];
        uStack_310 = (ulonglong)CONCAT12(s_NG_filmic02_1801d55c0[10],s_NG_filmic02_1801d55c0._8_2_);
        local_2e8 = _DAT_1801d9000;
        uStack_2e0 = _UNK_1801d9008;
        local_2f8[0] = s_NG_filmic03_1801d55d0[0];
        local_2f8[1] = s_NG_filmic03_1801d55d0[1];
        local_2f8[2] = s_NG_filmic03_1801d55d0[2];
        local_2f8[3] = s_NG_filmic03_1801d55d0[3];
        local_2f8[4] = s_NG_filmic03_1801d55d0[4];
        local_2f8[5] = s_NG_filmic03_1801d55d0[5];
        local_2f8[6] = s_NG_filmic03_1801d55d0[6];
        local_2f8[7] = s_NG_filmic03_1801d55d0[7];
        uStack_2f0 = (ulonglong)CONCAT12(s_NG_filmic03_1801d55d0[10],s_NG_filmic03_1801d55d0._8_2_);
        local_2c8 = _DAT_1801d9000;
        uStack_2c0 = _UNK_1801d9008;
        local_2d8[0] = s_NG_filmic04_1801d55e0[0];
        local_2d8[1] = s_NG_filmic04_1801d55e0[1];
        local_2d8[2] = s_NG_filmic04_1801d55e0[2];
        local_2d8[3] = s_NG_filmic04_1801d55e0[3];
        local_2d8[4] = s_NG_filmic04_1801d55e0[4];
        local_2d8[5] = s_NG_filmic04_1801d55e0[5];
        local_2d8[6] = s_NG_filmic04_1801d55e0[6];
        local_2d8[7] = s_NG_filmic04_1801d55e0[7];
        uStack_2d0 = (ulonglong)CONCAT12(s_NG_filmic04_1801d55e0[10],s_NG_filmic04_1801d55e0._8_2_);
        local_2a8 = _DAT_1801d9000;
        uStack_2a0 = _UNK_1801d9008;
        local_2b8[0] = s_NG_filmic05_1801d55f0[0];
        local_2b8[1] = s_NG_filmic05_1801d55f0[1];
        local_2b8[2] = s_NG_filmic05_1801d55f0[2];
        local_2b8[3] = s_NG_filmic05_1801d55f0[3];
        local_2b8[4] = s_NG_filmic05_1801d55f0[4];
        local_2b8[5] = s_NG_filmic05_1801d55f0[5];
        local_2b8[6] = s_NG_filmic05_1801d55f0[6];
        local_2b8[7] = s_NG_filmic05_1801d55f0[7];
        uStack_2b0 = (ulonglong)CONCAT12(s_NG_filmic05_1801d55f0[10],s_NG_filmic05_1801d55f0._8_2_);
        local_288 = _DAT_1801d9000;
        uStack_280 = _UNK_1801d9008;
        local_298[0] = s_NG_filmic06_1801d5600[0];
        local_298[1] = s_NG_filmic06_1801d5600[1];
        local_298[2] = s_NG_filmic06_1801d5600[2];
        local_298[3] = s_NG_filmic06_1801d5600[3];
        local_298[4] = s_NG_filmic06_1801d5600[4];
        local_298[5] = s_NG_filmic06_1801d5600[5];
        local_298[6] = s_NG_filmic06_1801d5600[6];
        local_298[7] = s_NG_filmic06_1801d5600[7];
        uStack_290 = (ulonglong)CONCAT12(s_NG_filmic06_1801d5600[10],s_NG_filmic06_1801d5600._8_2_);
        local_268 = _DAT_1801d9000;
        uStack_260 = _UNK_1801d9008;
        local_278[0] = s_NG_filmic07_1801d5610[0];
        local_278[1] = s_NG_filmic07_1801d5610[1];
        local_278[2] = s_NG_filmic07_1801d5610[2];
        local_278[3] = s_NG_filmic07_1801d5610[3];
        local_278[4] = s_NG_filmic07_1801d5610[4];
        local_278[5] = s_NG_filmic07_1801d5610[5];
        local_278[6] = s_NG_filmic07_1801d5610[6];
        local_278[7] = s_NG_filmic07_1801d5610[7];
        uStack_270 = (ulonglong)CONCAT12(s_NG_filmic07_1801d5610[10],s_NG_filmic07_1801d5610._8_2_);
        local_248 = _DAT_1801d9000;
        uStack_240 = _UNK_1801d9008;
        local_258[0] = s_NG_filmic08_1801d5620[0];
        local_258[1] = s_NG_filmic08_1801d5620[1];
        local_258[2] = s_NG_filmic08_1801d5620[2];
        local_258[3] = s_NG_filmic08_1801d5620[3];
        local_258[4] = s_NG_filmic08_1801d5620[4];
        local_258[5] = s_NG_filmic08_1801d5620[5];
        local_258[6] = s_NG_filmic08_1801d5620[6];
        local_258[7] = s_NG_filmic08_1801d5620[7];
        uStack_250 = (ulonglong)CONCAT12(s_NG_filmic08_1801d5620[10],s_NG_filmic08_1801d5620._8_2_);
        local_228 = _DAT_1801d9000;
        uStack_220 = _UNK_1801d9008;
        local_238[0] = s_NG_filmic09_1801d5630[0];
        local_238[1] = s_NG_filmic09_1801d5630[1];
        local_238[2] = s_NG_filmic09_1801d5630[2];
        local_238[3] = s_NG_filmic09_1801d5630[3];
        local_238[4] = s_NG_filmic09_1801d5630[4];
        local_238[5] = s_NG_filmic09_1801d5630[5];
        local_238[6] = s_NG_filmic09_1801d5630[6];
        local_238[7] = s_NG_filmic09_1801d5630[7];
        uStack_230 = (ulonglong)CONCAT12(s_NG_filmic09_1801d5630[10],s_NG_filmic09_1801d5630._8_2_);
        local_208 = _DAT_1801d9000;
        uStack_200 = _UNK_1801d9008;
        local_218[0] = s_NG_filmic10_1801d5640[0];
        local_218[1] = s_NG_filmic10_1801d5640[1];
        local_218[2] = s_NG_filmic10_1801d5640[2];
        local_218[3] = s_NG_filmic10_1801d5640[3];
        local_218[4] = s_NG_filmic10_1801d5640[4];
        local_218[5] = s_NG_filmic10_1801d5640[5];
        local_218[6] = s_NG_filmic10_1801d5640[6];
        local_218[7] = s_NG_filmic10_1801d5640[7];
        uStack_210 = (ulonglong)CONCAT12(s_NG_filmic10_1801d5640[10],s_NG_filmic10_1801d5640._8_2_);
        local_1e8 = _DAT_1801d9000;
        uStack_1e0 = _UNK_1801d9008;
        local_1f8[0] = s_NG_filmic11_1801d5650[0];
        local_1f8[1] = s_NG_filmic11_1801d5650[1];
        local_1f8[2] = s_NG_filmic11_1801d5650[2];
        local_1f8[3] = s_NG_filmic11_1801d5650[3];
        local_1f8[4] = s_NG_filmic11_1801d5650[4];
        local_1f8[5] = s_NG_filmic11_1801d5650[5];
        local_1f8[6] = s_NG_filmic11_1801d5650[6];
        local_1f8[7] = s_NG_filmic11_1801d5650[7];
        uStack_1f0 = (ulonglong)CONCAT12(s_NG_filmic11_1801d5650[10],s_NG_filmic11_1801d5650._8_2_);
        local_1c8 = _DAT_1801d9000;
        uStack_1c0 = _UNK_1801d9008;
        local_1d8[0] = s_NG_filmic12_1801d5660[0];
        local_1d8[1] = s_NG_filmic12_1801d5660[1];
        local_1d8[2] = s_NG_filmic12_1801d5660[2];
        local_1d8[3] = s_NG_filmic12_1801d5660[3];
        local_1d8[4] = s_NG_filmic12_1801d5660[4];
        local_1d8[5] = s_NG_filmic12_1801d5660[5];
        local_1d8[6] = s_NG_filmic12_1801d5660[6];
        local_1d8[7] = s_NG_filmic12_1801d5660[7];
        uStack_1d0 = (ulonglong)CONCAT12(s_NG_filmic12_1801d5660[10],s_NG_filmic12_1801d5660._8_2_);
        local_1a8 = _DAT_1801d9000;
        uStack_1a0 = _UNK_1801d9008;
        local_1b8[0] = s_NG_filmic13_1801d5670[0];
        local_1b8[1] = s_NG_filmic13_1801d5670[1];
        local_1b8[2] = s_NG_filmic13_1801d5670[2];
        local_1b8[3] = s_NG_filmic13_1801d5670[3];
        local_1b8[4] = s_NG_filmic13_1801d5670[4];
        local_1b8[5] = s_NG_filmic13_1801d5670[5];
        local_1b8[6] = s_NG_filmic13_1801d5670[6];
        local_1b8[7] = s_NG_filmic13_1801d5670[7];
        uStack_1b0 = (ulonglong)CONCAT12(s_NG_filmic13_1801d5670[10],s_NG_filmic13_1801d5670._8_2_);
        local_188 = _DAT_1801d9000;
        uStack_180 = _UNK_1801d9008;
        local_198[0] = s_NG_filmic14_1801d5680[0];
        local_198[1] = s_NG_filmic14_1801d5680[1];
        local_198[2] = s_NG_filmic14_1801d5680[2];
        local_198[3] = s_NG_filmic14_1801d5680[3];
        local_198[4] = s_NG_filmic14_1801d5680[4];
        local_198[5] = s_NG_filmic14_1801d5680[5];
        local_198[6] = s_NG_filmic14_1801d5680[6];
        local_198[7] = s_NG_filmic14_1801d5680[7];
        uStack_190 = (ulonglong)CONCAT12(s_NG_filmic14_1801d5680[10],s_NG_filmic14_1801d5680._8_2_);
        local_168 = _DAT_1801d9000;
        uStack_160 = _UNK_1801d9008;
        local_178[0] = s_NG_filmic15_1801d5690[0];
        local_178[1] = s_NG_filmic15_1801d5690[1];
        local_178[2] = s_NG_filmic15_1801d5690[2];
        local_178[3] = s_NG_filmic15_1801d5690[3];
        local_178[4] = s_NG_filmic15_1801d5690[4];
        local_178[5] = s_NG_filmic15_1801d5690[5];
        local_178[6] = s_NG_filmic15_1801d5690[6];
        local_178[7] = s_NG_filmic15_1801d5690[7];
        uStack_170 = (ulonglong)CONCAT12(s_NG_filmic15_1801d5690[10],s_NG_filmic15_1801d5690._8_2_);
        local_148 = _DAT_1801d9000;
        uStack_140 = _UNK_1801d9008;
        local_158[0] = s_NG_filmic16_1801d56a0[0];
        local_158[1] = s_NG_filmic16_1801d56a0[1];
        local_158[2] = s_NG_filmic16_1801d56a0[2];
        local_158[3] = s_NG_filmic16_1801d56a0[3];
        local_158[4] = s_NG_filmic16_1801d56a0[4];
        local_158[5] = s_NG_filmic16_1801d56a0[5];
        local_158[6] = s_NG_filmic16_1801d56a0[6];
        local_158[7] = s_NG_filmic16_1801d56a0[7];
        uStack_150 = (ulonglong)CONCAT12(s_NG_filmic16_1801d56a0[10],s_NG_filmic16_1801d56a0._8_2_);
        local_128 = _DAT_1801d9000;
        uStack_120 = _UNK_1801d9008;
        local_138[0] = s_NG_filmic17_1801d56b0[0];
        local_138[1] = s_NG_filmic17_1801d56b0[1];
        local_138[2] = s_NG_filmic17_1801d56b0[2];
        local_138[3] = s_NG_filmic17_1801d56b0[3];
        local_138[4] = s_NG_filmic17_1801d56b0[4];
        local_138[5] = s_NG_filmic17_1801d56b0[5];
        local_138[6] = s_NG_filmic17_1801d56b0[6];
        local_138[7] = s_NG_filmic17_1801d56b0[7];
        uStack_130 = (ulonglong)CONCAT12(s_NG_filmic17_1801d56b0[10],s_NG_filmic17_1801d56b0._8_2_);
        local_108 = _DAT_1801d9000;
        uStack_100 = _UNK_1801d9008;
        local_118[0] = s_NG_filmic18_1801d56c0[0];
        local_118[1] = s_NG_filmic18_1801d56c0[1];
        local_118[2] = s_NG_filmic18_1801d56c0[2];
        local_118[3] = s_NG_filmic18_1801d56c0[3];
        local_118[4] = s_NG_filmic18_1801d56c0[4];
        local_118[5] = s_NG_filmic18_1801d56c0[5];
        local_118[6] = s_NG_filmic18_1801d56c0[6];
        local_118[7] = s_NG_filmic18_1801d56c0[7];
        uStack_110 = (ulonglong)CONCAT12(s_NG_filmic18_1801d56c0[10],s_NG_filmic18_1801d56c0._8_2_);
        local_e8 = _DAT_1801d9000;
        uStack_e0 = _UNK_1801d9008;
        local_f8[0] = s_NG_filmic19_1801d56d0[0];
        local_f8[1] = s_NG_filmic19_1801d56d0[1];
        local_f8[2] = s_NG_filmic19_1801d56d0[2];
        local_f8[3] = s_NG_filmic19_1801d56d0[3];
        local_f8[4] = s_NG_filmic19_1801d56d0[4];
        local_f8[5] = s_NG_filmic19_1801d56d0[5];
        local_f8[6] = s_NG_filmic19_1801d56d0[6];
        local_f8[7] = s_NG_filmic19_1801d56d0[7];
        uStack_f0 = (ulonglong)CONCAT12(s_NG_filmic19_1801d56d0[10],s_NG_filmic19_1801d56d0._8_2_);
        local_c8 = _DAT_1801d9000;
        uStack_c0 = _UNK_1801d9008;
        local_d8[0] = s_NG_filmic20_1801d56e0[0];
        local_d8[1] = s_NG_filmic20_1801d56e0[1];
        local_d8[2] = s_NG_filmic20_1801d56e0[2];
        local_d8[3] = s_NG_filmic20_1801d56e0[3];
        local_d8[4] = s_NG_filmic20_1801d56e0[4];
        local_d8[5] = s_NG_filmic20_1801d56e0[5];
        local_d8[6] = s_NG_filmic20_1801d56e0[6];
        local_d8[7] = s_NG_filmic20_1801d56e0[7];
        uStack_d0 = (ulonglong)CONCAT12(s_NG_filmic20_1801d56e0[10],s_NG_filmic20_1801d56e0._8_2_);
        local_a8 = _DAT_1801d9000;
        uStack_a0 = _UNK_1801d9008;
        local_b8[0] = s_NG_filmic21_1801d56f0[0];
        local_b8[1] = s_NG_filmic21_1801d56f0[1];
        local_b8[2] = s_NG_filmic21_1801d56f0[2];
        local_b8[3] = s_NG_filmic21_1801d56f0[3];
        local_b8[4] = s_NG_filmic21_1801d56f0[4];
        local_b8[5] = s_NG_filmic21_1801d56f0[5];
        local_b8[6] = s_NG_filmic21_1801d56f0[6];
        local_b8[7] = s_NG_filmic21_1801d56f0[7];
        uStack_b0 = (ulonglong)CONCAT12(s_NG_filmic21_1801d56f0[10],s_NG_filmic21_1801d56f0._8_2_);
        local_88 = _DAT_1801d9000;
        uStack_80 = _UNK_1801d9008;
        local_98[0] = s_NG_filmic22_1801d5700[0];
        local_98[1] = s_NG_filmic22_1801d5700[1];
        local_98[2] = s_NG_filmic22_1801d5700[2];
        local_98[3] = s_NG_filmic22_1801d5700[3];
        local_98[4] = s_NG_filmic22_1801d5700[4];
        local_98[5] = s_NG_filmic22_1801d5700[5];
        local_98[6] = s_NG_filmic22_1801d5700[6];
        local_98[7] = s_NG_filmic22_1801d5700[7];
        uStack_90 = (ulonglong)CONCAT12(s_NG_filmic22_1801d5700[10],s_NG_filmic22_1801d5700._8_2_);
        local_68 = _DAT_1801d9000;
        uStack_60 = _UNK_1801d9008;
        local_78[0] = s_NG_filmic23_1801d5710[0];
        local_78[1] = s_NG_filmic23_1801d5710[1];
        local_78[2] = s_NG_filmic23_1801d5710[2];
        local_78[3] = s_NG_filmic23_1801d5710[3];
        local_78[4] = s_NG_filmic23_1801d5710[4];
        local_78[5] = s_NG_filmic23_1801d5710[5];
        local_78[6] = s_NG_filmic23_1801d5710[6];
        local_78[7] = s_NG_filmic23_1801d5710[7];
        uStack_70 = (ulonglong)CONCAT12(s_NG_filmic23_1801d5710[10],s_NG_filmic23_1801d5710._8_2_);
        local_48 = _DAT_1801d9000;
        uStack_40 = _UNK_1801d9008;
        local_58[0] = s_NG_filmic24_1801d5720[0];
        local_58[1] = s_NG_filmic24_1801d5720[1];
        local_58[2] = s_NG_filmic24_1801d5720[2];
        local_58[3] = s_NG_filmic24_1801d5720[3];
        local_58[4] = s_NG_filmic24_1801d5720[4];
        local_58[5] = s_NG_filmic24_1801d5720[5];
        local_58[6] = s_NG_filmic24_1801d5720[6];
        local_58[7] = s_NG_filmic24_1801d5720[7];
        uStack_50 = (ulonglong)CONCAT12(s_NG_filmic24_1801d5720[10],s_NG_filmic24_1801d5720._8_2_);
        local_28 = _DAT_1801d9000;
        uStack_20 = _UNK_1801d9008;
        local_38[0] = s_NG_filmic25_1801d5730[0];
        local_38[1] = s_NG_filmic25_1801d5730[1];
        local_38[2] = s_NG_filmic25_1801d5730[2];
        local_38[3] = s_NG_filmic25_1801d5730[3];
        local_38[4] = s_NG_filmic25_1801d5730[4];
        local_38[5] = s_NG_filmic25_1801d5730[5];
        local_38[6] = s_NG_filmic25_1801d5730[6];
        local_38[7] = s_NG_filmic25_1801d5730[7];
        uStack_30 = (ulonglong)CONCAT12(s_NG_filmic25_1801d5730[10],s_NG_filmic25_1801d5730._8_2_);
        DAT_1801fca20 = (int32_t *)0x0;
        DAT_1801fca28 = (int32_t *)0x0;
        _DAT_1801fca30 = (int32_t *)0x0;
        puVar3 = (int32_t *)FUN_1800ba8c0(puVar4,0x1a);
        _DAT_1801fca30 = puVar3 + 0x68;
        local_378 = &DAT_1801fca20;
        puVar5 = local_358;
        local_360 = &DAT_1801fca20;
        DAT_1801fca20 = puVar3;
        DAT_1801fca28 = puVar3;
        local_370 = puVar3;
        do {
          local_368 = puVar3;
          FUN_1800ba630(puVar3,puVar5);
          puVar3 = puVar3 + 4;
          puVar5 = puVar5 + 4;
        } while (puVar5 != local_18);
        DAT_1801fca28 = puVar3;
        local_368 = puVar3;
        _eh_vector_destructor_iterator_(local_358,0x20,0x1a,thunk_FUN_1800a6800);
        atexit((_func_5014 *)&LAB_180156440);
        _Init_thread_footer(&DAT_1801fca18);
      }
    }
    (**(code **)(DAT_1801f3ae0 + 0x3a8))("Hide Player",&DAT_1801f39e9);
    (**(code **)(DAT_1801f3ae0 + 0x3a8))("Hide Player & Vehicle",&DAT_1801f39e8);
    (**(code **)(DAT_1801f3ae0 + 0x3a8))("Enable LOD Distance Multiplier",&DAT_1801f39e6);
    local_378 = (int32_t *)0x0;
    cVar2 = (**(code **)(DAT_1801f3ae0 + 0x388))("Re-enable player control",&local_378);
    if (cVar2 != '\0') {
      DAT_1801f39e4 = DAT_1801f39e4 == '\0';
    }
    (**(code **)(DAT_1801f3ae0 + 0x298))();
    local_380 = 0;
    local_388 = &DAT_1801cb828;
    (**(code **)(DAT_1801f3ae0 + 0x478))("Camera FOV",&DAT_1801ebdbc,DAT_1801d8e98,DAT_1801d8ef8);
    local_380 = 0;
    local_388 = &DAT_1801cb828;
    cVar2 = (**(code **)(DAT_1801f3ae0 + 0x478))
                      ("LOD Distance Multiplier",&DAT_1801ebdb8,DAT_1801d8e38,DAT_1801d8e74);
    if (cVar2 != '\0') {
      DAT_1801f39e6 = 1;
    }
    local_378 = (int32_t *)0x0;
    cVar2 = (**(code **)(DAT_1801f3ae0 + 0x388))("Reset Camera Rotation",&local_378);
    if (cVar2 != '\0') {
      DAT_1801f39ea = 1;
    }
    (**(code **)(DAT_1801f3ae0 + 0x298))();
    (**(code **)(DAT_1801f3ae0 + 0x3a8))("Enable DOF",&DAT_1801f39e5);
    local_380 = 0;
    local_388 = &DAT_1801cb828;
    (**(code **)(DAT_1801f3ae0 + 0x478))("DOF Strength",&DAT_1801ebdb4,0,DAT_1801d8ea8);
    local_380 = 0;
    local_388 = &DAT_1801cb828;
    (**(code **)(DAT_1801f3ae0 + 0x478))("DOF Distance",&DAT_1801ebdb0,0,DAT_1801d8ef4);
    (**(code **)(DAT_1801f3ae0 + 0x298))();
    (**(code **)(DAT_1801f3ae0 + 0x3a8))("Keep Timecycle Modifier always active",&DAT_1801f39e7);
    FUN_1800df4a0();
    if ((ulonglong)((longlong)DAT_1801fca28 - (longlong)DAT_1801fca20 >> 5) <=
        (ulonglong)(longlong)DAT_1801f3b1c) {
      FUN_1800ddc20();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    PTR_DAT_1801ebdc0 = (int32_t *)(DAT_1801fca20 + (longlong)DAT_1801f3b1c * 4);
    if (0xf < *(ulonglong *)((longlong)PTR_DAT_1801ebdc0 + 0x18)) {
      PTR_DAT_1801ebdc0 = *(int32_t **)PTR_DAT_1801ebdc0;
    }
  }
  FUN_1801252c0(local_18[0] ^ (ulonglong)auStack_3a8);
  return;
}

// ---- Function: FUN_1800e03a0 ----
void FUN_1800e03a0(int32_t param_1,int32_t param_2,int32_t param_3,int32_t param_4)

{
  char cVar1;
  float fVar2;
  
  FUN_1800de850(&DAT_1801d5220,param_2,param_3,param_4);
  cVar1 = (**(code **)(DAT_1801f3ae0 + 0x8b8))(0);
  if (cVar1 != '\0') {
    (**(code **)(DAT_1801f3ae0 + 0x6a0))();
    fVar2 = (float)(**(code **)(DAT_1801f3ae0 + 0x220))();
    (**(code **)(DAT_1801f3ae0 + 0x208))(fVar2 * _DAT_1801d8ec8);
    (**(code **)(DAT_1801f3ae0 + 0x348))("Checking this will make the shadows become longer",0);
    (**(code **)(DAT_1801f3ae0 + 0x210))();
                    
                    
    (**(code **)(DAT_1801f3ae0 + 0x6a8))();
    return;
  }
  return;
}

