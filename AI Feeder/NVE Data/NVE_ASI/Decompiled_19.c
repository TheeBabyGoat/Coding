#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_1800c6660 ----
void FUN_1800c6660(longlong param_1,ulonglong param_2)

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
joined_r0x0001800c66d5:
  do {
    while( true ) {
      while( true ) {
        if (plVar8 == plVar1) {
          return;
        }
        plVar2 = (longlong *)*plVar8;
        puVar11 = (int32_t *)
                  (((((((ulonglong)*(byte *)(plVar8 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar8 + 0x11)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar8 + 0x12)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar8 + 0x13)) * 0x100000001b3 &
                   *(ulonglong *)(param_1 + 0x30)) * 0x10 + *(longlong *)(param_1 + 0x18));
        if ((longlong *)*puVar11 != plVar1) break;
        *puVar11 = plVar8;
        puVar11[1] = plVar8;
        plVar8 = plVar2;
      }
      plVar3 = (longlong *)puVar11[1];
      if ((int)plVar8[2] != (int)plVar3[2]) break;
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
        goto joined_r0x0001800c66d5;
      }
      plVar3 = (longlong *)plVar3[1];
    } while ((int)plVar8[2] != (int)plVar3[2]);
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

// ---- Function: FUN_1800c6820 ----
int32_t * FUN_1800c6820(int32_t param_1,int32_t *param_2,int32_t *param_3)

{
  ulonglong uVar1;
  int32_t *puVar2;
  code *pcVar3;
  longlong lVar4;
  void *pvVar5;
  int32_t *puVar6;
  ulonglong uVar7;
  int32_t *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  lVar9 = (longlong)param_2 - (longlong)DAT_1801ec6f0;
  lVar4 = (longlong)DAT_1801ec6f8 - (longlong)DAT_1801ec6f0 >> 3;
  if (lVar4 == 0x1fffffffffffffff) {
    FUN_1800aa480();
    pcVar3 = (code *)swi(3);
    puVar6 = (int32_t *)(*pcVar3)();
    return puVar6;
  }
  uVar7 = (longlong)DAT_1801ec700 - (longlong)DAT_1801ec6f0 >> 3;
  uVar1 = lVar4 + 1;
  if (0x1fffffffffffffff - (uVar7 >> 1) < uVar7) {
LAB_1800c69c0:
    FUN_1800ba8a0();
    pcVar3 = (code *)swi(3);
    puVar6 = (int32_t *)(*pcVar3)();
    return puVar6;
  }
  uVar7 = (uVar7 >> 1) + uVar7;
  uVar10 = uVar1;
  if (uVar1 <= uVar7) {
    uVar10 = uVar7;
  }
  if (0x1fffffffffffffff < uVar10) goto LAB_1800c69c0;
  uVar7 = uVar10 * 8;
  if (uVar7 == 0) {
    puVar6 = (int32_t *)0x0;
  }
  else if (uVar7 < 0x1000) {
    puVar6 = (int32_t *)operator_new(uVar7);
  }
  else {
    if (uVar7 + 0x27 <= uVar7) goto LAB_1800c69c0;
    pvVar5 = operator_new(uVar7 + 0x27);
    if (pvVar5 == (void *)0x0) goto LAB_1800c69ba;
    puVar6 = (int32_t *)((longlong)pvVar5 + 0x27U & 0xffffffffffffffe0);
    puVar6[-1] = pvVar5;
  }
  puVar2 = puVar6 + (lVar9 >> 3);
  *puVar2 = *param_3;
  if (param_2 == DAT_1801ec6f8) {
    uVar7 = (longlong)DAT_1801ec6f8 - (longlong)DAT_1801ec6f0;
    puVar8 = puVar6;
    param_2 = DAT_1801ec6f0;
  }
  else {
    FUN_180150fd0(puVar6,DAT_1801ec6f0,(longlong)param_2 - (longlong)DAT_1801ec6f0);
    puVar8 = puVar2 + 1;
    uVar7 = (longlong)DAT_1801ec6f8 - (longlong)param_2;
  }
  FUN_180150fd0(puVar8,param_2,uVar7);
  if (DAT_1801ec6f0 != (int32_t *)0x0) {
    puVar8 = DAT_1801ec6f0;
    if ((0xfff < ((longlong)DAT_1801ec700 - (longlong)DAT_1801ec6f0 & 0xfffffffffffffff8U)) &&
       (puVar8 = (int32_t *)DAT_1801ec6f0[-1],
       0x1f < (ulonglong)((longlong)DAT_1801ec6f0 + (-8 - (longlong)puVar8)))) {
LAB_1800c69ba:
      FUN_18012b7b4();
      pcVar3 = (code *)swi(3);
      puVar6 = (int32_t *)(*pcVar3)();
      return puVar6;
    }
    thunk_FUN_18012d5e8(puVar8);
  }
  DAT_1801ec6f0 = puVar6;
  DAT_1801ec6f8 = puVar6 + uVar1;
  DAT_1801ec700 = puVar6 + uVar10;
  return puVar2;
}

// ---- Function: FUN_1800c69d0 ----
int32_t * FUN_1800c69d0(int32_t param_1,int32_t *param_2,int32_t *param_3)

{
  ulonglong uVar1;
  int32_t *puVar2;
  code *pcVar3;
  longlong lVar4;
  void *pvVar5;
  int32_t *puVar6;
  ulonglong uVar7;
  int32_t *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  lVar9 = (longlong)param_2 - (longlong)DAT_1801ec6d8;
  lVar4 = (longlong)DAT_1801ec6e0 - (longlong)DAT_1801ec6d8 >> 3;
  if (lVar4 == 0x1fffffffffffffff) {
    FUN_1800aa480();
    pcVar3 = (code *)swi(3);
    puVar6 = (int32_t *)(*pcVar3)();
    return puVar6;
  }
  uVar7 = (longlong)DAT_1801ec6e8 - (longlong)DAT_1801ec6d8 >> 3;
  uVar1 = lVar4 + 1;
  if (0x1fffffffffffffff - (uVar7 >> 1) < uVar7) {
LAB_1800c6b70:
    FUN_1800ba8a0();
    pcVar3 = (code *)swi(3);
    puVar6 = (int32_t *)(*pcVar3)();
    return puVar6;
  }
  uVar7 = (uVar7 >> 1) + uVar7;
  uVar10 = uVar1;
  if (uVar1 <= uVar7) {
    uVar10 = uVar7;
  }
  if (0x1fffffffffffffff < uVar10) goto LAB_1800c6b70;
  uVar7 = uVar10 * 8;
  if (uVar7 == 0) {
    puVar6 = (int32_t *)0x0;
  }
  else if (uVar7 < 0x1000) {
    puVar6 = (int32_t *)operator_new(uVar7);
  }
  else {
    if (uVar7 + 0x27 <= uVar7) goto LAB_1800c6b70;
    pvVar5 = operator_new(uVar7 + 0x27);
    if (pvVar5 == (void *)0x0) goto LAB_1800c6b6a;
    puVar6 = (int32_t *)((longlong)pvVar5 + 0x27U & 0xffffffffffffffe0);
    puVar6[-1] = pvVar5;
  }
  puVar2 = puVar6 + (lVar9 >> 3);
  *puVar2 = *param_3;
  if (param_2 == DAT_1801ec6e0) {
    uVar7 = (longlong)DAT_1801ec6e0 - (longlong)DAT_1801ec6d8;
    puVar8 = puVar6;
    param_2 = DAT_1801ec6d8;
  }
  else {
    FUN_180150fd0(puVar6,DAT_1801ec6d8,(longlong)param_2 - (longlong)DAT_1801ec6d8);
    puVar8 = puVar2 + 1;
    uVar7 = (longlong)DAT_1801ec6e0 - (longlong)param_2;
  }
  FUN_180150fd0(puVar8,param_2,uVar7);
  if (DAT_1801ec6d8 != (int32_t *)0x0) {
    puVar8 = DAT_1801ec6d8;
    if ((0xfff < ((longlong)DAT_1801ec6e8 - (longlong)DAT_1801ec6d8 & 0xfffffffffffffff8U)) &&
       (puVar8 = (int32_t *)DAT_1801ec6d8[-1],
       0x1f < (ulonglong)((longlong)DAT_1801ec6d8 + (-8 - (longlong)puVar8)))) {
LAB_1800c6b6a:
      FUN_18012b7b4();
      pcVar3 = (code *)swi(3);
      puVar6 = (int32_t *)(*pcVar3)();
      return puVar6;
    }
    thunk_FUN_18012d5e8(puVar8);
  }
  DAT_1801ec6d8 = puVar6;
  DAT_1801ec6e0 = puVar6 + uVar1;
  DAT_1801ec6e8 = puVar6 + uVar10;
  return puVar2;
}

// ---- Function: FUN_1800c6b80 ----
void FUN_1800c6b80(longlong *param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  LPVOID pvVar3;
  
  pvVar1 = (LPVOID)*param_1;
  if (pvVar1 != (LPVOID)0x0) {
    pvVar3 = pvVar1;
    if ((0xfff < (ulonglong)(param_1[2] - (longlong)pvVar1)) &&
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

// ---- Function: FUN_1800c6be0 ----
void FUN_1800c6be0(longlong param_1)

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
    FUN_1800a6800(plVar5);
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

// ---- Function: FUN_1800c6c70 ----
void FUN_1800c6c70(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  LPVOID pvVar2;
  code *pcVar3;
  LPVOID pvVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)*param_1;
  if (plVar5 != (longlong *)0x0) {
    plVar1 = (longlong *)param_1[1];
    for (; plVar5 != plVar1; plVar5 = plVar5 + 4) {
      FUN_1800a6800(plVar5);
    }
    pvVar2 = (LPVOID)*param_1;
    pvVar4 = pvVar2;
    if ((0xfff < (param_1[2] - (longlong)pvVar2 & 0xffffffffffffffe0U)) &&
       (pvVar4 = *(LPVOID *)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar4)))) {
      FUN_18012b7b4();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    thunk_FUN_18012d5e8(pvVar4);
  }
  *param_1 = param_2;
  param_1[1] = param_3 * 0x20 + param_2;
  param_1[2] = param_4 * 0x20 + param_2;
  return;
}

// ---- Function: FUN_1800c6d30 ----
int32_t * FUN_1800c6d30(longlong *param_1,int32_t *param_2,int32_t *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int32_t *puVar3;
  code *pcVar4;
  int32_t uVar5;
  longlong lVar6;
  int32_t *puVar7;
  int32_t *puVar8;
  int32_t *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int32_t *puVar12;
  
  lVar2 = *param_1;
  lVar6 = param_1[1] - lVar2 >> 5;
  if (lVar6 != 0x7ffffffffffffff) {
    uVar1 = lVar6 + 1;
    uVar10 = param_1[2] - lVar2 >> 5;
    uVar11 = 0x7ffffffffffffff;
    if ((uVar10 <= 0x7ffffffffffffff - (uVar10 >> 1)) &&
       (uVar11 = (uVar10 >> 1) + uVar10, uVar11 < uVar1)) {
      uVar11 = uVar1;
    }
    puVar7 = (int32_t *)FUN_1800ba8c0(uVar10,uVar11);
    puVar9 = (int32_t *)(((longlong)param_2 - lVar2 & 0xffffffffffffffe0U) + (longlong)puVar7);
    FUN_1800ba630(puVar9,param_3);
    puVar3 = (int32_t *)param_1[1];
    puVar8 = (int32_t *)*param_1;
    puVar12 = puVar7;
    if (param_2 == puVar3) {
      for (; puVar8 != puVar3; puVar8 = puVar8 + 4) {
        *puVar12 = 0;
        puVar12[1] = 0;
        puVar12[2] = 0;
        puVar12[3] = 0;
        uVar5 = puVar8[1];
        *puVar12 = *puVar8;
        puVar12[1] = uVar5;
        uVar5 = puVar8[3];
        puVar12[2] = puVar8[2];
        puVar12[3] = uVar5;
        *(int32_t *)puVar8 = 0;
        puVar8[2] = 0;
        puVar8[3] = 0xf;
        puVar12 = puVar12 + 4;
      }
    }
    else {
      for (; puVar8 != param_2; puVar8 = puVar8 + 4) {
        *puVar12 = 0;
        puVar12[1] = 0;
        puVar12[2] = 0;
        puVar12[3] = 0;
        uVar5 = puVar8[1];
        *puVar12 = *puVar8;
        puVar12[1] = uVar5;
        uVar5 = puVar8[3];
        puVar12[2] = puVar8[2];
        puVar12[3] = uVar5;
        *(int32_t *)puVar8 = 0;
        puVar8[2] = 0;
        puVar8[3] = 0xf;
        puVar12 = puVar12 + 4;
      }
      puVar3 = (int32_t *)param_1[1];
      puVar8 = puVar9;
      if (param_2 != puVar3) {
        do {
          puVar12 = puVar8 + 4;
          *puVar12 = 0;
          puVar8[5] = 0;
          puVar8[6] = 0;
          puVar8[7] = 0;
          uVar5 = param_2[1];
          *puVar12 = *param_2;
          puVar8[5] = uVar5;
          uVar5 = param_2[3];
          puVar8[6] = param_2[2];
          puVar8[7] = uVar5;
          *(int32_t *)param_2 = 0;
          param_2[2] = 0;
          param_2[3] = 0xf;
          param_2 = param_2 + 4;
          puVar8 = puVar12;
        } while (param_2 != puVar3);
      }
    }
    FUN_1800c6c70(param_1,(longlong)puVar7,uVar1,uVar11);
    return puVar9;
  }
  FUN_1800aa480();
  pcVar4 = (code *)swi(3);
  puVar9 = (int32_t *)(*pcVar4)();
  return puVar9;
}

// ---- Function: FUN_1800c6ef0 ----
int32_t FUN_1800c6ef0(int32_t param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x10
              ) < DAT_1801f3a90) {
    FUN_180125398(&DAT_1801f3a90);
    if (DAT_1801f3a90 == -1) {
      DAT_1801f3a98 = param_1;
      _Init_thread_footer(&DAT_1801f3a90);
    }
  }
  return DAT_1801f3a98;
}

