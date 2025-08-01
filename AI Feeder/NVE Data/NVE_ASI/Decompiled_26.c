#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_1800cfa40 ----
int32_t *
FUN_1800cfa40(int32_t *param_1,int32_t param_2,int32_t param_3,int32_t *param_4,
             ulonglong param_5,int32_t *param_6,ulonglong param_7)

{
  ulonglong uVar1;
  ulonglong uVar2;
  code *pcVar3;
  ulonglong uVar4;
  void *pvVar5;
  int32_t *puVar6;
  int32_t *puVar7;
  ulonglong uVar8;
  
  puVar7 = (int32_t *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  uVar8 = 0xf;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar2 = param_5 + param_7;
  puVar6 = param_1;
  if (uVar2 < 0x10) goto LAB_1800cfb0d;
  uVar8 = uVar2 | 0xf;
  if (uVar8 < 0x8000000000000000) {
    if (uVar8 < 0x16) {
      uVar8 = 0x16;
    }
    uVar1 = uVar8 + 1;
    if (uVar1 != 0) {
      if (0xfff < uVar1) {
        uVar4 = uVar8 + 0x28;
        if (uVar4 <= uVar1) {
          FUN_1800ba8a0();
          pcVar3 = (code *)swi(3);
          puVar6 = (int32_t *)(*pcVar3)();
          return puVar6;
        }
        goto LAB_1800cfab2;
      }
      puVar7 = (int32_t *)operator_new(uVar1);
    }
  }
  else {
    uVar4 = 0x8000000000000027;
    uVar8 = 0x7fffffffffffffff;
LAB_1800cfab2:
    pvVar5 = operator_new(uVar4);
    if (pvVar5 == (void *)0x0) {
      FUN_18012b7b4();
      pcVar3 = (code *)swi(3);
      puVar6 = (int32_t *)(*pcVar3)();
      return puVar6;
    }
    puVar7 = (int32_t *)((longlong)pvVar5 + 0x27U & 0xffffffffffffffe0);
    puVar7[-1] = pvVar5;
  }
  *param_1 = puVar7;
  puVar6 = puVar7;
LAB_1800cfb0d:
  param_1[2] = uVar2;
  param_1[3] = uVar8;
  FUN_180150fd0(puVar6,param_4,param_5);
  FUN_180150fd0((int32_t *)((longlong)puVar6 + param_5),param_6,param_7);
  *(int32_t *)((longlong)puVar6 + uVar2) = 0;
  return param_1;
}

// ---- Function: FUN_1800cfb70 ----
int32_t * FUN_1800cfb70(int32_t *param_1,ulonglong param_2)

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
  if ((uVar9 < 0x7fffffffffffffff) && (uVar3 <= 0x7ffffffffffffffe - (uVar3 >> 1))) {
    uVar1 = uVar3 + (uVar3 >> 1);
    uVar10 = uVar9;
    if (uVar9 < uVar1) {
      uVar10 = uVar1;
    }
    if (0x7fffffffffffffff < uVar10 + 1) goto LAB_1800cfcc9;
    _Var8 = (uVar10 + 1) * 2;
    if (_Var8 != 0) goto LAB_1800cfc09;
    puVar7 = (int32_t *)0x0;
  }
  else {
    _Var8 = 0xfffffffffffffffe;
LAB_1800cfc09:
    if (_Var8 < 0x1000) {
      puVar7 = (int32_t *)operator_new(_Var8);
    }
    else {
      if (_Var8 + 0x27 <= _Var8) {
LAB_1800cfcc9:
        FUN_1800ba8a0();
        pcVar5 = (code *)swi(3);
        puVar7 = (int32_t *)(*pcVar5)();
        return puVar7;
      }
      pvVar6 = operator_new(_Var8 + 0x27);
      if (pvVar6 == (void *)0x0) goto LAB_1800cfcc3;
      puVar7 = (int32_t *)((longlong)pvVar6 + 0x27U & 0xffffffffffffffe0);
      puVar7[-1] = pvVar6;
    }
  }
  param_1[2] = lVar2 + param_2;
  uVar9 = lVar2 * 2 + 2;
  param_1[3] = uVar10;
  if (uVar3 < 8) {
    FUN_180150fd0(puVar7,param_1,uVar9);
  }
  else {
    puVar4 = (int32_t *)*param_1;
    FUN_180150fd0(puVar7,puVar4,uVar9);
    puVar11 = puVar4;
    if ((0xfff < uVar3 * 2 + 2) &&
       (puVar11 = (int32_t *)puVar4[-1],
       0x1f < (ulonglong)((longlong)puVar4 + (-8 - (longlong)puVar11)))) {
LAB_1800cfcc3:
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

// ---- Function: FUN_1800cfce0 ----
uint * FUN_1800cfce0(uint *param_1,int32_t param_2,uint *param_3)

{
  short sVar1;
  longlong lVar2;
  longlong lVar3;
  uint *puVar4;
  int32_t *puVar5;
  ulonglong uVar6;
  uint *puVar7;
  longlong lVar8;
  uint *puVar9;
  
  lVar3 = DAT_1801fc920;
  lVar2 = *(longlong *)(param_3 + 4);
  puVar4 = param_3;
  if (7 < *(ulonglong *)(param_3 + 6)) {
    puVar4 = *(uint **)param_3;
  }
  if (((lVar2 == 0) ||
      (((3 < lVar2 * 2 && ((*puVar4 & 0xffffffdf) - 0x3a0041 < 0x1a)) || ((short)*puVar4 == 0x5c))))
     || ((short)*puVar4 == 0x2f)) {
    puVar4 = param_3;
    FUN_1800b9f10((int32_t *)param_1,&DAT_1801fc910);
    FUN_1800b84a0(param_1,param_3,puVar4);
    return param_1;
  }
  puVar7 = (uint *)&DAT_1801fc910;
  if (7 < DAT_1801fc928) {
    puVar7 = DAT_1801fc910;
  }
  if (DAT_1801fc920 == 2) {
    if (0x19 < (*puVar7 & 0xffffffdf) - 0x3a0041) {
LAB_1800cfdd4:
      sVar1 = *(short *)((longlong)puVar7 + DAT_1801fc920 * 2 + -2);
      if ((sVar1 != 0x5c) && (sVar1 != 0x2f)) {
        lVar8 = 1;
        goto LAB_1800cfd96;
      }
    }
  }
  else if (DAT_1801fc920 != 0) goto LAB_1800cfdd4;
  lVar8 = 0;
LAB_1800cfd96:
  uVar6 = lVar8 + DAT_1801fc920 + lVar2;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 7;
  param_1[7] = 0;
  *(int32_t *)param_1 = 0;
  if (uVar6 < 8) {
    *(ulonglong *)(param_1 + 4) = uVar6;
  }
  else {
    FUN_1800cfb70((int32_t *)param_1,uVar6);
  }
  puVar9 = param_1;
  if (7 < *(ulonglong *)(param_1 + 6)) {
    puVar9 = *(uint **)param_1;
  }
  FUN_180150fd0((int32_t *)puVar9,(int32_t *)puVar7,lVar3 * 2);
  puVar5 = (int32_t *)(lVar3 * 2 + (longlong)puVar9);
  if ((char)lVar8 != '\0') {
    *(int32_t *)puVar5 = 0x5c;
    puVar5 = (int32_t *)((longlong)puVar5 + 2);
  }
  FUN_180150fd0(puVar5,(int32_t *)puVar4,lVar2 * 2);
  *(ulonglong *)(param_1 + 4) = uVar6;
  puVar4 = param_1;
  if (7 < *(ulonglong *)(param_1 + 6)) {
    puVar4 = *(uint **)param_1;
  }
  *(int32_t *)((longlong)puVar4 + uVar6 * 2) = 0;
  return param_1;
}

// ---- Function: FUN_1800cfe80 ----
ios_base * FUN_1800cfe80(ios_base *param_1,uint param_2)

{
  *(int32_t ***)param_1 = &PTR_LAB_1801cc4d0;
  std::ios_base::_Ios_base_dtor(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_18012d5e8(param_1);
  }
  return param_1;
}

// ---- Function: FUN_1800cff00 ----
void FUN_1800cff00(ios_base *param_1)

{
  *(int32_t ***)param_1 = &PTR_LAB_1801cc4d0;
  std::ios_base::_Ios_base_dtor(param_1);
  return;
}

// ---- Function: FUN_1800cff20 ----
void FUN_1800cff20(int32_t *param_1)

{
  code *pcVar1;
  LPVOID pvVar2;
  int32_t auStack_c8 [32];
  int32_t local_a8;
  int32_t uStack_a0;
  longlong local_98 [3];
  int32_t uStack_80;
  longlong local_78 [3];
  int32_t uStack_60;
  LPVOID local_50;
  int32_t local_48;
  longlong lStack_40;
  int32_t local_38;
  HMODULE local_30;
  int32_t local_28;
  ulonglong local_18;
  
  local_18 = DAT_1801eb080 ^ (ulonglong)auStack_c8;
  local_30 = GetModuleHandleW((LPCWSTR)0x0);
  DAT_1801ee910 = local_30 + -0x50000000;
  local_98[1] = 0;
  local_98[2] = _DAT_1801d8f70;
  uStack_80 = _UNK_1801d8f78;
  local_98[0] = 0;
  local_78[1] = 0;
  local_78[2] = _DAT_1801d8f70;
  uStack_60 = _UNK_1801d8f78;
  local_78[0] = 0;
  local_50 = (LPVOID)0x0;
  local_48 = 0;
  lStack_40 = 0;
  local_38 = 0;
  local_28 = 0;
  local_a8 = *param_1;
  uStack_a0 = param_1[1];
  FUN_180117400(local_98,&local_a8);
  FUN_1801175d0(local_98,1);
  if (local_50 != (LPVOID)0x0) {
    pvVar2 = local_50;
    if ((0xfff < (lStack_40 - (longlong)local_50 & 0xfffffffffffffff8U)) &&
       (pvVar2 = *(LPVOID *)((longlong)local_50 + -8),
       0x1f < (ulonglong)((longlong)local_50 + (-8 - (longlong)pvVar2)))) {
      FUN_18012b7b4();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    thunk_FUN_18012d5e8(pvVar2);
    local_50 = (LPVOID)0x0;
    local_48 = 0;
    lStack_40 = 0;
  }
  FUN_1800a6800(local_78);
  FUN_1800a6800(local_98);
  FUN_1801252c0(local_18 ^ (ulonglong)auStack_c8);
  return;
}

// ---- Function: FUN_1800d0080 ----
void FUN_1800d0080(void)

{
  code *pcVar1;
  bool bVar2;
  HMODULE pHVar3;
  longlong lVar4;
  int *piVar5;
  int32_t *puVar6;
  int32_t *puVar7;
  longlong *plVar8;
  int32_t uVar9;
  int32_t auStack_108 [32];
  char *local_e8;
  int32_t local_e0;
  longlong local_d8 [3];
  int32_t uStack_c0;
  longlong local_b8 [3];
  int32_t uStack_a0;
  longlong *local_90;
  int32_t local_88;
  longlong lStack_80;
  int32_t local_78;
  HMODULE local_70;
  int32_t local_68;
  _MEMORYSTATUSEX local_58;
  ulonglong local_18;
  
  local_18 = DAT_1801eb080 ^ (ulonglong)auStack_108;
  pHVar3 = GetModuleHandleA("GTAV.ResourceAdjuster.asi");
  if (pHVar3 == (HMODULE)0x0) {
    local_70 = GetModuleHandleW((LPCWSTR)0x0);
    DAT_1801ee910 = local_70 + -0x50000000;
    local_d8[1] = 0;
    local_d8[2] = _DAT_1801d8f70;
    uStack_c0 = _UNK_1801d8f78;
    local_d8[0] = 0;
    local_b8[1] = 0;
    local_b8[2] = _DAT_1801d8f70;
    uStack_a0 = _UNK_1801d8f78;
    local_b8[0] = 0;
    uVar9 = 0;
    local_90 = (longlong *)0x0;
    local_88 = 0;
    lStack_80 = 0;
    local_78 = 0;
    local_68 = 0;
    local_e8 = "48 83 64 24 30 00 83 4C 24 28 FF 33 D2 48";
    local_e0 = 0x29;
    FUN_180117400(local_d8,&local_e8);
    FUN_1801175d0(local_d8,1);
    FUN_1801175d0(local_d8,0xffffffff);
    *(int32_t *)(*local_90 + -4) = 0xc3;
    if (local_90 != (longlong *)0x0) {
      plVar8 = local_90;
      if ((0xfff < (lStack_80 - (longlong)local_90 & 0xfffffffffffffff8U)) &&
         (plVar8 = (longlong *)local_90[-1],
         0x1f < (ulonglong)((longlong)local_90 + (-8 - (longlong)plVar8)))) {
        FUN_18012b7b4();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      thunk_FUN_18012d5e8(plVar8);
      local_90 = (longlong *)0x0;
      local_88 = 0;
      lStack_80 = 0;
    }
    FUN_1800a6800(local_b8);
    FUN_1800a6800(local_d8);
    local_e8 = "BA 00 00 05 00 48 8B C8 44 88";
    local_e0 = 0x1d;
    lVar4 = FUN_1800a68d0(&local_e8);
    *(int32_t *)(lVar4 + 1) = 0xa0000;
    *(int32_t *)(lVar4 + 0x17) = 0xa001b;
    local_e8 = "4C 63 C0 48 8D 05 ? ? ? ? 48 8D 14";
    local_e0 = 0x22;
    piVar5 = (int *)FUN_1800a68d0(&local_e8);
    DAT_1801fc940 = (longlong)piVar5 + (longlong)*piVar5 + 4;
    local_58.ullTotalPhys = 0;
    local_58.ullAvailPhys = 0;
    local_58.ullTotalPageFile = 0;
    local_58.ullAvailPageFile = 0;
    local_58.ullTotalVirtual = 0;
    local_58.ullAvailVirtual = 0;
    local_58.ullAvailExtendedVirtual = 0;
    local_58.dwLength = 0x40;
    local_58.dwMemoryLoad = 0;
    OpenGL_OpenGL_OpenGL_OpenGL_GlobalMemoryStatusEx(&local_58);
    bVar2 = true;
    if (0x7cfffffff < local_58.ullTotalPhys) {
      uVar9 = 0xe0000000;
    }
    if (local_58.ullTotalPhys < 0x5dc000000) {
      if (local_58.ullTotalPhys < 0x3e8000000) {
        if (local_58.ullTotalPhys < 0x2ee000000) {
          if (local_58.ullTotalPhys < 0x1f4000000) {
            bVar2 = false;
          }
          else {
            uVar9 = 0x40000000;
          }
        }
        else {
          uVar9 = 0x60000000;
        }
      }
      else {
        uVar9 = 0x80000000;
      }
    }
    else {
      uVar9 = 0xc0000000;
    }
    puVar6 = (int32_t *)(DAT_1801fc940 + 0x10);
    lVar4 = 0x14;
    do {
      puVar6[1] = 0xf1e00000;
      *puVar6 = 0xf1e00000;
      puVar6[-1] = 0xa1400000;
      puVar6[-2] = 0x78f00000;
      puVar6 = puVar6 + 4;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    if (bVar2) {
      local_e8 = "41 B8 00 00 00 40 48 8B D5 89";
      local_e0 = 0x1d;
      puVar7 = (int32_t *)FUN_1800a68d0(&local_e8);
      *puVar7 = uVar9;
    }
  }
  FUN_1801252c0(local_18 ^ (ulonglong)auStack_108);
  return;
}

// ---- Function: FUN_1800d0350 ----
void FUN_1800d0350(int32_t param_1)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  int32_t *puVar4;
  int32_t *puVar5;
  longlong lVar6;
  int32_t auStack_178 [32];
  char *local_158;
  char *local_150;
  char *local_148;
  char *local_138;
  longlong local_130;
  longlong local_128;
  ulonglong uStack_120;
  int32_t local_118;
  int32_t uStack_110;
  ulonglong local_108;
  int32_t uStack_100;
  int32_t local_f8;
  int32_t uStack_f0;
  int32_t local_e8;
  int32_t uStack_e0;
  int32_t local_d8;
  int32_t uStack_d0;
  int32_t local_c8;
  int32_t uStack_c0;
  int32_t local_b8;
  int32_t uStack_b0;
  int32_t local_a8;
  int32_t uStack_a0;
  int32_t local_98;
  int32_t uStack_90;
  int32_t local_88;
  int32_t uStack_80;
  int32_t local_78;
  int32_t local_74;
  int32_t local_70;
  ulonglong local_18;
  
  local_18 = DAT_1801eb080 ^ (ulonglong)auStack_178;
  iVar3 = FUN_18011ccf0();
  if (iVar3 < 0x945) {
    DAT_1801f3a19 = 1;
  }
  else {
    local_128 = _DAT_1801d9c60;
    uStack_120 = _UNK_1801d9c68;
    local_108 = _DAT_1801d9d80;
    uStack_100 = _UNK_1801d9d88;
    local_118 = _DAT_1801d9d20;
    uStack_110 = _UNK_1801d9d28;
    local_138 = (char *)((ulonglong)local_138 & 0xffffffff00000000);
    FUN_1800d84d0(param_1,&local_158,(int *)&local_138,&local_128);
    local_128 = _DAT_1801d9c50;
    uStack_120 = _UNK_1801d9c58;
    local_138._0_4_ = 1;
    local_108 = _DAT_1801d9bd0;
    uStack_100 = _UNK_1801d9bd8;
    local_118 = _DAT_1801d9cd0;
    uStack_110 = _UNK_1801d9cd8;
    FUN_1800d84d0(param_1,&local_158,(int *)&local_138,&local_128);
    local_128 = _DAT_1801d9c70;
    uStack_120 = _UNK_1801d9c78;
    local_138 = (char *)CONCAT44(local_138._4_4_,2);
    local_108 = _DAT_1801d9bd0;
    uStack_100 = _UNK_1801d9bd8;
    local_118 = _DAT_1801d9d10;
    uStack_110 = _UNK_1801d9d18;
    FUN_1800d84d0(param_1,&local_158,(int *)&local_138,&local_128);
    local_118 = CONCAT44(0x42,(int32_t)local_118);
    local_128 = 0;
    uStack_120 = 0;
    local_108 = _DAT_1801d9730;
    uStack_100 = _UNK_1801d9738;
    local_e8 = _DAT_1801d9850;
    uStack_e0 = _UNK_1801d9858;
    local_118 = local_118 & 0xffffffffffff0000;
    uStack_110 = 0x5100000055;
    local_f8 = _DAT_1801d9a40;
    uStack_f0 = _UNK_1801d9a48;
    local_d8 = 0x3400000076;
    local_138 = FUN_1800d7af0((char *)&local_128);
    lVar6 = -1;
    local_130 = -1;
    do {
      local_130 = local_130 + 1;
    } while (local_138[local_130] != '\0');
    puVar4 = (int32_t *)FUN_1800a68d0(&local_138);
    local_138 = (char *)CONCAT26(local_138._6_2_,0x157413087883);
    local_158 = (char *)operator_new(6);
    pcVar1 = local_158 + 6;
    local_148 = pcVar1;
    FUN_180150fd0((int32_t *)local_158,&local_138,6);
    local_150 = pcVar1;
    FUN_1800d8620(puVar4,(longlong *)&local_158);
    FUN_1800d0c10();
    local_f8 = _DAT_1801d95e0;
    uStack_f0 = _UNK_1801d95e8;
    local_128 = 0;
    uStack_120 = 0;
    local_108 = _DAT_1801d9420;
    uStack_100 = _UNK_1801d9428;
    local_e8 = _DAT_1801d95f0;
    uStack_e0 = _UNK_1801d95f8;
    local_118 = local_118 & 0xffffff0000000000;
    uStack_110 = 0x5a00000068;
    local_d8 = _DAT_1801d9410;
    uStack_d0 = _UNK_1801d9418;
    local_c8 = 0x100000035;
    local_158 = FUN_1800d1820((char *)&local_128);
    local_150 = (char *)0xffffffffffffffff;
    do {
      local_150 = (char *)((longlong)local_150 + 1);
    } while (local_158[(longlong)local_150] != '\0');
    puVar5 = (int32_t *)FUN_1800a68d0(&local_158);
    VirtualProtect(puVar5,0x10,0x40,(PDWORD)&local_138);
    *puVar5 = 0x9f;
    VirtualProtect(puVar5,0x10,(DWORD)local_138,(PDWORD)&local_138);
    if (DAT_1801f3a17 != '\0') {
      FUN_1800d1410();
    }
    if (((DAT_1801f3a1c != '\0') || (DAT_1801f3a1b != '\0')) || (DAT_1801f3a1a != '\0')) {
      puVar4 = FUN_1800d38c0(&local_128);
      local_158 = (char *)FUN_1800d34e0((longlong)puVar4);
      local_150 = (char *)0xffffffffffffffff;
      do {
        local_150 = (char *)((longlong)local_150 + 1);
      } while (local_158[(longlong)local_150] != '\0');
      puVar4 = (int32_t *)FUN_1800a68d0(&local_158);
      FUN_180121510(puVar4,FUN_1800d15f0,&DAT_1801fc960);
      local_c8 = _DAT_1801d9380;
      uStack_c0 = _UNK_1801d9388;
      local_128 = 0;
      uStack_120 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_108 = local_108 & 0xffff000000000000;
      local_f8 = _DAT_1801d9a30;
      uStack_f0 = _UNK_1801d9a38;
      local_e8 = _DAT_1801d9a30;
      uStack_e0 = _UNK_1801d9a38;
      local_d8 = _DAT_1801d9150;
      uStack_d0 = _UNK_1801d9158;
      local_b8 = _DAT_1801d9390;
      uStack_b0 = _UNK_1801d9398;
      local_a8 = _DAT_1801d9140;
      uStack_a0 = _UNK_1801d9148;
      local_98 = _DAT_1801d9360;
      uStack_90 = _UNK_1801d9368;
      uStack_100 = 0x6b00000028;
      local_88 = _DAT_1801d9370;
      uStack_80 = _UNK_1801d9378;
      local_78 = 6;
      local_74 = 0x1f;
      local_70 = 0x1f;
      local_158 = FUN_1800d2130((char *)&local_128);
      local_150 = (char *)0xffffffffffffffff;
      do {
        local_150 = (char *)((longlong)local_150 + 1);
      } while (local_158[(longlong)local_150] != '\0');
      puVar5 = (int32_t *)FUN_1800a68d0(&local_158);
      VirtualProtect(puVar5,2,0x40,(PDWORD)&local_138);
      *puVar5 = 0x30;
      VirtualProtect(puVar5,2,(DWORD)local_138,(PDWORD)&local_138);
    }
    local_e8 = _DAT_1801d97a0;
    uStack_e0 = _UNK_1801d97a8;
    local_128 = 0;
    uStack_120 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_108 = 0x4f00000000;
    local_f8 = _DAT_1801d97f0;
    uStack_f0 = _UNK_1801d97f8;
    local_d8 = _DAT_1801d99c0;
    uStack_d0 = _UNK_1801d99c8;
    local_c8 = _DAT_1801d9800;
    uStack_c0 = _UNK_1801d9808;
    local_b8 = _DAT_1801d9460;
    uStack_b0 = _UNK_1801d9468;
    local_a8 = _DAT_1801d99d0;
    uStack_a0 = _UNK_1801d99d8;
    local_98 = _DAT_1801d9810;
    uStack_90 = _UNK_1801d9818;
    uStack_100 = 0x6500000064;
    local_88 = _DAT_1801d93d0;
    uStack_80 = _UNK_1801d93d8;
    local_158 = FUN_1800d2b50((char *)&local_128);
    local_150 = (char *)0xffffffffffffffff;
    do {
      local_150 = local_150 + 1;
    } while (local_158[(longlong)local_150] != '\0');
    puVar4 = (int32_t *)FUN_1800a68d0(&local_158);
    FUN_180121510(puVar4,&LAB_1800d1650,&DAT_1801fc968);
    if (DAT_1801f3a16 != '\0') {
      local_f8 = _DAT_1801d91d0;
      uStack_f0 = _UNK_1801d91d8;
      local_128 = 0;
      uStack_120 = 0;
      local_118 = 0;
      local_108 = _DAT_1801d96b0;
      uStack_100 = _UNK_1801d96b8;
      local_e8 = _DAT_1801d9120;
      uStack_e0 = _UNK_1801d9128;
      local_d8 = _DAT_1801d9170;
      uStack_d0 = _UNK_1801d9178;
      local_c8 = _DAT_1801d91f0;
      uStack_c0 = _UNK_1801d91f8;
      uVar2 = (uint)uStack_110;
      uStack_110 = CONCAT44(0x46,uVar2 & 0xff000000);
      local_b8 = _DAT_1801d9970;
      uStack_b0 = _UNK_1801d9978;
      local_a8 = CONCAT44(local_a8._4_4_,0x5f);
      local_158 = FUN_1800d7430((char *)&local_128);
      local_150 = (char *)0xffffffffffffffff;
      do {
        local_150 = (char *)((longlong)local_150 + 1);
      } while (local_158[(longlong)local_150] != '\0');
      puVar4 = (int32_t *)FUN_1800a68d0(&local_158);
      local_138 = (char *)CONCAT53(local_138._3_5_,0xb540);
      local_158 = (char *)operator_new(3);
      pcVar1 = local_158 + 3;
      local_148 = pcVar1;
      FUN_180150fd0((int32_t *)local_158,&local_138,3);
      local_150 = pcVar1;
      FUN_1800d8620(puVar4,(longlong *)&local_158);
    }
    local_118 = _DAT_1801d9a50;
    uStack_110 = _UNK_1801d9a58;
    local_f8 = _DAT_1801d98b0;
    uStack_f0 = _UNK_1801d98b8;
    local_128 = 0;
    uStack_120 = uStack_120 & 0xff00000000000000;
    local_108 = _DAT_1801d90d0;
    uStack_100 = _UNK_1801d90d8;
    local_e8 = 0x1500000008;
    local_158 = FUN_1800d1d80((char *)&local_128);
    local_150 = (char *)0xffffffffffffffff;
    do {
      local_150 = (char *)((longlong)local_150 + 1);
    } while (local_158[(longlong)local_150] != '\0');
    puVar4 = (int32_t *)FUN_1800a68d0(&local_158);
    local_138._0_6_ = 0x909090909090;
    local_158 = (char *)operator_new(6);
    pcVar1 = local_158 + 6;
    local_148 = pcVar1;
    FUN_180150fd0((int32_t *)local_158,&local_138,6);
    local_150 = pcVar1;
    FUN_1800d8620(puVar4,(longlong *)&local_158);
    local_118 = CONCAT44(2,(int32_t)local_118);
    local_128 = 0;
    uStack_120 = 0;
    local_108 = _DAT_1801d92b0;
    uStack_100 = _UNK_1801d92b8;
    local_e8 = _DAT_1801d9750;
    uStack_e0 = _UNK_1801d9758;
    local_118 = local_118 & 0xffffffffffff0000;
    uStack_110 = 0x4700000040;
    local_f8 = _DAT_1801d9210;
    uStack_f0 = _UNK_1801d9218;
    local_d8 = 0x5a00000026;
    local_158 = FUN_1800d7f60((char *)&local_128);
    do {
      lVar6 = lVar6 + 1;
    } while (local_158[lVar6] != '\0');
    local_150 = (char *)lVar6;
    puVar4 = (int32_t *)FUN_1800a68d0(&local_158);
    local_138 = (char *)CONCAT26(local_138._6_2_,0x157413087883);
    local_158 = (char *)operator_new(6);
    pcVar1 = local_158 + 6;
    local_148 = pcVar1;
    FUN_180150fd0((int32_t *)local_158,&local_138,6);
    local_150 = pcVar1;
    FUN_1800d8620(puVar4,(longlong *)&local_158);
    local_150 = (char *)0x2f;
    local_158 = "48 8B C4 48 89 58 08 57 48 81 EC C0 00 00 00 F3";
    puVar4 = (int32_t *)FUN_1800a68d0(&local_158);
    FUN_180121510(puVar4,&LAB_1800d1790,(longlong *)&DAT_1801fc980);
    local_150 = (char *)0x1d;
    local_158 = "40 53 48 81 EC 80 00 00 00 4C";
    puVar4 = (int32_t *)FUN_1800a68d0(&local_158);
    FUN_180121510(puVar4,&LAB_1800d1810,&DAT_1801fc988);
    local_150 = (char *)0x1c;
    local_158 = "4C 8D 0D ? ? ? ? 4C 8D 45 28";
    lVar6 = FUN_1800a68d0(&local_158);
    DAT_1801fc978 = lVar6 + 7 + (longlong)*(int *)(lVar6 + 3);
  }
  FUN_1801252c0(local_18 ^ (ulonglong)auStack_178);
  return;
}

// ---- Function: FUN_1800d0c10 ----
void FUN_1800d0c10(void)

{
  int32_t *puVar1;
  int *piVar2;
  int32_t *lpAddress;
  ushort *lpAddress_00;
  int32_t *lpAddress_01;
  longlong lVar3;
  int iVar4;
  char *pcVar5;
  int32_t auStack_1d8 [32];
  DWORD local_1b8 [4];
  char *local_1a8;
  longlong local_1a0;
  char local_198 [16];
  ulonglong local_188;
  int32_t uStack_180;
  int32_t local_178;
  int32_t uStack_170;
  int32_t local_168;
  int32_t uStack_160;
  int32_t local_158;
  int32_t uStack_150;
  int32_t local_148;
  int32_t uStack_140;
  int32_t local_138;
  int32_t uStack_130;
  int32_t local_128;
  int32_t uStack_120;
  int32_t local_118;
  int32_t uStack_110;
  int32_t local_108;
  int32_t uStack_100;
  int32_t local_f8;
  int32_t uStack_f0;
  int32_t local_e8;
  int32_t uStack_e0;
  int32_t local_d8;
  int32_t uStack_d0;
  int32_t local_c8;
  ulonglong local_18;
  
  local_18 = DAT_1801eb080 ^ (ulonglong)auStack_1d8;
  local_1a8 = (char *)FUN_1800d7390((int32_t *)local_198);
  lVar3 = 0x25;
  pcVar5 = local_1a8;
  piVar2 = (int *)(local_1a8 + 0x50);
  do {
    iVar4 = ((0x69 - piVar2[-1]) * 0x28) % 0x7f + 0x7f;
    *pcVar5 = (char)iVar4 +
              (((char)(iVar4 / 0x7f) + (char)(iVar4 >> 0x1f)) -
              (char)((longlong)iVar4 * 0x81020409 >> 0x3f)) * -0x7f;
    iVar4 = ((0x69 - *piVar2) * 0x28) % 0x7f + 0x7f;
    pcVar5[1] = (char)iVar4 +
                (((char)(iVar4 / 0x7f) + (char)(iVar4 >> 0x1f)) -
                (char)((longlong)iVar4 * 0x81020409 >> 0x3f)) * -0x7f;
    lVar3 = lVar3 + -1;
    pcVar5 = pcVar5 + 2;
    piVar2 = piVar2 + 2;
  } while (lVar3 != 0);
  lVar3 = -1;
  local_1a8[0x4a] = '\0';
  local_1a0 = -1;
  do {
    local_1a0 = local_1a0 + 1;
  } while (local_1a8[local_1a0] != '\0');
  puVar1 = (int32_t *)FUN_1800a68d0(&local_1a8);
  FUN_180121510(puVar1,&LAB_1800d0bf0,&DAT_1801fc948);
  local_158 = _DAT_1801d94f0;
  uStack_150 = _UNK_1801d94f8;
  local_198[0] = '\0';
  local_198[1] = '\0';
  local_198[2] = '\0';
  local_198[3] = '\0';
  local_198[4] = '\0';
  local_198[5] = '\0';
  local_198[6] = '\0';
  local_198[7] = '\0';
  local_198[8] = '\0';
  local_198[9] = '\0';
  local_198[10] = '\0';
  local_198[0xb] = '\0';
  local_198[0xc] = '\0';
  local_198[0xd] = '\0';
  local_198[0xe] = '\0';
  local_198[0xf] = '\0';
  local_178 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_168 = _DAT_1801d9500;
  uStack_160 = _UNK_1801d9508;
  local_148 = _DAT_1801d9940;
  uStack_140 = _UNK_1801d9948;
  local_138 = _DAT_1801d9510;
  uStack_130 = _UNK_1801d9518;
  local_128 = _DAT_1801d93c0;
  uStack_120 = _UNK_1801d93c8;
  local_118 = _DAT_1801d93b0;
  uStack_110 = _UNK_1801d93b8;
  local_108 = _DAT_1801d9af0;
  uStack_100 = _UNK_1801d9af8;
  local_f8 = _DAT_1801d98a0;
  uStack_f0 = _UNK_1801d98a8;
  local_e8 = _DAT_1801d9520;
  uStack_e0 = _UNK_1801d9528;
  uStack_170._0_4_ = (uint)uStack_170 & 0xff000000;
  uStack_170 = CONCAT44(0x14,(uint)uStack_170);
  local_d8 = _DAT_1801d9660;
  uStack_d0 = _UNK_1801d9668;
  local_c8 = 9;
  local_1a8 = FUN_1800d6880(local_198);
  local_1a0 = -1;
  do {
    local_1a0 = local_1a0 + 1;
  } while (local_1a8[local_1a0] != '\0');
  piVar2 = (int *)FUN_1800a68d0(&local_1a8);
  FUN_180121510((int32_t *)((longlong)piVar2 + (longlong)*piVar2 + 4),&LAB_1800d0c00,
                &DAT_1801fc950);
  local_168 = _DAT_1801d94e0;
  uStack_160 = _UNK_1801d94e8;
  local_198[0] = '\0';
  local_198[1] = '\0';
  local_198[2] = '\0';
  local_198[3] = '\0';
  local_198[4] = '\0';
  local_198[5] = '\0';
  local_198[6] = '\0';
  local_198[7] = '\0';
  local_198[8] = '\0';
  local_198[9] = '\0';
  local_198[10] = '\0';
  local_198[0xb] = '\0';
  local_198[0xc] = '\0';
  local_198[0xd] = '\0';
  local_198[0xe] = '\0';
  local_198[0xf] = '\0';
  local_188 = 0;
  local_178 = _DAT_1801d9930;
  uStack_170 = _UNK_1801d9938;
  local_158 = _DAT_1801d9a90;
  uStack_150 = _UNK_1801d9a98;
  local_148 = _DAT_1801d9430;
  uStack_140 = _UNK_1801d9438;
  local_138 = _DAT_1801d94d0;
  uStack_130 = _UNK_1801d94d8;
  uStack_180._0_4_ = (uint)uStack_180 & 0xff000000;
  uStack_180._4_4_ = 0x28;
  local_128 = _DAT_1801d9650;
  uStack_120 = _UNK_1801d9658;
  local_118 = CONCAT44(local_118._4_4_,0x41);
  local_1a8 = FUN_1800d61c0(local_198);
  local_1a0 = -1;
  do {
    local_1a0 = local_1a0 + 1;
  } while (local_1a8[local_1a0] != '\0');
  piVar2 = (int *)FUN_1800a68d0(&local_1a8);
  uStack_160 = _UNK_1801d9ac8;
  local_168 = _DAT_1801d9ac0;
  _DAT_1801ee8f0 = (ushort *)((longlong)piVar2 + (longlong)*piVar2 + 4);
  *_DAT_1801ee8f0 = *_DAT_1801ee8f0 | 0x40;
  local_198[0] = '\0';
  local_198[1] = '\0';
  local_198[2] = '\0';
  local_198[3] = '\0';
  local_198[4] = '\0';
  local_198[5] = '\0';
  local_198[6] = '\0';
  local_198[7] = '\0';
  local_198[8] = '\0';
  local_198[9] = '\0';
  local_198[10] = '\0';
  local_198[0xb] = '\0';
  local_198[0xc] = '\0';
  local_198[0xd] = '\0';
  local_198[0xe] = '\0';
  local_198[0xf] = '\0';
  local_188 = 0;
  local_178 = _DAT_1801d9820;
  uStack_170 = _UNK_1801d9828;
  local_158 = _DAT_1801d99e0;
  uStack_150 = _UNK_1801d99e8;
  local_138 = _DAT_1801d9580;
  uStack_130 = _UNK_1801d9588;
  local_148 = _DAT_1801d9830;
  uStack_140 = _UNK_1801d9838;
  local_118 = _DAT_1801d9590;
  uStack_110 = _UNK_1801d9598;
  uStack_180 = (ulonglong)uStack_180._6_2_ << 0x30;
  local_128 = _DAT_1801d99f0;
  uStack_120 = _UNK_1801d99f8;
  local_108 = CONCAT44(local_108._4_4_,0x37);
  local_1a8 = FUN_1800d59f0(local_198);
  local_1a0 = -1;
  do {
    local_1a0 = local_1a0 + 1;
  } while (local_1a8[local_1a0] != '\0');
  lpAddress = (int32_t *)FUN_1800a68d0(&local_1a8);
  VirtualProtect(lpAddress,0x10,0x40,local_1b8);
  *lpAddress = 7;
  VirtualProtect(lpAddress,0x10,local_1b8[0],local_1b8);
  local_168 = _DAT_1801d9220;
  uStack_160 = _UNK_1801d9228;
  local_198[0] = '\0';
  local_198[1] = '\0';
  local_198[2] = '\0';
  local_198[3] = '\0';
  local_198[4] = '\0';
  local_198[5] = '\0';
  local_198[6] = '\0';
  local_198[7] = '\0';
  local_198[8] = '\0';
  local_198[9] = '\0';
  local_198[10] = '\0';
  local_198[0xb] = '\0';
  local_198[0xc] = '\0';
  local_198[0xd] = '\0';
  local_198[0xe] = '\0';
  local_198[0xf] = '\0';
  local_178 = _DAT_1801d95d0;
  uStack_170 = _UNK_1801d95d8;
  local_158 = _DAT_1801d9200;
  uStack_150 = _UNK_1801d9208;
  local_188 = local_188 & 0xffffff0000000000;
  uStack_180 = 0x3700000069;
  local_148 = _DAT_1801d95c0;
  uStack_140 = _UNK_1801d95c8;
  local_138 = 0x2d00000014;
  local_1a8 = FUN_1800d54c0(local_198);
  local_1a0 = -1;
  do {
    local_1a0 = local_1a0 + 1;
  } while (local_1a8[local_1a0] != '\0');
  lpAddress_00 = (ushort *)FUN_1800a68d0(&local_1a8);
  VirtualProtect(lpAddress_00,0x10,0x40,local_1b8);
  *lpAddress_00 = *lpAddress_00 | 0x40;
  VirtualProtect(lpAddress_00,0x10,local_1b8[0],local_1b8);
  local_198[0] = '\0';
  local_198[1] = '\0';
  local_198[2] = '\0';
  local_198[3] = '\0';
  local_198[4] = '\0';
  local_198[5] = '\0';
  local_198[6] = '\0';
  local_198[7] = '\0';
  local_198[8] = '\0';
  local_198[9] = '\0';
  local_198[10] = '\0';
  local_198[0xb] = '\0';
  local_198[0xc] = '\0';
  local_198[0xd] = '\0';
  local_198[0xe] = '\0';
  local_198[0xf] = '\0';
  local_178 = CONCAT44(4,(int32_t)local_178);
  local_188 = 0;
  uStack_180 = 0;
  local_178 = local_178 & 0xffffffffffffff00;
  local_168 = _DAT_1801d9a70;
  uStack_160 = _UNK_1801d9a78;
  local_138 = _DAT_1801d9100;
  uStack_130 = _UNK_1801d9108;
  local_158 = _DAT_1801d9aa0;
  uStack_150 = _UNK_1801d9aa8;
  local_108 = _DAT_1801d9a80;
  uStack_100 = _UNK_1801d9a88;
  uStack_170 = 0x2200000066;
  local_148 = _DAT_1801d93a0;
  uStack_140 = _UNK_1801d93a8;
  local_128 = _DAT_1801d9980;
  uStack_120 = _UNK_1801d9988;
  local_118 = _DAT_1801d93a0;
  uStack_110 = _UNK_1801d93a8;
  local_f8 = CONCAT44(local_f8._4_4_,0x75);
  local_1a8 = FUN_1800d4c60(local_198);
  do {
    lVar3 = lVar3 + 1;
  } while (local_1a8[lVar3] != '\0');
  local_1a0 = lVar3;
  lpAddress_01 = (int32_t *)FUN_1800a68d0(&local_1a8);
  VirtualProtect(lpAddress_01,0x10,0x40,local_1b8);
  *lpAddress_01 = 9;
  VirtualProtect(lpAddress_01,0x10,local_1b8[0],local_1b8);
  FUN_1801252c0(local_18 ^ (ulonglong)auStack_1d8);
  return;
}

// ---- Function: FUN_1800d11d0 ----
void FUN_1800d11d0(int32_t param_1,int32_t param_2)

{
  int32_t uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  int32_t *puVar17;
  int32_t *puVar18;
  longlong *plVar19;
  int local_res18 [2];
  int local_res20 [2];
  longlong *local_68;
  int32_t uStack_60;
  longlong *local_58;
  uint uStack_50;
  int32_t uStack_4c;
  
  plVar14 = DAT_1801fb320;
  plVar15 = (longlong *)DAT_1801fb320[1];
  puVar18 = (int32_t *)0x0;
  uStack_50 = 0;
  cVar2 = *(char *)((longlong)plVar15 + 0x19);
  local_58 = plVar15;
  plVar16 = DAT_1801fb320;
  while (plVar9 = plVar15, cVar2 == '\0') {
    bVar3 = DAT_1801f3b14 <= *(int *)((longlong)plVar9 + 0x1c);
    plVar15 = plVar9;
    plVar19 = plVar9;
    if (!bVar3) {
      plVar15 = plVar9 + 2;
      plVar19 = plVar16;
    }
    uStack_50 = (uint)bVar3;
    cVar2 = *(char *)(*plVar15 + 0x19);
    plVar15 = (longlong *)*plVar15;
    local_58 = plVar9;
    plVar16 = plVar19;
  }
  if ((*(char *)((longlong)plVar16 + 0x19) != '\0') ||
     (DAT_1801f3b14 < *(int *)((longlong)plVar16 + 0x1c))) {
    if (DAT_1801fb328 == 0x333333333333333) {
      FUN_1800d8950();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_68 = (longlong *)&DAT_1801fb320;
    uStack_60 = 0;
    plVar15 = (longlong *)operator_new(0x50);
    *(int *)((longlong)plVar15 + 0x1c) = DAT_1801f3b14;
    plVar15[4] = 0;
    plVar15[5] = 0;
    plVar15[6] = 0;
    plVar15[7] = 0;
    plVar15[8] = 0;
    plVar15[9] = 0;
    *plVar15 = (longlong)plVar14;
    plVar15[1] = (longlong)plVar14;
    plVar15[2] = (longlong)plVar14;
    *(int32_t *)(plVar15 + 3) = 0;
    uStack_60 = CONCAT44(uStack_4c,uStack_50);
    local_68 = local_58;
    puVar18 = &DAT_1801fb320;
    plVar16 = FUN_1800d86d0((longlong *)&DAT_1801fb320,(longlong *)&local_68,plVar15);
  }
  puVar17 = DAT_1801ee8f8;
  lVar10 = plVar16[4];
  uVar1 = *(int32_t *)((longlong)plVar16 + 0x24);
  lVar11 = plVar16[5];
  uVar5 = *(int32_t *)((longlong)plVar16 + 0x2c);
  lVar12 = plVar16[6];
  uVar6 = *(int32_t *)((longlong)plVar16 + 0x34);
  lVar13 = plVar16[7];
  uVar7 = *(int32_t *)((longlong)plVar16 + 0x3c);
  uVar8 = *(int32_t *)((longlong)plVar16 + 0x4c);
  DAT_1801ee8f8[10] = (int)plVar16[9];
  puVar17[0xb] = uVar8;
  *puVar17 = (int)lVar10;
  puVar17[1] = uVar1;
  puVar17[2] = (int)lVar11;
  puVar17[3] = uVar5;
  if (DAT_1801f3a17 != '\0') {
    local_res18[0] = 2;
    plVar15 = FUN_1800d83d0(puVar18,local_res18);
    uVar1 = *(int32_t *)((longlong)plVar15 + 0xc);
    local_res20[0] = 2;
    plVar15 = FUN_1800d83d0(puVar18,local_res20);
    puVar17 = DAT_1801ee8f8;
    DAT_1801ee8f8[2] = (int)plVar15[1];
    puVar17[3] = uVar1;
    local_res18[0] = 2;
    plVar15 = FUN_1800d83d0(puVar18,local_res18);
    uVar1 = *(int32_t *)((longlong)plVar15 + 0x24);
    local_res20[0] = 2;
    plVar15 = FUN_1800d83d0(puVar18,local_res20);
    puVar17 = DAT_1801ee8f8;
    DAT_1801ee8f8[8] = (int)plVar15[4];
    puVar17[9] = uVar1;
  }
  puVar17[4] = (int)lVar12;
  puVar17[5] = uVar6;
  puVar17[6] = (int)lVar13;
  puVar17[7] = uVar7;
                    
                    
  (*DAT_1801fc958)(param_1,param_2);
  return;
}

// ---- Function: FUN_1800d1410 ----
void FUN_1800d1410(void)

{
  int *piVar1;
  int32_t *puVar2;
  longlong lVar3;
  int32_t auStack_128 [32];
  char *local_108;
  longlong local_100;
  char local_f8 [32];
  int32_t local_d8;
  int32_t uStack_d0;
  int32_t local_c8;
  int32_t uStack_c0;
  int32_t local_b8;
  int32_t uStack_b0;
  int32_t local_a8;
  int32_t uStack_a0;
  int32_t local_98;
  int32_t uStack_90;
  int32_t local_88;
  int32_t uStack_80;
  int32_t local_78;
  int32_t uStack_70;
  int32_t local_68;
  int32_t uStack_60;
  int32_t local_58;
  int32_t uStack_50;
  int32_t local_48;
  int32_t uStack_40;
  int32_t local_38;
  int32_t uStack_30;
  int32_t local_28;
  ulonglong local_18;
  
  local_18 = DAT_1801eb080 ^ (ulonglong)auStack_128;
  local_b8 = _DAT_1801d98f0;
  uStack_b0 = _UNK_1801d98f8;
  local_f8[0] = '\0';
  local_f8[1] = '\0';
  local_f8[2] = '\0';
  local_f8[3] = '\0';
  local_f8[4] = '\0';
  local_f8[5] = '\0';
  local_f8[6] = '\0';
  local_f8[7] = '\0';
  local_f8[8] = '\0';
  local_f8[9] = '\0';
  local_f8[10] = '\0';
  local_f8[0xb] = '\0';
  local_f8[0xc] = '\0';
  local_f8[0xd] = '\0';
  local_f8[0xe] = '\0';
  local_f8[0xf] = '\0';
  local_d8 = 0;
  local_f8[0x10] = '\0';
  local_f8[0x11] = '\0';
  local_f8[0x12] = '\0';
  local_f8[0x13] = '\0';
  local_f8[0x14] = '\0';
  local_f8[0x15] = '\0';
  local_f8[0x16] = '\0';
  local_f8[0x17] = '\0';
  local_f8[0x18] = '\0';
  local_f8[0x19] = '\0';
  local_f8[0x1a] = '\0';
  local_f8[0x1b] = '\0';
  local_f8[0x1c] = '\0';
  local_f8[0x1d] = '\0';
  local_f8[0x1e] = '\0';
  local_f8[0x1f] = '\0';
  local_c8 = _DAT_1801d9340;
  uStack_c0 = _UNK_1801d9348;
  local_a8 = _DAT_1801d9900;
  uStack_a0 = _UNK_1801d9908;
  local_98 = _DAT_1801d9900;
  uStack_90 = _UNK_1801d9908;
  local_88 = _DAT_1801d9190;
  uStack_80 = _UNK_1801d9198;
  local_68 = _DAT_1801d9450;
  uStack_60 = _UNK_1801d9458;
  local_58 = _DAT_1801d9450;
  uStack_50 = _UNK_1801d9458;
  local_78 = _DAT_1801d9670;
  uStack_70 = _UNK_1801d9678;
  local_48 = _DAT_1801d98e0;
  uStack_40 = _UNK_1801d98e8;
  uStack_d0._0_4_ = (uint)uStack_d0 & 0xff000000;
  uStack_d0 = CONCAT44(0x2b,(uint)uStack_d0);
  local_38 = _DAT_1801d9350;
  uStack_30 = _UNK_1801d9358;
  local_28 = 0x4e;
  local_108 = FUN_1800d4150(local_f8);
  lVar3 = -1;
  local_100 = -1;
  do {
    local_100 = local_100 + 1;
  } while (local_108[local_100] != '\0');
  piVar1 = (int *)FUN_1800a68d0(&local_108);
  local_f8[0] = '\0';
  local_f8[1] = '\0';
  local_f8[2] = '\0';
  local_f8[3] = '\0';
  local_f8[4] = '\0';
  local_f8[5] = '\0';
  local_f8[6] = '\0';
  local_f8[7] = '\0';
  local_f8[8] = '\0';
  local_f8[9] = '\0';
  local_f8[10] = '\0';
  local_f8[0xb] = '\0';
  local_f8[0xc] = '\0';
  local_f8[0xd] = '\0';
  local_f8[0xe] = '\0';
  local_f8[0xf] = '\0';
  DAT_1801ee8f8 = (longlong)piVar1 + (longlong)*piVar1 + 4;
  local_d8 = _DAT_1801d98d0;
  uStack_d0 = _UNK_1801d98d8;
  local_b8 = _DAT_1801d9470;
  uStack_b0 = _UNK_1801d9478;
  local_c8 = _DAT_1801d9480;
  uStack_c0 = _UNK_1801d9488;
  local_98 = _DAT_1801d99a0;
  uStack_90 = _UNK_1801d99a8;
  local_f8[0x10] = '\0';
  local_f8[0x11] = '\0';
  local_f8[0x12] = '\0';
  local_f8[0x13] = '\0';
  local_f8[0x14] = '\0';
  local_f8[0x15] = '\0';
  local_f8[0x16] = '\0';
  local_f8[0x17] = '\0';
  local_f8[0x18] = '\x16';
  local_f8[0x19] = '\0';
  local_f8[0x1a] = '\0';
  local_f8[0x1b] = '\0';
  local_f8[0x1c] = 'T';
  local_f8[0x1d] = '\0';
  local_f8[0x1e] = '\0';
  local_f8[0x1f] = '\0';
  local_a8 = _DAT_1801d9910;
  uStack_a0 = _UNK_1801d9918;
  local_88 = CONCAT44(local_88._4_4_,0x26);
  local_108 = FUN_1800d3b50(local_f8);
  do {
    lVar3 = lVar3 + 1;
  } while (local_108[lVar3] != '\0');
  local_100 = lVar3;
  puVar2 = (int32_t *)FUN_1800a68d0(&local_108);
  FUN_180121510(puVar2,FUN_1800d11d0,&DAT_1801fc958);
  FUN_1801252c0(local_18 ^ (ulonglong)auStack_128);
  return;
}

// ---- Function: FUN_1800d15f0 ----
void FUN_1800d15f0(longlong param_1)

{
  (*DAT_1801fc960)();
  if (DAT_1801f3a1c != '\0') {
    *(ushort *)(param_1 + 0x10) = *(ushort *)(param_1 + 0x10) | 2;
  }
  if (DAT_1801f3a1b != '\0') {
    *(ushort *)(param_1 + 0x10) = *(ushort *)(param_1 + 0x10) | 0x10;
  }
  if (DAT_1801f3a1a != '\0') {
    *(ushort *)(param_1 + 0x10) = *(ushort *)(param_1 + 0x10) | 0x20;
    *(ushort *)(param_1 + 0x10) = *(ushort *)(param_1 + 0x10) | 0x200;
  }
  *(uint *)(param_1 + 0x4e4) = *(uint *)(param_1 + 0x4e4) | 0x620;
  return;
}

// ---- Function: FUN_1800d1820 ----
char * FUN_1800d1820(char *param_1)

{
  int iVar1;
  
  iVar1 = ((*(int *)(param_1 + 0x18) + -0x6e) * 10) % 0x7f + 0x7f;
  *param_1 = (char)iVar1 +
             (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
             (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x1c) + -0x6e) * 10) % 0x7f + 0x7f;
  param_1[1] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x20) + -0x6e) * 10) % 0x7f + 0x7f;
  param_1[2] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x24) + -0x6e) * 10) % 0x7f + 0x7f;
  param_1[3] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x28) + -0x6e) * 10) % 0x7f + 0x7f;
  param_1[4] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x2c) + -0x6e) * 10) % 0x7f + 0x7f;
  param_1[5] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x30) + -0x6e) * 10) % 0x7f + 0x7f;
  param_1[6] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x34) + -0x6e) * 10) % 0x7f + 0x7f;
  param_1[7] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x38) + -0x6e) * 10) % 0x7f + 0x7f;
  param_1[8] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x3c) + -0x6e) * 10) % 0x7f + 0x7f;
  param_1[9] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x40) + -0x6e) * 10) % 0x7f + 0x7f;
  param_1[10] = (char)iVar1 +
                (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x44) + -0x6e) * 10) % 0x7f + 0x7f;
  param_1[0xb] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x48) + -0x6e) * 10) % 0x7f + 0x7f;
  param_1[0xc] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x4c) + -0x6e) * 10) % 0x7f + 0x7f;
  param_1[0xd] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x50) + -0x6e) * 10) % 0x7f + 0x7f;
  param_1[0xe] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x54) + -0x6e) * 10) % 0x7f + 0x7f;
  param_1[0xf] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x58) + -0x6e) * 10) % 0x7f + 0x7f;
  param_1[0x10] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x5c) + -0x6e) * 10) % 0x7f + 0x7f;
  param_1[0x11] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x60) + -0x6e) * 10) % 0x7f + 0x7f;
  param_1[0x12] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 100) + -0x6e) * 10) % 0x7f + 0x7f;
  param_1[0x13] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  param_1[0x14] = '\0';
  return param_1;
}

