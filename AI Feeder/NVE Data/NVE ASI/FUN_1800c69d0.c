#include "FUN_1800c69d0.h"
#include <stdint.h>
#include <stddef.h>

 FUN_1800c69d0((longlong)*piVar17,DAT_1801ec6e0,ppcVar23);
    }
    else {
      *DAT_1801ec6e0 = FUN_1800e7060;
      DAT_1801ec6e0 = DAT_1801ec6e0 + 1;
    }
    lpAddress = (int32_t *)0x32;
    Sleep(0x32);
    FUN_180112600();
    FUN_1800a6d80();
    puVar13 = DAT_1801ec6e0;
    local_1e8 = FUN_180118050;
    if (DAT_1801ec6e0 == DAT_1801ec6e8) {
ppcVar23 = &local_1e8;
      FUN_1800c69d0(lpAddress,DAT_1801ec6e0,ppcVar23);
    }
}

 FUN_1800c69d0(lpAddress,DAT_1801ec6e0,ppcVar23);
    }
    else {
      *DAT_1801ec6e0 = FUN_180118050;
      DAT_1801ec6e0 = DAT_1801ec6e0 + 1;
    }
    FUN_180118090(lpAddress,puVar13,(int32_t **)ppcVar23,&param_4->_ptr);
    FUN_1800a7e90();
    FUN_1800dab50();
    if (DAT_1801f3a14 != '\0') {
iVar10 = FUN_18011ccf0();
      if (iVar10 < 0x945) {
        DAT_1801f3a15 = 1;
      }
      else {
        local_178 = 0;
        uStack_170 = 0;
        local_168 = 0;
        uStack_160 = 0;
        uVar1 = (uint)local_158;
        local_158 = CONCAT44(0x4d,uVar1 & 0xffffff00);
        uStack_150 = 0x4700000026;
        local_148 = _DAT_1801d92a0;
        uStack_140 = _UNK_1801d92a8;
        local_138 = _DAT_1801d9290;
        uStack_130 = _UNK_1801d9298;
        local_128 = _DAT_1801d96e0;
        uStack_120 = _UNK_1801d96e8;
        local_118 = _DAT_1801d9790;
        uStack_110 = _UNK_1801d9798;
        local_108 = _DAT_1801d9110;
        uStack_100 = _UNK_1801d9118;
        local_f8 = _DAT_1801d96c0;
        uStack_f0 = _UNK_1801d96c8;
        local_e8 = _DAT_1801d9600;
        uStack_e0 = _UNK_1801d9608;
        local_d8 = 0xf;
        local_1e8 = (code *)FUN_1800d8a10((char *)&local_178);
        local_1e0 = (int32_t **)0xffffffffffffffff;
        do {
          local_1e0 = (int32_t **)((longlong)local_1e0 + 1);
        } while (local_1e8[(longlong)local_1e0] != (code)0x0);
        lpAddress = (int32_t *)FUN_1800a68d0(&local_1e8);
        FUN_180121510(lpAddress,&LAB_1800d8a00,(longlong *)&DAT_1801fc9a0);
        if (DAT_1801ebe24 != '\0') {
          lpAddress = (int32_t *)0x3;
          FUN_1800d8970(3);
        }
        if (DAT_1801f3a13 != '\0') {
          local_1e8 = (code *)0x1801d4f58;
          local_1e0 = (int32_t **)0x1d;
          lpAddress = (int32_t *)FUN_1800a68d0(&local_1e8);
          VirtualProtect(lpAddress,100,0x40,(PDWORD)local_1d8);
          uVar7 = _UNK_1801d9d7c;
          uVar6 = _UNK_1801d9d78;
          uVar5 = _UNK_1801d9d74;
          uVar9 = _DAT_1801d9d70;
          *(int32_t *)lpAddress = _DAT_1801d9d70;
          *(int32_t *)((longlong)lpAddress + 4) = uVar5;
          *(int32_t *)(lpAddress + 1) = uVar6;
          *(int32_t *)((longlong)lpAddress + 0xc) = uVar7;
          *(int32_t *)(lpAddress + 2) = uVar9;
          *(int32_t *)((longlong)lpAddress + 0x14) = uVar5;
          *(int32_t *)(lpAddress + 3) = uVar6;
          *(int32_t *)((longlong)lpAddress + 0x1c) = uVar7;
          *(int32_t *)(lpAddress + 4) = uVar9;
          *(int32_t *)((longlong)lpAddress + 0x24) = uVar5;
          *(int32_t *)(lpAddress + 5) = uVar6;
          *(int32_t *)((longlong)lpAddress + 0x2c) = uVar7;
          *(int32_t *)(lpAddress + 6) = uVar9;
          *(int32_t *)((longlong)lpAddress + 0x34) = uVar5;
          *(int32_t *)(lpAddress + 7) = uVar6;
          *(int32_t *)((longlong)lpAddress + 0x3c) = uVar7;
          *(int32_t *)(lpAddress + 8) = uVar9;
          *(int32_t *)((longlong)lpAddress + 0x44) = uVar5;
          *(int32_t *)(lpAddress + 9) = uVar6;
          *(int32_t *)((longlong)lpAddress + 0x4c) = uVar7;
          *(int32_t *)(lpAddress + 10) = uVar9;
          *(int32_t *)((longlong)lpAddress + 0x54) = uVar5;
          *(int32_t *)(lpAddress + 0xb) = uVar6;
          *(int32_t *)((longlong)lpAddress + 0x5c) = uVar7;
          *(int32_t *)(lpAddress + 0xc) = uVar9;
          VirtualProtect(lpAddress,100,local_1d8._0_4_,(PDWORD)local_1d8);
        }
      }
    }
}

 FUN_1800c69d0(puVar1,DAT_1801ec6e0,local_res8);
    }
    else {
      *DAT_1801ec6e0 = FUN_1800be0f0;
      DAT_1801ec6e0 = DAT_1801ec6e0 + 1;
    }
    FUN_1800be880();
    if (*piVar3 < DAT_1801fc728) {
puVar1 = &DAT_1801fc728;
      FUN_180125398(&DAT_1801fc728);
      if (DAT_1801fc728 == -1) {
        FUN_1800c5c50(0x1801fc6d8,(int32_t *)"NVE_VolumetricClouds2024.fx","tornado_pos");
        atexit((_func_5014 *)&LAB_180156250);
        puVar1 = &DAT_1801fc728;
        _Init_thread_footer(&DAT_1801fc728);
      }
    }
}

 FUN_1800c69d0(puVar1,DAT_1801ec6e0,local_res8);
    }
    else {
      *DAT_1801ec6e0 = FUN_1800c29a0;
      DAT_1801ec6e0 = DAT_1801ec6e0 + 1;
    }
    if (*piVar3 < DAT_1801fb510) {
puVar1 = &DAT_1801fb510;
      FUN_180125398(&DAT_1801fb510);
      if (DAT_1801fb510 == -1) {
        FUN_1800c5c50(0x1801fb470,(int32_t *)"NVE_VolumetricAurora.fx","AuroraVisibility");
        atexit((_func_5014 *)&LAB_180155d10);
        puVar1 = &DAT_1801fb510;
        _Init_thread_footer(&DAT_1801fb510);
      }
    }
}

 FUN_1800c69d0(puVar7,DAT_1801ec6e0,&local_220);
      }
      else {
        *DAT_1801ec6e0 = &LAB_1800c2990;
        DAT_1801ec6e0 = DAT_1801ec6e0 + 1;
      }
      FUN_1801252c0((ulonglong)local_38[0] ^ (ulonglong)auStack_258);
      return;
    }
    puVar7 = &DAT_1801fc6b4;
    FUN_180125398(&DAT_1801fc6b4);
    if (DAT_1801fc6b4 != -1) goto LAB_1800c06c1;
    local_f8 = (char *)0x0;
    uStack_f0 = 0;
    local_e8 = (longlong *)0x0;
    uStack_e0 = 0;
    local_f8 = (char *)operator_new(0x20);
    uVar2 = s_NVE_VolumetricClouds_fx_1801cbb30._8_8_;
    local_e8 = plVar6;
    uStack_e0 = uVar3;
    *(int32_t *)local_f8 = s_NVE_VolumetricClouds_fx_1801cbb30._0_8_;
    *(int32_t *)(local_f8 + 8) = uVar2;
    *(int32_t *)(local_f8 + 0x10) = s_NVE_VolumetricClouds_fx_1801cbb30._16_4_;
    *(int32_t *)(local_f8 + 0x14) = s_NVE_VolumetricClouds_fx_1801cbb30._20_2_;
    local_f8[0x16] = s_NVE_VolumetricClouds_fx_1801cbb30[0x16];
    local_f8[0x17] = '\0';
    local_d8 = (char *)0x0;
    uStack_d0 = 0;
    local_c8 = (longlong *)0x0;
    uStack_c0 = 0;
    local_d8 = (char *)operator_new(0x20);
    uVar2 = s_NVE_VolumetricAurora_fx_1801cb848._8_8_;
    local_c8 = plVar6;
    uStack_c0 = uVar3;
    *(int32_t *)local_d8 = s_NVE_VolumetricAurora_fx_1801cb848._0_8_;
    *(int32_t *)(local_d8 + 8) = uVar2;
    *(int32_t *)(local_d8 + 0x10) = s_NVE_VolumetricAurora_fx_1801cb848._16_4_;
    *(int32_t *)(local_d8 + 0x14) = s_NVE_VolumetricAurora_fx_1801cb848._20_2_;
    uVar8 = (ulonglong)(byte)s_NVE_VolumetricAurora_fx_1801cb848[0x16];
    local_d8[0x16] = s_NVE_VolumetricAurora_fx_1801cb848[0x16];
    local_d8[0x17] = '\0';
    local_218 = (longlong *)0x0;
    plStack_210 = (longlong *)0x0;
    local_208 = (longlong *)0x0;
    plVar5 = (longlong *)FUN_1800ba8c0(uVar8,2);
    local_208 = plVar5 + 8;
    local_220 = &local_218;
    ppcVar9 = &local_f8;
    local_228 = &local_218;
    local_238 = plVar5;
    local_218 = plVar5;
    plStack_210 = plVar5;
    do {
      local_230 = plVar5;
      FUN_1800ba630(plVar5,ppcVar9);
      plVar5 = plVar5 + 4;
      ppcVar9 = ppcVar9 + 4;
    } while (ppcVar9 != &local_b8);
    local_230 = plVar5;
    plStack_210 = plVar5;
    FUN_1800c5680(0x1801fc538,&local_218,"MoonDirection");
    plVar4 = plStack_210;
    plVar5 = local_218;
    if (local_218 == (longlong *)0x0) {
LAB_1800c068d:
      _eh_vector_destructor_iterator_(&local_f8,0x20,2,thunk_FUN_1800a6800);
      atexit((_func_5014 *)&LAB_180156110);
      puVar7 = &DAT_1801fc6b4;
      _Init_thread_footer(&DAT_1801fc6b4);
      goto LAB_1800c06c1;
    }
}

int32_t * FUN_1800c69d0(int32_t param_1,int32_t *param_2,int32_t *param_3) {
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
}