// ---- Function: FUN_1800c6f60 ----
void FUN_1800c6f60(void)

{
  int iVar1;
  HANDLE pvVar2;
  FARPROC pFVar3;
  uint uVar4;
  ulonglong uVar5;
  int32_t auStack_2048 [32];
  uint local_2028 [4];
  longlong local_2018 [1024];
  ulonglong local_18;
  int32_t uStack_10;
  
  uStack_10 = 0x1800c6f6c;
  local_18 = DAT_1801eb080 ^ (ulonglong)auStack_2048;
  uVar5 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x10) < DAT_1801f3aa0) && (FUN_180125398(&DAT_1801f3aa0), DAT_1801f3aa0 == -1)) {
    DAT_1801f3aa8 = 0;
    _Init_thread_footer(&DAT_1801f3aa0);
  }
  if (DAT_1801f3aa8 == 0) {
    local_2028[0] = 0;
    pvVar2 = GetCurrentProcess();
    iVar1 = K32EnumProcessModules(pvVar2,local_2018,0x2000,local_2028);
    if (iVar1 != 0) {
      if (0x2000 < local_2028[0]) {
        local_2028[0] = 0x2000;
      }
      if ((local_2028[0] & 0xfffffff8) != 0) {
        do {
          pFVar3 = GetProcAddress((HMODULE)local_2018[uVar5],"ReShadeRegisterAddon");
          if ((pFVar3 != (FARPROC)0x0) &&
             (pFVar3 = GetProcAddress((HMODULE)local_2018[uVar5],"ReShadeUnregisterAddon"),
             pFVar3 != (FARPROC)0x0)) {
            DAT_1801f3aa8 = local_2018[uVar5];
            break;
          }
          uVar4 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar4;
        } while (uVar4 < local_2028[0] >> 3);
      }
    }
  }
  FUN_1801252c0(local_18 ^ (ulonglong)auStack_2048);
  return;
}