// ---- Function: FUN_1800d1d80 ----
char * FUN_1800d1d80(char *param_1)

{
  int iVar1;
  
  iVar1 = ((*(int *)(param_1 + 0x10) + -0x5c) * 0x13) % 0x7f + 0x7f;
  *param_1 = (char)iVar1 +
             (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
             (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x14) + -0x5c) * 0x13) % 0x7f + 0x7f;
  param_1[1] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x18) + -0x5c) * 0x13) % 0x7f + 0x7f;
  param_1[2] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x1c) + -0x5c) * 0x13) % 0x7f + 0x7f;
  param_1[3] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x20) + -0x5c) * 0x13) % 0x7f + 0x7f;
  param_1[4] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x24) + -0x5c) * 0x13) % 0x7f + 0x7f;
  param_1[5] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x28) + -0x5c) * 0x13) % 0x7f + 0x7f;
  param_1[6] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x2c) + -0x5c) * 0x13) % 0x7f + 0x7f;
  param_1[7] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x30) + -0x5c) * 0x13) % 0x7f + 0x7f;
  param_1[8] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x34) + -0x5c) * 0x13) % 0x7f + 0x7f;
  param_1[9] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x38) + -0x5c) * 0x13) % 0x7f + 0x7f;
  param_1[10] = (char)iVar1 +
                (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x3c) + -0x5c) * 0x13) % 0x7f + 0x7f;
  param_1[0xb] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x40) + -0x5c) * 0x13) % 0x7f + 0x7f;
  param_1[0xc] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x44) + -0x5c) * 0x13) % 0x7f + 0x7f;
  param_1[0xd] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  param_1[0xe] = '\0';
  return param_1;
}

