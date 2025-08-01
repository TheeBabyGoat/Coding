#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_1800b8040 ----
longlong * FUN_1800b8040(longlong *param_1,longlong *param_2,int32_t param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  
  if (param_1 != param_2) {
    uVar1 = param_2[2];
    if (7 < (ulonglong)param_2[3]) {
      param_2 = (longlong *)*param_2;
    }
    if (uVar1 <= (ulonglong)param_1[3]) {
      plVar2 = param_1;
      if (7 < (ulonglong)param_1[3]) {
        plVar2 = (longlong *)*param_1;
      }
      param_1[2] = uVar1;
      FUN_180150fd0(plVar2,param_2,uVar1 * 2);
      *(int32_t *)(uVar1 * 2 + (longlong)plVar2) = 0;
      return param_1;
    }
    FUN_1800b7ee0(param_1,uVar1,param_3,param_2);
  }
  return param_1;
}

// ---- Function: FUN_1800b80c0 ----
int32_t *
FUN_1800b80c0(int32_t *param_1,ulonglong param_2,int32_t param_3,int32_t param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int32_t *puVar4;
  code *pcVar5;
  void *pvVar6;
  int32_t *puVar7;
  __uint64 _Var8;
  ulonglong uVar9;
  ulonglong uVar10;
  int32_t *puVar11;
  
  lVar2 = param_1[2];
  uVar10 = 0x7ffffffffffffffe;
  if (0x7ffffffffffffffeU - lVar2 < param_2) {
    FUN_1800ba540();
    pcVar5 = (code *)swi(3);
    puVar7 = (int32_t *)(*pcVar5)();
    return puVar7;
  }
  uVar9 = lVar2 + param_2 | 7;
  uVar3 = param_1[3];
  puVar7 = (int32_t *)0x0;
  if ((uVar9 < 0x7fffffffffffffff) && (uVar3 <= 0x7ffffffffffffffe - (uVar3 >> 1))) {
    uVar1 = uVar3 + (uVar3 >> 1);
    uVar10 = uVar9;
    if (uVar9 < uVar1) {
      uVar10 = uVar1;
    }
    if (0x7fffffffffffffff < uVar10 + 1) goto LAB_1800b8241;
    _Var8 = (uVar10 + 1) * 2;
    if (_Var8 != 0) goto LAB_1800b8167;
  }
  else {
    _Var8 = 0xfffffffffffffffe;
LAB_1800b8167:
    if (_Var8 < 0x1000) {
      puVar7 = (int32_t *)operator_new(_Var8);
    }
    else {
      if (_Var8 + 0x27 <= _Var8) {
LAB_1800b8241:
        FUN_1800ba8a0();
        pcVar5 = (code *)swi(3);
        puVar7 = (int32_t *)(*pcVar5)();
        return puVar7;
      }
      pvVar6 = operator_new(_Var8 + 0x27);
      if (pvVar6 == (void *)0x0) goto LAB_1800b823b;
      puVar7 = (int32_t *)((longlong)pvVar6 + 0x27U & 0xffffffffffffffe0);
      puVar7[-1] = pvVar6;
    }
  }
  uVar9 = lVar2 * 2;
  param_1[2] = lVar2 + param_2;
  param_1[3] = uVar10;
  if (uVar3 < 8) {
    FUN_180150fd0(puVar7,param_1,uVar9);
    *(int32_t *)(uVar9 + (longlong)puVar7) = param_4;
    *(int32_t *)(uVar9 + 2 + (longlong)puVar7) = 0;
  }
  else {
    puVar4 = (int32_t *)*param_1;
    FUN_180150fd0(puVar7,puVar4,uVar9);
    *(int32_t *)(uVar9 + (longlong)puVar7) = param_4;
    *(int32_t *)(uVar9 + 2 + (longlong)puVar7) = 0;
    puVar11 = puVar4;
    if ((0xfff < uVar3 * 2 + 2) &&
       (puVar11 = (int32_t *)puVar4[-1],
       0x1f < (ulonglong)((longlong)puVar4 + (-8 - (longlong)puVar11)))) {
LAB_1800b823b:
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

// ---- Function: FUN_1800b8250 ----
int32_t *
FUN_1800b8250(int32_t *param_1,ulonglong param_2,int32_t param_3,int32_t *param_4,
             longlong param_5)

{
  ulonglong uVar1;
  int32_t *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  int32_t *puVar5;
  code *pcVar6;
  void *pvVar7;
  int32_t *puVar8;
  __uint64 _Var9;
  ulonglong uVar10;
  ulonglong uVar11;
  int32_t *puVar12;
  
  lVar3 = param_1[2];
  uVar11 = 0x7ffffffffffffffe;
  if (0x7ffffffffffffffeU - lVar3 < param_2) {
    FUN_1800ba540();
    pcVar6 = (code *)swi(3);
    puVar8 = (int32_t *)(*pcVar6)();
    return puVar8;
  }
  puVar8 = (int32_t *)0x0;
  uVar4 = param_1[3];
  uVar10 = lVar3 + param_2 | 7;
  if ((uVar10 < 0x7fffffffffffffff) && (uVar4 <= 0x7ffffffffffffffe - (uVar4 >> 1))) {
    uVar1 = uVar4 + (uVar4 >> 1);
    uVar11 = uVar10;
    if (uVar10 < uVar1) {
      uVar11 = uVar1;
    }
    if (0x7fffffffffffffff < uVar11 + 1) goto LAB_1800b8402;
    _Var9 = (uVar11 + 1) * 2;
    if (_Var9 != 0) goto LAB_1800b82fd;
  }
  else {
    _Var9 = 0xfffffffffffffffe;
LAB_1800b82fd:
    if (_Var9 < 0x1000) {
      puVar8 = (int32_t *)operator_new(_Var9);
    }
    else {
      if (_Var9 + 0x27 <= _Var9) {
LAB_1800b8402:
        FUN_1800ba8a0();
        pcVar6 = (code *)swi(3);
        puVar8 = (int32_t *)(*pcVar6)();
        return puVar8;
      }
      pvVar7 = operator_new(_Var9 + 0x27);
      if (pvVar7 == (void *)0x0) goto LAB_1800b83fc;
      puVar8 = (int32_t *)((longlong)pvVar7 + 0x27U & 0xffffffffffffffe0);
      puVar8[-1] = pvVar7;
    }
  }
  param_1[2] = lVar3 + param_2;
  uVar10 = lVar3 * 2;
  param_1[3] = uVar11;
  puVar2 = (int32_t *)((longlong)puVar8 + (lVar3 + param_5) * 2);
  if (uVar4 < 8) {
    FUN_180150fd0(puVar8,param_1,uVar10);
    FUN_180150fd0((int32_t *)(uVar10 + (longlong)puVar8),param_4,param_5 * 2);
    *puVar2 = 0;
  }
  else {
    puVar5 = (int32_t *)*param_1;
    FUN_180150fd0(puVar8,puVar5,uVar10);
    FUN_180150fd0((int32_t *)(uVar10 + (longlong)puVar8),param_4,param_5 * 2);
    *puVar2 = 0;
    puVar12 = puVar5;
    if ((0xfff < uVar4 * 2 + 2) &&
       (puVar12 = (int32_t *)puVar5[-1],
       0x1f < (ulonglong)((longlong)puVar5 + (-8 - (longlong)puVar12)))) {
LAB_1800b83fc:
      FUN_18012b7b4();
      pcVar6 = (code *)swi(3);
      puVar8 = (int32_t *)(*pcVar6)();
      return puVar8;
    }
    thunk_FUN_18012d5e8(puVar12);
  }
  *param_1 = puVar8;
  return param_1;
}

// ---- Function: FUN_1800b8410 ----
int32_t * FUN_1800b8410(int32_t *param_1,int32_t *param_2,ulonglong param_3)

{
  longlong lVar1;
  int32_t *puVar2;
  byte local_res8;
  
  lVar1 = param_1[2];
  if (param_3 <= (ulonglong)(param_1[3] - lVar1)) {
    param_1[2] = lVar1 + param_3;
    puVar2 = param_1;
    if (7 < (ulonglong)param_1[3]) {
      puVar2 = (int32_t *)*param_1;
    }
    FUN_180150fd0((int32_t *)((longlong)puVar2 + lVar1 * 2),param_2,param_3 * 2);
    *(int32_t *)((longlong)puVar2 + (lVar1 + param_3) * 2) = 0;
    return param_1;
  }
  puVar2 = FUN_1800b8250(param_1,param_3,(ulonglong)local_res8,param_2,param_3);
  return puVar2;
}

// ---- Function: FUN_1800b84a0 ----
uint * FUN_1800b84a0(uint *param_1,uint *param_2,int32_t param_3)

{
  uint *puVar1;
  longlong lVar2;
  code *pcVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  
  uVar9 = *(ulonglong *)(param_2 + 6);
  puVar7 = param_2;
  if (7 < uVar9) {
    puVar7 = *(uint **)param_2;
  }
  lVar2 = *(longlong *)(param_2 + 4);
  lVar10 = lVar2 * 2;
  lVar8 = lVar10 >> 1;
  if ((lVar8 < 2) || (0x19 < (*puVar7 & 0xffffffdf) - 0x3a0041)) {
    puVar6 = FUN_1800b7dd0(puVar7,(uint *)(lVar10 + (longlong)puVar7));
    if (puVar7 != puVar6) goto LAB_1800b8602;
  }
  else if ((2 < lVar8) && (((short)puVar7[1] == 0x5c || ((short)puVar7[1] == 0x2f)))) {
LAB_1800b8602:
    puVar7 = (uint *)FUN_1800b8040((longlong *)param_1,(longlong *)param_2,param_3);
    return puVar7;
  }
  puVar7 = param_1;
  if (7 < *(ulonglong *)(param_1 + 6)) {
    puVar7 = *(uint **)param_1;
  }
  puVar6 = (uint *)((longlong)puVar7 + *(longlong *)(param_1 + 4) * 2);
  puVar11 = param_2;
  if (7 < uVar9) {
    puVar11 = *(uint **)param_2;
  }
  puVar1 = (uint *)((longlong)puVar11 + lVar2 * 2);
  puVar4 = FUN_1800b7dd0(puVar7,puVar6);
  puVar5 = FUN_1800b7dd0(puVar11,puVar1);
  if (puVar11 != puVar5) {
    uVar12 = (longlong)puVar5 - (longlong)puVar11 >> 1;
    uVar13 = (longlong)puVar4 - (longlong)puVar7 >> 1;
    uVar9 = uVar13;
    if (uVar12 < uVar13) {
      uVar9 = uVar12;
    }
    if (uVar9 != 0) {
      lVar10 = (longlong)puVar7 - (longlong)puVar11;
      do {
        if (*(short *)(lVar10 + (longlong)puVar11) != (short)*puVar11) goto LAB_1800b8617;
        puVar11 = (uint *)((longlong)puVar11 + 2);
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    if ((uVar13 < uVar12) || (uVar12 < uVar13)) {
LAB_1800b8617:
      puVar7 = (uint *)FUN_1800b8040((longlong *)param_1,(longlong *)param_2,uVar12);
      return puVar7;
    }
  }
  puVar14 = (ulonglong *)(param_1 + 4);
  if ((puVar5 == puVar1) || (((short)*puVar5 != 0x5c && ((short)*puVar5 != 0x2f)))) {
    if (puVar4 == puVar6) {
      if ((longlong)((longlong)puVar4 - (longlong)puVar7 & 0xfffffffffffffffeU) < 6)
      goto LAB_1800b869f;
      uVar9 = *puVar14;
    }
    else {
      if ((*(short *)((longlong)puVar6 + -2) == 0x5c) || (*(short *)((longlong)puVar6 + -2) == 0x2f)
         ) goto LAB_1800b869f;
      uVar9 = *(ulonglong *)(param_1 + 4);
    }
    if (uVar9 < *(ulonglong *)(param_1 + 6)) {
      *(ulonglong *)(param_1 + 4) = uVar9 + 1;
      puVar7 = param_1;
      if (7 < *(ulonglong *)(param_1 + 6)) {
        puVar7 = *(uint **)param_1;
      }
      *(int32_t *)((longlong)puVar7 + uVar9 * 2) = 0x5c;
    }
    else {
      FUN_1800b80c0((int32_t *)param_1,1,(ulonglong)puVar6 & 0xff,0x5c);
    }
  }
  else {
    uVar9 = (longlong)puVar4 - (longlong)puVar7 >> 1;
    if (*puVar14 < uVar9) {
      FUN_1800b7330();
      pcVar3 = (code *)swi(3);
      puVar7 = (uint *)(*pcVar3)();
      return puVar7;
    }
    *puVar14 = uVar9;
    puVar7 = param_1;
    if (7 < *(ulonglong *)(param_1 + 6)) {
      puVar7 = *(uint **)param_1;
    }
    *(int32_t *)((longlong)puVar7 + uVar9 * 2) = 0;
  }
LAB_1800b869f:
  FUN_1800b8410((int32_t *)param_1,(int32_t *)puVar5,(longlong)puVar1 - (longlong)puVar5 >> 1)
  ;
  return param_1;
}

// ---- Function: FUN_1800b86e0 ----
void FUN_1800b86e0(int32_t *param_1,int32_t *param_2,ulonglong param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  void *pvVar3;
  __uint64 _Var4;
  int32_t *puVar5;
  
  if (0x7ffffffffffffffe < param_3) {
    FUN_1800ba540();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_3 < 8) {
    param_1[2] = param_3;
    param_1[3] = 7;
    FUN_180150fd0(param_1,param_2,param_3 * 2);
    *(int32_t *)(param_3 * 2 + (longlong)param_1) = 0;
    return;
  }
  uVar2 = param_3 | 7;
  puVar5 = (int32_t *)0x0;
  if (uVar2 < 0x7fffffffffffffff) {
    if (uVar2 < 10) {
      uVar2 = 10;
    }
    if (0x7fffffffffffffff < uVar2 + 1) goto LAB_1800b87fe;
    _Var4 = (uVar2 + 1) * 2;
    if (_Var4 == 0) goto LAB_1800b87bf;
  }
  else {
    _Var4 = 0xfffffffffffffffe;
    uVar2 = 0x7ffffffffffffffe;
  }
  if (_Var4 < 0x1000) {
    puVar5 = (int32_t *)operator_new(_Var4);
  }
  else {
    if (_Var4 + 0x27 <= _Var4) {
LAB_1800b87fe:
      FUN_1800ba8a0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pvVar3 = operator_new(_Var4 + 0x27);
    if (pvVar3 == (void *)0x0) {
      FUN_18012b7b4();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    puVar5 = (int32_t *)((longlong)pvVar3 + 0x27U & 0xffffffffffffffe0);
    puVar5[-1] = pvVar3;
  }
LAB_1800b87bf:
  param_1[2] = param_3;
  *param_1 = puVar5;
  param_1[3] = uVar2;
  FUN_180150fd0(puVar5,param_2,param_3 * 2);
  *(int32_t *)(param_3 * 2 + (longlong)puVar5) = 0;
  return;
}

// ---- Function: FUN_1800b8810 ----
void FUN_1800b8810(int32_t *param_1,uint *param_2)

{
  uint *puVar1;
  short sVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  code *pcVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int32_t auStack_68 [40];
  uint local_40 [8];
  ulonglong local_20;
  
  local_20 = DAT_1801eb080 ^ (ulonglong)auStack_68;
  *(uint *)(param_1 + 2) = *param_2;
  *(uint *)((longlong)param_1 + 0x14) = param_2[9];
  *(int32_t *)((longlong)param_1 + 0x1c) = 6;
  if ((*param_2 & 0x400) == 0) {
    param_1[1] = CONCAT44(param_2[7],param_2[8]);
    *param_1 = *(int32_t *)(param_2 + 5);
    *(int32_t *)((longlong)param_1 + 0x1c) = 0x2e;
  }
  puVar1 = (uint *)(param_1 + 4);
  uVar11 = 0xffffffffffffffff;
  do {
    uVar11 = uVar11 + 1;
  } while (*(short *)((longlong)(param_2 + 0xb) + uVar11 * 2) != 0);
  local_40[0] = 0;
  local_40[1] = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  local_40[4] = 0;
  local_40[5] = 0;
  local_40[6] = 0;
  local_40[7] = 0;
  FUN_1800b86e0((int32_t *)local_40,(int32_t *)(param_2 + 0xb),uVar11);
  uVar3 = param_1[7];
  puVar8 = puVar1;
  if (7 < uVar3) {
    puVar8 = *(uint **)puVar1;
  }
  uVar4 = param_1[6];
  puVar9 = (uint *)((longlong)puVar8 + uVar4 * 2);
  puVar7 = FUN_1800b7dd0(puVar8,puVar9);
  if (puVar7 == puVar9) {
LAB_1800b890d:
    uVar10 = (longlong)puVar9 - (longlong)puVar8 >> 1;
    if (uVar10 <= uVar4) {
      param_1[6] = uVar10;
      puVar8 = puVar1;
      if (7 < uVar3) {
        puVar8 = *(uint **)puVar1;
      }
      *(int32_t *)((longlong)puVar8 + uVar10 * 2) = 0;
      FUN_1800b84a0(puVar1,local_40,uVar11);
      FUN_1800ba040((longlong *)local_40);
      FUN_1801252c0(local_20 ^ (ulonglong)auStack_68);
      return;
    }
    FUN_1800b7330();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  do {
    puVar6 = puVar9;
    if (((short)*puVar7 != 0x5c) && ((short)*puVar7 != 0x2f)) break;
    puVar7 = (uint *)((longlong)puVar7 + 2);
  } while (puVar7 != puVar9);
  do {
    puVar9 = puVar6;
    if (puVar7 == puVar9) goto LAB_1800b890d;
    sVar2 = *(short *)((longlong)puVar9 + -2);
    if ((sVar2 == 0x5c) || (puVar6 = (uint *)((longlong)puVar9 + -2), sVar2 == 0x2f))
    goto LAB_1800b890d;
  } while( true );
}

// ---- Function: FUN_1800b8980 ----
int32_t * FUN_1800b8980(int32_t *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  LPVOID pvVar3;
  code *pcVar4;
  int32_t *puVar5;
  LPVOID pvVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  plVar1 = param_1 + 4;
  param_1[6] = 0;
  param_1[7] = 0;
  *plVar1 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 7;
  *(int32_t *)plVar1 = 0;
  lVar2 = param_2[4];
  param_2[4] = -1;
  param_1[8] = lVar2;
  if (plVar1 != param_2) {
    if (7 < (ulonglong)param_1[7]) {
      pvVar3 = (LPVOID)*plVar1;
      pvVar6 = pvVar3;
      if ((0xfff < param_1[7] * 2 + 2U) &&
         (pvVar6 = *(LPVOID *)((longlong)pvVar3 + -8),
         0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar6)))) {
        FUN_18012b7b4();
        pcVar4 = (code *)swi(3);
        puVar5 = (int32_t *)(*pcVar4)();
        return puVar5;
      }
      thunk_FUN_18012d5e8(pvVar6);
    }
    param_1[6] = 0;
    param_1[7] = 7;
    *(int32_t *)plVar1 = 0;
    lVar2 = param_2[1];
    *plVar1 = *param_2;
    param_1[5] = lVar2;
    lVar2 = param_2[3];
    param_1[6] = param_2[2];
    param_1[7] = lVar2;
    param_2[2] = 0;
    param_2[3] = 7;
    *(int32_t *)param_2 = 0;
  }
  FUN_1800b8810(param_1,(uint *)(param_2 + 5));
  return param_1;
}

// ---- Function: FUN_1800b8a70 ----
void FUN_1800b8a70(int32_t *param_1,int32_t *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  code *pcVar4;
  longlong lVar5;
  int iVar6;
  int32_t *puVar7;
  int32_t auStack_2e8 [32];
  int32_t local_2c8;
  int32_t *local_2c0;
  WCHAR local_2b8 [16];
  HANDLE local_298;
  _WIN32_FIND_DATAW local_290;
  char local_40;
  int32_t local_3f;
  int32_t local_3d;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_1801eb080 ^ (ulonglong)auStack_2e8;
  *param_1 = 0;
  param_1[1] = 0;
  local_2c0 = param_1;
  FUN_1800b9f10((int32_t *)local_2b8,param_2);
  local_298 = (HANDLE)0xffffffffffffffff;
  iVar6 = FUN_1800b7af0(local_2b8,0,(longlong *)&local_298,&local_290);
  local_3c = 0;
  if (iVar6 == 0) {
    local_40 = '\x01';
  }
  else {
    local_40 = '\0';
    if (iVar6 != 0x12) {
      local_3c = iVar6;
    }
  }
  local_3f = local_2c8._1_2_;
  local_3d = local_2c8._3_1_;
  if (local_40 != '\0') {
    puVar7 = (int32_t *)operator_new(0x58);
    *puVar7 = 0;
    puVar7[1] = 0;
    *(int32_t *)(puVar7 + 1) = 1;
    *(int32_t *)((longlong)puVar7 + 0xc) = 1;
    *puVar7 = &PTR_FUN_1801878f8;
    local_2c8 = puVar7;
    FUN_1800b8980(puVar7 + 2,(longlong *)local_2b8);
    *param_1 = puVar7 + 2;
    plVar3 = (longlong *)param_1[1];
    param_1[1] = puVar7;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3);
        }
      }
    }
  }
  iVar6 = local_3c;
  FUN_1801235f8(local_298);
  FUN_1800ba040((longlong *)local_2b8);
  if (iVar6 == 0) {
    FUN_1801252c0(local_38 ^ (ulonglong)auStack_2e8);
    return;
  }
  FUN_1800b8c40((int32_t *)"directory_iterator::directory_iterator",iVar6,param_2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// ---- Function: FUN_1800b8bf0 ----
void FUN_1800b8bf0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  return;
}

// ---- Function: FUN_1800b8c40 ----
void FUN_1800b8c40(int32_t *param_1,int32_t param_2,int32_t *param_3)

{
  code *pcVar1;
  int32_t *puVar2;
  int32_t local_d8;
  int32_t uStack_d0;
  int32_t local_c8 [4];
  int32_t local_b8 [4];
  int32_t **local_98 [18];
  
  puVar2 = (int32_t *)FUN_1800b94e0(local_c8,param_2);
  local_d8 = *puVar2;
  uStack_d0 = puVar2[1];
  FUN_1800ba470(local_b8,param_1);
  FUN_1800b9d70(local_98,local_b8,param_3,&local_d8);
  FUN_1801279a8((longlong *)local_98,&DAT_1801e8f98);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// ---- Function: FUN_1800b8cb0 ----
void FUN_1800b8cb0(LPCWSTR param_1,longlong *param_2)

{
  uint uVar1;
  bool bVar2;
  int32_t auStack_58 [32];
  uint local_38;
  uint uStack_34;
  int32_t **ppuStack_30;
  uint local_28;
  int local_24;
  ulonglong local_18;
  
  local_18 = DAT_1801eb080 ^ (ulonglong)auStack_58;
  if (7 < *(ulonglong *)(param_1 + 0xc)) {
    param_1 = *(LPCWSTR *)param_1;
  }
  local_38 = FUN_18012368c(param_1,(ulonglong *)&local_38,3,0xffffffff);
  if (local_38 == 0) {
    if (((local_28 >> 10 & 1) != 0) && ((local_24 == -0x5ffffff4 || (local_24 == -0x5ffffffd)))) {
      *param_2 = (ulonglong)uStack_34 << 0x20;
      param_2[1] = (longlong)&PTR_vftable_1801ebd20;
      goto LAB_1800b8d84;
    }
    uVar1 = (local_28 & 0x10 | 0x20) >> 4;
  }
  else {
    if (local_38 < 0x41) {
      if (((local_38 != 0x40) && (local_38 != 2)) && (local_38 != 3)) {
        bVar2 = local_38 == 0x35;
LAB_1800b8d5d:
        if (!bVar2) {
          uVar1 = 0;
          goto LAB_1800b8d68;
        }
      }
    }
    else if (local_38 != 0x7b) {
      bVar2 = local_38 == 0x10b;
      goto LAB_1800b8d5d;
    }
    uVar1 = 1;
  }
LAB_1800b8d68:
  ppuStack_30 = &PTR_vftable_1801ebd20;
  *param_2 = CONCAT44(uStack_34,local_38);
  param_2[1] = (longlong)&PTR_vftable_1801ebd20;
  if (uVar1 == 0) {
    FUN_1801252c0(local_18 ^ (ulonglong)auStack_58);
    return;
  }
LAB_1800b8d84:
  ppuStack_30 = &PTR_vftable_1801ebd20;
  param_2[1] = (longlong)&PTR_vftable_1801ebd20;
  *(int32_t *)param_2 = 0;
  FUN_1801252c0(local_18 ^ (ulonglong)auStack_58);
  return;
}

// ---- Function: FUN_1800b8dc0 ----
void FUN_1800b8dc0(int32_t ***param_1,ulonglong *param_2,int32_t *param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong *plVar3;
  int32_t **ppuVar4;
  int32_t ****ppppuVar5;
  int32_t *****pppppuVar6;
  int32_t ****ppppuVar7;
  int32_t auStack_c8 [32];
  int32_t ****local_a8;
  int32_t local_a0;
  int32_t local_98 [4];
  int32_t ****local_78;
  int32_t **ppuStack_70;
  int32_t **local_68;
  int32_t **ppuStack_60;
  int32_t ***local_58 [2];
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1801eb080 ^ (ulonglong)auStack_c8;
  local_a8 = (int32_t ****)param_1;
  ppppuVar5 = (int32_t ****)FUN_1800ba630(local_98,param_3);
  uVar2 = *param_2;
  plVar3 = (longlong *)param_2[1];
  local_a8 = ppppuVar5;
  if (ppppuVar5[2] != (int32_t ***)0x0) {
    FUN_1800b9910((longlong *)ppppuVar5,(int32_t *)&DAT_18018796c,2);
  }
  (**(code **)(*plVar3 + 0x10))(plVar3,local_58,uVar2 & 0xffffffff);
  ppppuVar7 = local_58;
  if (0xf < local_40) {
    ppppuVar7 = (int32_t ****)local_58[0];
  }
  FUN_1800b9910((longlong *)ppppuVar5,ppppuVar7,local_48);
  FUN_1800a6800((longlong *)local_58);
  local_78 = (int32_t ****)*ppppuVar5;
  ppuStack_70 = ppppuVar5[1];
  local_68 = ppppuVar5[2];
  ppuStack_60 = ppppuVar5[3];
  *(int32_t *)ppppuVar5 = 0;
  ppppuVar5[2] = (int32_t ***)0x0;
  ppppuVar5[3] = (int32_t ***)0xf;
  FUN_1800a6800((longlong *)ppppuVar5);
  local_a8 = &local_78;
  if ((int32_t ***)0xf < ppuStack_60) {
    local_a8 = local_78;
  }
  *param_1 = (int32_t **)std::exception::vftable;
  param_1[1] = (int32_t **)0x0;
  param_1[2] = (int32_t **)0x0;
  local_a0 = 1;
  __std_exception_copy((longlong *)&local_a8,(longlong *)(param_1 + 1));
  *param_1 = (int32_t **)std::runtime_error::vftable;
  if ((int32_t ***)0xf < ppuStack_60) {
    pppppuVar6 = (int32_t *****)local_78;
    if ((0xfff < (longlong)ppuStack_60 + 1U) &&
       (pppppuVar6 = (int32_t *****)local_78[-1],
       0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)pppppuVar6)))) {
      FUN_18012b7b4();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    thunk_FUN_18012d5e8(pppppuVar6);
  }
  *param_1 = (int32_t **)std::_System_error::vftable;
  ppuVar4 = (int32_t **)param_2[1];
  param_1[3] = (int32_t **)*param_2;
  param_1[4] = ppuVar4;
  FUN_1801252c0(local_38 ^ (ulonglong)auStack_c8);
  return;
}

// ---- Function: FUN_1800b8f70 ----
int32_t * FUN_1800b8f70(int32_t *param_1,int32_t param_2)

{
  *param_1 = param_2;
  *(int32_t ***)(param_1 + 2) = &PTR_vftable_1801ebd10;
  return param_1;
}

// ---- Function: FUN_1800b8f90 ----
void FUN_1800b8f90(int32_t param_1)

{
  code *pcVar1;
  int32_t *puVar2;
  int32_t local_58;
  int32_t uStack_50;
  int32_t local_48 [4];
  int32_t *local_38 [7];
  
  puVar2 = (int32_t *)FUN_1800b8f70(local_48,param_1);
  local_58 = *puVar2;
  uStack_50 = puVar2[1];
  FUN_1800b9200(local_38,&local_58);
  FUN_1801279a8((longlong *)local_38,&DAT_1801e8ea8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// ---- Function: FUN_1800b8fd0 ----
int32_t *
FUN_1800b8fd0(int32_t *param_1,ulonglong param_2,int32_t param_3,ulonglong param_4,
             byte param_5)

{
  ulonglong uVar1;
  int32_t (*pauVar2) [32];
  ulonglong uVar3;
  ulonglong uVar4;
  int32_t *puVar5;
  code *pcVar6;
  void *pvVar7;
  int32_t *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int32_t *puVar11;
  
  uVar3 = param_1[2];
  uVar10 = 0x7fffffffffffffff;
  if (0x7fffffffffffffff - uVar3 < param_2) {
    FUN_1800ba540();
    pcVar6 = (code *)swi(3);
    puVar8 = (int32_t *)(*pcVar6)();
    return puVar8;
  }
  uVar9 = uVar3 + param_2 | 0xf;
  uVar4 = param_1[3];
  if ((uVar9 < 0x8000000000000000) && (uVar4 <= 0x7fffffffffffffff - (uVar4 >> 1))) {
    uVar1 = uVar4 + (uVar4 >> 1);
    uVar10 = uVar9;
    if (uVar9 < uVar1) {
      uVar10 = uVar1;
    }
    uVar1 = uVar10 + 1;
    if (uVar1 == 0) {
      puVar8 = (int32_t *)0x0;
    }
    else {
      if (0xfff < uVar1) {
        uVar9 = uVar10 + 0x28;
        if (uVar9 <= uVar1) {
          FUN_1800ba8a0();
          pcVar6 = (code *)swi(3);
          puVar8 = (int32_t *)(*pcVar6)();
          return puVar8;
        }
        goto LAB_1800b9078;
      }
      puVar8 = (int32_t *)operator_new(uVar1);
    }
  }
  else {
    uVar9 = 0x8000000000000027;
LAB_1800b9078:
    pvVar7 = operator_new(uVar9);
    if (pvVar7 == (void *)0x0) goto LAB_1800b914d;
    puVar8 = (int32_t *)((longlong)pvVar7 + 0x27U & 0xffffffffffffffe0);
    puVar8[-1] = pvVar7;
  }
  param_1[2] = uVar3 + param_2;
  pauVar2 = (int32_t (*) [32])(uVar3 + (longlong)puVar8);
  param_1[3] = uVar10;
  if (uVar4 < 0x10) {
    FUN_180150fd0(puVar8,param_1,uVar3);
    FUN_180151670(pauVar2,param_5,param_4);
    (*pauVar2)[param_4] = 0;
  }
  else {
    puVar5 = (int32_t *)*param_1;
    FUN_180150fd0(puVar8,puVar5,uVar3);
    FUN_180151670(pauVar2,param_5,param_4);
    (*pauVar2)[param_4] = 0;
    puVar11 = puVar5;
    if ((0xfff < uVar4 + 1) &&
       (puVar11 = (int32_t *)puVar5[-1],
       0x1f < (ulonglong)((longlong)puVar5 + (-8 - (longlong)puVar11)))) {
LAB_1800b914d:
      FUN_18012b7b4();
      pcVar6 = (code *)swi(3);
      puVar8 = (int32_t *)(*pcVar6)();
      return puVar8;
    }
    thunk_FUN_18012d5e8(puVar11);
  }
  *param_1 = puVar8;
  return param_1;
}

// ---- Function: FUN_1800b9160 ----
void FUN_1800b9160(int32_t *param_1,ulonglong param_2,byte param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  byte local_res8;
  
  uVar1 = param_1[2];
  if (param_2 <= uVar1) {
    param_1[2] = param_2;
    if (0xf < (ulonglong)param_1[3]) {
      param_1 = (int32_t *)*param_1;
    }
    *(int32_t *)((longlong)param_1 + param_2) = 0;
    return;
  }
  uVar2 = param_2 - uVar1;
  if (uVar2 <= param_1[3] - uVar1) {
    param_1[2] = param_2;
    if (0xf < (ulonglong)param_1[3]) {
      param_1 = (int32_t *)*param_1;
    }
    FUN_180151670((int32_t (*) [32])(uVar1 + (longlong)param_1),param_3,uVar2);
    *(int32_t *)((longlong)(uVar1 + (longlong)param_1) + uVar2) = 0;
    return;
  }
  FUN_1800b8fd0(param_1,uVar2,(ulonglong)local_res8,uVar2,param_3);
  return;
}