// ---- Function: FUN_1800c70b0 ----
void FUN_1800c70b0(int32_t param_1,int32_t param_2,int32_t param_3,int32_t param_4)

{
  int32_t local_res10;
  int32_t local_res18;
  int32_t local_res20;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  (**(code **)(DAT_1801f3ae0 + 0x350))(param_1,&local_res10);
  return;
}

// ---- Function: FUN_1800c70f0 ----
int32_t FUN_1800c70f0(float *param_1,int32_t param_2,int32_t param_3,int32_t param_4)

{
  float in_XMM0_Da;
  float in_XMM0_Db;
  float in_XMM0_Dc;
  float fVar1;
  float in_XMM0_Dd;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  float fVar2;
  float in_XMM2_Dc;
  float in_XMM2_Dd;
  float fVar4;
  int32_t in_XMM3_Qb;
  int32_t auVar3 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar2 = (float)((ulonglong)param_3 >> 0x20);
  fVar1 = (float)((ulonglong)param_2 >> 0x20);
  fVar4 = (float)((ulonglong)param_4 >> 0x20);
  fVar6 = (float)in_XMM3_Qb;
  fVar7 = (float)((ulonglong)in_XMM3_Qb >> 0x20);
  fVar8 = in_XMM2_Dd * in_XMM0_Dc - in_XMM2_Dc * in_XMM0_Dd;
  fVar9 = fVar7 * in_XMM0_Dc - fVar6 * in_XMM0_Dd;
  fVar10 = in_XMM2_Dd * in_XMM1_Dc - in_XMM2_Dc * in_XMM1_Dd;
  fVar11 = fVar7 * in_XMM1_Dc - fVar6 * in_XMM1_Dd;
  fVar5 = in_XMM1_Dd * in_XMM0_Dc - in_XMM1_Dc * in_XMM0_Dd;
  fVar7 = fVar7 * in_XMM2_Dc - fVar6 * in_XMM2_Dd;
  fVar6 = fVar10 * fVar4 + (fVar7 * fVar1 - fVar11 * fVar2);
  fVar7 = (fVar9 * fVar2 - fVar8 * fVar4) - fVar7 * in_XMM0_Db;
  fVar1 = fVar7 * (float)param_2 +
          ((fVar8 * fVar1 - fVar5 * fVar2) - fVar10 * in_XMM0_Db) * (float)param_4 +
          fVar6 * in_XMM0_Da +
          (fVar5 * fVar4 + (fVar11 * in_XMM0_Db - fVar9 * fVar1)) * (float)param_3;
  if (param_1 != (float *)0x0) {
    *param_1 = fVar1;
    param_1[1] = fVar1;
    param_1[2] = fVar1;
    param_1[3] = fVar1;
  }
  auVar3._4_4_ = fVar1;
  auVar3._0_4_ = fVar1;
  auVar3._8_4_ = fVar1;
  auVar3._12_4_ = fVar1;
  auVar3 = divps(_DAT_1801cc1a0,auVar3);
  return CONCAT44(auVar3._4_4_ * fVar7,auVar3._0_4_ * fVar6);
}

