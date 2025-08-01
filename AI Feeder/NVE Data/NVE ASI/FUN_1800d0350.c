#include "FUN_1800d0350.h"
#include <stdint.h>
#include <stddef.h>

 FUN_1800d0350(lpAddress);
      FUN_1800d9270();
    }
    local_178 = 0;
    uStack_170 = 0;
    local_168 = 0;
    uStack_160 = 0;
    local_158 = 0;
    uStack_150 = 0;
    local_148 = 0;
    uStack_140 = uStack_140 & 0xffffffff00000000;
    uVar21 = uVar24;
    do {
      *(int *)((longlong)&uStack_140 + uVar21 * 4 + 4) =
           ((char)(&DAT_1801d4e90)[uVar21] * 0x67 + 3) % 0x7f;
      uVar21 = uVar21 + 1;
    } while ((longlong)uVar21 < 0x3b);
    do {
      iVar10 = ((*(int *)((longlong)&uStack_140 + uVar24 * 4 + 4) + -3) * 0x25) % 0x7f + 0x7f;
      *(char *)((longlong)&local_178 + uVar24) =
           (char)iVar10 +
           (((char)(iVar10 / 0x7f) + (char)(iVar10 >> 0x1f)) -
           (char)((longlong)iVar10 * 0x81020409 >> 0x3f)) * -0x7f;
      uVar24 = uVar24 + 1;
    } while (uVar24 < 0x3b);
    uStack_140._0_4_ = (uint)(uint3)uStack_140;
    lVar22 = -1;
    do {
      local_1e0 = (int32_t **)(lVar22 + 1);
      lVar3 = lVar22 + 1;
      lVar22 = (longlong)local_1e0;
    } while (*(char *)((longlong)&local_178 + lVar3) != '\0');
    local_1e8 = (code *)&local_178;
    puVar13 = (int32_t *)FUN_1800a68d0(&local_1e8);
    FUN_180121510(puVar13,&LAB_1800d1690,&DAT_1801fc970);
    local_1e8 = (code *)0x1801d50b8;
    local_1e0 = (int32_t **)0x17;
    puVar13 = (int32_t *)FUN_1800a68d0(&local_1e8);
    FUN_180121510(puVar13,&LAB_1800dcc20,(longlong *)&DAT_1801fca10);
    local_1e8 = (code *)0x1801d50d0;
    local_1e0 = (int32_t **)0x1e;
    piVar17 = (int *)FUN_1800a68d0(&local_1e8);
    DAT_1801fca08 = (longlong)piVar17 + (longlong)*piVar17 + 4;
    FUN_1800c2e90();
    if ((DAT_1801f3af0 == (HMODULE)0x0) &&
       (DAT_1801f3af0 = LoadLibraryA("IgcsConnector.addon64"), DAT_1801f3af0 == (HMODULE)0x0)) {
local_1e8 = (code *)0x0;
      local_1e0 = (int32_t **)0x0;
      local_1b8 = "IGCS: no has..";
      pcStack_1b0 = (char *)0xe;
      FUN_1800b7670((longlong *)local_1d8,(longlong *)&local_1b8,(ulonglong *)&local_1e8);
      pFVar19 = (FILE *)local_1d8;
      if (0xf < local_1c0) {
        pFVar19 = (FILE *)local_1d8._0_8_;
      }
      OutputDebugStringA((LPCSTR)pFVar19);
      ppppppppCVar20 = (LPCSTR *******)local_1d8;
    }
}

void FUN_1800d0350(int32_t param_1) {
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
}