// ---- Function: FUN_1800d2130 ----
char * FUN_1800d2130(char *param_1)

{
  int iVar1;
  
  iVar1 = ((0x53 - *(int *)(param_1 + 0x28)) * 0x28) % 0x7f + 0x7f;
  *param_1 = (char)iVar1 +
             (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
             (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x53 - *(int *)(param_1 + 0x2c)) * 0x28) % 0x7f + 0x7f;
  param_1[1] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x53 - *(int *)(param_1 + 0x30)) * 0x28) % 0x7f + 0x7f;
  param_1[2] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x53 - *(int *)(param_1 + 0x34)) * 0x28) % 0x7f + 0x7f;
  param_1[3] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x53 - *(int *)(param_1 + 0x38)) * 0x28) % 0x7f + 0x7f;
  param_1[4] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x53 - *(int *)(param_1 + 0x3c)) * 0x28) % 0x7f + 0x7f;
  param_1[5] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x53 - *(int *)(param_1 + 0x40)) * 0x28) % 0x7f + 0x7f;
  param_1[6] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x53 - *(int *)(param_1 + 0x44)) * 0x28) % 0x7f + 0x7f;
  param_1[7] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x53 - *(int *)(param_1 + 0x48)) * 0x28) % 0x7f + 0x7f;
  param_1[8] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x53 - *(int *)(param_1 + 0x4c)) * 0x28) % 0x7f + 0x7f;
  param_1[9] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x53 - *(int *)(param_1 + 0x50)) * 0x28) % 0x7f + 0x7f;
  param_1[10] = (char)iVar1 +
                (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x53 - *(int *)(param_1 + 0x54)) * 0x28) % 0x7f + 0x7f;
  param_1[0xb] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x53 - *(int *)(param_1 + 0x58)) * 0x28) % 0x7f + 0x7f;
  param_1[0xc] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x53 - *(int *)(param_1 + 0x5c)) * 0x28) % 0x7f + 0x7f;
  param_1[0xd] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x53 - *(int *)(param_1 + 0x60)) * 0x28) % 0x7f + 0x7f;
  param_1[0xe] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x53 - *(int *)(param_1 + 100)) * 0x28) % 0x7f + 0x7f;
  param_1[0xf] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x53 - *(int *)(param_1 + 0x68)) * 0x28) % 0x7f + 0x7f;
  param_1[0x10] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x53 - *(int *)(param_1 + 0x6c)) * 0x28) % 0x7f + 0x7f;
  param_1[0x11] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x53 - *(int *)(param_1 + 0x70)) * 0x28) % 0x7f + 0x7f;
  param_1[0x12] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x53 - *(int *)(param_1 + 0x74)) * 0x28) % 0x7f + 0x7f;
  param_1[0x13] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x53 - *(int *)(param_1 + 0x78)) * 0x28) % 0x7f + 0x7f;
  param_1[0x14] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x53 - *(int *)(param_1 + 0x7c)) * 0x28) % 0x7f + 0x7f;
  param_1[0x15] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x53 - *(int *)(param_1 + 0x80)) * 0x28) % 0x7f + 0x7f;
  param_1[0x16] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x53 - *(int *)(param_1 + 0x84)) * 0x28) % 0x7f + 0x7f;
  param_1[0x17] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x53 - *(int *)(param_1 + 0x88)) * 0x28) % 0x7f + 0x7f;
  param_1[0x18] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x53 - *(int *)(param_1 + 0x8c)) * 0x28) % 0x7f + 0x7f;
  param_1[0x19] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x53 - *(int *)(param_1 + 0x90)) * 0x28) % 0x7f + 0x7f;
  param_1[0x1a] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x53 - *(int *)(param_1 + 0x94)) * 0x28) % 0x7f + 0x7f;
  param_1[0x1b] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x53 - *(int *)(param_1 + 0x98)) * 0x28) % 0x7f + 0x7f;
  param_1[0x1c] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x53 - *(int *)(param_1 + 0x9c)) * 0x28) % 0x7f + 0x7f;
  param_1[0x1d] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x53 - *(int *)(param_1 + 0xa0)) * 0x28) % 0x7f + 0x7f;
  param_1[0x1e] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x53 - *(int *)(param_1 + 0xa4)) * 0x28) % 0x7f + 0x7f;
  param_1[0x1f] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x53 - *(int *)(param_1 + 0xa8)) * 0x28) % 0x7f + 0x7f;
  param_1[0x20] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x53 - *(int *)(param_1 + 0xac)) * 0x28) % 0x7f + 0x7f;
  param_1[0x21] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x53 - *(int *)(param_1 + 0xb0)) * 0x28) % 0x7f + 0x7f;
  param_1[0x22] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x53 - *(int *)(param_1 + 0xb4)) * 0x28) % 0x7f + 0x7f;
  param_1[0x23] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x53 - *(int *)(param_1 + 0xb8)) * 0x28) % 0x7f + 0x7f;
  param_1[0x24] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  param_1[0x25] = '\0';
  return param_1;
}