// ---- Function: FUN_1800c73e0 ----
longlong * FUN_1800c73e0(longlong *param_1)

{
  longlong lVar1;
  LARGE_INTEGER LVar2;
  longlong lVar3;
  
  lVar1 = FUN_1801249b8();
  LVar2 = FUN_18012499c();
  if (lVar1 == 10000000) {
    *param_1 = LVar2.QuadPart * 100;
    return param_1;
  }
  if (lVar1 == 24000000) {
    lVar1 = LVar2.QuadPart + SUB168(SEXT816(-0x4d0b03f86b6f730d) * SEXT816(LVar2.QuadPart),8);
    lVar3 = (lVar1 >> 0x18) - (lVar1 >> 0x3f);
    lVar1 = (LVar2.QuadPart + lVar3 * -24000000) * 1000000000;
    lVar1 = SUB168(SEXT816(-0x4d0b03f86b6f730d) * SEXT816(lVar1),8) + lVar1;
    *param_1 = ((lVar1 >> 0x18) - (lVar1 >> 0x3f)) + lVar3 * 1000000000;
    return param_1;
  }
  *param_1 = ((LVar2.QuadPart % lVar1) * 1000000000) / lVar1 + (LVar2.QuadPart / lVar1) * 1000000000
  ;
  return param_1;
}

