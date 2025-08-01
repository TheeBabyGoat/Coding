#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_1800fc1d0 ----
void FUN_1800fc1d0(void)

{
  int32_t *puVar1;
  longlong lVar2;
  code *pcVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  int32_t ****ppppuVar7;
  int32_t auStack_d8 [32];
  char *local_b8;
  int32_t local_b0;
  int32_t ***local_a8;
  int32_t uStack_a0;
  ulonglong local_98;
  ulonglong uStack_90;
  int32_t ***local_88;
  int32_t uStack_80;
  ulonglong local_78;
  ulonglong uStack_70;
  int32_t local_68;
  longlong *local_60;
  longlong local_58;
  longlong lStack_50;
  int32_t local_48;
  HMODULE local_40;
  int32_t local_38;
  ulonglong local_28;
  
  local_28 = DAT_1801eb080 ^ (ulonglong)auStack_d8;
  local_40 = GetModuleHandleW((LPCWSTR)0x0);
  uVar5 = _UNK_1801d8f78;
  uVar4 = _DAT_1801d8f70;
  DAT_1801ee910 = local_40 + -0x50000000;
  uStack_a0 = 0;
  local_98 = _DAT_1801d8f70;
  uStack_90 = _UNK_1801d8f78;
  local_a8 = (int32_t ****)0x0;
  uStack_80 = 0;
  local_78 = _DAT_1801d8f70;
  uStack_70 = _UNK_1801d8f78;
  local_88 = (int32_t ****)0x0;
  local_60 = (longlong *)0x0;
  local_58 = 0;
  lStack_50 = 0;
  local_48 = 0;
  local_38 = 0;
  local_b8 = "75 ? 44 38 ? ? ? ? ? 74 ? B9 40 00 00 00 E8";
  local_b0 = 0x2b;
  FUN_180117400((longlong *)&local_a8,&local_b8);
  FUN_1801175d0(&local_a8,0xffffffff);
  if ((ulonglong)(local_58 - (longlong)local_60) < 8) {
    DAT_1801ec261 = 0;
  }
  else {
    ppppuVar7 = &local_a8;
    if (0xf < uStack_90) {
      ppppuVar7 = (int32_t ****)local_a8;
    }
    FUN_1800de6e0((longlong *)&DAT_1801eca40,ppppuVar7,local_98);
    ppppuVar7 = &local_88;
    if (0xf < uStack_70) {
      ppppuVar7 = (int32_t ****)local_88;
    }
    FUN_1800de6e0((longlong *)&DAT_1801eca60,ppppuVar7,local_78);
    _DAT_1801eca80 = local_68;
    FUN_1800fccc0(&DAT_1801eca88,local_60,local_58 - (longlong)local_60 >> 3);
    DAT_1801ecaa0 = local_48;
    _DAT_1801ecaa8 = local_40;
    _DAT_1801ecab0 = local_38;
    FUN_1801175d0(&local_a8,0xffffffff);
    puVar1 = (int32_t *)*local_60;
    _DAT_1801fcf48 = *puVar1;
    uRam00000001801fcf50 = puVar1[1];
    _DAT_1801fcf58 = puVar1[2];
    uRam00000001801fcf60 = puVar1[3];
    DAT_1801fcf68 = *(int32_t *)(puVar1 + 4);
    DAT_1801fcf6c = *(int32_t *)((longlong)puVar1 + 0x24);
    DAT_1801fcf6e = *(int32_t *)((longlong)puVar1 + 0x26);
  }
  if (local_60 != (longlong *)0x0) {
    plVar6 = local_60;
    if ((0xfff < (lStack_50 - (longlong)local_60 & 0xfffffffffffffff8U)) &&
       (plVar6 = (longlong *)local_60[-1],
       0x1f < (ulonglong)((longlong)local_60 + (-8 - (longlong)plVar6)))) {
      FUN_18012b7b4();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    thunk_FUN_18012d5e8(plVar6);
    local_60 = (longlong *)0x0;
    local_58 = 0;
    lStack_50 = 0;
  }
  FUN_1800a6800((longlong *)&local_88);
  FUN_1800a6800((longlong *)&local_a8);
  local_40 = GetModuleHandleW((LPCWSTR)0x0);
  DAT_1801ee910 = local_40 + -0x50000000;
  uStack_a0 = 0;
  local_98 = uVar4;
  uStack_90 = uVar5;
  local_a8 = (int32_t ***)0x0;
  uStack_80 = 0;
  local_78 = uVar4;
  uStack_70 = uVar5;
  local_88 = (int32_t ***)0x0;
  local_60 = (longlong *)0x0;
  local_58 = 0;
  lStack_50 = 0;
  local_48 = 0;
  local_38 = 0;
  local_b8 = "40 38 3D ? ? ? ? 48 8B 42 20";
  local_b0 = 0x1c;
  FUN_180117400((longlong *)&local_a8,&local_b8);
  FUN_1800fc8d0((longlong *)&DAT_1801ec840,(longlong *)&local_a8);
  if (local_60 != (longlong *)0x0) {
    plVar6 = local_60;
    if ((0xfff < (lStack_50 - (longlong)local_60 & 0xfffffffffffffff8U)) &&
       (plVar6 = *(longlong **)((longlong)local_60 + -8),
       0x1f < (ulonglong)((longlong)local_60 + (-8 - (longlong)plVar6)))) {
      FUN_18012b7b4();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    thunk_FUN_18012d5e8(plVar6);
    local_60 = (longlong *)0x0;
    local_58 = 0;
    lStack_50 = 0;
  }
  FUN_1800a6800((longlong *)&local_88);
  FUN_1800a6800((longlong *)&local_a8);
  FUN_1801175d0((int32_t *)&DAT_1801ec840,0xffffffff);
  if ((ulonglong)(DAT_1801ec890 - (longlong)DAT_1801ec888) < 8) {
    DAT_1801ec260 = '\0';
  }
  local_40 = GetModuleHandleW((LPCWSTR)0x0);
  DAT_1801ee910 = local_40 + -0x50000000;
  uStack_a0 = 0;
  local_98 = uVar4;
  uStack_90 = uVar5;
  local_a8 = (int32_t ***)0x0;
  uStack_80 = 0;
  local_78 = uVar4;
  uStack_70 = uVar5;
  local_88 = (int32_t ***)0x0;
  local_60 = (longlong *)0x0;
  local_58 = 0;
  lStack_50 = 0;
  local_48 = 0;
  local_38 = 0;
  local_b8 = "B9 ? ? ? ? 84 C0 44 0F 44 F1";
  local_b0 = 0x1c;
  FUN_180117400((longlong *)&local_a8,&local_b8);
  FUN_1800fc8d0((longlong *)&DAT_1801ec8c0,(longlong *)&local_a8);
  if (local_60 != (longlong *)0x0) {
    plVar6 = local_60;
    if ((0xfff < (lStack_50 - (longlong)local_60 & 0xfffffffffffffff8U)) &&
       (plVar6 = *(longlong **)((longlong)local_60 + -8),
       0x1f < (ulonglong)((longlong)local_60 + (-8 - (longlong)plVar6)))) {
      FUN_18012b7b4();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    thunk_FUN_18012d5e8(plVar6);
    local_60 = (longlong *)0x0;
    local_58 = 0;
    lStack_50 = 0;
  }
  FUN_1800a6800((longlong *)&local_88);
  FUN_1800a6800((longlong *)&local_a8);
  FUN_1801175d0((int32_t *)&DAT_1801ec8c0,0xffffffff);
  if ((ulonglong)(DAT_1801ec910 - DAT_1801ec908) < 8) {
    DAT_1801ec260 = '\0';
  }
  local_40 = GetModuleHandleW((LPCWSTR)0x0);
  DAT_1801ee910 = local_40 + -0x50000000;
  uStack_a0 = 0;
  local_98 = uVar4;
  uStack_90 = uVar5;
  local_a8 = (int32_t ***)0x0;
  uStack_80 = 0;
  local_78 = uVar4;
  uStack_70 = uVar5;
  local_88 = (int32_t ***)0x0;
  local_60 = (longlong *)0x0;
  local_58 = 0;
  lStack_50 = 0;
  local_48 = 0;
  local_38 = 0;
  local_b8 = "80 3D ? ? ? ? ? 48 8B D9 74 37";
  local_b0 = 0x1e;
  FUN_180117400((longlong *)&local_a8,&local_b8);
  FUN_1800fc8d0((longlong *)&DAT_1801ec940,(longlong *)&local_a8);
  if (local_60 != (longlong *)0x0) {
    plVar6 = local_60;
    if ((0xfff < (lStack_50 - (longlong)local_60 & 0xfffffffffffffff8U)) &&
       (plVar6 = *(longlong **)((longlong)local_60 + -8),
       0x1f < (ulonglong)((longlong)local_60 + (-8 - (longlong)plVar6)))) {
      FUN_18012b7b4();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    thunk_FUN_18012d5e8(plVar6);
    local_60 = (longlong *)0x0;
    local_58 = 0;
    lStack_50 = 0;
  }
  FUN_1800a6800((longlong *)&local_88);
  FUN_1800a6800((longlong *)&local_a8);
  FUN_1801175d0((int32_t *)&DAT_1801ec940,0xffffffff);
  if ((ulonglong)(DAT_1801ec990 - (longlong)DAT_1801ec988) < 8) {
    DAT_1801ec260 = '\0';
  }
  local_40 = GetModuleHandleW((LPCWSTR)0x0);
  DAT_1801ee910 = local_40 + -0x50000000;
  uStack_a0 = 0;
  local_98 = uVar4;
  uStack_90 = uVar5;
  local_a8 = (int32_t ***)0x0;
  uStack_80 = 0;
  local_78 = uVar4;
  uStack_70 = uVar5;
  local_88 = (int32_t ***)0x0;
  local_60 = (longlong *)0x0;
  local_58 = 0;
  lStack_50 = 0;
  local_48 = 0;
  local_38 = 0;
  local_b8 = "74 ? 48 8B 4F 30 E8";
  local_b0 = 0x13;
  FUN_180117400((longlong *)&local_a8,&local_b8);
  FUN_1800fc8d0((longlong *)&DAT_1801ec9c0,(longlong *)&local_a8);
  if (local_60 != (longlong *)0x0) {
    plVar6 = local_60;
    if ((0xfff < (lStack_50 - (longlong)local_60 & 0xfffffffffffffff8U)) &&
       (plVar6 = *(longlong **)((longlong)local_60 + -8),
       0x1f < (ulonglong)((longlong)local_60 + (-8 - (longlong)plVar6)))) {
      FUN_18012b7b4();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    thunk_FUN_18012d5e8(plVar6);
    local_60 = (longlong *)0x0;
    local_58 = 0;
    lStack_50 = 0;
  }
  FUN_1800a6800((longlong *)&local_88);
  FUN_1800a6800((longlong *)&local_a8);
  FUN_1801175d0((int32_t *)&DAT_1801ec9c0,0xffffffff);
  if ((ulonglong)(DAT_1801eca10 - DAT_1801eca08) < 8) {
    DAT_1801ec260 = '\0';
  }
  else if (DAT_1801ec260 != '\0') {
    FUN_1801175d0((int32_t *)&DAT_1801ec840,1);
    lVar2 = *DAT_1801ec888;
    FUN_1801175d0((int32_t *)&DAT_1801ec840,1);
    DAT_1801fcf70 = lVar2 + 7 + (longlong)*(int *)(*DAT_1801ec888 + 3);
    FUN_1801175d0((int32_t *)&DAT_1801ec940,1);
    lVar2 = *DAT_1801ec988;
    FUN_1801175d0((int32_t *)&DAT_1801ec940,1);
    DAT_1801fcf78 = lVar2 + 7 + (longlong)*(int *)(*DAT_1801ec988 + 2);
  }
  FUN_1801252c0(local_28 ^ (ulonglong)auStack_d8);
  return;
}

// ---- Function: FUN_1800fc8d0 ----
longlong * FUN_1800fc8d0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  LPVOID pvVar2;
  code *pcVar3;
  longlong *plVar4;
  LPVOID pvVar5;
  
  FUN_1800fcc30(param_1,param_2);
  FUN_1800fcc30(param_1 + 4,param_2 + 4);
  plVar4 = param_2 + 9;
  plVar1 = param_1 + 9;
  param_1[8] = param_2[8];
  if (plVar1 != plVar4) {
    pvVar2 = (LPVOID)*plVar1;
    if (pvVar2 != (LPVOID)0x0) {
      pvVar5 = pvVar2;
      if ((0xfff < (param_1[0xb] - (longlong)pvVar2 & 0xfffffffffffffff8U)) &&
         (pvVar5 = *(LPVOID *)((longlong)pvVar2 + -8),
         0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar5)))) {
        FUN_18012b7b4();
        pcVar3 = (code *)swi(3);
        plVar4 = (longlong *)(*pcVar3)();
        return plVar4;
      }
      thunk_FUN_18012d5e8(pvVar5);
      *plVar1 = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
    }
    *plVar1 = *plVar4;
    param_1[10] = param_2[10];
    param_1[0xb] = param_2[0xb];
    *plVar4 = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
  }
  *(char *)(param_1 + 0xc) = (char)param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  return param_1;
}

// ---- Function: FUN_1800fc9c0 ----
void FUN_1800fc9c0(byte param_1,byte param_2,byte param_3,byte param_4)

{
  char *local_28;
  
  if (DAT_1801ec260 != '\0') {
    *DAT_1801fcf70 = param_3;
    FUN_1801175d0((int32_t *)&DAT_1801ec8c0,1);
    *(byte *)(*DAT_1801ec908 + 1) = (param_4 ^ 1) + 0x13;
    *DAT_1801fcf78 = param_1;
    FUN_1801175d0((int32_t *)&DAT_1801ec9c0,1);
    *(byte *)(*DAT_1801eca08 + 0x1e) = (param_2 ^ 1) + 0x13;
  }
  if ((param_1 == 0) && (param_3 == 0)) {
    nativeInit(0x5f61ebbe1a00f96d);
    nativePush64(0x1801d8490);
    nativeCall();
  }
  else {
    nativeInit(0xb80d8756b4668ab6);
    nativePush64(0x1801d8490);
    nativeCall();
    nativeInit(0x6c38af3693a69a91);
    nativePush64(0x1801d8490);
    nativeCall();
    if (param_1 != 0) {
      nativeInit(0x2f844a8b08d76685);
      nativePush64(0x1801d84a0);
      nativePush64(1);
      nativePush64(0xffffffff);
      nativeCall();
      nativeInit(0x2f844a8b08d76685);
      nativePush64(0x1801d84b0);
      nativePush64(1);
      local_28 = (char *)0xffffffff;
      goto LAB_1800fcac9;
    }
  }
  nativeInit(0x77ed170667f50170);
  nativePush64(0x1801d84a0);
  nativeCall();
  nativeInit(0x77ed170667f50170);
  local_28 = "SNOW_FOOTSTEPS";
LAB_1800fcac9:
  nativePush64((__uint64)local_28);
  nativeCall();
  nativeInit(0xaeedad1420c65cc0);
  local_28 = (char *)(ulonglong)param_1;
  nativePush64((__uint64)local_28);
  nativeCall();
  nativeInit(0x4cc7f0fea5283fe0);
  local_28 = (char *)(ulonglong)param_3;
  nativePush64((__uint64)local_28);
                    
                    
  nativeCall();
  return;
}

// ---- Function: FUN_1800fcc30 ----
longlong * FUN_1800fcc30(longlong *param_1,longlong *param_2)

{
  LPVOID pvVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  LPVOID pvVar5;
  
  if (param_1 != param_2) {
    if (0xf < (ulonglong)param_1[3]) {
      pvVar1 = (LPVOID)*param_1;
      pvVar5 = pvVar1;
      if ((0xfff < param_1[3] + 1U) &&
         (pvVar5 = *(LPVOID *)((longlong)pvVar1 + -8),
         0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar5)))) {
        FUN_18012b7b4();
        pcVar2 = (code *)swi(3);
        plVar4 = (longlong *)(*pcVar2)();
        return plVar4;
      }
      thunk_FUN_18012d5e8(pvVar5);
    }
    param_1[3] = 0xf;
    param_1[2] = 0;
    *(int32_t *)param_1 = 0;
    lVar3 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar3;
    lVar3 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar3;
    *(int32_t *)param_2 = 0;
    param_2[2] = 0;
    param_2[3] = 0xf;
  }
  return param_1;
}

// ---- Function: FUN_1800fccc0 ----
void FUN_1800fccc0(int32_t *param_1,int32_t *param_2,ulonglong param_3)