// ---- Function: FUN_1800d2b50 ----
char * FUN_1800d2b50(char *param_1)

{
  int iVar1;
  
  iVar1 = ((0x3c - *(int *)(param_1 + 0x24)) * 0x18) % 0x7f + 0x7f;
  *param_1 = (char)iVar1 +
             (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
             (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x3c - *(int *)(param_1 + 0x28)) * 0x18) % 0x7f + 0x7f;
  param_1[1] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x3c - *(int *)(param_1 + 0x2c)) * 0x18) % 0x7f + 0x7f;
  param_1[2] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x3c - *(int *)(param_1 + 0x30)) * 0x18) % 0x7f + 0x7f;
  param_1[3] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x3c - *(int *)(param_1 + 0x34)) * 0x18) % 0x7f + 0x7f;
  param_1[4] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x3c - *(int *)(param_1 + 0x38)) * 0x18) % 0x7f + 0x7f;
  param_1[5] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x3c - *(int *)(param_1 + 0x3c)) * 0x18) % 0x7f + 0x7f;
  param_1[6] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x3c - *(int *)(param_1 + 0x40)) * 0x18) % 0x7f + 0x7f;
  param_1[7] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x3c - *(int *)(param_1 + 0x44)) * 0x18) % 0x7f + 0x7f;
  param_1[8] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x3c - *(int *)(param_1 + 0x48)) * 0x18) % 0x7f + 0x7f;
  param_1[9] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x3c - *(int *)(param_1 + 0x4c)) * 0x18) % 0x7f + 0x7f;
  param_1[10] = (char)iVar1 +
                (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x3c - *(int *)(param_1 + 0x50)) * 0x18) % 0x7f + 0x7f;
  param_1[0xb] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x3c - *(int *)(param_1 + 0x54)) * 0x18) % 0x7f + 0x7f;
  param_1[0xc] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x3c - *(int *)(param_1 + 0x58)) * 0x18) % 0x7f + 0x7f;
  param_1[0xd] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x3c - *(int *)(param_1 + 0x5c)) * 0x18) % 0x7f + 0x7f;
  param_1[0xe] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x3c - *(int *)(param_1 + 0x60)) * 0x18) % 0x7f + 0x7f;
  param_1[0xf] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x3c - *(int *)(param_1 + 100)) * 0x18) % 0x7f + 0x7f;
  param_1[0x10] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x3c - *(int *)(param_1 + 0x68)) * 0x18) % 0x7f + 0x7f;
  param_1[0x11] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x3c - *(int *)(param_1 + 0x6c)) * 0x18) % 0x7f + 0x7f;
  param_1[0x12] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x3c - *(int *)(param_1 + 0x70)) * 0x18) % 0x7f + 0x7f;
  param_1[0x13] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x3c - *(int *)(param_1 + 0x74)) * 0x18) % 0x7f + 0x7f;
  param_1[0x14] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x3c - *(int *)(param_1 + 0x78)) * 0x18) % 0x7f + 0x7f;
  param_1[0x15] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x3c - *(int *)(param_1 + 0x7c)) * 0x18) % 0x7f + 0x7f;
  param_1[0x16] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x3c - *(int *)(param_1 + 0x80)) * 0x18) % 0x7f + 0x7f;
  param_1[0x17] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x3c - *(int *)(param_1 + 0x84)) * 0x18) % 0x7f + 0x7f;
  param_1[0x18] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x3c - *(int *)(param_1 + 0x88)) * 0x18) % 0x7f + 0x7f;
  param_1[0x19] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x3c - *(int *)(param_1 + 0x8c)) * 0x18) % 0x7f + 0x7f;
  param_1[0x1a] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x3c - *(int *)(param_1 + 0x90)) * 0x18) % 0x7f + 0x7f;
  param_1[0x1b] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x3c - *(int *)(param_1 + 0x94)) * 0x18) % 0x7f + 0x7f;
  param_1[0x1c] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x3c - *(int *)(param_1 + 0x98)) * 0x18) % 0x7f + 0x7f;
  param_1[0x1d] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x3c - *(int *)(param_1 + 0x9c)) * 0x18) % 0x7f + 0x7f;
  param_1[0x1e] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x3c - *(int *)(param_1 + 0xa0)) * 0x18) % 0x7f + 0x7f;
  param_1[0x1f] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x3c - *(int *)(param_1 + 0xa4)) * 0x18) % 0x7f + 0x7f;
  param_1[0x20] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x3c - *(int *)(param_1 + 0xa8)) * 0x18) % 0x7f + 0x7f;
  param_1[0x21] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x3c - *(int *)(param_1 + 0xac)) * 0x18) % 0x7f + 0x7f;
  param_1[0x22] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  param_1[0x23] = '\0';
  return param_1;
}