// ---- Function: FUN_1800c74c0 ----
int32_t * FUN_1800c74c0(int32_t *param_1,int32_t param_2)

{
  float *pfVar1;
  void *pvVar2;
  
  *param_1 = param_2;
  *(int32_t *)(param_1 + 4) = 0;
  *(int32_t *)(param_1 + 0xc) = 0;
  *(int32_t *)(param_1 + 0x14) = 0;
  *(int32_t *)(param_1 + 0x18) = 0x3f800000;
  *(int32_t *)(param_1 + 0x20) = 0;
  pfVar1 = (float *)(param_1 + 0x28);
  *pfVar1 = 0.0;
  *(int32_t *)(param_1 + 0x30) = 0;
  *(int32_t *)(param_1 + 0x38) = 0;
  pvVar2 = operator_new(0x80);
  *(void **)pvVar2 = pvVar2;
  *(void **)((longlong)pvVar2 + 8) = pvVar2;
  *(void **)(param_1 + 0x30) = pvVar2;
  *(ulonglong *)(param_1 + 0x40) = 0;
  *(int32_t *)(param_1 + 0x48) = 0;
  *(int32_t *)(param_1 + 0x50) = 0;
  *(int32_t *)(param_1 + 0x58) = 7;
  *(int32_t *)(param_1 + 0x60) = 8;
  *pfVar1 = 1.0;
  FUN_1800a9140((ulonglong *)(param_1 + 0x40),0x10,*(int32_t *)(param_1 + 0x30));
  param_1[0x68] = 1;
  *(int32_t *)(param_1 + 0x6c) = 0;
  *(int32_t *)(param_1 + 0x74) = 0;
  *(int32_t *)(param_1 + 0x7c) = 0;
  *(int32_t *)(param_1 + 0x84) = 0;
  *(int32_t *)(param_1 + 0x8c) = 0x3f800000;
  FUN_1800c9ae0(pfVar1,0x20);
  return param_1;
}