{
  int32_t *puVar1;
  code *pcVar2;
  void *pvVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int32_t *puVar6;
  int32_t *puVar7;
  
  puVar1 = (int32_t *)*param_1;
  uVar4 = param_1[2] - (longlong)puVar1 >> 3;
  if (uVar4 < param_3) {
    if (0x1fffffffffffffff < param_3) {
      FUN_1800aa480();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (0x1fffffffffffffff - (uVar4 >> 1) < uVar4) {
      uVar5 = 0x1fffffffffffffff;
    }
    else {
      uVar5 = uVar4 + (uVar4 >> 1);
      if (uVar5 < param_3) {
        uVar5 = param_3;
      }
    }
    puVar7 = (int32_t *)0x0;
    if (puVar1 != (int32_t *)0x0) {
      puVar6 = puVar1;
      if ((0xfff < uVar4 * 8) &&
         (puVar6 = (int32_t *)puVar1[-1],
         0x1f < (ulonglong)((longlong)puVar1 + (-8 - (longlong)puVar6)))) goto LAB_1800fce81;
      thunk_FUN_18012d5e8(puVar6);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if (0x1fffffffffffffff < uVar5) {
LAB_1800fce75:
      FUN_1800ba8a0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar4 = uVar5 * 8;
    if (uVar4 != 0) {
      if (uVar4 < 0x1000) {
        puVar7 = (int32_t *)operator_new(uVar4);
      }
      else {
        if (uVar4 + 0x27 <= uVar4) goto LAB_1800fce75;
        pvVar3 = operator_new(uVar4 + 0x27);
        if (pvVar3 == (void *)0x0) {
LAB_1800fce81:
          FUN_18012b7b4();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        puVar7 = (int32_t *)((longlong)pvVar3 + 0x27U & 0xffffffffffffffe0);
        puVar7[-1] = pvVar3;
      }
    }
    *param_1 = puVar7;
    param_1[1] = puVar7;
    param_1[2] = puVar7 + uVar5;
    FUN_180150fd0(puVar7,param_2,param_3 * 8);
    puVar7 = puVar7 + param_3;
  }
  else {
    uVar4 = param_1[1] - (longlong)puVar1 >> 3;
    if (uVar4 < param_3) {
      FUN_180150fd0(puVar1,param_2,uVar4 * 8);
      puVar7 = (int32_t *)param_1[1];
      FUN_180150fd0(puVar7,param_2 + uVar4,(param_3 - uVar4) * 8);
      puVar7 = puVar7 + (param_3 - uVar4);
    }
    else {
      FUN_180150fd0(puVar1,param_2,param_3 * 8);
      puVar7 = puVar1 + param_3;
    }
  }
  param_1[1] = puVar7;
  return;
}

// ---- Function: FUN_1800fce90 ----
void FUN_1800fce90(float *param_1,longlong param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ulonglong uVar4;
  uint uVar5;
  __uint64 *p_Var6;
  float *pfVar7;
  longlong lVar8;
  float fVar9;
  int32_t uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  ulonglong local_res8;
  
  if (0 < param_3) {
    fVar1 = *param_1;
    fVar2 = param_1[1];
    lVar8 = 0;
    fVar11 = DAT_1801d8ee4;
    do {
      uVar5 = *(uint *)(param_2 + lVar8 * 4);
      nativeInit(0x7239b21a38f536ba);
      local_res8 = (ulonglong)uVar5;
      nativePush64(local_res8);
      p_Var6 = nativeCall();
      if ((int)*p_Var6 != 0) {
        uVar5 = *(uint *)(param_2 + lVar8 * 4);
        nativeInit(0xda95ea3317cc5064);
        local_res8 = (ulonglong)uVar5;
        nativePush64(local_res8);
        p_Var6 = nativeCall();
        if ((int)*p_Var6 != 0) {
          uVar5 = *(uint *)(param_2 + lVar8 * 4);
          nativeInit(0xcfb0a0d8edd145a3);
          local_res8 = (ulonglong)uVar5;
          nativePush64(local_res8);
          p_Var6 = nativeCall();
          if ((int)*p_Var6 != 0) {
            uVar5 = *(uint *)(param_2 + lVar8 * 4);
            nativeInit(0x3fef770d40960d5a);
            local_res8 = (ulonglong)uVar5;
            nativePush64(local_res8);
            nativePush64(0);
            pfVar7 = (float *)nativeCall();
            fVar3 = param_1[2];
            fVar12 = param_1[1];
            fVar18 = *param_1;
            uVar4 = *(ulonglong *)(pfVar7 + 4);
            fVar14 = (float)uVar4;
            fVar19 = *pfVar7;
            fVar15 = pfVar7[2];
            nativeInit(0xb7a628320eff8e47);
            local_res8 = (ulonglong)(uint)fVar19;
            nativePush64(local_res8);
            local_res8 = (ulonglong)(uint)fVar15;
            nativePush64(local_res8);
            local_res8 = uVar4 & 0xffffffff;
            nativePush64(local_res8);
            local_res8 = (ulonglong)(uint)fVar18;
            nativePush64(local_res8);
            local_res8 = (ulonglong)(uint)fVar12;
            nativePush64(local_res8);
            local_res8 = (ulonglong)(uint)fVar3;
            nativePush64(local_res8);
            pfVar7 = (float *)nativeCall();
            fVar3 = *pfVar7;
            fVar18 = (fVar1 - 0.0) - fVar19;
            fVar12 = 0.0;
            if (0.0 <= fVar11 - fVar3) {
              fVar12 = fVar11 - fVar3;
            }
            fVar17 = (fVar2 - 0.0) - fVar15;
            if (fVar12 <= fVar11) {
              fVar11 = fVar12;
            }
            FUN_18014d560(fVar18,fVar17);
            fVar12 = fVar3 * _DAT_1801d8e08;
            uVar10 = FUN_18014df60();
            fVar19 = ((float)uVar10 * fVar12 + (fVar1 - 0.0)) - fVar19;
            uVar10 = FUN_18014fb00();
            fVar15 = ((float)uVar10 * fVar12 + (fVar2 - 0.0)) - fVar15;
            fVar16 = 0.0 - fVar14;
            fVar12 = fVar15 * fVar15 + fVar19 * fVar19 + fVar16 * fVar16;
            if (fVar12 < 0.0) {
              fVar12 = FUN_1801501f8(fVar12);
            }
            else {
              fVar12 = SQRT(fVar12);
            }
            fVar13 = DAT_1801d8ea8;
            fVar9 = DAT_1801d8e38;
            if (fVar12 == 0.0) {
              fVar15 = 0.0;
              fVar16 = 0.0;
              fVar19 = 0.0;
            }
            else {
              fVar12 = DAT_1801d8e38 / fVar12;
              fVar15 = fVar15 * fVar12;
              fVar16 = fVar16 * fVar12;
              fVar19 = fVar19 * fVar12;
            }
            fVar12 = DAT_1801d8ea8 / (fVar3 / DAT_1801d8e98);
            fVar14 = (DAT_1801d8f40 - fVar11) - fVar14;
            fVar11 = fVar18 * fVar18 + fVar17 * fVar17 + fVar14 * fVar14;
            if (fVar11 < 0.0) {
              fVar11 = FUN_1801501f8(fVar11);
            }
            else {
              fVar11 = SQRT(fVar11);
            }
            if (fVar11 == 0.0) {
              fVar17 = 0.0;
              fVar14 = 0.0;
              fVar18 = 0.0;
            }
            else {
              fVar9 = fVar9 / fVar11;
              fVar17 = fVar17 * fVar9;
              fVar14 = fVar14 * fVar9;
              fVar18 = fVar18 * fVar9;
            }
            uVar5 = *(uint *)(param_2 + lVar8 * 4);
            fVar13 = fVar13 / (fVar3 / DAT_1801d8ea0);
            nativeInit(0xc5f68be9613e2d18);
            local_res8 = (ulonglong)uVar5;
            nativePush64(local_res8);
            nativePush64(3);
            local_res8 = (ulonglong)(uint)(fVar18 * fVar13);
            nativePush64(local_res8);
            local_res8 = (ulonglong)(uint)(fVar17 * fVar13);
            nativePush64(local_res8);
            local_res8 = (ulonglong)(uint)(fVar14 * fVar13);
            nativePush64(local_res8);
            nativePush64(0);
            nativePush64(0);
            nativePush64(0);
            nativePush64(0);
            nativePush64(0);
            nativePush64(1);
            nativePush64(1);
            nativePush64(0);
            nativePush64(1);
            nativeCall();
            uVar5 = *(uint *)(param_2 + lVar8 * 4);
            nativeInit(0xc5f68be9613e2d18);
            local_res8 = (ulonglong)uVar5;
            nativePush64(local_res8);
            nativePush64(3);
            local_res8 = (ulonglong)(uint)(fVar19 * fVar12);
            nativePush64(local_res8);
            local_res8 = (ulonglong)(uint)(fVar15 * fVar12);
            nativePush64(local_res8);
            local_res8 = (ulonglong)(uint)(fVar16 * fVar12);
            nativePush64(local_res8);
            nativePush64(0);
            nativePush64(0);
            nativePush64(0);
            nativePush64(0);
            nativePush64(0);
            nativePush64(1);
            nativePush64(1);
            nativePush64(0);
            nativePush64(1);
            nativeCall();
            fVar11 = DAT_1801d8ee4;
          }
        }
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < param_3);
  }
  return;
}

// ---- Function: FUN_1800fd720 ----
void FUN_1800fd720(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  int32_t uVar9;
  int32_t uVar10;
  float fVar11;
  __uint64 local_res8;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  
  pfVar4 = DAT_1801ec828;
  fVar3 = DAT_1801d8eac;
  if (DAT_1801ec820 != DAT_1801ec828) {
    pfVar7 = DAT_1801ec820;
    do {
      fVar1 = *pfVar7;
      fVar2 = pfVar7[1];
      fStack_d0 = pfVar7[2];
      fStack_cc = pfVar7[3];
      fVar11 = (DAT_1801ec760 - fVar1) * (DAT_1801ec760 - fVar1) +
               (DAT_1801ec764 - fVar2) * (DAT_1801ec764 - fVar2) +
               (DAT_1801ec768 - fStack_d0) * (DAT_1801ec768 - fStack_d0);
      local_d8 = fVar1;
      fStack_d4 = fVar2;
      if (fVar11 < 0.0) {
        fVar11 = FUN_1801501f8(fVar11);
      }
      else {
        fVar11 = SQRT(fVar11);
      }
      fVar5 = fStack_cc;
      iVar6 = 0;
      if (fVar11 <= _DAT_1801d8f18) {
        do {
          iVar8 = iVar6 + 1;
          nativeInit(0xfc8202efc642e6f2);
          fVar11 = fVar5 / (((float)iVar8 * fVar3) / DAT_1801d8ea8 + DAT_1801d8e38);
          nativeCall();
          uVar9 = FUN_18014fb00();
          nativeInit(0xfc8202efc642e6f2);
          nativeCall();
          uVar10 = FUN_18014df60();
          nativeInit(0xc443fd757c3ba637);
          local_res8 = (__uint64)(uint)((float)uVar9 * fVar11 + fVar1);
          nativePush64(local_res8);
          local_res8 = (__uint64)(uint)((float)uVar10 * fVar11 + fVar2);
          nativePush64(local_res8);
          if (iVar6 == 0x1f) {
            nativePush64(0xc479c000);
            local_res8 = 0x3da3d70a;
          }
          else {
            local_res8 = (__uint64)(uint)(float)(iVar6 * -10);
            nativePush64(local_res8);
            local_res8 = 0x3c23d70a;
          }
          nativePush64(local_res8);
          nativeCall();
          iVar6 = iVar8;
        } while (iVar8 < 0x20);
        FUN_1800fce90(&local_d8,0x1801f4b80,DAT_1801f5380);
        FUN_1800fce90(&local_d8,0x1801f4370,DAT_1801f4b70);
        FUN_1800fce90(&local_d8,0x1801f3b60,DAT_1801f4360);
      }
      pfVar7 = pfVar7 + 4;
    } while (pfVar7 != pfVar4);
  }
  return;
}

// ---- Function: FUN_1800fdac0 ----
void FUN_1800fdac0(char *param_1,float *param_2)

{
  float fVar1;
  char cVar2;
  longlong lVar3;
  int32_t *puVar4;
  char *pcVar5;
  longlong *plVar6;
  int32_t auStack_168 [32];
  int32_t local_148 [16];
  char *local_138;
  char *local_130;
  int32_t local_128 [8];
  int32_t *local_120;
  int32_t local_118;
  int32_t local_110;
  double local_108 [2];
  int32_t local_f8 [8];
  int32_t *local_f0;
  int32_t local_e8;
  int32_t local_e0;
  double local_d8 [2];
  int32_t local_c8 [8];
  int32_t *local_c0;
  int32_t local_b8;
  int32_t local_b0;
  double local_a8 [2];
  char local_98 [16];
  char local_88 [16];
  int32_t local_78;
  char local_70 [16];
  int32_t local_60;
  char local_58 [16];
  int32_t local_48;
  int32_t local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_1801eb080 ^ (ulonglong)auStack_168;
  local_c8[0] = 0;
  local_c0 = (int32_t *)0x0;
  FUN_1800f9a90((longlong *)&local_c0,'\0');
  local_c8[0] = 3;
  puVar4 = (int32_t *)operator_new(0x20);
  local_138 = local_148;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  plVar6 = (longlong *)0x1;
  local_130 = (char *)puVar4;
  FUN_1800ba360(puVar4,(int32_t *)&DAT_1801d8504,1);
  local_b8 = 0;
  local_b0 = 0;
  local_a8[0] = 0.0;
  fVar1 = *param_2;
  local_c0 = puVar4;
  FUN_1800f9a90((longlong *)local_a8,'\0');
  local_b0 = 7;
  local_a8[0] = (double)fVar1;
  local_a8[1] = 0.0;
  local_138 = local_c8;
  local_130 = local_98;
  FUN_1800fde00(local_88,&local_138,plVar6);
  local_78 = 0;
  local_f8[0] = '\0';
  local_f0 = (int32_t *)0x0;
  FUN_1800f9a90((longlong *)&local_f0,'\0');
  local_f8[0] = '\x03';
  puVar4 = (int32_t *)operator_new(0x20);
  local_138 = local_148;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  plVar6 = (longlong *)0x1;
  local_130 = (char *)puVar4;
  FUN_1800ba360(puVar4,(int32_t *)&DAT_1801d850c,1);
  local_e8 = 0;
  local_e0 = 0;
  local_d8[0] = 0.0;
  fVar1 = param_2[1];
  local_f0 = puVar4;
  FUN_1800f9a90((longlong *)local_d8,'\0');
  local_e0 = 7;
  local_d8[0] = (double)fVar1;
  local_d8[1] = 0.0;
  local_138 = local_f8;
  local_130 = local_c8;
  FUN_1800fde00(local_70,&local_138,plVar6);
  local_60 = 0;
  local_128[0] = '\0';
  local_120 = (int32_t *)0x0;
  FUN_1800f9a90((longlong *)&local_120,'\0');
  local_128[0] = '\x03';
  puVar4 = (int32_t *)operator_new(0x20);
  local_138 = local_148;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  plVar6 = (longlong *)0x1;
  local_130 = (char *)puVar4;
  FUN_1800ba360(puVar4,(int32_t *)&DAT_1801d8508,1);
  local_118 = 0;
  local_110 = 0;
  local_108[0] = 0.0;
  fVar1 = param_2[2];
  local_120 = puVar4;
  FUN_1800f9a90((longlong *)local_108,'\0');
  local_110 = 7;
  local_108[0] = (double)fVar1;
  local_108[1] = 0.0;
  local_138 = local_128;
  local_130 = local_f8;
  FUN_1800fde00(local_58,&local_138,plVar6);
  local_48 = 0;
  local_138 = local_88;
  local_130 = local_40;
  pcVar5 = (char *)FUN_1800fde00(local_98,&local_138,plVar6);
  cVar2 = *param_1;
  *param_1 = *pcVar5;
  *pcVar5 = cVar2;
  plVar6 = (longlong *)(pcVar5 + 8);
  lVar3 = *(longlong *)(param_1 + 8);
  *(longlong *)(param_1 + 8) = *plVar6;
  *plVar6 = lVar3;
  FUN_1800f9a90(plVar6,*pcVar5);
  _eh_vector_destructor_iterator_(local_88,0x18,3,(_func_void_void_ptr *)&LAB_1800fdaa0);
  _eh_vector_destructor_iterator_(local_128,0x18,2,(_func_void_void_ptr *)&LAB_1800fdaa0);
  _eh_vector_destructor_iterator_(local_f8,0x18,2,(_func_void_void_ptr *)&LAB_1800fdaa0);
  _eh_vector_destructor_iterator_(local_c8,0x18,2,(_func_void_void_ptr *)&LAB_1800fdaa0);
  FUN_1801252c0(local_38 ^ (ulonglong)auStack_168);
  return;
}

// ---- Function: FUN_1800fde00 ----
void FUN_1800fde00(char *param_1,int32_t *param_2,longlong *param_3)

{
  char cVar1;
  char *pcVar2;
  code *pcVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  byte bVar7;
  char *pcVar8;
  longlong lVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  longlong *plVar12;
  ulonglong *puVar13;
  uint uVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  char cVar18;
  int32_t auStack_118 [32];
  longlong local_f8;
  longlong *local_f0;
  char *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  ulonglong *local_d0;
  ulonglong *local_c8;
  int32_t uStack_c0;
  longlong *local_b8;
  ulonglong *local_b0;
  longlong local_a8;
  longlong local_a0 [7];
  ulonglong *local_68;
  uint uStack_60;
  int32_t uStack_5c;
  ulonglong local_48;
  
  local_48 = DAT_1801eb080 ^ (ulonglong)auStack_118;
  *param_1 = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  pcVar2 = (char *)param_2[1];
  pcVar15 = (char *)*param_2;
  pcVar16 = pcVar15;
  local_e8 = param_1;
  do {
    if (pcVar16 == pcVar2) {
      *param_1 = '\x01';
      FUN_1800f8a10(&local_f0,'\x01');
      *(longlong **)(param_1 + 8) = local_f0;
      do {
        if (pcVar15 == pcVar2) {
LAB_1800fdfa4:
          FUN_1801252c0(local_48 ^ (ulonglong)auStack_118);
          return;
        }
        if (*(int32_t **)(pcVar15 + 0x10) == (int32_t *)0x0) {
          cVar18 = *pcVar15;
          uVar11 = (ulonglong)local_e0 >> 8;
          local_e0 = (longlong *)CONCAT71((int7)uVar11,cVar18);
          local_d8 = *(longlong **)(pcVar15 + 8);
          *pcVar15 = '\0';
          pcVar15[8] = '\0';
          pcVar15[9] = '\0';
          pcVar15[10] = '\0';
          pcVar15[0xb] = '\0';
          pcVar15[0xc] = '\0';
          pcVar15[0xd] = '\0';
          pcVar15[0xe] = '\0';
          pcVar15[0xf] = '\0';
        }
        else {
          FUN_1800f57a0((int32_t *)&local_e0,*(int32_t **)(pcVar15 + 0x10),param_3,pcVar16);
          cVar18 = (char)local_e0;
        }
        local_a8 = *local_d8;
        plVar12 = *(longlong **)(local_a8 + 8);
        puVar10 = (ulonglong *)**(longlong **)(param_1 + 8);
        puVar13 = (ulonglong *)puVar10[1];
        uVar14 = 0;
        cVar1 = *(char *)((longlong)puVar13 + 0x19);
        plVar4 = *(longlong **)(param_1 + 8);
        local_c8 = puVar10;
        puVar6 = puVar13;
        while (puVar5 = puVar13, local_f0 = plVar4, cVar1 == '\0') {
          uVar11 = FUN_1800f5180(puVar5 + 4,plVar12);
          bVar7 = (byte)uVar11;
          uVar14 = (uint)((byte)~bVar7 >> 7);
          if (-1 < (char)bVar7) {
            puVar10 = puVar5;
          }
          puVar13 = puVar5 + 2;
          if (-1 < (char)bVar7) {
            puVar13 = puVar5;
          }
          cVar1 = *(char *)((longlong)*puVar13 + 0x19);
          plVar4 = local_f0;
          puVar13 = (ulonglong *)*puVar13;
          puVar6 = puVar5;
        }
        local_68 = puVar6;
        uStack_60 = uVar14;
        if ((*(char *)((longlong)puVar10 + 0x19) != '\0') ||
           (uVar11 = FUN_1800f5180(plVar12,puVar10 + 4), (char)uVar11 < '\0')) {
          if (plVar4[1] == 0x333333333333333) {
LAB_1800fe175:
            FUN_1800d8950();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_b0 = (ulonglong *)0x0;
          local_b8 = plVar4;
          param_3 = (longlong *)operator_new(0x50);
          param_3[4] = 0;
          param_3[5] = 0;
          param_3[6] = 0;
          param_3[7] = 0;
          lVar9 = plVar12[1];
          param_3[4] = *plVar12;
          param_3[5] = lVar9;
          lVar9 = plVar12[3];
          param_3[6] = plVar12[2];
          param_3[7] = lVar9;
          *(int32_t *)plVar12 = 0;
          plVar12[2] = 0;
          plVar12[3] = 0xf;
          *(int32_t *)(param_3 + 8) = *(int32_t *)(local_a8 + 0x10);
          param_3[9] = *(longlong *)(local_a8 + 0x18);
          *(int32_t *)(local_a8 + 0x10) = 0;
          *(int32_t *)(local_a8 + 0x18) = 0;
          *param_3 = (longlong)local_c8;
          param_3[1] = (longlong)local_c8;
          param_3[2] = (longlong)local_c8;
          *(int32_t *)(param_3 + 3) = 0;
          local_b0 = (ulonglong *)0x0;
          uStack_c0 = CONCAT44(uStack_5c,uStack_60);
          local_c8 = local_68;
          FUN_1800d86d0(plVar4,(longlong *)&local_c8,param_3);
        }
        FUN_1800f9a90((longlong *)&local_d8,cVar18);
        pcVar15 = pcVar15 + 0x18;
        param_1 = local_e8;
      } while( true );
    }
    pcVar17 = *(char **)(pcVar16 + 0x10);
    pcVar8 = pcVar16;
    if (pcVar17 != (char *)0x0) {
      pcVar8 = pcVar17;
    }
    if (*pcVar8 != '\x02') {
LAB_1800fdef9:
      *param_1 = '\x02';
      puVar10 = (ulonglong *)operator_new(0x18);
      local_b8 = &local_f8;
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar10[2] = 0;
      uVar11 = ((longlong)pcVar2 - (longlong)pcVar15) / 0x18;
      local_b0 = puVar10;
      if (uVar11 != 0) {
        FUN_1800f56e0(puVar10,uVar11);
        plVar12 = (longlong *)*puVar10;
        local_e0 = plVar12;
        local_d0 = puVar10;
        local_c8 = puVar10;
        do {
          if (*(int32_t **)(pcVar15 + 0x10) == (int32_t *)0x0) {
            *(char *)plVar12 = *pcVar15;
            plVar12[1] = *(longlong *)(pcVar15 + 8);
            *pcVar15 = '\0';
            pcVar15[8] = '\0';
            pcVar15[9] = '\0';
            pcVar15[10] = '\0';
            pcVar15[0xb] = '\0';
            pcVar15[0xc] = '\0';
            pcVar15[0xd] = '\0';
            pcVar15[0xe] = '\0';
            pcVar15[0xf] = '\0';
          }
          else {
            local_d8 = plVar12;
            FUN_1800f57a0((int32_t *)plVar12,*(int32_t **)(pcVar15 + 0x10),param_3,pcVar16);
          }
          plVar12 = plVar12 + 2;
          pcVar15 = pcVar15 + 0x18;
        } while (pcVar15 != pcVar2);
        puVar10[1] = (ulonglong)plVar12;
        local_d8 = plVar12;
      }
      *(ulonglong **)(param_1 + 8) = puVar10;
      goto LAB_1800fdfa4;
    }
    pcVar8 = pcVar16;
    if (pcVar17 != (char *)0x0) {
      pcVar8 = pcVar17;
    }
    lVar9 = FUN_1800f6f90(pcVar8);
    if (lVar9 != 2) goto LAB_1800fdef9;
    pcVar8 = pcVar16;
    if (pcVar17 != (char *)0x0) {
      pcVar8 = pcVar17;
    }
    if (*pcVar8 != '\x02') {
      local_e8 = FUN_1800f7810(pcVar8);
      plVar12 = FUN_1800fe310((longlong *)&local_68,param_2,(longlong *)&local_e8);
      FUN_1800ed150(local_a0,0x131,plVar12);
      FUN_1801279a8(local_a0,&DAT_1801e9200);
      goto LAB_1800fe175;
    }
    if (*(char *)**(int32_t **)(pcVar8 + 8) != '\x03') goto LAB_1800fdef9;
    pcVar16 = pcVar16 + 0x18;
  } while( true );
}

// ---- Function: FUN_1800fe180 ----
void FUN_1800fe180(char *param_1,void *param_2)

{
  char cVar1;
  ulonglong uVar2;
  code *pcVar3;
  int iVar4;
  ulonglong uVar5;
  int32_t *puVar6;
  int32_t *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  void *pvVar12;
  ulonglong _Size;
  bool bVar13;
  int32_t auStack_d8 [32];
  char *local_b8;
  longlong local_b0 [7];
  longlong local_78 [4];
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_1801eb080 ^ (ulonglong)auStack_d8;
  if (*param_1 == '\x01') {
    plVar8 = (longlong *)**(longlong **)(param_1 + 8);
    plVar11 = (longlong *)plVar8[1];
    cVar1 = *(char *)((longlong)plVar11 + 0x19);
    plVar10 = plVar8;
    while (cVar1 == '\0') {
      uVar5 = FUN_1800fe860(plVar11 + 4,param_2);
      bVar13 = (char)uVar5 < '\0';
      plVar9 = plVar11;
      if (bVar13) {
        plVar9 = plVar10;
      }
      plVar10 = plVar11 + 2;
      if (!bVar13) {
        plVar10 = plVar11;
      }
      plVar11 = (longlong *)*plVar10;
      plVar10 = plVar9;
      cVar1 = *(char *)((longlong)plVar11 + 0x19);
    }
    if (*(char *)((longlong)plVar10 + 0x19) == '\0') {
      plVar11 = plVar10 + 4;
      uVar5 = 0xffffffffffffffff;
      do {
        uVar5 = uVar5 + 1;
      } while (*(char *)((longlong)param_2 + uVar5) != '\0');
      uVar2 = plVar10[6];
      if (0xf < (ulonglong)plVar10[7]) {
        plVar11 = (longlong *)*plVar11;
      }
      _Size = uVar2;
      if (uVar5 < uVar2) {
        _Size = uVar5;
      }
      iVar4 = memcmp(plVar11,param_2,_Size);
      if (iVar4 == 0) {
        if ((uVar5 <= uVar2) && (uVar5 < uVar2)) goto LAB_1800fe2bd;
      }
      else if (-1 < iVar4) goto LAB_1800fe2bd;
      if (plVar10 != plVar8) {
        FUN_1801252c0(local_20 ^ (ulonglong)auStack_d8);
        return;
      }
    }
  }
  else {
    pvVar12 = param_2;
    local_b8 = FUN_1800f7810(param_1);
    plVar8 = FUN_1800fe530(local_78,pvVar12,(longlong *)&local_b8);
    FUN_1800ed150(local_58,0x130,plVar8);
    FUN_1801279a8(local_58,&DAT_1801e9200);
  }
LAB_1800fe2bd:
  puVar6 = (int32_t *)FUN_1800cf7d0(param_2);
  puVar7 = FUN_1800ba470(local_78,puVar6);
  plVar8 = FUN_1800fe5f0(local_58,puVar6,puVar7);
  FUN_1800fe6a0(local_b0,puVar6,plVar8);
  FUN_1801279a8(local_b0,&DAT_1801e9130);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// ---- Function: FUN_1800fe310 ----
longlong * FUN_1800fe310(longlong *param_1,int32_t param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(int32_t *)param_1 = 0;
  uVar4 = 0xffffffffffffffff;
  lVar1 = -1;
  do {
    lVar3 = lVar1;
    lVar1 = lVar3 + 1;
  } while (*(char *)(*param_3 + lVar1) != '\0');
  uVar2 = lVar3 + 0x34;
  if (0xf < uVar2) {
    FUN_1800b9630(param_1,uVar2);
    param_1[2] = 0;
  }
  FUN_1800b9910(param_1,(int32_t *)"cannot use operator[] with a numeric argument with ",0x33);
  do {
    uVar4 = uVar4 + 1;
  } while (*(char *)(*param_3 + uVar4) != '\0');
  FUN_1800b9910(param_1,(int32_t *)*param_3,uVar4);
  return param_1;
}

// ---- Function: FUN_1800fe3d0 ----
void FUN_1800fe3d0(char *param_1,float *param_2)

{
  char cVar1;
  ulonglong uVar2;
  code *pcVar3;
  ulonglong *puVar4;
  double *pdVar5;
  byte *pbVar6;
  longlong *plVar7;
  float fVar8;
  int32_t auStack_98 [32];
  char *local_78;
  longlong local_70 [7];
  longlong local_38 [4];
  ulonglong local_18;
  
  local_18 = DAT_1801eb080 ^ (ulonglong)auStack_98;
  cVar1 = *param_1;
  switch(cVar1) {
  default:
    local_78 = FUN_1800f7810(param_1);
    plVar7 = FUN_1800f24a0(local_38,(int32_t *)"type must be number, but is ",
                           (longlong *)&local_78);
    FUN_1800ed150(local_70,0x12e,plVar7);
    FUN_1801279a8(local_70,&DAT_1801e9200);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  case '\x04':
    pbVar6 = (byte *)(param_1 + 8);
    if (cVar1 != '\x04') {
      pbVar6 = (byte *)0x0;
    }
    fVar8 = (float)*pbVar6;
    break;
  case '\x05':
    plVar7 = (longlong *)(param_1 + 8);
    if (1 < (byte)(cVar1 - 5U)) {
      plVar7 = (longlong *)0x0;
    }
    fVar8 = (float)*plVar7;
    break;
  case '\x06':
    puVar4 = (ulonglong *)(param_1 + 8);
    if (cVar1 != '\x06') {
      puVar4 = (ulonglong *)0x0;
    }
    uVar2 = *puVar4;
    if ((longlong)uVar2 < 0) {
      fVar8 = (float)uVar2;
    }
    else {
      fVar8 = (float)(longlong)uVar2;
    }
    break;
  case '\a':
    pdVar5 = (double *)(param_1 + 8);
    if (cVar1 != '\a') {
      pdVar5 = (double *)0x0;
    }
    fVar8 = (float)*pdVar5;
  }
  *param_2 = fVar8;
  FUN_1801252c0(local_18 ^ (ulonglong)auStack_98);
  return;
}

// ---- Function: FUN_1800fe530 ----
longlong * FUN_1800fe530(longlong *param_1,int32_t param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(int32_t *)param_1 = 0;
  uVar4 = 0xffffffffffffffff;
  lVar1 = -1;
  do {
    lVar3 = lVar1;
    lVar1 = lVar3 + 1;
  } while (*(char *)(*param_3 + lVar1) != '\0');
  uVar2 = lVar3 + 0x16;
  if (0xf < uVar2) {
    FUN_1800b9630(param_1,uVar2);
    param_1[2] = 0;
  }
  FUN_1800b9910(param_1,(int32_t *)"cannot use at() with ",0x15);
  do {
    uVar4 = uVar4 + 1;
  } while (*(char *)(*param_3 + uVar4) != '\0');
  FUN_1800b9910(param_1,(int32_t *)*param_3,uVar4);
  return param_1;
}

// ---- Function: FUN_1800fe5f0 ----
longlong * FUN_1800fe5f0(longlong *param_1,int32_t param_2,int32_t *param_3)

{
  ulonglong *puVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(int32_t *)param_1 = 0;
  if (0xf < param_3[2] + 0x10) {
    FUN_1800b9630(param_1,param_3[2] + 0x10);
    param_1[2] = 0;
  }
  FUN_1800b9910(param_1,(int32_t *)"key \'",5);
  puVar1 = param_3 + 2;
  if (0xf < (ulonglong)param_3[3]) {
    param_3 = (int32_t *)*param_3;
  }
  FUN_1800b9910(param_1,param_3,*puVar1);
  FUN_1800b9910(param_1,(int32_t *)"\' not found",0xb);
  return param_1;
}

// ---- Function: FUN_1800fe6a0 ----
void FUN_1800fe6a0(int32_t *param_1,int32_t param_2,int32_t *param_3)

{
  code *pcVar1;
  int32_t *puVar2;
  int32_t ***pppuVar3;
  LPVOID pvVar4;
  int32_t auStack_b8 [40];
  int32_t ***local_90;
  ulonglong uStack_88;
  int32_t local_80;
  ulonglong uStack_78;
  LPVOID local_70;
  int32_t uStack_68;
  int32_t local_60;
  ulonglong uStack_58;
  int32_t ***local_50 [3];
  ulonglong local_38;
  longlong local_30 [4];
  ulonglong local_10;
  
  local_10 = DAT_1801eb080 ^ (ulonglong)auStack_b8;
  uStack_68 = 0;
  local_60 = _DAT_1801d8f70;
  uStack_58 = _UNK_1801d8f78;
  local_70 = (LPVOID)0x0;
  local_80 = _DAT_1801d9010;
  uStack_78 = _UNK_1801d9018;
  local_90 = (int32_t ***)s_out_of_range_1801d69d0._0_8_;
  uStack_88 = (ulonglong)(uint)s_out_of_range_1801d69d0._8_4_;
  puVar2 = (int32_t *)FUN_1800f8dd0(local_30,&local_90,0x193);
  FUN_1800f8bc0((longlong *)local_50,puVar2,&local_70,param_3);
  FUN_1800a6800(local_30);
  if (0xf < uStack_78) {
    pppuVar3 = local_90;
    if ((0xfff < uStack_78 + 1) &&
       (pppuVar3 = (int32_t ***)local_90[-1],
       0x1f < (ulonglong)((longlong)local_90 + (-8 - (longlong)pppuVar3)))) goto LAB_1800fe84c;
    thunk_FUN_18012d5e8(pppuVar3);
  }
  if (0xf < uStack_58) {
    pvVar4 = local_70;
    if ((0xfff < uStack_58 + 1) &&
       (pvVar4 = *(LPVOID *)((longlong)local_70 + -8),
       0x1f < (ulonglong)((longlong)local_70 + (-8 - (longlong)pvVar4)))) {
      FUN_18012b7b4();
LAB_1800fe84c:
      FUN_18012b7b4();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    thunk_FUN_18012d5e8(pvVar4);
  }
  local_90 = local_50;
  if (0xf < local_38) {
    local_90 = local_50[0];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1801d69e0;
  *(int32_t *)(param_1 + 3) = 0x193;
  param_1[4] = std::exception::vftable;
  param_1[5] = 0;
  param_1[6] = 0;
  uStack_88 = CONCAT71(uStack_88._1_7_,1);
  __std_exception_copy((longlong *)&local_90,param_1 + 5);
  param_1[4] = std::runtime_error::vftable;
  *param_1 = &PTR_FUN_1801d69e0;
  FUN_1800a6800((longlong *)local_50);
  FUN_1801252c0(local_10 ^ (ulonglong)auStack_b8);
  return;
}

// ---- Function: FUN_1800fe860 ----
ulonglong FUN_1800fe860(int32_t *param_1,void *param_2)

{
  ulonglong uVar1;
  int iVar2;
  int32_t extraout_var;
  int iVar3;
  ulonglong uVar4;
  ulonglong _Size;
  
  uVar4 = 0xffffffffffffffff;
  do {
    uVar4 = uVar4 + 1;
  } while (*(char *)((longlong)param_2 + uVar4) != '\0');
  uVar1 = param_1[2];
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (int32_t *)*param_1;
  }
  _Size = uVar1;
  if (uVar4 < uVar1) {
    _Size = uVar4;
  }
  iVar2 = memcmp(param_1,param_2,_Size);
  iVar3 = iVar2;
  if (iVar2 == 0) {
    if (uVar1 < uVar4) {
      return 0xff;
    }
    iVar3 = 1;
    if (uVar1 <= uVar4) {
      return CONCAT44(extraout_var,iVar2) & 0xffffffffffffff00;
    }
  }
  uVar4 = 0xff;
  if (-1 < iVar3) {
    uVar4 = 1;
  }
  return uVar4;
}

// ---- Function: FUN_1800fe8f0 ----
int32_t (*) [32] FUN_1800fe8f0(int32_t (*param_1) [32])

{
  int32_t local_res10;
  int32_t local_res14;
  int32_t *local_18;
  int32_t *local_10;
  
  FUN_180151670(param_1,0,0x1ee0);
  FUN_1800a6b30((longlong)param_1);
  *(int32_t *)*param_1 = s_Cloudy_Preset_1801d8598._0_8_;
  *(int32_t *)(*param_1 + 8) = s_Cloudy_Preset_1801d8598._8_4_;
  *(int32_t *)(*param_1 + 0xc) = s_Cloudy_Preset_1801d8598._12_2_;
  local_res10 = 0x30fdaf5c;
  local_res14 = 0x97aa0a79;
  local_18 = &local_res10;
  local_10 = &stack0x00000018;
  FUN_180102e80((ulonglong *)(param_1 + 4),&local_18);
  *(int32_t *)(param_1[4] + 0x18) = 0x3f400000;
  *(int32_t *)(param_1[4] + 0x1c) = 0x3f400000;
  *(int32_t *)(param_1[5] + 4) = 0x3e800000;
  *(int32_t *)(param_1[5] + 8) = 0x3e800000;
  *(int32_t *)(param_1[5] + 0x10) = 0x3f000000;
  *(int32_t *)(param_1[5] + 0x14) = 0x3f000000;
  *(int32_t *)(param_1[5] + 0x1c) = 0x3f800000;
  *(int32_t *)param_1[6] = 0x3f800000;
  *(int32_t *)(param_1[6] + 4) = 0x40000000;
  *(int32_t *)(param_1[6] + 8) = 0x3f800000;
  *(int32_t *)(param_1[6] + 0xc) = 0x3f800000;
  *(int32_t *)(param_1[6] + 0x10) = 0x3f800000;
  *(int32_t *)(param_1[6] + 0x18) = 0;
  *(int32_t *)param_1[7] = 0xbf29e831;
  *(int32_t *)(param_1[7] + 4) = 0xbf1987c7;
  *(int32_t *)(param_1[7] + 8) = 0xbe3d5aae;
  *(int32_t *)(param_1[7] + 0xc) = 0xbdffe24d;
  *(int32_t *)(param_1[7] + 0x10) = 0;
  *(int32_t *)(param_1[7] + 0x14) = 0x4086154a;
  *(int32_t *)(param_1[7] + 0x1c) = 0x3effe24d;
  *(int32_t *)(param_1[8] + 4) = 0x3f7fe24d;
  *(int32_t *)(param_1[8] + 0xc) = 0x3f7fe24d;
  *(int32_t *)(param_1[8] + 0x10) = 0x3fffe24d;
  *(int32_t *)(param_1[8] + 0x14) = 0x4387704c;
  *(int32_t *)(param_1[8] + 0x18) = 0x3f7fffe5;
  *(int32_t *)(param_1[8] + 0x1c) = 0x3693f8fa;
  *(int32_t *)(param_1[9] + 4) = 0x411fffef;
  *(int32_t *)(param_1[9] + 0xc) = 0x3f7fffe5;
  *(int32_t *)(param_1[9] + 0x10) = 0x3f1999be;
  *(int32_t *)(param_1[9] + 0x14) = 0x3f7fff62;
  *(int32_t *)(param_1[9] + 0x18) = 0x4433ffed;
  *(int32_t *)(param_1[9] + 0x1c) = 0x3f7fffe5;
  *(int32_t *)param_1[10] = 0x3fffffe5;
  *(int32_t *)(param_1[10] + 8) = 0x3f7fffe5;
  *(int32_t *)(param_1[10] + 0x10) = 0;
  *(int32_t *)(param_1[10] + 0x14) = 0x3e8a3d36;
  *(int32_t *)(param_1[10] + 0x18) = 0x3f4cccb8;
  *(int32_t *)(param_1[10] + 0x1c) = 0x3fe66652;
  *(int32_t *)param_1[0xb] = 0x3effffb0;
  *(int32_t *)(param_1[0xb] + 4) = 0x3dccce5c;
  *(int32_t *)(param_1[0xb] + 8) = 0x3fb33320;
  *(int32_t *)(param_1[0xb] + 0xc) = 0xe19ffb1;
  *(int32_t *)(param_1[0xb] + 0x10) = 0x39d3ff94;
  *(int32_t *)(param_1[0xb] + 0x14) = 0x3f4cccc9;
  *(int32_t *)(param_1[0xb] + 0x18) = 0x3f7851ae;
  *(int32_t *)(param_1[0xb] + 0x1c) = 0x412fff96;
  *(int32_t *)param_1[0xc] = 0x3e8a3db8;
  *(int32_t *)(param_1[0xc] + 8) = 0x379dffaf;
  *(int32_t *)(param_1[0xc] + 0xc) = 0x3e4ccc4e;
  *(int32_t *)(param_1[0xc] + 0x10) = 0x3f7851d6;
  *(int32_t *)(param_1[0xc] + 0x14) = 0x3d23dd40;
  *(int32_t *)(param_1[0xc] + 0x18) = 0x35d1ff95;
  *(int32_t *)(param_1[0xc] + 0x1c) = 0x3f0a3d1b;
  *(int32_t *)param_1[0xd] = 0x40a00041;
  *(int32_t *)(param_1[0xd] + 4) = 0x42a00004;
  *(int32_t *)(param_1[0xd] + 8) = 0x43ffffaf;
  *(int32_t *)(param_1[0xd] + 0xc) = 0x41200030;
  *(int32_t *)(param_1[0xd] + 0x14) = 0x3cd4ffe8;
  *(int32_t *)(param_1[0xd] + 0x18) = 0xbfbfff8a;
  *(int32_t *)(param_1[0xd] + 0x1c) = 0;
  *(int32_t *)param_1[0xe] = 0x467a0288;
  *(int32_t *)(param_1[0xe] + 4) = 0x3ff33320;
  *(int32_t *)(param_1[0xe] + 8) = 0x3f99999e;
  *(int32_t *)(param_1[0xe] + 0xc) = 0x459c42c0;
  *(int32_t *)(param_1[0xe] + 0x10) = 0x437a0066;
  *(int32_t *)(param_1[0xe] + 0x14) = 0x44960063;
  *(int32_t *)(param_1[0xe] + 0x18) = 0xc347ff85;
  *(int32_t *)(param_1[0xe] + 0x1c) = 0x44f9ffe6;
  *(int32_t *)param_1[0xf] = 0x43c7ff86;
  *(int32_t *)(param_1[0xf] + 4) = 0xc395ffa3;
  *(int32_t *)(param_1[0xf] + 8) = 0;
  *(int32_t *)(param_1[0xf] + 0xc) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xf] + 0x10) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xf] + 0x14) = 0x3f7fffa3;
  *(int32_t *)(param_1[0xf] + 0x18) = 0x3e4ccdf4;
  *(int32_t *)param_1[0x10] = 0;
  *(int32_t *)(param_1[0x10] + 4) = 0x44227fdc;
  *(int32_t *)(param_1[0x10] + 0xc) = 0x3f800034;
  *(int32_t *)(param_1[0x10] + 0x10) = 0x41a00004;
  *(int32_t *)(param_1[0x10] + 0x14) = 0x41a00004;
  *(int32_t *)(param_1[0x10] + 0x18) = 0x41a00004;
  *(int32_t *)(param_1[0x10] + 0x1c) = 0x48aae62c;
  *(int32_t *)param_1[0x11] = 0x408cccbe;
  *(int32_t *)(param_1[0x11] + 4) = 0xbcf5c275;
  *(int32_t *)(param_1[0x11] + 8) = 0x3fffffe5;
  *(int32_t *)(param_1[0x11] + 0xc) = 0x3f800034;
  *(int32_t *)(param_1[0x11] + 0x10) = 0x403fffec;
  *(int32_t *)(param_1[0x11] + 0x14) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x11] + 0x18) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x11] + 0x1c) = 0x3f7fffe5;
  *(int32_t *)param_1[0x12] = 0x3f7fffe5;
  *(int32_t *)(param_1[0x12] + 4) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x12] + 8) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x12] + 0x10) = 0;
  *(int32_t *)(param_1[0x12] + 0x18) = 0;
  *(int32_t *)param_1[0x13] = 0x3e19993b;
  *(int32_t *)(param_1[0x13] + 4) = 0x359dffaf;
  *(int32_t *)(param_1[0x13] + 8) = 0x2db3ffa4;
  *(int32_t *)(param_1[0x13] + 0xc) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x13] + 0x10) = 0x3ea8f5b1;
  *(int32_t *)(param_1[0x13] + 0x14) = 0x3e6b8506;
  *(int32_t *)(param_1[0x13] + 0x18) = 0x442a5613;
  *(int32_t *)(param_1[0x13] + 0x1c) = 0xc41bb9a1;
  *(int32_t *)param_1[0x14] = 0x44849617;
  *(int32_t *)(param_1[0x14] + 4) = 0x41bfffec;
  *(int32_t *)(param_1[0x14] + 8) = 0x40acccbb;
  *(int32_t *)(param_1[0x14] + 0x10) = 0;
  *(int32_t *)(param_1[0x14] + 0x14) = 0x43f9ffe6;
  *(int32_t *)(param_1[0x14] + 0x18) = 0x3f81479f;
  *(int32_t *)(param_1[0x14] + 0x1c) = 0x4190004b;
  *(int32_t *)param_1[0x15] = 0x3702ffbd;
  *(int32_t *)(param_1[0x15] + 4) = 0x3eefff85;
  *(int32_t *)(param_1[0x15] + 8) = 0x369dffaf;
  *(int32_t *)(param_1[0x15] + 0x10) = 0x3d1fffae;
  *(int32_t *)(param_1[0x15] + 0x14) = 0x3551ff95;
  *(int32_t *)(param_1[0x15] + 0x1c) = 0x3aebd810;
  *(int32_t *)param_1[0x16] = 0x3b120558;
  *(int32_t *)(param_1[0x16] + 4) = 0x3b6d57fe;
  *(int32_t *)(param_1[0x16] + 8) = 0x3878c07c;
  *(int32_t *)(param_1[0x16] + 0xc) = 0x39504f55;
  *(int32_t *)(param_1[0x16] + 0x10) = 0x39a89792;
  *(int32_t *)(param_1[0x16] + 0x14) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x16] + 0x18) = 0x411fffef;
  *(int32_t *)(param_1[0x16] + 0x1c) = 0x3f19998a;
  *(int32_t *)param_1[0x17] = 0x3f66664e;
  *(int32_t *)(param_1[0x17] + 4) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x17] + 8) = 0x3fb33320;
  *(int32_t *)(param_1[0x17] + 0xc) = 0x3dccd068;
  *(int32_t *)(param_1[0x17] + 0x10) = 0x423fffec;
  *(int32_t *)(param_1[0x17] + 0x14) = 10;
  *(int32_t *)(param_1[0x17] + 0x18) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x17] + 0x1c) = 0x3f7fffe5;
  *(int32_t *)param_1[0x18] = 0x3f400034;
  *(int32_t *)(param_1[0x18] + 4) = 0x41399986;
  *(int32_t *)(param_1[0x18] + 8) = 0x40bfffec;
  *(int32_t *)(param_1[0x18] + 0xc) = 0x409fffef;
  *(int32_t *)(param_1[0x18] + 0x10) = 0x4347ffeb;
  *(int32_t *)(param_1[0x18] + 0x14) = 0x4347ffeb;
  *(int32_t *)(param_1[0x18] + 0x18) = 0x2f25ffab;
  *(int32_t *)(param_1[0x18] + 0x1c) = 0x43aeffee;
  *(int32_t *)param_1[0x19] = 0x3e028272;
  *(int32_t *)(param_1[0x19] + 4) = 0x3e028272;
  *(int32_t *)(param_1[0x19] + 8) = 0x3e028272;
  *(int32_t *)(param_1[0x19] + 0x18) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x19] + 0xc) = 0x3e0c8c7d;
  *(int32_t *)(param_1[0x19] + 0x10) = 0x3de77dfb;
  *(int32_t *)(param_1[0x19] + 0x14) = 0x3dbb65fb;
  *(int32_t *)param_1[0x1a] = 0;
  *(int32_t *)(param_1[0x1a] + 8) = 0;
  *(int32_t *)(param_1[0x1a] + 0xc) = 0x419fffef;
  *(int32_t *)(param_1[0x1a] + 0x10) = 0x2fcdff97;
  *(int32_t *)(param_1[0x1a] + 0x14) = 0x3f7fffa4;
  *(int32_t *)(param_1[0x1a] + 0x18) = 0x402c28e4;
  *(int32_t *)(param_1[0x1a] + 0x1c) = 0x3f7fffe5;
  *(int32_t *)param_1[0x1b] = 0x419fffef;
  *(int32_t *)(param_1[0x1b] + 4) = 0x2fcdff97;
  *(int32_t *)(param_1[0x1b] + 8) = 0x3f4cccb7;
  *(int32_t *)(param_1[0x1b] + 0xc) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x1b] + 0x10) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x1b] + 0x14) = 0x3ca3d6f9;
  *(int32_t *)(param_1[0x1b] + 0x18) = 0x3f3fffec;
  *(int32_t *)(param_1[0x1b] + 0x1c) = 0x3f266654;
  *(int32_t *)param_1[0x1c] = 0x3effffe5;
  *(int32_t *)(param_1[0x1c] + 4) = 0x43c7ffeb;
  *(int32_t *)(param_1[0x1c] + 8) = 0x44bb7fec;
  *(int32_t *)(param_1[0x1c] + 0xc) = 0x459c3ff0;
  *(int32_t *)(param_1[0x1c] + 0x10) = 0x44b3ffed;
  *(int32_t *)(param_1[0x1c] + 0x14) = 0x41efffe7;
  *(int32_t *)(param_1[0x1c] + 0x18) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x1c] + 0x1c) = 0x3f7fffe5;
  *(int32_t *)param_1[0x1d] = 0x426fffe7;
  *(int32_t *)(param_1[0x1d] + 4) = 0x411fffef;
  *(int32_t *)(param_1[0x1d] + 8) = 0x4347ffeb;
  *(int32_t *)(param_1[0x1d] + 0x10) = 0x2673ff83;
  *(int32_t *)(param_1[0x1d] + 0x18) = 0;
  *(int32_t *)(param_1[0x1d] + 0x1c) = 0x304dff97;
  *(int32_t *)param_1[0x1e] = 0x2d03ffbc;
  *(int32_t *)(param_1[0x1e] + 4) = 0x2febff87;
  *(int32_t *)(param_1[0x1e] + 8) = 0x301fffae;
  *(int32_t *)(param_1[0x1e] + 0xc) = 0x304dff97;
  *(int32_t *)(param_1[0x1e] + 0x10) = 0x403fffec;
  *(int32_t *)(param_1[0x1e] + 0x14) = 0xac67ff89;
  *(int32_t *)(param_1[0x1e] + 0x18) = 0;
  *(int32_t *)param_1[0x1f] = 0;
  *(int32_t *)(param_1[0x1f] + 8) = 0x3aebd792;
  *(int32_t *)(param_1[0x1f] + 0xc) = 0x3b0989fb;
  *(int32_t *)(param_1[0x1f] + 0x10) = 0x3b6d57c6;
  *(int32_t *)(param_1[0x1f] + 0x14) = 0x3878c07c;
  *(int32_t *)(param_1[0x1f] + 0x18) = 0x39504f55;
  *(int32_t *)(param_1[0x1f] + 0x1c) = 0x39a89792;
  *(int32_t *)param_1[0x20] = 0x3f7fffe5;
  *(int32_t *)(param_1[0x20] + 4) = 0x411fffef;
  *(int32_t *)(param_1[0x20] + 8) = 0x3f19998a;
  *(int32_t *)(param_1[0x20] + 0xc) = 0x3f66664e;
  *(int32_t *)(param_1[0x20] + 0x10) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x20] + 0x14) = 0x3fb33320;
  *(int32_t *)(param_1[0x20] + 0x18) = 0x3dccccb7;
  *(int32_t *)(param_1[0x20] + 0x1c) = 0x423fffec;
  *(int32_t *)param_1[0x21] = 10;
  *(int32_t *)(param_1[0x21] + 4) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x21] + 8) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x21] + 0xc) = 0x3f400034;
  *(int32_t *)(param_1[0x21] + 0x10) = 0x41399986;
  *(int32_t *)(param_1[0x21] + 0x14) = 0x40bfffec;
  *(int32_t *)(param_1[0x21] + 0x18) = 0x409fffef;
  *(int32_t *)(param_1[0x21] + 0x1c) = 0x4347ffeb;
  *(int32_t *)param_1[0x22] = 0x4347ffeb;
  *(int32_t *)(param_1[0x22] + 4) = 0x2f25ffab;
  *(int32_t *)(param_1[0x22] + 8) = 0x43aeffee;
  *(int32_t *)(param_1[0x22] + 0xc) = 0x3e028272;
  *(int32_t *)(param_1[0x22] + 0x10) = 0x3e028272;
  *(int32_t *)(param_1[0x22] + 0x14) = 0x3e028272;
  *(int32_t *)(param_1[0x23] + 4) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x22] + 0x18) = 0x3e0c8c7d;
  *(int32_t *)(param_1[0x22] + 0x1c) = 0x3de77dfb;
  *(int32_t *)param_1[0x23] = 0x3dbb65fb;
  *(int32_t *)(param_1[0x23] + 0xc) = 0;
  *(int32_t *)(param_1[0x23] + 0x14) = 0;
  *(int32_t *)(param_1[0x23] + 0x18) = 0x419fffef;
  *(int32_t *)param_1[0x24] = 0x3f7fffa4;
  *(int32_t *)(param_1[0x24] + 4) = 0x402c28e4;
  *(int32_t *)(param_1[0x24] + 8) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x24] + 0xc) = 0x419fffef;
  *(int32_t *)(param_1[0x24] + 0x14) = 0x3f4cccb7;
  *(int32_t *)(param_1[0x24] + 0x18) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x24] + 0x1c) = 0x3f7fffe5;
  *(int32_t *)param_1[0x25] = 0x3ca3d6f9;
  *(int32_t *)(param_1[0x25] + 4) = 0x3f3fffec;
  *(int32_t *)(param_1[0x25] + 8) = 0x3f266654;
  *(int32_t *)(param_1[0x25] + 0xc) = 0x3effffe5;
  *(int32_t *)(param_1[0x25] + 0x10) = 0x43c7ffeb;
  *(int32_t *)(param_1[0x25] + 0x14) = 0x44bb7fec;
  *(int32_t *)(param_1[0x25] + 0x18) = 0x459c3ff0;
  *(int32_t *)(param_1[0x25] + 0x1c) = 0x44b3ffed;
  *(int32_t *)param_1[0x26] = 0x41efffe7;
  *(int32_t *)(param_1[0x26] + 4) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x26] + 8) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x26] + 0xc) = 0x411fffef;
  *(int32_t *)(param_1[0x26] + 0x10) = 0x411fffef;
  *(int32_t *)(param_1[0x26] + 0x14) = 0x4347ffeb;
  *(int32_t *)(param_1[0x26] + 0x1c) = 0x26c5ff9b;
  *(int32_t *)(param_1[0x27] + 4) = 0;
  *(int32_t *)(param_1[0x27] + 0xc) = 0x26bdff9f;
  *(int32_t *)(param_1[0x27] + 0x10) = 0x23efff85;
  *(int32_t *)(param_1[0x27] + 0x14) = 0x23efff85;
  *(int32_t *)(param_1[0x27] + 0x18) = 0x23efff85;
  *(int32_t *)(param_1[0x27] + 0x1c) = 0x403fffec;
  *(int32_t *)(param_1[0x28] + 4) = 0;
  *(int32_t *)(param_1[0x28] + 0xc) = 0;
  *(int32_t *)(param_1[0x28] + 0x14) = 0x3aebd826;
  *(int32_t *)(param_1[0x28] + 0x18) = 0x3b098a22;
  *(int32_t *)(param_1[0x28] + 0x1c) = 0x3b6d57a9;
  *(int32_t *)param_1[0x29] = 0x3878bff8;
  *(int32_t *)(param_1[0x29] + 4) = 0x39504ee6;
  *(int32_t *)(param_1[0x29] + 8) = 0x39a89738;
  *(int32_t *)(param_1[0x29] + 0xc) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x29] + 0x10) = 0x411fffef;
  *(int32_t *)(param_1[0x29] + 0x14) = 0x3f19998a;
  *(int32_t *)(param_1[0x29] + 0x18) = 0x3f66664e;
  *(int32_t *)(param_1[0x29] + 0x1c) = 0x3f7fffe5;
  *(int32_t *)param_1[0x2a] = 0x3fb33320;
  *(int32_t *)(param_1[0x2a] + 4) = 0x3dccd068;
  *(int32_t *)(param_1[0x2a] + 8) = 0x423fffec;
  *(int32_t *)(param_1[0x2a] + 0xc) = 10;
  *(int32_t *)(param_1[0x2a] + 0x10) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x2a] + 0x14) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x2a] + 0x18) = 0x3f400034;
  *(int32_t *)(param_1[0x2a] + 0x1c) = 0x41399986;
  *(int32_t *)param_1[0x2b] = 0x40bfffec;
  *(int32_t *)(param_1[0x2b] + 4) = 0x409fffef;
  *(int32_t *)(param_1[0x2b] + 8) = 0x4347ffeb;
  *(int32_t *)(param_1[0x2b] + 0xc) = 0x4347ffeb;
  *(int32_t *)(param_1[0x2b] + 0x10) = 0x2f25ffab;
  *(int32_t *)(param_1[0x2b] + 0x14) = 0x43aeffee;
  *(int32_t *)(param_1[0x2b] + 0x18) = 0x3e028272;
  *(int32_t *)(param_1[0x2b] + 0x1c) = 0x3e028272;
  *(int32_t *)param_1[0x2c] = 0x3e028272;
  *(int32_t *)(param_1[0x2c] + 0x10) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x2c] + 4) = 0x3e0c8c7d;
  *(int32_t *)(param_1[0x2c] + 8) = 0x3de77dfb;
  *(int32_t *)(param_1[0x2c] + 0xc) = 0x3dbb65fb;
  *(int32_t *)(param_1[0x2c] + 0x18) = 0;
  *(int32_t *)param_1[0x2d] = 0;
  *(int32_t *)(param_1[0x2d] + 4) = 0x419fffef;
  *(int32_t *)(param_1[0x2d] + 0xc) = 0x3f7fffa4;
  *(int32_t *)(param_1[0x2d] + 0x10) = 0x402c28e4;
  *(int32_t *)(param_1[0x2d] + 0x14) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x2d] + 0x18) = 0x419fffef;
  *(int32_t *)param_1[0x2e] = 0x3f4cccb7;
  *(int32_t *)(param_1[0x2e] + 4) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x2e] + 8) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x2e] + 0xc) = 0x3ca3d6f9;
  *(int32_t *)(param_1[0x2e] + 0x10) = 0x3f3fffec;
  *(int32_t *)(param_1[0x2e] + 0x14) = 0x3f266654;
  *(int32_t *)(param_1[0x2e] + 0x18) = 0x3effffe5;
  *(int32_t *)(param_1[0x2e] + 0x1c) = 0x43c7ffeb;
  *(int32_t *)param_1[0x2f] = 0x44bb7fec;
  *(int32_t *)(param_1[0x2f] + 4) = 0x459c3ff0;
  *(int32_t *)(param_1[0x2f] + 8) = 0x44b3ffed;
  *(int32_t *)(param_1[0x2f] + 0xc) = 0x41efffe7;
  *(int32_t *)(param_1[0x2f] + 0x10) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x2f] + 0x14) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x2f] + 0x18) = 0x426fffe7;
  *(int32_t *)(param_1[0x2f] + 0x1c) = 0x411fffef;
  *(int32_t *)param_1[0x30] = 0x4347ffeb;
  *(int32_t *)(param_1[0x30] + 8) = 0x2673ff83;
  *(int32_t *)(param_1[0x30] + 0x10) = 0;
  *(int32_t *)(param_1[0x30] + 0x18) = 0;
  *(int32_t *)param_1[0x31] = 0;
  *(int32_t *)(param_1[0x31] + 8) = 0x403fffec;
  *(int32_t *)(param_1[0x31] + 0x10) = 0;
  *(int32_t *)(param_1[0x31] + 0x18) = 0;
  *(int32_t *)param_1[0x32] = 0x3aebd792;
  *(int32_t *)(param_1[0x32] + 4) = 0x3b0989fc;
  *(int32_t *)(param_1[0x32] + 8) = 0x3b6d57c6;
  *(int32_t *)(param_1[0x32] + 0xc) = 0x3878c07c;
  *(int32_t *)(param_1[0x32] + 0x10) = 0x39504f55;
  *(int32_t *)(param_1[0x32] + 0x14) = 0x39a89792;
  *(int32_t *)(param_1[0x32] + 0x18) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x32] + 0x1c) = 0x411fffef;
  *(int32_t *)param_1[0x33] = 0x3f19998a;
  *(int32_t *)(param_1[0x33] + 4) = 0x3f66664e;
  *(int32_t *)(param_1[0x33] + 8) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x33] + 0xc) = 0x3fb33320;
  *(int32_t *)(param_1[0x33] + 0x10) = 0x3dccd068;
  *(int32_t *)(param_1[0x33] + 0x14) = 0x423fffec;
  *(int32_t *)(param_1[0x33] + 0x18) = 10;
  *(int32_t *)(param_1[0x33] + 0x1c) = 0x3f7fffe5;
  *(int32_t *)param_1[0x34] = 0x3f7fffe5;
  *(int32_t *)(param_1[0x34] + 4) = 0x3f400034;
  *(int32_t *)(param_1[0x34] + 8) = 0x41399986;
  *(int32_t *)(param_1[0x34] + 0xc) = 0x40bfffec;
  *(int32_t *)(param_1[0x34] + 0x10) = 0x409fffef;
  *(int32_t *)(param_1[0x34] + 0x14) = 0x4347ffeb;
  *(int32_t *)(param_1[0x34] + 0x18) = 0x4347ffeb;
  *(int32_t *)(param_1[0x34] + 0x1c) = 0x2f25ffab;
  *(int32_t *)param_1[0x35] = 0x43aeffee;
  *(int32_t *)(param_1[0x35] + 4) = 0x3e028272;
  *(int32_t *)(param_1[0x35] + 8) = 0x3e028272;
  *(int32_t *)(param_1[0x35] + 0xc) = 0x3e028272;
  *(int32_t *)(param_1[0x35] + 0x1c) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x35] + 0x10) = 0x3e0c8c7d;
  *(int32_t *)(param_1[0x35] + 0x14) = 0x3de77dfb;
  *(int32_t *)(param_1[0x35] + 0x18) = 0x3dbb65fb;
  *(int32_t *)(param_1[0x36] + 4) = 0;
  *(int32_t *)(param_1[0x36] + 0xc) = 0;
  *(int32_t *)(param_1[0x36] + 0x10) = 0x419fffef;
  *(int32_t *)(param_1[0x36] + 0x18) = 0x3f7fffa4;
  *(int32_t *)(param_1[0x36] + 0x1c) = 0x402c28e4;
  *(int32_t *)param_1[0x37] = 0x3f7fffe5;
  *(int32_t *)(param_1[0x37] + 4) = 0x419fffef;
  *(int32_t *)(param_1[0x37] + 0xc) = 0x3f4cccb7;
  *(int32_t *)(param_1[0x37] + 0x10) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x37] + 0x14) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x37] + 0x18) = 0x3ca3d6f9;
  *(int32_t *)(param_1[0x37] + 0x1c) = 0x3f3fffec;
  *(int32_t *)param_1[0x38] = 0x3f266654;
  *(int32_t *)(param_1[0x38] + 4) = 0x3effffe5;
  *(int32_t *)(param_1[0x38] + 8) = 0x43c7ffeb;
  *(int32_t *)(param_1[0x38] + 0xc) = 0x44bb7fec;
  *(int32_t *)(param_1[0x38] + 0x10) = 0x459c3ff0;
  *(int32_t *)(param_1[0x38] + 0x14) = 0x44b3ffed;
  *(int32_t *)(param_1[0x38] + 0x18) = 0x41efffe7;
  *(int32_t *)(param_1[0x38] + 0x1c) = 0x3f7fffe5;
  *(int32_t *)param_1[0x39] = 0x3f7fffe5;
  *(int32_t *)(param_1[0x39] + 4) = 0x4247ffeb;
  *(int32_t *)(param_1[0x39] + 8) = 0x411fffef;
  *(int32_t *)(param_1[0x39] + 0xc) = 0x4347ffeb;
  *(int32_t *)(param_1[0x39] + 0x14) = 0x2643ff9c;
  *(int32_t *)(param_1[0x39] + 0x1c) = 0;
  *(int32_t *)(param_1[0x3a] + 4) = 0;
  *(int32_t *)(param_1[0x3a] + 0xc) = 0;
  *(int32_t *)(param_1[0x3a] + 0x14) = 0x403fffec;
  *(int32_t *)(param_1[0x3a] + 0x1c) = 0;
  *(int32_t *)(param_1[0x3b] + 4) = 0;
  *(int32_t *)(param_1[0x3b] + 0xc) = 0x3aebd8e6;
  *(int32_t *)(param_1[0x3b] + 0x10) = 0x3b098aaa;
  *(int32_t *)(param_1[0x3b] + 0x14) = 0x3b6d588c;
  *(int32_t *)(param_1[0x3b] + 0x18) = 0x3878c07c;
  *(int32_t *)(param_1[0x3b] + 0x1c) = 0x39504f55;
  *(int32_t *)param_1[0x3c] = 0x39a89792;
  *(int32_t *)(param_1[0x3c] + 4) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x3c] + 8) = 0x411fffef;
  *(int32_t *)(param_1[0x3c] + 0xc) = 0x3f19998a;
  *(int32_t *)(param_1[0x3c] + 0x10) = 0x3f66664e;
  *(int32_t *)(param_1[0x3c] + 0x14) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x3c] + 0x18) = 0x3fb33320;
  *(int32_t *)(param_1[0x3c] + 0x1c) = 0x3dccd068;
  *(int32_t *)param_1[0x3d] = 0x423fffec;
  *(int32_t *)(param_1[0x3d] + 4) = 10;
  *(int32_t *)(param_1[0x3d] + 8) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x3d] + 0xc) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x3d] + 0x10) = 0x3f400090;
  *(int32_t *)(param_1[0x3d] + 0x14) = 0x41399986;
  *(int32_t *)(param_1[0x3d] + 0x18) = 0x40bfffec;
  *(int32_t *)(param_1[0x3d] + 0x1c) = 0x409fffef;
  *(int32_t *)param_1[0x3e] = 0x4347ffeb;
  *(int32_t *)(param_1[0x3e] + 4) = 0x4347ffeb;
  *(int32_t *)(param_1[0x3e] + 8) = 0x2f25ffab;
  *(int32_t *)(param_1[0x3e] + 0xc) = 0x43aeffee;
  *(int32_t *)(param_1[0x3e] + 0x10) = 0x3e028272;
  *(int32_t *)(param_1[0x3e] + 0x14) = 0x3e028272;
  *(int32_t *)(param_1[0x3e] + 0x18) = 0x3e028272;
  *(int32_t *)(param_1[0x3f] + 8) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x3e] + 0x1c) = 0x3e0c8c7d;
  *(int32_t *)param_1[0x3f] = 0x3de77dfb;
  *(int32_t *)(param_1[0x3f] + 4) = 0x3dbb65fb;
  *(int32_t *)(param_1[0x3f] + 0x10) = 0;
  *(int32_t *)(param_1[0x3f] + 0x18) = 0;
  *(int32_t *)(param_1[0x3f] + 0x1c) = 0x419fffef;
  *(int32_t *)(param_1[0x40] + 4) = 0x3f7fffa4;
  *(int32_t *)(param_1[0x40] + 8) = 0x402c28e4;
  *(int32_t *)(param_1[0x40] + 0xc) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x40] + 0x10) = 0x419fffef;
  *(int32_t *)(param_1[0x40] + 0x18) = 0x3f4ccc90;
  *(int32_t *)(param_1[0x40] + 0x1c) = 0x3f7fffe5;
  *(int32_t *)param_1[0x41] = 0x3f7fffe5;
  *(int32_t *)(param_1[0x41] + 4) = 0x3ca3d6f9;
  *(int32_t *)(param_1[0x41] + 8) = 0x3f3fffec;
  *(int32_t *)(param_1[0x41] + 0xc) = 0x3f266654;
  *(int32_t *)(param_1[0x41] + 0x10) = 0x3effffe5;
  *(int32_t *)(param_1[0x41] + 0x14) = 0x43c7ffeb;
  *(int32_t *)(param_1[0x41] + 0x18) = 0x44bb7fec;
  *(int32_t *)(param_1[0x41] + 0x1c) = 0x459c3ff0;
  *(int32_t *)param_1[0x42] = 0x44b3ffed;
  *(int32_t *)(param_1[0x42] + 4) = 0x41efffe7;
  *(int32_t *)(param_1[0x42] + 8) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x42] + 0xc) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x42] + 0x10) = 0x420bfff1;
  *(int32_t *)(param_1[0x42] + 0x14) = 0x411fffef;
  *(int32_t *)(param_1[0x42] + 0x18) = 0x4347ffeb;
  *(int32_t *)param_1[0x43] = 0x2643ff9c;
  *(int32_t *)(param_1[0x43] + 8) = 0;
  *(int32_t *)(param_1[0x43] + 0x10) = 0;
  *(int32_t *)(param_1[0x43] + 0x18) = 0;
  *(int32_t *)param_1[0x44] = 0x403fffec;
  *(int32_t *)(param_1[0x44] + 8) = 0;
  *(int32_t *)(param_1[0x44] + 0x10) = 0;
  *(int32_t *)(param_1[0x44] + 0x18) = 0;
  *(int32_t *)param_1[0x45] = 0;
  *(int32_t *)(param_1[0x45] + 4) = 0x3cf0f057;
  *(int32_t *)(param_1[0x45] + 8) = 0x3d4d81bf;
  *(int32_t *)(param_1[0x45] + 0xc) = 0x3db4b450;
  *(int32_t *)(param_1[0x45] + 0x10) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x45] + 0x14) = 0x403fffec;
  *(int32_t *)(param_1[0x45] + 0x18) = 0x40ffffe5;
  *(int32_t *)(param_1[0x45] + 0x1c) = 0x3f66664e;
  *(int32_t *)param_1[0x46] = 0x3f7fffe5;
  *(int32_t *)(param_1[0x46] + 4) = 0x3f8cccbe;
  *(int32_t *)(param_1[0x46] + 8) = 0x3dccd068;
  *(int32_t *)(param_1[0x46] + 0xc) = 0x42dbffe9;
  *(int32_t *)(param_1[0x46] + 0x10) = 0x10;
  *(int32_t *)(param_1[0x46] + 0x14) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x46] + 0x18) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x46] + 0x1c) = 0x3fccccb7;
  *(int32_t *)param_1[0x47] = 0x289bffb0;
  *(int32_t *)(param_1[0x47] + 4) = 0x40bfffec;
  *(int32_t *)(param_1[0x47] + 8) = 0x409fffef;
  *(int32_t *)(param_1[0x47] + 0xc) = 0x4347ffeb;
  *(int32_t *)(param_1[0x47] + 0x10) = 0x4347ffeb;
  *(int32_t *)(param_1[0x47] + 0x18) = 0x43aeffee;
  *(int32_t *)(param_1[0x47] + 0x1c) = 0x3de01c3e;
  *(int32_t *)param_1[0x48] = 0x3e094657;
  *(int32_t *)(param_1[0x48] + 4) = 0x3e25a593;
  *(int32_t *)(param_1[0x48] + 0x14) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x48] + 8) = 0x3d70f0c7;
  *(int32_t *)(param_1[0x48] + 0xc) = 0x3d70f0c7;
  *(int32_t *)(param_1[0x48] + 0x10) = 0x3d70f0c7;
  *(int32_t *)(param_1[0x48] + 0x1c) = 0x3cf5c275;
  *(int32_t *)(param_1[0x49] + 4) = 0;
  *(int32_t *)(param_1[0x49] + 8) = 0x419fffef;
  *(int32_t *)(param_1[0x49] + 0x10) = 0x3e7fffe5;
  *(int32_t *)(param_1[0x49] + 0x14) = 0x3f266654;
  *(int32_t *)(param_1[0x49] + 0x18) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x49] + 0x1c) = 0x419fffef;
  *(int32_t *)(param_1[0x4a] + 4) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x4a] + 8) = 0x3fffffe5;
  *(int32_t *)(param_1[0x4a] + 0xc) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x4a] + 0x10) = 0x409fffef;
  *(int32_t *)(param_1[0x4a] + 0x14) = 0x3f3fffec;
  *(int32_t *)(param_1[0x4a] + 0x18) = 0x3f266654;
  *(int32_t *)(param_1[0x4a] + 0x1c) = 0x401fffbe;
  *(int32_t *)param_1[0x4b] = 0x4347ffeb;
  *(int32_t *)(param_1[0x4b] + 4) = 0x44ed7fe7;
  *(int32_t *)(param_1[0x4b] + 8) = 0x459c3ff0;
  *(int32_t *)(param_1[0x4b] + 0xc) = 0x44b3ffed;
  *(int32_t *)(param_1[0x4b] + 0x10) = 0x41efffe8;
  *(int32_t *)(param_1[0x4b] + 0x14) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x4b] + 0x18) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x4b] + 0x1c) = 0x4247ffeb;
  *(int32_t *)param_1[0x4c] = 0x4395fff0;
  *(int32_t *)(param_1[0x4c] + 4) = 0x43f9ffe6;
  *(int32_t *)(param_1[0x4c] + 8) = 0x3f333320;
  *(int32_t *)(param_1[0x4c] + 0xc) = 0x2643ff9c;
  *(int32_t *)(param_1[0x4c] + 0x14) = 0;
  *(int32_t *)(param_1[0x4c] + 0x1c) = 0;
  *(int32_t *)(param_1[0x4d] + 4) = 0;
  *(int32_t *)(param_1[0x4d] + 0xc) = 0x403fffec;
  *(int32_t *)(param_1[0x4d] + 0x14) = 0x3975ff82;
  *(int32_t *)(param_1[0x4d] + 0x18) = 0x369dffaf;
  *(int32_t *)(param_1[0x4d] + 0x1c) = 0x3702ffbd;
  *(int32_t *)param_1[0x4e] = 0xaf05ffbb;
  *(int32_t *)(param_1[0x4e] + 4) = 0x3f0504db;
  *(int32_t *)(param_1[0x4e] + 8) = 0x3e7fc8f4;
  *(int32_t *)(param_1[0x4e] + 0xc) = 0x3e463971;
  *(int32_t *)(param_1[0x4e] + 0x10) = 0x3d40c0d4;
  *(int32_t *)(param_1[0x4e] + 0x14) = 0x3d30b0ca;
  *(int32_t *)(param_1[0x4e] + 0x18) = 0x3dd8d8ab;
  *(int32_t *)(param_1[0x4e] + 0x1c) = 0x3f7fffe5;
  *(int32_t *)param_1[0x4f] = 0x403fffec;
  *(int32_t *)(param_1[0x4f] + 4) = 0x40ffffe5;
  *(int32_t *)(param_1[0x4f] + 8) = 0x3f66664e;
  *(int32_t *)(param_1[0x4f] + 0xc) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x4f] + 0x10) = 0x3f8cccbe;
  *(int32_t *)(param_1[0x4f] + 0x14) = 0x3dccd068;
  *(int32_t *)(param_1[0x4f] + 0x18) = 0x42dc0178;
  *(int32_t *)(param_1[0x4f] + 0x1c) = 7;
  *(int32_t *)param_1[0x50] = 0x3f7fffe5;
  *(int32_t *)(param_1[0x50] + 4) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x50] + 8) = 0x3fa666c3;
  *(int32_t *)(param_1[0x50] + 0xc) = 0x412fffdc;
  *(int32_t *)(param_1[0x50] + 0x10) = 0x40bfffec;
  *(int32_t *)(param_1[0x50] + 0x14) = 0x409fffef;
  *(int32_t *)(param_1[0x50] + 0x18) = 0x4347ffeb;
  *(int32_t *)(param_1[0x50] + 0x1c) = 0x4347ffeb;
  *(int32_t *)(param_1[0x51] + 4) = 0x43aeffee;
  *(int32_t *)(param_1[0x51] + 8) = 0x3d712338;
  *(int32_t *)(param_1[0x51] + 0xc) = 0x3de8be1d;
  *(int32_t *)(param_1[0x51] + 0x10) = 0x3e7afade;
  *(int32_t *)param_1[0x52] = 0x3702ffbd;
  *(int32_t *)(param_1[0x51] + 0x14) = 0x3e08887b;
  *(int32_t *)(param_1[0x51] + 0x18) = 0x3dc0c0ae;
  *(int32_t *)(param_1[0x51] + 0x1c) = 0x3da8a897;
  *(int32_t *)(param_1[0x52] + 8) = 0x3cf5c275;
  *(int32_t *)(param_1[0x52] + 0x10) = 0;
  *(int32_t *)(param_1[0x52] + 0x14) = 0x419fffef;
  *(int32_t *)(param_1[0x52] + 0x18) = 0x3651ff95;
  *(int32_t *)(param_1[0x52] + 0x1c) = 0x3dccccb7;
  *(int32_t *)param_1[0x53] = 0x3f266654;
  *(int32_t *)(param_1[0x53] + 4) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x53] + 8) = 0x419fffef;
  *(int32_t *)(param_1[0x53] + 0xc) = 0x35d1ff95;
  *(int32_t *)(param_1[0x53] + 0x10) = 0x3e4ccccd;
  *(int32_t *)(param_1[0x53] + 0x14) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x53] + 0x18) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x53] + 0x1c) = 0x409fffef;
  *(int32_t *)param_1[0x54] = 0x3f3fffec;
  *(int32_t *)(param_1[0x54] + 4) = 0x3f266654;
  *(int32_t *)(param_1[0x54] + 8) = 0x3fbfffb4;
  *(int32_t *)(param_1[0x54] + 0xc) = 0x4381fff2;
  *(int32_t *)(param_1[0x54] + 0x10) = 0x44bb7fec;
  *(int32_t *)(param_1[0x54] + 0x14) = 0x459c3ff0;
  *(int32_t *)(param_1[0x54] + 0x18) = 0x44b3ffed;
  *(int32_t *)(param_1[0x54] + 0x1c) = 0x41efffe8;
  *(int32_t *)param_1[0x55] = 0x3f7fffe5;
  *(int32_t *)(param_1[0x55] + 4) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x55] + 8) = 0x411fffc6;
  *(int32_t *)(param_1[0x55] + 0xc) = 0x4315ffd6;
  *(int32_t *)(param_1[0x55] + 0x10) = 0x4395ffbd;
  *(int32_t *)(param_1[0x55] + 0x14) = 0x3f333320;
  *(int32_t *)param_1[0x56] = 0;
  *(int32_t *)(param_1[0x56] + 4) = 0x304dff97;
  *(int32_t *)(param_1[0x56] + 0xc) = 0;
  *(int32_t *)(param_1[0x56] + 0x14) = 0;
  *(int32_t *)(param_1[0x56] + 0x18) = 0x403fffcb;
  *(int32_t *)param_1[0x57] = 0x3975ff82;
  *(int32_t *)(param_1[0x57] + 4) = 0x369dffaf;
  *(int32_t *)(param_1[0x57] + 8) = 0x3702ffbd;
  *(int32_t *)(param_1[0x57] + 0xc) = 0xb4d1ff95;
  *(int32_t *)(param_1[0x57] + 0x10) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x57] + 0x14) = 0x3f25893c;
  *(int32_t *)(param_1[0x57] + 0x18) = 0x3ebc3c28;
  *(int32_t *)(param_1[0x57] + 0x1c) = 0x3df0a53c;
  *(int32_t *)param_1[0x58] = 0x3e0ccbd8;
  *(int32_t *)(param_1[0x58] + 4) = 0x3e169684;
  *(int32_t *)(param_1[0x58] + 8) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x58] + 0xc) = 0x40800024;
  *(int32_t *)(param_1[0x58] + 0x10) = 0x2743ff9c;
  *(int32_t *)(param_1[0x58] + 0x14) = 0x3eccccb7;
  *(int32_t *)(param_1[0x58] + 0x18) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x58] + 0x1c) = 0x3f99998a;
  *(int32_t *)param_1[0x59] = 0x3d4cd470;
  *(int32_t *)(param_1[0x59] + 4) = 0x426fff63;
  *(int32_t *)(param_1[0x59] + 8) = 10;
  *(int32_t *)(param_1[0x59] + 0xc) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x59] + 0x10) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x59] + 0x14) = 0x3fccccf8;
  *(int32_t *)(param_1[0x59] + 0x18) = 0x410ffff1;
  *(int32_t *)(param_1[0x59] + 0x1c) = 0x40bfffec;
  *(int32_t *)param_1[0x5a] = 0x40bfffec;
  *(int32_t *)(param_1[0x5a] + 4) = 0x4347ffeb;
  *(int32_t *)(param_1[0x5a] + 8) = 0x4347ffeb;
  *(int32_t *)(param_1[0x5a] + 0xc) = 0x2f25ffab;
  *(int32_t *)(param_1[0x5a] + 0x10) = 0x43aeffee;
  *(int32_t *)(param_1[0x5a] + 0x14) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x5a] + 0x18) = 0x3ed2d2be;
  *(int32_t *)(param_1[0x5a] + 0x1c) = 0x26e7ff89;
  *(int32_t *)(param_1[0x5b] + 0xc) = 0x3f19998a;
  *(int32_t *)param_1[0x5b] = 0x3ecc9f5b;
  *(int32_t *)(param_1[0x5b] + 4) = 0x3f091570;
  *(int32_t *)(param_1[0x5b] + 8) = 0x3f41412d;
  *(int32_t *)(param_1[0x5b] + 0x14) = 0x3cf5c275;
  *(int32_t *)(param_1[0x5b] + 0x1c) = 0;
  *(int32_t *)param_1[0x5c] = 0x419fffef;
  *(int32_t *)(param_1[0x5c] + 8) = 0x3dcccccd;
  *(int32_t *)(param_1[0x5c] + 0xc) = 0x3f266666;
  *(int32_t *)(param_1[0x5c] + 0x10) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x5c] + 0x14) = 0x419fffef;
  *(int32_t *)(param_1[0x5c] + 0x1c) = 0x3f800000;
  *(int32_t *)param_1[0x5d] = 0x3f80005e;
  *(int32_t *)(param_1[0x5d] + 4) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x5d] + 8) = 0x3ca3d6a5;
  *(int32_t *)(param_1[0x5d] + 0xc) = 0x3f3fffec;
  *(int32_t *)(param_1[0x5d] + 0x10) = 0x3f266654;
  *(int32_t *)(param_1[0x5d] + 0x14) = 0x401fffef;
  *(int32_t *)(param_1[0x5d] + 0x18) = 0x4381fff2;
  *(int32_t *)(param_1[0x5d] + 0x1c) = 0x44bb7fec;
  *(int32_t *)param_1[0x5e] = 0x459c3ff0;
  *(int32_t *)(param_1[0x5e] + 4) = 0x44b3ffed;
  *(int32_t *)(param_1[0x5e] + 8) = 0x41efffe7;
  *(int32_t *)(param_1[0x5e] + 0xc) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x5e] + 0x10) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x5e] + 0x14) = 0x411fffef;
  *(int32_t *)(param_1[0x5e] + 0x18) = 0x4347ffb8;
  *(int32_t *)(param_1[0x5e] + 0x1c) = 0x4360ffdb;
  *(int32_t *)param_1[0x5f] = 0x3682ffbd;
  *(int32_t *)(param_1[0x5f] + 0xc) = 0;
  *(int32_t *)(param_1[0x5f] + 0x10) = 0x27edff86;
  *(int32_t *)(param_1[0x5f] + 0x14) = 0x27f3ff83;
  *(int32_t *)(param_1[0x5f] + 0x18) = 0x25c5ff9b;
  *(int32_t *)(param_1[0x5f] + 0x1c) = 0x25c3ff9c;
  *(int32_t *)param_1[0x60] = 0x25c3ff9c;
  *(int32_t *)(param_1[0x60] + 4) = 0x403fffec;
  *(int32_t *)(param_1[0x60] + 8) = 0xac67ff89;
  *(int32_t *)(param_1[0x60] + 0xc) = 0x3a4bff98;
  *(int32_t *)(param_1[0x60] + 0x10) = 0x2e27ffaa;
  *(int32_t *)(param_1[0x60] + 0x14) = 0x3607ffba;
  *(int32_t *)(param_1[0x60] + 0x18) = 0xb5d1ff95;
  *(int32_t *)(param_1[0x60] + 0x1c) = 0x3f7fffe5;
  *(int32_t *)param_1[0x61] = 0x3f4517d7;
  *(int32_t *)(param_1[0x61] + 4) = 0x3ee1e1ca;
  *(int32_t *)(param_1[0x61] + 8) = 0x3e0e1fa0;
  *(int32_t *)(param_1[0x61] + 0xc) = 0x3e1c6c85;
  *(int32_t *)(param_1[0x61] + 0x10) = 0x3e3ebea8;
  *(int32_t *)(param_1[0x61] + 0x14) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x61] + 0x18) = 0x40dfffe8;
  *(int32_t *)(param_1[0x61] + 0x1c) = 0x3f19998a;
  *(int32_t *)param_1[0x62] = 0x3f19998a;
  *(int32_t *)(param_1[0x62] + 4) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x62] + 8) = 0x3fb33320;
  *(int32_t *)(param_1[0x62] + 0xc) = 0x3dccd068;
  *(int32_t *)(param_1[0x62] + 0x10) = 0x426fff63;
  *(int32_t *)(param_1[0x62] + 0x14) = 10;
  *(int32_t *)(param_1[0x62] + 0x18) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x62] + 0x1c) = 0x3f7fffe5;
  *(int32_t *)param_1[99] = 0x40266654;
  *(int32_t *)(param_1[99] + 4) = 0x4107fff2;
  *(int32_t *)(param_1[99] + 8) = 0x40bfffec;
  *(int32_t *)(param_1[99] + 0xc) = 0x409fffef;
  *(int32_t *)(param_1[99] + 0x10) = 0x4347ffeb;
  *(int32_t *)(param_1[99] + 0x14) = 0x4347ffeb;
  *(int32_t *)(param_1[99] + 0x18) = 0x2f25ffab;
  *(int32_t *)(param_1[99] + 0x1c) = 0x43aeffee;
  *(int32_t *)param_1[100] = 0x3f7fffe5;
  *(int32_t *)(param_1[100] + 4) = 0x3f63524a;
  *(int32_t *)(param_1[100] + 8) = 0x3ee9694f;
  *(int32_t *)(param_1[100] + 0x18) = 0x3f7fffe5;
  *(int32_t *)(param_1[100] + 0xc) = 0x3f014133;
  *(int32_t *)(param_1[100] + 0x10) = 0x3f35719a;
  *(int32_t *)(param_1[100] + 0x14) = 0x3f7fffe5;
  *(int32_t *)param_1[0x65] = 0;
  *(int32_t *)(param_1[0x65] + 8) = 0;
  *(int32_t *)(param_1[0x65] + 0xc) = 0x419fffef;
  *(int32_t *)(param_1[0x65] + 0x10) = 0x2fd5ff92;
  *(int32_t *)(param_1[0x65] + 0x14) = 0x3fffff83;
  *(int32_t *)(param_1[0x65] + 0x18) = 0x3fa66654;
  *(int32_t *)(param_1[0x65] + 0x1c) = 0x3f7fffe5;
  *(int32_t *)param_1[0x66] = 0x419fffef;
  *(int32_t *)(param_1[0x66] + 4) = 0x2fd1ff95;
  *(int32_t *)(param_1[0x66] + 8) = 0x3f599955;
  *(int32_t *)(param_1[0x66] + 0xc) = 0x3f80005e;
  *(int32_t *)(param_1[0x66] + 0x10) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x66] + 0x14) = 0x3ca3d6f9;
  *(int32_t *)(param_1[0x66] + 0x18) = 0x3f3fffec;
  *(int32_t *)(param_1[0x66] + 0x1c) = 0x3f266654;
  *(int32_t *)param_1[0x67] = 0x400ccc96;
  *(int32_t *)(param_1[0x67] + 4) = 0x4374ffe6;
  *(int32_t *)(param_1[0x67] + 8) = 0x44897ff1;
  *(int32_t *)(param_1[0x67] + 0xc) = 0x459c3ff0;
  *(int32_t *)(param_1[0x67] + 0x10) = 0x44b3ffed;
  *(int32_t *)(param_1[0x67] + 0x14) = 0x41efffe7;
  *(int32_t *)(param_1[0x67] + 0x18) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x67] + 0x1c) = 0x3f7fffe5;
  *(int32_t *)param_1[0x68] = 0x411fffef;
  *(int32_t *)(param_1[0x68] + 4) = 0x4347ffb8;
  *(int32_t *)(param_1[0x68] + 8) = 0x4379ffcc;
  *(int32_t *)(param_1[0x68] + 0xc) = 0x3682ffbd;
  *(int32_t *)(param_1[0x68] + 0x18) = 0;
  *(int32_t *)param_1[0x69] = 0x27f3ff83;
  *(int32_t *)(param_1[0x69] + 4) = 0x274dff97;
  *(int32_t *)(param_1[0x69] + 8) = 0x2733ffa4;
  *(int32_t *)(param_1[0x69] + 0xc) = 0x2717ffb2;
  *(int32_t *)(param_1[0x69] + 0x10) = 0x403fffec;
  *(int32_t *)(param_1[0x69] + 0x18) = 0x3a4bff98;
  *(int32_t *)(param_1[0x69] + 0x1c) = 0x2f0bffb8;
  *(int32_t *)param_1[0x6a] = 0x3607ffba;
  *(int32_t *)(param_1[0x6a] + 4) = 0xb5d1ff95;
  *(int32_t *)(param_1[0x6a] + 8) = 0x3f7afae1;
  *(int32_t *)(param_1[0x6a] + 0xc) = 0x3f58bfb5;
  *(int32_t *)(param_1[0x6a] + 0x10) = 0x3f112cb9;
  *(int32_t *)(param_1[0x6a] + 0x14) = 0x3e09016c;
  *(int32_t *)(param_1[0x6a] + 0x18) = 0x3e39ea8f;
  *(int32_t *)(param_1[0x6a] + 0x1c) = 0x3e70f0d7;
  *(int32_t *)param_1[0x6b] = 0x3f7fffe5;
  *(int32_t *)(param_1[0x6b] + 4) = 0x40e00019;
  *(int32_t *)(param_1[0x6b] + 8) = 0x3effffe5;
  *(int32_t *)(param_1[0x6b] + 0xc) = 0x3f4cccb7;
  *(int32_t *)(param_1[0x6b] + 0x10) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x6b] + 0x14) = 0x3fb33320;
  *(int32_t *)(param_1[0x6b] + 0x18) = 0x3dccd068;
  *(int32_t *)(param_1[0x6b] + 0x1c) = 0x426fff6d;
  *(int32_t *)param_1[0x6c] = 10;
  *(int32_t *)(param_1[0x6c] + 4) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x6c] + 8) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x6c] + 0xc) = 0x40266654;
  *(int32_t *)(param_1[0x6c] + 0x10) = 0x40ffffe5;
  *(int32_t *)(param_1[0x6c] + 0x14) = 0x40bfffec;
  *(int32_t *)(param_1[0x6c] + 0x18) = 0x409fffef;
  *(int32_t *)(param_1[0x6c] + 0x1c) = 0x4347ffeb;
  *(int32_t *)param_1[0x6d] = 0x4347ffeb;
  *(int32_t *)(param_1[0x6d] + 4) = 0x2f25ffab;
  *(int32_t *)(param_1[0x6d] + 8) = 0x43aeffee;
  *(int32_t *)(param_1[0x6d] + 0xc) = 0x3f7ebea4;
  *(int32_t *)(param_1[0x6d] + 0x10) = 0x3f6f22a6;
  *(int32_t *)(param_1[0x6d] + 0x14) = 0x3f1499df;
  *(int32_t *)(param_1[0x6e] + 4) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x6d] + 0x18) = 0x3ebc3c28;
  *(int32_t *)(param_1[0x6d] + 0x1c) = 0x3f20c65a;
  *(int32_t *)param_1[0x6e] = 0x3f7fffe5;
  *(int32_t *)(param_1[0x6e] + 0xc) = 0;
  *(int32_t *)(param_1[0x6e] + 0x14) = 0;
  *(int32_t *)(param_1[0x6e] + 0x18) = 0x419fffef;
  *(int32_t *)(param_1[0x6e] + 0x1c) = 0x1691ffb5;
  *(int32_t *)param_1[0x6f] = 0x3fd99934;
  *(int32_t *)(param_1[0x6f] + 4) = 0x3fa66654;
  *(int32_t *)(param_1[0x6f] + 8) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x6f] + 0xc) = 0x419fffef;
  *(int32_t *)(param_1[0x6f] + 0x14) = 0x3f599955;
  *(int32_t *)(param_1[0x6f] + 0x18) = 0x3f80005e;
  *(int32_t *)(param_1[0x6f] + 0x1c) = 0x3f7fffe5;
  *(int32_t *)param_1[0x70] = 0x3ca3d6f9;
  *(int32_t *)(param_1[0x70] + 4) = 0x3f3fffec;
  *(int32_t *)(param_1[0x70] + 8) = 0x3f266654;
  *(int32_t *)(param_1[0x70] + 0xc) = 0x400ccc96;
  *(int32_t *)(param_1[0x70] + 0x10) = 0x4374ffe6;
  *(int32_t *)(param_1[0x70] + 0x14) = 0x44897ff1;
  *(int32_t *)(param_1[0x70] + 0x18) = 0x459c3ff0;
  *(int32_t *)(param_1[0x70] + 0x1c) = 0x44b3ffed;
  *(int32_t *)param_1[0x71] = 0x41efffe7;
  *(int32_t *)(param_1[0x71] + 4) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x71] + 8) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x71] + 0xc) = 0x411fffef;
  *(int32_t *)(param_1[0x71] + 0x10) = 0x4347ffb8;
  *(int32_t *)(param_1[0x71] + 0x14) = 0x43847fc8;
  *(int32_t *)(param_1[0x71] + 0x18) = 0x3682ffbd;
  *(int32_t *)(param_1[0x72] + 4) = 0;
  *(int32_t *)(param_1[0x72] + 0xc) = 0x27f3ff83;
  *(int32_t *)(param_1[0x72] + 0x10) = 0x2780ffbe;
  *(int32_t *)(param_1[0x72] + 0x14) = 0x276bff87;
  *(int32_t *)(param_1[0x72] + 0x18) = 0x2745ff9b;
  *(int32_t *)(param_1[0x72] + 0x1c) = 0x403fffec;
  *(int32_t *)(param_1[0x73] + 4) = 0x3a4bff98;
  *(int32_t *)(param_1[0x73] + 0xc) = 0x3607ffba;
  *(int32_t *)(param_1[0x73] + 0x10) = 0xb5d1ff95;
  *(int32_t *)(param_1[0x73] + 0x14) = 0x3f7c3c21;
  *(int32_t *)(param_1[0x73] + 0x18) = 0x3f629c6c;
  *(int32_t *)(param_1[0x73] + 0x1c) = 0x3f2d1a36;
  *(int32_t *)param_1[0x74] = 0x3e075514;
  *(int32_t *)(param_1[0x74] + 4) = 0x3e423fca;
  *(int32_t *)(param_1[0x74] + 8) = 0x3e8a09fb;
  *(int32_t *)(param_1[0x74] + 0xc) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x74] + 0x10) = 0x411fffd6;
  *(int32_t *)(param_1[0x74] + 0x14) = 0x3eccccb7;
  *(int32_t *)(param_1[0x74] + 0x18) = 0x3f66664e;
  *(int32_t *)(param_1[0x74] + 0x1c) = 0x3f7fffe5;
  *(int32_t *)param_1[0x75] = 0x3fb33320;
  *(int32_t *)(param_1[0x75] + 4) = 0x3dccd068;
  *(int32_t *)(param_1[0x75] + 8) = 0x426fff63;
  *(int32_t *)(param_1[0x75] + 0xc) = 10;
  *(int32_t *)(param_1[0x75] + 0x10) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x75] + 0x14) = 0x3f800134;
  *(int32_t *)(param_1[0x75] + 0x18) = 0x40266654;
  *(int32_t *)(param_1[0x75] + 0x1c) = 0x40ffff44;
  *(int32_t *)param_1[0x76] = 0x40bfffec;
  *(int32_t *)(param_1[0x76] + 4) = 0x409fff19;
  *(int32_t *)(param_1[0x76] + 8) = 0x4347ffeb;
  *(int32_t *)(param_1[0x76] + 0xc) = 0x4347ffeb;
  *(int32_t *)(param_1[0x76] + 0x10) = 0x2f25ffab;
  *(int32_t *)(param_1[0x76] + 0x14) = 0x43aeffee;
  *(int32_t *)(param_1[0x76] + 0x18) = 0x3f7ebea4;
  *(int32_t *)(param_1[0x76] + 0x1c) = 0x3f730eec;
  *(int32_t *)param_1[0x77] = 0x3f315281;
  *(int32_t *)(param_1[0x77] + 0x10) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x77] + 4) = 0x3ea0a08f;
  *(int32_t *)(param_1[0x77] + 8) = 0x3f092735;
  *(int32_t *)(param_1[0x77] + 0xc) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x77] + 0x18) = 0;
  *(int32_t *)param_1[0x78] = 0;
  *(int32_t *)(param_1[0x78] + 4) = 0x419fffef;
  *(int32_t *)(param_1[0x78] + 8) = 0x1691ffb5;
  *(int32_t *)(param_1[0x78] + 0xc) = 0x3fd99934;
  *(int32_t *)(param_1[0x78] + 0x10) = 0x3fa66654;
  *(int32_t *)(param_1[0x78] + 0x14) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x78] + 0x18) = 0x419fffef;
  *(int32_t *)param_1[0x79] = 0x3f599955;
  *(int32_t *)(param_1[0x79] + 4) = 0x3f80005e;
  *(int32_t *)(param_1[0x79] + 8) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x79] + 0xc) = 0x3ca3d6f9;
  *(int32_t *)(param_1[0x79] + 0x10) = 0x3f3fffec;
  *(int32_t *)(param_1[0x79] + 0x14) = 0x3f266654;
  *(int32_t *)(param_1[0x79] + 0x18) = 0x400ccc96;
  *(int32_t *)(param_1[0x79] + 0x1c) = 0x4374ffe6;
  *(int32_t *)param_1[0x7a] = 0x44897ff1;
  *(int32_t *)(param_1[0x7a] + 4) = 0x459c3ff0;
  *(int32_t *)(param_1[0x7a] + 8) = 0x44b3ffed;
  *(int32_t *)(param_1[0x7a] + 0xc) = 0x41efffe7;
  *(int32_t *)(param_1[0x7a] + 0x10) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x7a] + 0x14) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x7a] + 0x18) = 0x411fffef;
  *(int32_t *)(param_1[0x7a] + 0x1c) = 0x432effc8;
  *(int32_t *)param_1[0x7b] = 0x4360ffa8;
  *(int32_t *)(param_1[0x7b] + 4) = 0x3682ffbd;
  *(int32_t *)(param_1[0x7b] + 0x10) = 0;
  *(int32_t *)(param_1[0x7b] + 0x18) = 0x2779ff80;
  *(int32_t *)(param_1[0x7b] + 0x1c) = 0x2673ff83;
  *(int32_t *)param_1[0x7c] = 0x2667ff89;
  *(int32_t *)(param_1[0x7c] + 4) = 0x2667ff89;
  *(int32_t *)(param_1[0x7c] + 8) = 0x403fffec;
  *(int32_t *)(param_1[0x7c] + 0xc) = 0xabe7ff89;
  *(int32_t *)(param_1[0x7c] + 0x10) = 0x3a4bff98;
  *(int32_t *)(param_1[0x7c] + 0x18) = 0x3607ffba;
  *(int32_t *)(param_1[0x7c] + 0x1c) = 0xb5d1ff95;
  *(int32_t *)param_1[0x7d] = 0x3f7fffe5;
  *(int32_t *)(param_1[0x7d] + 4) = 0x3f6db6c2;
  *(int32_t *)(param_1[0x7d] + 8) = 0x3f478773;
  *(int32_t *)(param_1[0x7d] + 0xc) = 0x3e34b492;
  *(int32_t *)(param_1[0x7d] + 0x10) = 0x3e808068;
  *(int32_t *)(param_1[0x7d] + 0x14) = 0x3ec6c6a0;
  *(int32_t *)(param_1[0x7d] + 0x18) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x7d] + 0x1c) = 0x411fffd6;
  *(int32_t *)param_1[0x7e] = 0x3eccccb7;
  *(int32_t *)(param_1[0x7e] + 4) = 0x3f66664e;
  *(int32_t *)(param_1[0x7e] + 8) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x7e] + 0xc) = 0x3fb33320;
  *(int32_t *)(param_1[0x7e] + 0x10) = 0x3dccd068;
  *(int32_t *)(param_1[0x7e] + 0x14) = 0x426fff63;
  *(int32_t *)(param_1[0x7e] + 0x18) = 10;
  *(int32_t *)(param_1[0x7e] + 0x1c) = 0x3f7fffe5;
  *(int32_t *)param_1[0x7f] = 0x3f7fffe5;
  *(int32_t *)(param_1[0x7f] + 4) = 0x40266654;
  *(int32_t *)(param_1[0x7f] + 8) = 0x40ffffe5;
  *(int32_t *)(param_1[0x7f] + 0xc) = 0x40bfffec;
  *(int32_t *)(param_1[0x7f] + 0x10) = 0x409fffef;
  *(int32_t *)(param_1[0x7f] + 0x14) = 0x4347ffeb;
  *(int32_t *)(param_1[0x7f] + 0x18) = 0x4347ffeb;
  *(int32_t *)(param_1[0x7f] + 0x1c) = 0x241bffb0;
  *(int32_t *)param_1[0x80] = 0x43aeffee;
  *(int32_t *)(param_1[0x80] + 4) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x80] + 8) = 0x3f7718cf;
  *(int32_t *)(param_1[0x80] + 0xc) = 0x3f4504f0;
  *(int32_t *)(param_1[0x80] + 0x1c) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x80] + 0x10) = 0x3ea0a08f;
  *(int32_t *)(param_1[0x80] + 0x14) = 0x3f092735;
  *(int32_t *)(param_1[0x80] + 0x18) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x81] + 4) = 0;
  *(int32_t *)(param_1[0x81] + 0xc) = 0;
  *(int32_t *)(param_1[0x81] + 0x10) = 0x419fffef;
  *(int32_t *)(param_1[0x81] + 0x14) = 0x1691ffb5;
  *(int32_t *)(param_1[0x81] + 0x18) = 0x3fd99934;
  *(int32_t *)(param_1[0x81] + 0x1c) = 0x3fa66654;
  *(int32_t *)param_1[0x82] = 0x3f7fffe5;
  *(int32_t *)(param_1[0x82] + 4) = 0x419fffef;
  *(int32_t *)(param_1[0x82] + 0xc) = 0x3f599955;
  *(int32_t *)(param_1[0x82] + 0x10) = 0x3f80005e;
  *(int32_t *)(param_1[0x82] + 0x14) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x82] + 0x18) = 0x3ca3d6f9;
  *(int32_t *)(param_1[0x82] + 0x1c) = 0x3f3fffec;
  *(int32_t *)param_1[0x83] = 0x3f266654;
  *(int32_t *)(param_1[0x83] + 4) = 0x40066658;
  *(int32_t *)(param_1[0x83] + 8) = 0x4374ffe6;
  *(int32_t *)(param_1[0x83] + 0xc) = 0x44897ff1;
  *(int32_t *)(param_1[0x83] + 0x10) = 0x459c3ff0;
  *(int32_t *)(param_1[0x83] + 0x14) = 0x446d7fe7;
  *(int32_t *)(param_1[0x83] + 0x18) = 0x41efffe7;
  *(int32_t *)(param_1[0x83] + 0x1c) = 0x3f7fffe5;
  *(int32_t *)param_1[0x84] = 0x3f7fffe5;
  *(int32_t *)(param_1[0x84] + 4) = 0x411fffef;
  *(int32_t *)(param_1[0x84] + 8) = 0x4315ffd6;
  *(int32_t *)(param_1[0x84] + 0xc) = 0x4347ffb8;
  *(int32_t *)(param_1[0x84] + 0x10) = 0x3682ffbd;
  *(int32_t *)(param_1[0x84] + 0x1c) = 0;
  *(int32_t *)(param_1[0x85] + 4) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x85] + 8) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x85] + 0xc) = 0x3f7ad516;
  *(int32_t *)(param_1[0x85] + 0x10) = 0x3f282816;
  *(int32_t *)(param_1[0x85] + 0x14) = 0x403fffec;
  *(int32_t *)(param_1[0x85] + 0x1c) = 0x3a4bff98;
  *(int32_t *)param_1[0x86] = 0x3683ffbc;
  *(int32_t *)(param_1[0x86] + 4) = 0x3621ffad;
  *(int32_t *)(param_1[0x86] + 8) = 0xb551ff95;
  *(int32_t *)(param_1[0x86] + 0xc) = 0x3f7ebea4;
  *(int32_t *)(param_1[0x86] + 0x10) = 0x3f71e682;
  *(int32_t *)(param_1[0x86] + 0x14) = 0x3f56c8e5;
  *(int32_t *)(param_1[0x86] + 0x18) = 0x3e1c9c6b;
  *(int32_t *)(param_1[0x86] + 0x1c) = 0x3e84845a;
  *(int32_t *)param_1[0x87] = 0x3edede98;
  *(int32_t *)(param_1[0x87] + 4) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x87] + 8) = 0x411fffd6;
  *(int32_t *)(param_1[0x87] + 0xc) = 0x3f19998a;
  *(int32_t *)(param_1[0x87] + 0x10) = 0x3f66664e;
  *(int32_t *)(param_1[0x87] + 0x14) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x87] + 0x18) = 0x3fb33320;
  *(int32_t *)(param_1[0x87] + 0x1c) = 0x3dccd068;
  *(int32_t *)param_1[0x88] = 0x426fff63;
  *(int32_t *)(param_1[0x88] + 4) = 10;
  *(int32_t *)(param_1[0x88] + 8) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x88] + 0xc) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x88] + 0x10) = 0x40266654;
  *(int32_t *)(param_1[0x88] + 0x14) = 0x40ffffe5;
  *(int32_t *)(param_1[0x88] + 0x18) = 0x40bfffec;
  *(int32_t *)(param_1[0x88] + 0x1c) = 0x409fffef;
  *(int32_t *)param_1[0x89] = 0x4347ffeb;
  *(int32_t *)(param_1[0x89] + 4) = 0x4347ffeb;
  *(int32_t *)(param_1[0x89] + 8) = 0x2e95ffb3;
  *(int32_t *)(param_1[0x89] + 0xc) = 0x43aeffee;
  *(int32_t *)(param_1[0x89] + 0x10) = 0x3f7d7d62;
  *(int32_t *)(param_1[0x89] + 0x14) = 0x3f780ced;
  *(int32_t *)(param_1[0x89] + 0x18) = 0x3f597458;
  *(int32_t *)(param_1[0x8a] + 8) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x89] + 0x1c) = 0x3ea0a08f;
  *(int32_t *)param_1[0x8a] = 0x3f092735;
  *(int32_t *)(param_1[0x8a] + 4) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x8a] + 0x10) = 0;
  *(int32_t *)(param_1[0x8a] + 0x18) = 0;
  *(int32_t *)(param_1[0x8a] + 0x1c) = 0x419fffef;
  *(int32_t *)param_1[0x8b] = 0x1691ffb5;
  *(int32_t *)(param_1[0x8b] + 4) = 0x3fd99934;
  *(int32_t *)(param_1[0x8b] + 8) = 0x3fa66654;
  *(int32_t *)(param_1[0x8b] + 0xc) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x8b] + 0x10) = 0x419fffef;
  *(int32_t *)(param_1[0x8b] + 0x18) = 0x3f599955;
  *(int32_t *)(param_1[0x8b] + 0x1c) = 0x3f80005e;
  *(int32_t *)param_1[0x8c] = 0x3f7fffe5;
  *(int32_t *)(param_1[0x8c] + 4) = 0x3ca3d6f9;
  *(int32_t *)(param_1[0x8c] + 8) = 0x3f3fffec;
  *(int32_t *)(param_1[0x8c] + 0xc) = 0x3f266654;
  *(int32_t *)(param_1[0x8c] + 0x10) = 0x3fffffe5;
  *(int32_t *)(param_1[0x8c] + 0x14) = 0x4374ffe6;
  *(int32_t *)(param_1[0x8c] + 0x18) = 0x44897ff1;
  *(int32_t *)(param_1[0x8c] + 0x1c) = 0x459c3ff0;
  *(int32_t *)param_1[0x8d] = 0x44b3ffed;
  *(int32_t *)(param_1[0x8d] + 4) = 0x41efffe7;
  *(int32_t *)(param_1[0x8d] + 8) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x8d] + 0xc) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x8d] + 0x10) = 0x411fffef;
  *(int32_t *)(param_1[0x8d] + 0x14) = 0x42f9ffcc;
  *(int32_t *)(param_1[0x8d] + 0x18) = 0x4315ffd6;
  *(int32_t *)(param_1[0x8d] + 0x1c) = 0x3682ffbd;
  *(int32_t *)(param_1[0x8e] + 8) = 0;
  *(int32_t *)(param_1[0x8e] + 0x10) = 0x3180ffbe;
  *(int32_t *)(param_1[0x8e] + 0x14) = 0x2ff3ff83;
  *(int32_t *)(param_1[0x8e] + 0x18) = 0x3027ffaa;
  *(int32_t *)(param_1[0x8e] + 0x1c) = 0x304bff98;
  *(int32_t *)param_1[0x8f] = 0x403fffec;
  *(int32_t *)(param_1[0x8f] + 8) = 0x3a4bff98;
  *(int32_t *)(param_1[0x8f] + 0x10) = 0x3607ffba;
  *(int32_t *)(param_1[0x8f] + 0x14) = 0xb551ff95;
  *(int32_t *)(param_1[0x8f] + 0x18) = 0x3f7fffc4;
  *(int32_t *)(param_1[0x8f] + 0x1c) = 0x3f77200c;
  *(int32_t *)param_1[0x90] = 0x3f64642f;
  *(int32_t *)(param_1[0x90] + 4) = 0x3e54397a;
  *(int32_t *)(param_1[0x90] + 8) = 0x3ea52931;
  *(int32_t *)(param_1[0x90] + 0xc) = 0x3f105016;
  *(int32_t *)(param_1[0x90] + 0x10) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x90] + 0x14) = 0x411fffd6;
  *(int32_t *)(param_1[0x90] + 0x18) = 0x3f19998a;
  *(int32_t *)(param_1[0x90] + 0x1c) = 0x3f66664e;
  *(int32_t *)param_1[0x91] = 0x3f7fffe5;
  *(int32_t *)(param_1[0x91] + 4) = 0x3fb33320;
  *(int32_t *)(param_1[0x91] + 8) = 0x3dccd068;
  *(int32_t *)(param_1[0x91] + 0xc) = 0x426fff63;
  *(int32_t *)(param_1[0x91] + 0x10) = 10;
  *(int32_t *)(param_1[0x91] + 0x14) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x91] + 0x18) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x91] + 0x1c) = 0x40266654;
  *(int32_t *)param_1[0x92] = 0x40ffffe5;
  *(int32_t *)(param_1[0x92] + 4) = 0x40bfffec;
  *(int32_t *)(param_1[0x92] + 8) = 0x409fffef;
  *(int32_t *)(param_1[0x92] + 0xc) = 0x4347ffeb;
  *(int32_t *)(param_1[0x92] + 0x10) = 0x4347ffeb;
  *(int32_t *)(param_1[0x92] + 0x14) = 0x2f25ffab;
  *(int32_t *)(param_1[0x92] + 0x18) = 0x43aeffee;
  *(int32_t *)(param_1[0x92] + 0x1c) = 0x3f7ebea4;
  *(int32_t *)param_1[0x93] = 0x3f7a9911;
  *(int32_t *)(param_1[0x93] + 4) = 0x3f6345b0;
  *(int32_t *)(param_1[0x93] + 0x14) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x93] + 8) = 0x3ea0a08f;
  *(int32_t *)(param_1[0x93] + 0xc) = 0x3f092735;
  *(int32_t *)(param_1[0x93] + 0x10) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x93] + 0x1c) = 0;
  *(int32_t *)(param_1[0x94] + 4) = 0;
  *(int32_t *)(param_1[0x94] + 8) = 0x419fffef;
  *(int32_t *)(param_1[0x94] + 0xc) = 0x2e03ffbc;
  *(int32_t *)(param_1[0x94] + 0x10) = 0x3fd9993b;
  *(int32_t *)(param_1[0x94] + 0x14) = 0x3fa66654;
  *(int32_t *)(param_1[0x94] + 0x18) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x94] + 0x1c) = 0x419fffef;
  *(int32_t *)(param_1[0x95] + 4) = 0x3f599955;
  *(int32_t *)(param_1[0x95] + 8) = 0x3f80005e;
  *(int32_t *)(param_1[0x95] + 0xc) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x95] + 0x10) = 0x3ca3d6f9;
  *(int32_t *)(param_1[0x95] + 0x14) = 0x3f3fffec;
  *(int32_t *)(param_1[0x95] + 0x18) = 0x3f266654;
  *(int32_t *)(param_1[0x95] + 0x1c) = 0x3fffffe5;
  *(int32_t *)param_1[0x96] = 0x4374ffe6;
  *(int32_t *)(param_1[0x96] + 4) = 0x44897ff1;
  *(int32_t *)(param_1[0x96] + 8) = 0x459c3ff0;
  *(int32_t *)(param_1[0x96] + 0xc) = 0x44b3ffed;
  *(int32_t *)(param_1[0x96] + 0x10) = 0x41efffe7;
  *(int32_t *)(param_1[0x96] + 0x14) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x96] + 0x18) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x96] + 0x1c) = 0x411fffef;
  *(int32_t *)param_1[0x97] = 0x42c7ffeb;
  *(int32_t *)(param_1[0x97] + 4) = 0x42efffd2;
  *(int32_t *)(param_1[0x97] + 0xc) = 0;
  *(int32_t *)(param_1[0x97] + 0x14) = 0;
  *(int32_t *)(param_1[0x97] + 0x1c) = 0x27f3ff83;
  *(int32_t *)param_1[0x98] = 0x2751ff95;
  *(int32_t *)(param_1[0x98] + 4) = 0x273fff9e;
  *(int32_t *)(param_1[0x98] + 8) = 0x2723ffac;
  *(int32_t *)(param_1[0x98] + 0xc) = 0x403fffec;
  *(int32_t *)(param_1[0x98] + 0x14) = 0x3a4bff98;
  *(int32_t *)(param_1[0x98] + 0x1c) = 0x3607ffba;
  *(int32_t *)param_1[0x99] = 0xb551ff95;
  *(int32_t *)(param_1[0x99] + 4) = 0x3f7ebe80;
  *(int32_t *)(param_1[0x99] + 8) = 0x3f71e660;
  *(int32_t *)(param_1[0x99] + 0xc) = 0x3f56c8c7;
  *(int32_t *)(param_1[0x99] + 0x10) = 0x3e1dac88;
  *(int32_t *)(param_1[0x99] + 0x14) = 0x3e83ee68;
  *(int32_t *)(param_1[0x99] + 0x18) = 0x3edf5f16;
  *(int32_t *)(param_1[0x99] + 0x1c) = 0x3f7fffe5;
  *(int32_t *)param_1[0x9a] = 0x411fffef;
  *(int32_t *)(param_1[0x9a] + 4) = 0x3f19998a;
  *(int32_t *)(param_1[0x9a] + 8) = 0x3f66664e;
  *(int32_t *)(param_1[0x9a] + 0xc) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x9a] + 0x10) = 0x3fb33320;
  *(int32_t *)(param_1[0x9a] + 0x14) = 0x3dccd068;
  *(int32_t *)(param_1[0x9a] + 0x18) = 0x426fff63;
  *(int32_t *)(param_1[0x9a] + 0x1c) = 10;
  *(int32_t *)param_1[0x9b] = 0x3f7fffe5;
  *(int32_t *)(param_1[0x9b] + 4) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x9b] + 8) = 0x40266654;
  *(int32_t *)(param_1[0x9b] + 0xc) = 0x40ffffe5;
  *(int32_t *)(param_1[0x9b] + 0x10) = 0x40bfffec;
  *(int32_t *)(param_1[0x9b] + 0x14) = 0x409fffef;
  *(int32_t *)(param_1[0x9b] + 0x18) = 0x4347ffeb;
  *(int32_t *)(param_1[0x9b] + 0x1c) = 0x4347ffeb;
  *(int32_t *)param_1[0x9c] = 0x2f25ffab;
  *(int32_t *)(param_1[0x9c] + 4) = 0x43aeffee;
  *(int32_t *)(param_1[0x9c] + 8) = 0x3f7d7d62;
  *(int32_t *)(param_1[0x9c] + 0xc) = 0x3f780ced;
  *(int32_t *)(param_1[0x9c] + 0x10) = 0x3f597458;
  *(int32_t *)param_1[0x9d] = 0x3f7fffe5;
  *(int32_t *)(param_1[0x9c] + 0x14) = 0x3ea0a08f;
  *(int32_t *)(param_1[0x9c] + 0x18) = 0x3f092735;
  *(int32_t *)(param_1[0x9c] + 0x1c) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x9d] + 8) = 0;
  *(int32_t *)(param_1[0x9d] + 0x10) = 0;
  *(int32_t *)(param_1[0x9d] + 0x14) = 0x419fffef;
  *(int32_t *)(param_1[0x9d] + 0x18) = 0x1691ffb5;
  *(int32_t *)(param_1[0x9d] + 0x1c) = 0x3fd99934;
  *(int32_t *)param_1[0x9e] = 0x3fa66654;
  *(int32_t *)(param_1[0x9e] + 4) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x9e] + 8) = 0x419fffef;
  *(int32_t *)(param_1[0x9e] + 0x10) = 0x3f7fff38;
  *(int32_t *)(param_1[0x9e] + 0x14) = 0x3f80005e;
  *(int32_t *)(param_1[0x9e] + 0x18) = 0x3f7fffe5;
  *(int32_t *)(param_1[0x9e] + 0x1c) = 0x3ca3d6f9;
  *(int32_t *)param_1[0x9f] = 0x3f3fffec;
  *(int32_t *)(param_1[0x9f] + 4) = 0x3f266654;
  *(int32_t *)(param_1[0x9f] + 8) = 0x3fffffe5;
  *(int32_t *)(param_1[0x9f] + 0xc) = 0x4374ffe6;
  *(int32_t *)(param_1[0x9f] + 0x10) = 0x44897ff1;
  *(int32_t *)(param_1[0x9f] + 0x14) = 0x459c3ff0;
  *(int32_t *)(param_1[0x9f] + 0x18) = 0x44b3ffed;
  *(int32_t *)(param_1[0x9f] + 0x1c) = 0x41efffe7;
  *(int32_t *)param_1[0xa0] = 0x3f7fffe5;
  *(int32_t *)(param_1[0xa0] + 4) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xa0] + 8) = 0x411fffef;
  *(int32_t *)(param_1[0xa0] + 0xc) = 0x42f9ffcc;
  *(int32_t *)(param_1[0xa0] + 0x10) = 0x4315ffd6;
  *(int32_t *)(param_1[0xa0] + 0x18) = 0;
  *(int32_t *)param_1[0xa1] = 0;
  *(int32_t *)(param_1[0xa1] + 8) = 0x27f3ff83;
  *(int32_t *)(param_1[0xa1] + 0xc) = 0x2785ffbb;
  *(int32_t *)(param_1[0xa1] + 0x10) = 0x2773ff83;
  *(int32_t *)(param_1[0xa1] + 0x14) = 0x274bff98;
  *(int32_t *)(param_1[0xa1] + 0x18) = 0x403fffec;
  *(int32_t *)param_1[0xa2] = 0x3a4bff98;
  *(int32_t *)(param_1[0xa2] + 8) = 0x3607ffba;
  *(int32_t *)(param_1[0xa2] + 0xc) = 0xb551ff95;
  *(int32_t *)(param_1[0xa2] + 0x10) = 0x3f7fffc0;
  *(int32_t *)(param_1[0xa2] + 0x14) = 0x3f6dedb4;
  *(int32_t *)(param_1[0xa2] + 0x18) = 0x3f47c796;
  *(int32_t *)(param_1[0xa2] + 0x1c) = 0x3e34c776;
  *(int32_t *)param_1[0xa3] = 0x3e80776a;
  *(int32_t *)(param_1[0xa3] + 4) = 0x3ec64620;
  *(int32_t *)(param_1[0xa3] + 8) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xa3] + 0xc) = 0x411fffef;
  *(int32_t *)(param_1[0xa3] + 0x10) = 0x3eccccb7;
  *(int32_t *)(param_1[0xa3] + 0x14) = 0x3f66664e;
  *(int32_t *)(param_1[0xa3] + 0x18) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xa3] + 0x1c) = 0x3fb33320;
  *(int32_t *)param_1[0xa4] = 0x3dccd068;
  *(int32_t *)(param_1[0xa4] + 4) = 0x426fff63;
  *(int32_t *)(param_1[0xa4] + 8) = 10;
  *(int32_t *)(param_1[0xa4] + 0xc) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xa4] + 0x10) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xa4] + 0x14) = 0x40266654;
  *(int32_t *)(param_1[0xa4] + 0x18) = 0x40ffffe5;
  *(int32_t *)(param_1[0xa4] + 0x1c) = 0x40bfffec;
  *(int32_t *)param_1[0xa5] = 0x409fffef;
  *(int32_t *)(param_1[0xa5] + 4) = 0x4347ffeb;
  *(int32_t *)(param_1[0xa5] + 8) = 0x4347ffeb;
  *(int32_t *)(param_1[0xa5] + 0xc) = 0x2f25ffab;
  *(int32_t *)(param_1[0xa5] + 0x10) = 0x43aeffee;
  *(int32_t *)(param_1[0xa5] + 0x14) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xa5] + 0x18) = 0x3f7718cf;
  *(int32_t *)(param_1[0xa5] + 0x1c) = 0x3f4504f0;
  *(int32_t *)(param_1[0xa6] + 0xc) = 0x3f7fffe5;
  *(int32_t *)param_1[0xa6] = 0x3ea0a08f;
  *(int32_t *)(param_1[0xa6] + 4) = 0x3f092735;
  *(int32_t *)(param_1[0xa6] + 8) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xa6] + 0x14) = 0;
  *(int32_t *)(param_1[0xa6] + 0x1c) = 0;
  *(int32_t *)param_1[0xa7] = 0x419fffef;
  *(int32_t *)(param_1[0xa7] + 4) = 0x1691ffb5;
  *(int32_t *)(param_1[0xa7] + 8) = 0x3fd99934;
  *(int32_t *)(param_1[0xa7] + 0xc) = 0x3fa66654;
  *(int32_t *)(param_1[0xa7] + 0x10) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xa7] + 0x14) = 0x419fffef;
  *(int32_t *)(param_1[0xa7] + 0x1c) = 0x3f599955;
  *(int32_t *)param_1[0xa8] = 0x3f80005e;
  *(int32_t *)(param_1[0xa8] + 4) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xa8] + 8) = 0x3ca3d6f9;
  *(int32_t *)(param_1[0xa8] + 0xc) = 0x3f3fffec;
  *(int32_t *)(param_1[0xa8] + 0x10) = 0x3f266654;
  *(int32_t *)(param_1[0xa8] + 0x14) = 0x40066658;
  *(int32_t *)(param_1[0xa8] + 0x18) = 0x4374ffe6;
  *(int32_t *)(param_1[0xa8] + 0x1c) = 0x44897ff1;
  *(int32_t *)param_1[0xa9] = 0x459c3ff0;
  *(int32_t *)(param_1[0xa9] + 4) = 0x44b3ffed;
  *(int32_t *)(param_1[0xa9] + 8) = 0x41efffe7;
  *(int32_t *)(param_1[0xa9] + 0xc) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xa9] + 0x10) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xa9] + 0x14) = 0x411fffef;
  *(int32_t *)(param_1[0xa9] + 0x18) = 0x4315ffd6;
  *(int32_t *)(param_1[0xa9] + 0x1c) = 0x4347ffb8;
  *(int32_t *)(param_1[0xaa] + 4) = 0;
  *(int32_t *)(param_1[0xaa] + 0xc) = 0;
  *(int32_t *)(param_1[0xaa] + 0x14) = 0x27f3ff83;
  *(int32_t *)(param_1[0xaa] + 0x18) = 0x27adffa7;
  *(int32_t *)(param_1[0xaa] + 0x1c) = 0x279fffae;
  *(int32_t *)param_1[0xab] = 0x2783ffbc;
  *(int32_t *)(param_1[0xab] + 4) = 0x403fffec;
  *(int32_t *)(param_1[0xab] + 0xc) = 0x3a4bff98;
  *(int32_t *)(param_1[0xab] + 0x14) = 0x3607ffba;
  *(int32_t *)(param_1[0xab] + 0x18) = 0xb551ff95;
  *(int32_t *)(param_1[0xab] + 0x1c) = 0x3f7c3bfe;
  *(int32_t *)param_1[0xac] = 0x3f629c4c;
  *(int32_t *)(param_1[0xac] + 4) = 0x3f2d1a1f;
  *(int32_t *)(param_1[0xac] + 8) = 0x3e01eb46;
  *(int32_t *)(param_1[0xac] + 0xc) = 0x3e3e1a24;
  *(int32_t *)(param_1[0xac] + 0x10) = 0x3e8a09fb;
  *(int32_t *)(param_1[0xac] + 0x14) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xac] + 0x18) = 0x411fffef;
  *(int32_t *)(param_1[0xac] + 0x1c) = 0x3eccccb7;
  *(int32_t *)param_1[0xad] = 0x3f66664e;
  *(int32_t *)(param_1[0xad] + 4) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xad] + 8) = 0x3fb33320;
  *(int32_t *)(param_1[0xad] + 0xc) = 0x3dccd068;
  *(int32_t *)(param_1[0xad] + 0x10) = 0x426fff63;
  *(int32_t *)(param_1[0xad] + 0x14) = 10;
  *(int32_t *)(param_1[0xad] + 0x18) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xad] + 0x1c) = 0x3f7fffe5;
  *(int32_t *)param_1[0xae] = 0x40266654;
  *(int32_t *)(param_1[0xae] + 4) = 0x40ffffe5;
  *(int32_t *)(param_1[0xae] + 8) = 0x40bfffec;
  *(int32_t *)(param_1[0xae] + 0xc) = 0x409fffef;
  *(int32_t *)(param_1[0xae] + 0x10) = 0x4347ffeb;
  *(int32_t *)(param_1[0xae] + 0x14) = 0x4347ffeb;
  *(int32_t *)(param_1[0xae] + 0x18) = 0x2f25ffab;
  *(int32_t *)(param_1[0xae] + 0x1c) = 0x43aeffee;
  *(int32_t *)param_1[0xaf] = 0x3f7ebea4;
  *(int32_t *)(param_1[0xaf] + 4) = 0x3f730eec;
  *(int32_t *)(param_1[0xaf] + 8) = 0x3f315281;
  *(int32_t *)(param_1[0xaf] + 0x18) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xaf] + 0xc) = 0x3ea0a08f;
  *(int32_t *)(param_1[0xaf] + 0x10) = 0x3f092735;
  *(int32_t *)(param_1[0xaf] + 0x14) = 0x3f7fffe5;
  *(int32_t *)param_1[0xb0] = 0;
  *(int32_t *)(param_1[0xb0] + 8) = 0;
  *(int32_t *)(param_1[0xb0] + 0xc) = 0x419fffef;
  *(int32_t *)(param_1[0xb0] + 0x10) = 0x1691ffb5;
  *(int32_t *)(param_1[0xb0] + 0x14) = 0x3fd99934;
  *(int32_t *)(param_1[0xb0] + 0x18) = 0x3fa66654;
  *(int32_t *)(param_1[0xb0] + 0x1c) = 0x3f7fffe5;
  *(int32_t *)param_1[0xb1] = 0x419fffef;
  *(int32_t *)(param_1[0xb1] + 8) = 0x3f599955;
  *(int32_t *)(param_1[0xb1] + 0xc) = 0x3f80005e;
  *(int32_t *)(param_1[0xb1] + 0x10) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xb1] + 0x14) = 0x3ca3d6f9;
  *(int32_t *)(param_1[0xb1] + 0x18) = 0x3f3fffec;
  *(int32_t *)(param_1[0xb1] + 0x1c) = 0x3f266654;
  *(int32_t *)param_1[0xb2] = 0x400ccc96;
  *(int32_t *)(param_1[0xb2] + 4) = 0x4374ffe6;
  *(int32_t *)(param_1[0xb2] + 8) = 0x44897ff1;
  *(int32_t *)(param_1[0xb2] + 0xc) = 0x459c3ff0;
  *(int32_t *)(param_1[0xb2] + 0x10) = 0x44b3ffed;
  *(int32_t *)(param_1[0xb2] + 0x14) = 0x41efffe7;
  *(int32_t *)(param_1[0xb2] + 0x18) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xb2] + 0x1c) = 0x3f7fffe5;
  *(int32_t *)param_1[0xb3] = 0x411fffef;
  *(int32_t *)(param_1[0xb3] + 4) = 0x432effc8;
  *(int32_t *)(param_1[0xb3] + 8) = 0x4360ffa8;
  *(int32_t *)(param_1[0xb3] + 0x10) = 0;
  *(int32_t *)(param_1[0xb3] + 0x18) = 0;
  *(int32_t *)param_1[0xb4] = 0x27f3ff83;
  *(int32_t *)(param_1[0xb4] + 4) = 0x27a1ffad;
  *(int32_t *)(param_1[0xb4] + 8) = 0x2793ffb4;
  *(int32_t *)(param_1[0xb4] + 0xc) = 0x277fff7d;
  *(int32_t *)(param_1[0xb4] + 0x10) = 0x403fffec;
  *(int32_t *)(param_1[0xb4] + 0x18) = 0x3a4bff98;
  *(int32_t *)param_1[0xb5] = 0x3607ffba;
  *(int32_t *)(param_1[0xb5] + 4) = 0xb5d1ff95;
  *(int32_t *)(param_1[0xb5] + 8) = 0x3f7afae1;
  *(int32_t *)(param_1[0xb5] + 0xc) = 0x3f58bfb5;
  *(int32_t *)(param_1[0xb5] + 0x10) = 0x3f112cb9;
  *(int32_t *)(param_1[0xb5] + 0x14) = 0x3e09016c;
  *(int32_t *)(param_1[0xb5] + 0x18) = 0x3e39ea8f;
  *(int32_t *)(param_1[0xb5] + 0x1c) = 0x3e70f0d7;
  *(int32_t *)param_1[0xb6] = 0x3f7fffe5;
  *(int32_t *)(param_1[0xb6] + 4) = 0x40dfffe8;
  *(int32_t *)(param_1[0xb6] + 8) = 0x3effffe5;
  *(int32_t *)(param_1[0xb6] + 0xc) = 0x3f4cccb7;
  *(int32_t *)(param_1[0xb6] + 0x10) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xb6] + 0x14) = 0x3fb33320;
  *(int32_t *)(param_1[0xb6] + 0x18) = 0x3dccd068;
  *(int32_t *)(param_1[0xb6] + 0x1c) = 0x426fff63;
  *(int32_t *)param_1[0xb7] = 10;
  *(int32_t *)(param_1[0xb7] + 4) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xb7] + 8) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xb7] + 0xc) = 0x40266654;
  *(int32_t *)(param_1[0xb7] + 0x10) = 0x40ffffe5;
  *(int32_t *)(param_1[0xb7] + 0x14) = 0x40bfffec;
  *(int32_t *)(param_1[0xb7] + 0x18) = 0x409fffef;
  *(int32_t *)(param_1[0xb7] + 0x1c) = 0x4347ffeb;
  *(int32_t *)param_1[0xb8] = 0x4347ffeb;
  *(int32_t *)(param_1[0xb8] + 4) = 0x2f25ffab;
  *(int32_t *)(param_1[0xb8] + 8) = 0x43aeffee;
  *(int32_t *)(param_1[0xb8] + 0xc) = 0x3f7ebea4;
  *(int32_t *)(param_1[0xb8] + 0x10) = 0x3f6f22a6;
  *(int32_t *)(param_1[0xb8] + 0x14) = 0x3f1499df;
  *(int32_t *)(param_1[0xb9] + 4) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xb8] + 0x18) = 0x3ebc3c28;
  *(int32_t *)(param_1[0xb8] + 0x1c) = 0x3f20c65a;
  *(int32_t *)param_1[0xb9] = 0x3f7fffe5;
  *(int32_t *)(param_1[0xb9] + 0xc) = 0;
  *(int32_t *)(param_1[0xb9] + 0x14) = 0;
  *(int32_t *)(param_1[0xb9] + 0x18) = 0x419fffef;
  *(int32_t *)(param_1[0xb9] + 0x1c) = 0x1691ffb5;
  *(int32_t *)param_1[0xba] = 0x3fd99934;
  *(int32_t *)(param_1[0xba] + 4) = 0x3fa66654;
  *(int32_t *)(param_1[0xba] + 8) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xba] + 0xc) = 0x419fffef;
  *(int32_t *)(param_1[0xba] + 0x14) = 0x3f599955;
  *(int32_t *)(param_1[0xba] + 0x18) = 0x3f80005e;
  *(int32_t *)(param_1[0xba] + 0x1c) = 0x3f7fffe5;
  *(int32_t *)param_1[0xbb] = 0x3ca3d6f9;
  *(int32_t *)(param_1[0xbb] + 4) = 0x3f3fffec;
  *(int32_t *)(param_1[0xbb] + 8) = 0x3f266654;
  *(int32_t *)(param_1[0xbb] + 0xc) = 0x400ccc96;
  *(int32_t *)(param_1[0xbb] + 0x10) = 0x4374ffe6;
  *(int32_t *)(param_1[0xbb] + 0x14) = 0x44897ff1;
  *(int32_t *)(param_1[0xbb] + 0x18) = 0x459c3ff0;
  *(int32_t *)(param_1[0xbb] + 0x1c) = 0x44b3ffed;
  *(int32_t *)param_1[0xbc] = 0x41efffe7;
  *(int32_t *)(param_1[0xbc] + 4) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xbc] + 8) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xbc] + 0xc) = 0x411fffef;
  *(int32_t *)(param_1[0xbc] + 0x10) = 0x4347ffb8;
  *(int32_t *)(param_1[0xbc] + 0x14) = 0x43847fc8;
  *(int32_t *)(param_1[0xbc] + 0x1c) = 0;
  *(int32_t *)(param_1[0xbd] + 4) = 0;
  *(int32_t *)(param_1[0xbd] + 0xc) = 0x27f3ff83;
  *(int32_t *)(param_1[0xbd] + 0x10) = 0x2780ffbe;
  *(int32_t *)(param_1[0xbd] + 0x14) = 0x276bff87;
  *(int32_t *)(param_1[0xbd] + 0x18) = 0x2745ff9b;
  *(int32_t *)(param_1[0xbd] + 0x1c) = 0x403fffec;
  *(int32_t *)(param_1[0xbe] + 4) = 0x3a4bff98;
  *(int32_t *)(param_1[0xbe] + 8) = 0x369dffaf;
  *(int32_t *)(param_1[0xbe] + 0xc) = 0x36d1ff95;
  *(int32_t *)(param_1[0xbe] + 0x10) = 0xb5d1ff95;
  *(int32_t *)(param_1[0xbe] + 0x14) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xbe] + 0x18) = 0x3f4517d7;
  *(int32_t *)(param_1[0xbe] + 0x1c) = 0x3ee1e1ca;
  *(int32_t *)param_1[0xbf] = 0x3e0c8c7e;
  *(int32_t *)(param_1[0xbf] + 4) = 0x3e1c9c8c;
  *(int32_t *)(param_1[0xbf] + 8) = 0x3e3cbca9;
  *(int32_t *)(param_1[0xbf] + 0xc) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xbf] + 0x10) = 0x40dfffe8;
  *(int32_t *)(param_1[0xbf] + 0x14) = 0x3f19998a;
  *(int32_t *)(param_1[0xbf] + 0x18) = 0x3f19998a;
  *(int32_t *)(param_1[0xbf] + 0x1c) = 0x3f7fffe5;
  *(int32_t *)param_1[0xc0] = 0x3fb33320;
  *(int32_t *)(param_1[0xc0] + 4) = 0x3dccd068;
  *(int32_t *)(param_1[0xc0] + 8) = 0x426fff63;
  *(int32_t *)(param_1[0xc0] + 0xc) = 10;
  *(int32_t *)(param_1[0xc0] + 0x10) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xc0] + 0x14) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xc0] + 0x18) = 0x40266654;
  *(int32_t *)(param_1[0xc0] + 0x1c) = 0x4107fff2;
  *(int32_t *)param_1[0xc1] = 0x40bfffec;
  *(int32_t *)(param_1[0xc1] + 4) = 0x409fffef;
  *(int32_t *)(param_1[0xc1] + 8) = 0x4347ffeb;
  *(int32_t *)(param_1[0xc1] + 0xc) = 0x4347ffeb;
  *(int32_t *)(param_1[0xc1] + 0x10) = 0x2f25ffab;
  *(int32_t *)(param_1[0xc1] + 0x14) = 0x43aeffee;
  *(int32_t *)(param_1[0xc1] + 0x18) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xc1] + 0x1c) = 0x3f63524a;
  *(int32_t *)param_1[0xc2] = 0x3ee9694f;
  *(int32_t *)(param_1[0xc2] + 0x10) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xc2] + 4) = 0x3f014133;
  *(int32_t *)(param_1[0xc2] + 8) = 0x3f35719a;
  *(int32_t *)(param_1[0xc2] + 0xc) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xc2] + 0x18) = 0;
  *(int32_t *)param_1[0xc3] = 0;
  *(int32_t *)(param_1[0xc3] + 4) = 0x419fffef;
  *(int32_t *)(param_1[0xc3] + 8) = 0x1691ffb5;
  *(int32_t *)(param_1[0xc3] + 0xc) = 0x3fffff83;
  *(int32_t *)(param_1[0xc3] + 0x10) = 0x3fa66654;
  *(int32_t *)(param_1[0xc3] + 0x14) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xc3] + 0x18) = 0x419fffef;
  *(int32_t *)param_1[0xc4] = 0x3f599955;
  *(int32_t *)(param_1[0xc4] + 4) = 0x3f80005e;
  *(int32_t *)(param_1[0xc4] + 8) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xc4] + 0xc) = 0x3ca3d6f9;
  *(int32_t *)(param_1[0xc4] + 0x10) = 0x3f3fffec;
  *(int32_t *)(param_1[0xc4] + 0x14) = 0x3f266654;
  *(int32_t *)(param_1[0xc4] + 0x18) = 0x400ccc96;
  *(int32_t *)(param_1[0xc4] + 0x1c) = 0x4374ffe6;
  *(int32_t *)param_1[0xc5] = 0x44897ff1;
  *(int32_t *)(param_1[0xc5] + 4) = 0x459c3ff0;
  *(int32_t *)(param_1[0xc5] + 8) = 0x44b3ffed;
  *(int32_t *)(param_1[0xc5] + 0xc) = 0x41efffe7;
  *(int32_t *)(param_1[0xc5] + 0x10) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xc5] + 0x14) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xc5] + 0x18) = 0x411fffef;
  *(int32_t *)(param_1[0xc5] + 0x1c) = 0x4347ffb8;
  *(int32_t *)param_1[0xc6] = 0x4379ffcc;
  *(int32_t *)(param_1[0xc6] + 8) = 0;
  *(int32_t *)(param_1[0xc6] + 0x10) = 0;
  *(int32_t *)(param_1[0xc6] + 0x18) = 0x27f3ff83;
  *(int32_t *)(param_1[0xc6] + 0x1c) = 0x274dff97;
  *(int32_t *)param_1[199] = 0x2733ffa4;
  *(int32_t *)(param_1[199] + 4) = 0x2717ffb2;
  *(int32_t *)(param_1[199] + 8) = 0x403fffec;
  *(int32_t *)(param_1[199] + 0x10) = 0x3a4bff98;
  *(int32_t *)(param_1[199] + 0x14) = 0x369dffaf;
  *(int32_t *)(param_1[199] + 0x18) = 0x36dbff8f;
  *(int32_t *)(param_1[199] + 0x1c) = 0xb5d1ff95;
  *(int32_t *)param_1[200] = 0x3f7fffe5;
  *(int32_t *)(param_1[200] + 4) = 0x3f25893c;
  *(int32_t *)(param_1[200] + 8) = 0x3ebc3c28;
  *(int32_t *)(param_1[200] + 0xc) = 0x3df0a53c;
  *(int32_t *)(param_1[200] + 0x10) = 0x3e0ccbd8;
  *(int32_t *)(param_1[200] + 0x14) = 0x3e169684;
  *(int32_t *)(param_1[200] + 0x18) = 0x3f7fffe5;
  *(int32_t *)(param_1[200] + 0x1c) = 0x40800054;
  *(int32_t *)param_1[0xc9] = 0x2743ff9c;
  *(int32_t *)(param_1[0xc9] + 4) = 0x3eccccb7;
  *(int32_t *)(param_1[0xc9] + 8) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xc9] + 0xc) = 0x3f99998a;
  *(int32_t *)(param_1[0xc9] + 0x10) = 0x3d4cd470;
  *(int32_t *)(param_1[0xc9] + 0x14) = 0x426fff63;
  *(int32_t *)(param_1[0xc9] + 0x18) = 10;
  *(int32_t *)(param_1[0xc9] + 0x1c) = 0x3f7fffe5;
  *(int32_t *)param_1[0xca] = 0x3f7fffe5;
  *(int32_t *)(param_1[0xca] + 4) = 0x3fccccf8;
  *(int32_t *)(param_1[0xca] + 8) = 0x410ffff1;
  *(int32_t *)(param_1[0xca] + 0xc) = 0x40bfffec;
  *(int32_t *)(param_1[0xca] + 0x10) = 0x40bfffec;
  *(int32_t *)(param_1[0xca] + 0x14) = 0x4347ffeb;
  *(int32_t *)(param_1[0xca] + 0x18) = 0x4347ffeb;
  *(int32_t *)(param_1[0xca] + 0x1c) = 0x2f25ffab;
  *(int32_t *)param_1[0xcb] = 0x43aeffee;
  *(int32_t *)(param_1[0xcb] + 4) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xcb] + 8) = 0x3ed2d2be;
  *(int32_t *)(param_1[0xcb] + 0xc) = 0x26e7ff89;
  *(int32_t *)(param_1[0xcb] + 0x1c) = 0x3f19998a;
  *(int32_t *)(param_1[0xcb] + 0x10) = 0x3ecc9f5b;
  *(int32_t *)(param_1[0xcb] + 0x14) = 0x3f091570;
  *(int32_t *)(param_1[0xcb] + 0x18) = 0x3f41412d;
  *(int32_t *)(param_1[0xcc] + 4) = 0x3cf5c275;
  *(int32_t *)(param_1[0xcc] + 0xc) = 0;
  *(int32_t *)(param_1[0xcc] + 0x10) = 0x419fffef;
  *(int32_t *)(param_1[0xcc] + 0x14) = 0x1691ffb5;
  *(int32_t *)(param_1[0xcc] + 0x18) = 0x3dcccccd;
  *(int32_t *)(param_1[0xcc] + 0x1c) = 0x3f266666;
  *(int32_t *)param_1[0xcd] = 0x3f7fffe5;
  *(int32_t *)(param_1[0xcd] + 4) = 0x419fffef;
  *(int32_t *)(param_1[0xcd] + 0xc) = 0x3f7fffa4;
  *(int32_t *)(param_1[0xcd] + 0x10) = 0x3f80005e;
  *(int32_t *)(param_1[0xcd] + 0x14) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xcd] + 0x18) = 0x3ca3d6f9;
  *(int32_t *)(param_1[0xcd] + 0x1c) = 0x3f3fffec;
  *(int32_t *)param_1[0xce] = 0x3f266654;
  *(int32_t *)(param_1[0xce] + 4) = 0x401fffef;
  *(int32_t *)(param_1[0xce] + 8) = 0x4381fff2;
  *(int32_t *)(param_1[0xce] + 0xc) = 0x44bb7fec;
  *(int32_t *)(param_1[0xce] + 0x10) = 0x459c3ff0;
  *(int32_t *)(param_1[0xce] + 0x14) = 0x44b3ffed;
  *(int32_t *)(param_1[0xce] + 0x18) = 0x41efffe7;
  *(int32_t *)(param_1[0xce] + 0x1c) = 0x3f7fffe5;
  *(int32_t *)param_1[0xcf] = 0x3f7fffe5;
  *(int32_t *)(param_1[0xcf] + 4) = 0x411fffef;
  *(int32_t *)(param_1[0xcf] + 8) = 0x4347ffb8;
  *(int32_t *)(param_1[0xcf] + 0xc) = 0x4360ffdb;
  *(int32_t *)(param_1[0xcf] + 0x14) = 0;
  *(int32_t *)(param_1[0xcf] + 0x1c) = 0;
  *(int32_t *)(param_1[0xd0] + 4) = 0x27f3ff83;
  *(int32_t *)(param_1[0xd0] + 8) = 0x2679ff80;
  *(int32_t *)(param_1[0xd0] + 0xc) = 0x2645ff9b;
  *(int32_t *)(param_1[0xd0] + 0x10) = 0x2625ffab;
  *(int32_t *)(param_1[0xd0] + 0x14) = 0x403fffec;
  *(int32_t *)(param_1[0xd0] + 0x1c) = 0x3a4bff98;
  *(int32_t *)(param_1[0xd1] + 4) = 0x3607ffba;
  *(int32_t *)(param_1[0xd1] + 8) = 0xb5d1ff95;
  *(int32_t *)(param_1[0xd1] + 0xc) = 0x3eb6b711;
  *(int32_t *)(param_1[0xd1] + 0x10) = 0x3e6ced3c;
  *(int32_t *)(param_1[0xd1] + 0x14) = 0x3e4ccd00;
  *(int32_t *)(param_1[0xd1] + 0x18) = 0x3d8e9f44;
  *(int32_t *)(param_1[0xd1] + 0x1c) = 0x3dadc82c;
  *(int32_t *)param_1[0xd2] = 0x3de6e87c;
  *(int32_t *)(param_1[0xd2] + 4) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xd2] + 8) = 0x4040004e;
  *(int32_t *)(param_1[0xd2] + 0xc) = 0x40ffffe5;
  *(int32_t *)(param_1[0xd2] + 0x10) = 0x3e4cccb7;
  *(int32_t *)(param_1[0xd2] + 0x14) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xd2] + 0x18) = 0x3f8cccbe;
  *(int32_t *)(param_1[0xd2] + 0x1c) = 0x3dccd068;
  *(int32_t *)param_1[0xd3] = 0x42dc0178;
  *(int32_t *)(param_1[0xd3] + 4) = 6;
  *(int32_t *)(param_1[0xd3] + 8) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xd3] + 0xc) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xd3] + 0x10) = 0x3fcccd13;
  *(int32_t *)(param_1[0xd3] + 0x14) = 0x412fffdd;
  *(int32_t *)(param_1[0xd3] + 0x18) = 0x40bfffec;
  *(int32_t *)(param_1[0xd3] + 0x1c) = 0x409fffef;
  *(int32_t *)param_1[0xd4] = 0x4347ffeb;
  *(int32_t *)(param_1[0xd4] + 4) = 0x4347ffeb;
  *(int32_t *)(param_1[0xd4] + 8) = 0x2f25ffab;
  *(int32_t *)(param_1[0xd4] + 0xc) = 0x43aeffee;
  *(int32_t *)(param_1[0xd4] + 0x10) = 0x3de1fafc;
  *(int32_t *)(param_1[0xd4] + 0x14) = 0x3e2c527b;
  *(int32_t *)(param_1[0xd4] + 0x18) = 0x3e8c8c7d;
  *(int32_t *)(param_1[0xd5] + 8) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xd4] + 0x1c) = 0x3e08887b;
  *(int32_t *)param_1[0xd5] = 0x3dc0c0ae;
  *(int32_t *)(param_1[0xd5] + 4) = 0x3da8a897;
  *(int32_t *)(param_1[0xd5] + 0x10) = 0x3cf5c275;
  *(int32_t *)(param_1[0xd5] + 0x18) = 0;
  *(int32_t *)(param_1[0xd5] + 0x1c) = 0x419fffef;
  *(int32_t *)(param_1[0xd6] + 4) = 0x3dcccd56;
  *(int32_t *)(param_1[0xd6] + 8) = 0x3f266654;
  *(int32_t *)(param_1[0xd6] + 0xc) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xd6] + 0x10) = 0x419fffef;
  *(int32_t *)(param_1[0xd6] + 0x18) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xd6] + 0x1c) = 0x3fffffe5;
  *(int32_t *)param_1[0xd7] = 0x3f7fffe5;
  *(int32_t *)(param_1[0xd7] + 4) = 0x409fff9f;
  *(int32_t *)(param_1[0xd7] + 8) = 0x3f3fffec;
  *(int32_t *)(param_1[0xd7] + 0xc) = 0x3f266654;
  *(int32_t *)(param_1[0xd7] + 0x10) = 0x3fbfffcb;
  *(int32_t *)(param_1[0xd7] + 0x14) = 0x4381fff2;
  *(int32_t *)(param_1[0xd7] + 0x18) = 0x44bb7fec;
  *(int32_t *)(param_1[0xd7] + 0x1c) = 0x459c3ff0;
  *(int32_t *)param_1[0xd8] = 0x44b3ffed;
  *(int32_t *)(param_1[0xd8] + 4) = 0x41efffe7;
  *(int32_t *)(param_1[0xd8] + 8) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xd8] + 0xc) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xd8] + 0x10) = 0x412002d0;
  *(int32_t *)(param_1[0xd8] + 0x14) = 0x4395ffbd;
  *(int32_t *)(param_1[0xd8] + 0x18) = 0x42c7ffeb;
  *(int32_t *)(param_1[0xd8] + 0x1c) = 0x3f333320;
  *(int32_t *)(param_1[0xd9] + 8) = 0;
  *(int32_t *)(param_1[0xd9] + 0x10) = 0;
  *(int32_t *)(param_1[0xd9] + 0x18) = 0;
  *(int32_t *)param_1[0xda] = 0x403fffec;
  *(int32_t *)(param_1[0xda] + 8) = 0x3975ff82;
  *(int32_t *)(param_1[0xda] + 0xc) = 0x369dffaf;
  *(int32_t *)(param_1[0xda] + 0x10) = 0x3702ffbd;
  *(int32_t *)(param_1[0xda] + 0x14) = 0xb682ffbd;
  *(int32_t *)(param_1[0xda] + 0x18) = 0;
  *(int32_t *)param_1[0xdb] = 0;
  *(int32_t *)(param_1[0xdb] + 4) = 0x3cf0f0a0;
  *(int32_t *)(param_1[0xdb] + 8) = 0x3d4d81f6;
  *(int32_t *)(param_1[0xdb] + 0xc) = 0x3db4b479;
  *(int32_t *)(param_1[0xdb] + 0x10) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xdb] + 0x14) = 0x403fffec;
  *(int32_t *)(param_1[0xdb] + 0x18) = 0x40ffffe5;
  *(int32_t *)(param_1[0xdb] + 0x1c) = 0x3f66664e;
  *(int32_t *)param_1[0xdc] = 0x3f7fffe5;
  *(int32_t *)(param_1[0xdc] + 4) = 0x3f8cccbe;
  *(int32_t *)(param_1[0xdc] + 8) = 0x3dccd068;
  *(int32_t *)(param_1[0xdc] + 0xc) = 0x42dbffe9;
  *(int32_t *)(param_1[0xdc] + 0x10) = 0x10;
  *(int32_t *)(param_1[0xdc] + 0x14) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xdc] + 0x18) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xdc] + 0x1c) = 0x3fccccb7;
  *(int32_t *)param_1[0xdd] = 0x29e5ff8a;
  *(int32_t *)(param_1[0xdd] + 4) = 0x40bfffec;
  *(int32_t *)(param_1[0xdd] + 8) = 0x409fffef;
  *(int32_t *)(param_1[0xdd] + 0xc) = 0x4347ffeb;
  *(int32_t *)(param_1[0xdd] + 0x10) = 0x4347ffeb;
  *(int32_t *)(param_1[0xdd] + 0x14) = 0x2f25ffab;
  *(int32_t *)(param_1[0xdd] + 0x18) = 0x43aeffee;
  *(int32_t *)(param_1[0xdd] + 0x1c) = 0x3e359db2;
  *(int32_t *)param_1[0xde] = 0x3e703dde;
  *(int32_t *)(param_1[0xde] + 4) = 0x3e991908;
  *(int32_t *)(param_1[0xde] + 0x14) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xde] + 8) = 0x3d70f0c7;
  *(int32_t *)(param_1[0xde] + 0xc) = 0x3d70f0c7;
  *(int32_t *)(param_1[0xde] + 0x10) = 0x3d70f0c7;
  *(int32_t *)(param_1[0xde] + 0x1c) = 0x3cf5c275;
  *(int32_t *)(param_1[0xdf] + 4) = 0;
  *(int32_t *)(param_1[0xdf] + 8) = 0x419fffef;
  *(int32_t *)(param_1[0xdf] + 0x10) = 0x3e7fffb0;
  *(int32_t *)(param_1[0xdf] + 0x14) = 0x3f266654;
  *(int32_t *)(param_1[0xdf] + 0x18) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xdf] + 0x1c) = 0x419fffef;
  *(int32_t *)(param_1[0xe0] + 4) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xe0] + 8) = 0x3fffffe5;
  *(int32_t *)(param_1[0xe0] + 0xc) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xe0] + 0x10) = 0x409fffef;
  *(int32_t *)(param_1[0xe0] + 0x14) = 0x3f3fffec;
  *(int32_t *)(param_1[0xe0] + 0x18) = 0x3f266654;
  *(int32_t *)(param_1[0xe0] + 0x1c) = 0x401fff9d;
  *(int32_t *)param_1[0xe1] = 0x4347ffeb;
  *(int32_t *)(param_1[0xe1] + 4) = 0x44ed7fe7;
  *(int32_t *)(param_1[0xe1] + 8) = 0x459c3ff0;
  *(int32_t *)(param_1[0xe1] + 0xc) = 0x44b3ffed;
  *(int32_t *)(param_1[0xe1] + 0x10) = 0x41efffe7;
  *(int32_t *)(param_1[0xe1] + 0x14) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xe1] + 0x18) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xe1] + 0x1c) = 0x4247ffeb;
  *(int32_t *)param_1[0xe2] = 0x4395fff0;
  *(int32_t *)(param_1[0xe2] + 4) = 0x43f9ffe6;
  *(int32_t *)(param_1[0xe2] + 8) = 0x3f333320;
  *(int32_t *)(param_1[0xe2] + 0xc) = 0x2643ff9c;
  *(int32_t *)(param_1[0xe2] + 0x14) = 0;
  *(int32_t *)(param_1[0xe2] + 0x1c) = 0;
  *(int32_t *)(param_1[0xe3] + 4) = 0;
  *(int32_t *)(param_1[0xe3] + 0xc) = 0x403fffec;
  *(int32_t *)(param_1[0xe3] + 0x14) = 0x3975ff82;
  *(int32_t *)(param_1[0xe3] + 0x18) = 0x361dffaf;
  *(int32_t *)(param_1[0xe3] + 0x1c) = 0x3602ffbd;
  *(int32_t *)(param_1[0xe4] + 4) = 0x3b3774c6;
  *(int32_t *)(param_1[0xe4] + 8) = 0x3b864e04;
  *(int32_t *)(param_1[0xe4] + 0xc) = 0x3bd8f985;
  *(int32_t *)(param_1[0xe4] + 0x10) = 0x3987f8c0;
  *(int32_t *)(param_1[0xe4] + 0x14) = 0x3ab75460;
  *(int32_t *)(param_1[0xe4] + 0x18) = 0x3b66ca7a;
  *(int32_t *)(param_1[0xe4] + 0x1c) = 0x3f7fffe5;
  *(int32_t *)param_1[0xe5] = 0x411fffef;
  *(int32_t *)(param_1[0xe5] + 4) = 0x3f19998a;
  *(int32_t *)(param_1[0xe5] + 8) = 0x3f66664e;
  *(int32_t *)(param_1[0xe5] + 0xc) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xe5] + 0x10) = 0x3fb33320;
  *(int32_t *)(param_1[0xe5] + 0x14) = 0x3dccd068;
  *(int32_t *)(param_1[0xe5] + 0x18) = 0x423fffec;
  *(int32_t *)(param_1[0xe5] + 0x1c) = 10;
  *(int32_t *)param_1[0xe6] = 0x3f7fffe5;
  *(int32_t *)(param_1[0xe6] + 4) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xe6] + 8) = 0x3f400034;
  *(int32_t *)(param_1[0xe6] + 0xc) = 0x41399986;
  *(int32_t *)(param_1[0xe6] + 0x10) = 0x40bfffec;
  *(int32_t *)(param_1[0xe6] + 0x14) = 0x409fffef;
  *(int32_t *)(param_1[0xe6] + 0x18) = 0x4347ffeb;
  *(int32_t *)(param_1[0xe6] + 0x1c) = 0x4347ffeb;
  *(int32_t *)param_1[0xe7] = 0x2f25ffab;
  *(int32_t *)(param_1[0xe7] + 4) = 0x43aeffee;
  *(int32_t *)(param_1[0xe7] + 8) = 0x3e028272;
  *(int32_t *)(param_1[0xe7] + 0xc) = 0x3e028272;
  *(int32_t *)(param_1[0xe7] + 0x10) = 0x3e028272;
  *(int32_t *)param_1[0xe8] = 0x3f7fffe5;
  *(int32_t *)(param_1[0xe7] + 0x14) = 0x3e0c8c7d;
  *(int32_t *)(param_1[0xe7] + 0x18) = 0x3de77dfb;
  *(int32_t *)(param_1[0xe7] + 0x1c) = 0x3dbb65fb;
  *(int32_t *)(param_1[0xe8] + 8) = 0;
  *(int32_t *)(param_1[0xe8] + 0x10) = 0;
  *(int32_t *)(param_1[0xe8] + 0x14) = 0x419fffef;
  *(int32_t *)(param_1[0xe8] + 0x18) = 0x2f4dff97;
  *(int32_t *)(param_1[0xe8] + 0x1c) = 0x3f7fffa4;
  *(int32_t *)param_1[0xe9] = 0x402c28e4;
  *(int32_t *)(param_1[0xe9] + 4) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xe9] + 8) = 0x419fffef;
  *(int32_t *)(param_1[0xe9] + 0x10) = 0x3f4cccb7;
  *(int32_t *)(param_1[0xe9] + 0x14) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xe9] + 0x18) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xe9] + 0x1c) = 0x3ca3d6f9;
  *(int32_t *)param_1[0xea] = 0x3f3fffec;
  *(int32_t *)(param_1[0xea] + 4) = 0x3f266654;
  *(int32_t *)(param_1[0xea] + 8) = 0x3effffe5;
  *(int32_t *)(param_1[0xea] + 0xc) = 0x43c7ffeb;
  *(int32_t *)(param_1[0xea] + 0x10) = 0x44bb7fec;
  *(int32_t *)(param_1[0xea] + 0x14) = 0x459c3ff0;
  *(int32_t *)(param_1[0xea] + 0x18) = 0x44b3ffed;
  *(int32_t *)(param_1[0xea] + 0x1c) = 0x41efffe7;
  *(int32_t *)param_1[0xeb] = 0x3f7fffe5;
  *(int32_t *)(param_1[0xeb] + 4) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xeb] + 8) = 0x41c7ffeb;
  *(int32_t *)(param_1[0xeb] + 0xc) = 0x411fffef;
  *(int32_t *)(param_1[0xeb] + 0x10) = 0x4347ffeb;
  *(int32_t *)(param_1[0xeb] + 0x18) = 0x2643ff9c;
  *(int32_t *)param_1[0xec] = 0;
  *(int32_t *)(param_1[0xec] + 8) = 0;
  *(int32_t *)(param_1[0xec] + 0x10) = 0;
  *(int32_t *)(param_1[0xec] + 0x18) = 0x403fffec;
  *(int32_t *)param_1[0xed] = 0x338fffb6;
  *(int32_t *)(param_1[0xed] + 4) = 0x2fefff85;
  *(int32_t *)(param_1[0xed] + 8) = 0x304dff97;
  *(int32_t *)(param_1[0xed] + 0x10) = 0x3b1d3e2e;
  *(int32_t *)(param_1[0xed] + 0x14) = 0x3b5ebc47;
  *(int32_t *)(param_1[0xed] + 0x18) = 0x3bab1990;
  *(int32_t *)(param_1[0xed] + 0x1c) = 0x3987f32f;
  *(int32_t *)param_1[0xee] = 0x3a6b934d;
  *(int32_t *)(param_1[0xee] + 4) = 0x3ac76e95;
  *(int32_t *)(param_1[0xee] + 8) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xee] + 0xc) = 0x411fffef;
  *(int32_t *)(param_1[0xee] + 0x10) = 0x3f19998a;
  *(int32_t *)(param_1[0xee] + 0x14) = 0x3f66664e;
  *(int32_t *)(param_1[0xee] + 0x18) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xee] + 0x1c) = 0x3fb33320;
  *(int32_t *)param_1[0xef] = 0x3dccd068;
  *(int32_t *)(param_1[0xef] + 4) = 0x423fffec;
  *(int32_t *)(param_1[0xef] + 8) = 10;
  *(int32_t *)(param_1[0xef] + 0xc) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xef] + 0x10) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xef] + 0x14) = 0x3f400034;
  *(int32_t *)(param_1[0xef] + 0x18) = 0x41399986;
  *(int32_t *)(param_1[0xef] + 0x1c) = 0x40bfffec;
  *(int32_t *)param_1[0xf0] = 0x409fffef;
  *(int32_t *)(param_1[0xf0] + 4) = 0x4347ffeb;
  *(int32_t *)(param_1[0xf0] + 8) = 0x4347ffeb;
  *(int32_t *)(param_1[0xf0] + 0xc) = 0x2f25ffab;
  *(int32_t *)(param_1[0xf0] + 0x10) = 0x43aeffee;
  *(int32_t *)(param_1[0xf0] + 0x14) = 0x3e028272;
  *(int32_t *)(param_1[0xf0] + 0x18) = 0x3e028272;
  *(int32_t *)(param_1[0xf0] + 0x1c) = 0x3e028272;
  *(int32_t *)(param_1[0xf1] + 0xc) = 0x3f7fffe5;
  *(int32_t *)param_1[0xf1] = 0x3e0c8c7d;
  *(int32_t *)(param_1[0xf1] + 4) = 0x3de77dfb;
  *(int32_t *)(param_1[0xf1] + 8) = 0x3dbb65fb;
  *(int32_t *)(param_1[0xf1] + 0x14) = 0;
  *(int32_t *)(param_1[0xf1] + 0x1c) = 0;
  *(int32_t *)param_1[0xf2] = 0x419fffef;
  *(int32_t *)(param_1[0xf2] + 8) = 0x3f7fffa4;
  *(int32_t *)(param_1[0xf2] + 0xc) = 0x402c28e4;
  *(int32_t *)(param_1[0xf2] + 0x10) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xf2] + 0x14) = 0x419fffef;
  *(int32_t *)(param_1[0xf2] + 0x1c) = 0x3f4cccb7;
  *(int32_t *)param_1[0xf3] = 0x3f7fffe5;
  *(int32_t *)(param_1[0xf3] + 4) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xf3] + 8) = 0x3ca3d6f9;
  *(int32_t *)(param_1[0xf3] + 0xc) = 0x3f3fffec;
  *(int32_t *)(param_1[0xf3] + 0x10) = 0x3f266654;
  *(int32_t *)(param_1[0xf3] + 0x14) = 0x3effffe5;
  *(int32_t *)(param_1[0xf3] + 0x18) = 0x43c7ffeb;
  *(int32_t *)(param_1[0xf3] + 0x1c) = 0x44bb7fec;
  *(int32_t *)param_1[0xf4] = 0x459c3ff0;
  *(int32_t *)(param_1[0xf4] + 4) = 0x44b3ffed;
  *(int32_t *)(param_1[0xf4] + 8) = 0x41efffe7;
  *(int32_t *)(param_1[0xf4] + 0xc) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xf4] + 0x10) = 0x3f7fffe5;
  *(int32_t *)(param_1[0xf4] + 0x14) = 0x420bfff1;
  *(int32_t *)(param_1[0xf4] + 0x18) = 0x411fffef;
  *(int32_t *)(param_1[0xf4] + 0x1c) = 0x4347ffeb;
  *(int32_t *)(param_1[0xf5] + 4) = 0x2673ff83;
  *(int32_t *)(param_1[0xf5] + 0xc) = 0;
  *(int32_t *)(param_1[0xf5] + 0x14) = 0;
  *(int32_t *)(param_1[0xf5] + 0x1c) = 0;
  *(int32_t *)(param_1[0xf6] + 4) = 0x403fffec;
  *(int32_t *)(param_1[0xf6] + 0xc) = 0x3193ffb4;
  *(int32_t *)(param_1[0xf6] + 0x10) = 0x2f15ffb3;
  *(int32_t *)(param_1[0xf6] + 0x14) = 0x2eebff87;
  return param_1;
}