// ---- Function: FUN_1800d34e0 ----
longlong FUN_1800d34e0(longlong param_1)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  longlong lVar4;
  
  lVar4 = 4;
  pcVar2 = (char *)(param_1 + 2);
  piVar3 = (int *)(param_1 + 0x3c);
  do {
    iVar1 = ((piVar3[-1] + -0x6b) * 0x37) % 0x7f + 0x7f;
    pcVar2[-2] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
    iVar1 = ((*piVar3 + -0x6b) * 0x37) % 0x7f + 0x7f;
    pcVar2[-1] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
    iVar1 = ((piVar3[1] + -0x6b) * 0x37) % 0x7f + 0x7f;
    *pcVar2 = (char)iVar1 +
              (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
              (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
    iVar1 = ((piVar3[2] + -0x6b) * 0x37) % 0x7f + 0x7f;
    pcVar2[1] = (char)iVar1 +
                (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
    iVar1 = ((piVar3[3] + -0x6b) * 0x37) % 0x7f + 0x7f;
    pcVar2[2] = (char)iVar1 +
                (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
    iVar1 = ((piVar3[4] + -0x6b) * 0x37) % 0x7f + 0x7f;
    pcVar2[3] = (char)iVar1 +
                (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
    iVar1 = ((piVar3[5] + -0x6b) * 0x37) % 0x7f + 0x7f;
    pcVar2[4] = (char)iVar1 +
                (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
    iVar1 = ((piVar3[6] + -0x6b) * 0x37) % 0x7f + 0x7f;
    pcVar2[5] = (char)iVar1 +
                (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
    iVar1 = ((piVar3[7] + -0x6b) * 0x37) % 0x7f + 0x7f;
    pcVar2[6] = (char)iVar1 +
                (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
    iVar1 = ((piVar3[8] + -0x6b) * 0x37) % 0x7f + 0x7f;
    pcVar2[7] = (char)iVar1 +
                (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
    iVar1 = ((piVar3[9] + -0x6b) * 0x37) % 0x7f + 0x7f;
    pcVar2[8] = (char)iVar1 +
                (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
    iVar1 = ((piVar3[10] + -0x6b) * 0x37) % 0x7f + 0x7f;
    pcVar2[9] = (char)iVar1 +
                (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
    iVar1 = ((piVar3[0xb] + -0x6b) * 0x37) % 0x7f + 0x7f;
    pcVar2[10] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
    lVar4 = lVar4 + -1;
    pcVar2 = pcVar2 + 0xd;
    piVar3 = piVar3 + 0xd;
  } while (lVar4 != 0);
  *(int32_t *)(param_1 + 0x34) = 0;
  return param_1;
}