// ---- Function: FUN_1800c75a0 ----
void FUN_1800c75a0(longlong param_1,longlong param_2)

{
  int32_t *puVar1;
  int32_t *puVar2;
  longlong lVar3;
  int32_t uVar4;
  longlong *plVar5;
  int32_t local_28 [2];
  
  *(int32_t *)(param_1 + 0x20) = *(int32_t *)(param_2 + 0x20);
  if (*(uint *)(param_1 + 0x6c) <= *(uint *)(param_2 + 0x6c)) {
    uVar4 = *(int32_t *)(param_2 + 0x74);
    *(int32_t *)(param_1 + 0x6c) = *(int32_t *)(param_2 + 0x6c);
    *(int32_t *)(param_1 + 0x74) = uVar4;
    uVar4 = *(int32_t *)(param_2 + 0x84);
    *(int32_t *)(param_1 + 0x7c) = *(int32_t *)(param_2 + 0x7c);
    *(int32_t *)(param_1 + 0x84) = uVar4;
    *(int32_t *)(param_1 + 0x8c) = *(int32_t *)(param_2 + 0x8c);
  }
  if (*(ulonglong *)(param_2 + 0x38) != 0) {
    FUN_1800c9ae0((float *)(param_1 + 0x28),*(ulonglong *)(param_2 + 0x38));
    puVar1 = *(int32_t **)(param_2 + 0x30);
    for (puVar2 = (int32_t *)*puVar1; puVar2 != puVar1; puVar2 = (int32_t *)*puVar2) {
      plVar5 = FUN_1800ca300((float *)(param_1 + 0x28),local_28,puVar2 + 2);
      lVar3 = *plVar5;
      *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + *(int *)(puVar2 + 3);
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + *(int *)((longlong)puVar2 + 0x1c);
      *(int *)(lVar3 + 0x20) = *(int *)(lVar3 + 0x20) + *(int *)(puVar2 + 4);
      *(int *)(lVar3 + 0x3c) = *(int *)(lVar3 + 0x3c) + *(int *)((longlong)puVar2 + 0x3c);
      *(int *)(lVar3 + 0x40) = *(int *)(lVar3 + 0x40) + *(int *)(puVar2 + 8);
      *(int *)(lVar3 + 0x44) = *(int *)(lVar3 + 0x44) + *(int *)((longlong)puVar2 + 0x44);
      FUN_1800ca960((longlong *)(lVar3 + 0x60),*(int32_t **)(lVar3 + 0x68),
                    (int32_t *)puVar2[0xc],(puVar2[0xd] - (longlong)puVar2[0xc]) / 0x28);
      *(byte *)(lVar3 + 0x78) = *(byte *)(lVar3 + 0x78) | *(byte *)(puVar2 + 0xf);
      *(int32_t *)(lVar3 + 0x79) = *(int32_t *)((longlong)puVar2 + 0x79);
    }
  }
  return;
}

// ---- Function: FUN_1800c76d0 ----
void FUN_1800c76d0(longlong param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  LPVOID pvVar3;
  
  pvVar1 = *(LPVOID *)(param_1 + 0x18);
  if (pvVar1 != (LPVOID)0x0) {
    pvVar3 = pvVar1;
    if ((0xfff < (*(longlong *)(param_1 + 0x28) - (longlong)pvVar1 & 0xfffffffffffffff8U)) &&
       (pvVar3 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3)))) {
      FUN_18012b7b4();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    thunk_FUN_18012d5e8(pvVar3);
    *(int32_t *)(param_1 + 0x18) = 0;
    *(int32_t *)(param_1 + 0x20) = 0;
    *(int32_t *)(param_1 + 0x28) = 0;
  }
  FUN_1800c9bd0((longlong *)(param_1 + 8));
  return;
}

// ---- Function: FUN_1800c77c0 ----
void FUN_1800c77c0(longlong *param_1)

{
  int32_t *puVar1;
  
  puVar1 = (int32_t *)operator_new(0x90);
  puVar1 = FUN_1800c74c0(puVar1,0);
                    
                    
  (**(code **)(*param_1 + 0x10))(param_1,&DAT_1801cc1d0,puVar1,*(code **)(*param_1 + 0x10));
  return;
}

// ---- Function: FUN_1800c78a0 ----
void FUN_1800c78a0(longlong *param_1)

{
  int32_t *puVar1;
  
  puVar1 = (int32_t *)operator_new(0x20);
  *(int32_t *)((longlong)puVar1 + 0x19) = 0;
  *(int32_t *)((longlong)puVar1 + 0x1d) = 0;
  *(int32_t *)((longlong)puVar1 + 0x1f) = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(int32_t *)(puVar1 + 3) = 0;
                    
                    
  (**(code **)(*param_1 + 0x10))(param_1,&DAT_1801cc1f0);
  return;
}

