#include "FUN_1800bf750.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800bf750(void) {
code *pcVar1;
  int32_t uVar2;
  int32_t uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  int32_t *puVar7;
  ulonglong uVar8;
  char **ppcVar9;
  int *piVar10;
  int32_t auStack_258 [32];
  longlong *local_238;
  longlong *local_230;
  longlong **local_228;
  longlong **local_220;
  longlong *local_218;
  longlong *plStack_210;
  longlong *local_208;
  int32_t uStack_200;
  char *local_1f8;
  int32_t uStack_1f0;
  longlong *local_1e8;
  int32_t uStack_1e0;
  char *local_1d8;
  int32_t uStack_1d0;
  longlong *local_1c8;
  int32_t uStack_1c0;
  char *local_1b8;
  int32_t uStack_1b0;
  longlong *local_1a8;
  int32_t uStack_1a0;
  char *local_198;
  int32_t uStack_190;
  longlong *local_188;
  int32_t uStack_180;
  char *local_178;
  int32_t uStack_170;
  longlong *local_168;
  int32_t uStack_160;
  char *local_158;
  int32_t uStack_150;
  longlong *local_148;
  int32_t uStack_140;
  char *local_138;
  int32_t uStack_130;
  longlong *local_128;
  int32_t uStack_120;
  char *local_118;
  int32_t uStack_110;
  longlong *local_108;
  int32_t uStack_100;
  char *local_f8;
  int32_t uStack_f0;
  longlong *local_e8;
  int32_t uStack_e0;
  char *local_d8;
  int32_t uStack_d0;
  longlong *local_c8;
  int32_t uStack_c0;
  char *local_b8;
  int32_t uStack_b0;
  longlong *local_a8;
  int32_t uStack_a0;
  char *local_98;
  int32_t uStack_90;
  longlong *local_88;
  int32_t uStack_80;
  char *local_78;
  int32_t uStack_70;
  longlong *local_68;
  int32_t uStack_60;
  char *local_58;
  int32_t uStack_50;
  longlong *local_48;
  int32_t uStack_40;
  char *local_38 [4];
  
  uVar3 = _UNK_1801d90a8;
  plVar6 = _DAT_1801d90a0;
  local_38[0] = (char *)(DAT_1801eb080 ^ (ulonglong)auStack_258);
  puVar7 = (int32_t *)(ulonglong)_tls_index;
  piVar10 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (longlong)puVar7 * 8) + 0x10
                   );
  if (*piVar10 < DAT_1801fc650) {
    puVar7 = &DAT_1801fc650;
    FUN_180125398(&DAT_1801fc650);
    if (DAT_1801fc650 == -1) {
      local_218 = (longlong *)0x0;
      plStack_210 = (longlong *)0x0;
      local_208 = (longlong *)0x0;
      uStack_200 = 0;
      local_218 = (longlong *)operator_new(0x20);
      uVar2 = s_NVE_VolumetricClouds_fx_1801cbb30._8_8_;
      local_208 = plVar6;
      uStack_200 = uVar3;
      *local_218 = s_NVE_VolumetricClouds_fx_1801cbb30._0_8_;
      local_218[1] = uVar2;
      *(int32_t *)(local_218 + 2) = s_NVE_VolumetricClouds_fx_1801cbb30._16_4_;
      uVar8 = (ulonglong)(ushort)s_NVE_VolumetricClouds_fx_1801cbb30._20_2_;
      *(int32_t *)((longlong)local_218 + 0x14) = s_NVE_VolumetricClouds_fx_1801cbb30._20_2_;
      *(char *)((longlong)local_218 + 0x16) = s_NVE_VolumetricClouds_fx_1801cbb30[0x16];
      *(int32_t *)((longlong)local_218 + 0x17) = 0;
      _DAT_1801fc658 = (longlong *)0x0;
      _DAT_1801fc660 = (longlong *)0x0;
      _DAT_1801fc668 = (longlong *)0x0;
      _DAT_1801fc658 = (longlong *)FUN_1800ba8c0(uVar8,1);
      plVar5 = _DAT_1801fc658 + 4;
      local_220 = (longlong **)&DAT_1801fc658;
      local_228 = (longlong **)&DAT_1801fc658;
      _DAT_1801fc660 = _DAT_1801fc658;
      _DAT_1801fc668 = plVar5;
      local_238 = _DAT_1801fc658;
      local_230 = _DAT_1801fc658;
      FUN_1800ba630(_DAT_1801fc658,&local_218);
      _DAT_1801fc660 = plVar5;
      _eh_vector_destructor_iterator_(&local_218,0x20,1,thunk_FUN_1800a6800);
      atexit((_func_5014 *)&LAB_180156230);
      puVar7 = &DAT_1801fc650;
      _Init_thread_footer(&DAT_1801fc650);
    }
  }
  if (*piVar10 < DAT_1801fc670) {
    puVar7 = &DAT_1801fc670;
    FUN_180125398(&DAT_1801fc670);
    if (DAT_1801fc670 == -1) {
      FUN_1800c5680(0x1801fc290,(int32_t *)&DAT_1801fc658,"GameTime");
      atexit((_func_5014 *)&LAB_180156220);
      puVar7 = &DAT_1801fc670;
      _Init_thread_footer(&DAT_1801fc670);
    }
  }
  if (*piVar10 < DAT_1801fc674) {
    puVar7 = &DAT_1801fc674;
    FUN_180125398(&DAT_1801fc674);
    if (DAT_1801fc674 == -1) {
      FUN_1800c5680(0x1801fc2b8,(int32_t *)&DAT_1801fc658,"WindData");
      atexit((_func_5014 *)&LAB_180156210);
      puVar7 = &DAT_1801fc674;
      _Init_thread_footer(&DAT_1801fc674);
    }
  }
  if (*piVar10 < DAT_1801fc678) {
    puVar7 = &DAT_1801fc678;
    FUN_180125398(&DAT_1801fc678);
    if (DAT_1801fc678 == -1) {
      FUN_1800c5680(0x1801fc2e0,(int32_t *)&DAT_1801fc658,"NOffsetA");
      atexit((_func_5014 *)&LAB_180156200);
      puVar7 = &DAT_1801fc678;
      _Init_thread_footer(&DAT_1801fc678);
    }
  }
  if (*piVar10 < DAT_1801fc67c) {
    puVar7 = &DAT_1801fc67c;
    FUN_180125398(&DAT_1801fc67c);
    if (DAT_1801fc67c == -1) {
      FUN_1800c5680(0x1801fc308,(int32_t *)&DAT_1801fc658,"NOffsetB");
      atexit((_func_5014 *)&LAB_1801561f0);
      puVar7 = &DAT_1801fc67c;
      _Init_thread_footer(&DAT_1801fc67c);
    }
  }
  if (*piVar10 < DAT_1801fc680) {
    puVar7 = &DAT_1801fc680;
    FUN_180125398(&DAT_1801fc680);
    if (DAT_1801fc680 == -1) {
      FUN_1800c5680(0x1801fc330,(int32_t *)&DAT_1801fc658,"NOffsetC");
      atexit((_func_5014 *)&LAB_1801561e0);
      puVar7 = &DAT_1801fc680;
      _Init_thread_footer(&DAT_1801fc680);
    }
  }
  if (*piVar10 < DAT_1801fc684) {
    puVar7 = &DAT_1801fc684;
    FUN_180125398(&DAT_1801fc684);
    if (DAT_1801fc684 == -1) {
      FUN_1800c5680(0x1801fc358,(int32_t *)&DAT_1801fc658,"cloudShift");
      atexit((_func_5014 *)&LAB_1801561d0);
      puVar7 = &DAT_1801fc684;
      _Init_thread_footer(&DAT_1801fc684);
    }
  }
  if (*piVar10 < DAT_1801fc688) {
    puVar7 = &DAT_1801fc688;
    FUN_180125398(&DAT_1801fc688);
    if (DAT_1801fc688 != -1) goto LAB_1800bfc95;
    local_1f8 = (char *)0x0;
    uStack_1f0 = 0;
    local_1e8 = (longlong *)0x0;
    uStack_1e0 = 0;
    local_1f8 = (char *)operator_new(0x20);
    uVar2 = s_NVE_VolumetricClouds_fx_1801cbb30._8_8_;
    local_1e8 = plVar6;
    uStack_1e0 = uVar3;
    *(int32_t *)local_1f8 = s_NVE_VolumetricClouds_fx_1801cbb30._0_8_;
    *(int32_t *)(local_1f8 + 8) = uVar2;
    *(int32_t *)(local_1f8 + 0x10) = s_NVE_VolumetricClouds_fx_1801cbb30._16_4_;
    *(int32_t *)(local_1f8 + 0x14) = s_NVE_VolumetricClouds_fx_1801cbb30._20_2_;
    local_1f8[0x16] = s_NVE_VolumetricClouds_fx_1801cbb30[0x16];
    local_1f8[0x17] = '\0';
    local_1d8 = (char *)0x0;
    uStack_1d0 = 0;
    local_1c8 = (longlong *)0x0;
    uStack_1c0 = 0;
    local_1d8 = (char *)operator_new(0x20);
    uVar2 = s_NVE_VolumetricAurora_fx_1801cb848._8_8_;
    local_1c8 = plVar6;
    uStack_1c0 = uVar3;
    *(int32_t *)local_1d8 = s_NVE_VolumetricAurora_fx_1801cb848._0_8_;
    *(int32_t *)(local_1d8 + 8) = uVar2;
    *(int32_t *)(local_1d8 + 0x10) = s_NVE_VolumetricAurora_fx_1801cb848._16_4_;
    *(int32_t *)(local_1d8 + 0x14) = s_NVE_VolumetricAurora_fx_1801cb848._20_2_;
    uVar8 = (ulonglong)(byte)s_NVE_VolumetricAurora_fx_1801cb848[0x16];
    local_1d8[0x16] = s_NVE_VolumetricAurora_fx_1801cb848[0x16];
    local_1d8[0x17] = '\0';
    local_218 = (longlong *)0x0;
    plStack_210 = (longlong *)0x0;
    local_208 = (longlong *)0x0;
    plVar5 = (longlong *)FUN_1800ba8c0(uVar8,2);
    local_208 = plVar5 + 8;
    local_220 = &local_218;
    ppcVar9 = &local_1f8;
    local_228 = &local_218;
    local_238 = plVar5;
    local_218 = plVar5;
    plStack_210 = plVar5;
    do {
      local_230 = plVar5;
      FUN_1800ba630(plVar5,ppcVar9);
      plVar5 = plVar5 + 4;
      ppcVar9 = ppcVar9 + 4;
    } while (ppcVar9 != &local_1b8);
    local_230 = plVar5;
    plStack_210 = plVar5;
    FUN_1800c5680(0x1801fc380,&local_218,"nsOffsetA");
    plVar4 = plStack_210;
    plVar5 = local_218;
    if (local_218 == (longlong *)0x0) {
LAB_1800bfc60:
      _eh_vector_destructor_iterator_(&local_1f8,0x20,2,thunk_FUN_1800a6800);
      atexit((_func_5014 *)&LAB_1801561c0);
      puVar7 = &DAT_1801fc688;
      _Init_thread_footer(&DAT_1801fc688);
      goto LAB_1800bfc95;
    }
    for (; plVar5 != plVar4; plVar5 = plVar5 + 4) {
      FUN_1800a6800(plVar5);
    }
    plVar5 = local_218;
    if ((((longlong)local_208 - (longlong)local_218 & 0xffffffffffffffe0U) < 0x1000) ||
       (plVar5 = (longlong *)local_218[-1],
       (ulonglong)((longlong)local_218 + (-8 - (longlong)plVar5)) < 0x20)) {
      thunk_FUN_18012d5e8(plVar5);
      local_218 = (longlong *)0x0;
      plStack_210 = (longlong *)0x0;
      local_208 = (longlong *)0x0;
      goto LAB_1800bfc60;
    }
LAB_1800c0d36:
    FUN_18012b7b4();
LAB_1800c0d3c:
    FUN_18012b7b4();
LAB_1800c0d42:
    FUN_18012b7b4();
LAB_1800c0d48:
    FUN_18012b7b4();
  }
  else {
LAB_1800bfc95:
    if (*piVar10 < DAT_1801fc68c) {
      puVar7 = &DAT_1801fc68c;
      FUN_180125398(&DAT_1801fc68c);
      if (DAT_1801fc68c == -1) {
        FUN_1800c5680(0x1801fc3a8,(int32_t *)&DAT_1801fc658,"nsOffsetB");
        atexit((_func_5014 *)&LAB_1801561b0);
        puVar7 = &DAT_1801fc68c;
        _Init_thread_footer(&DAT_1801fc68c);
      }
    }
    if (*piVar10 < DAT_1801fc690) {
      puVar7 = &DAT_1801fc690;
      FUN_180125398(&DAT_1801fc690);
      if (DAT_1801fc690 == -1) {
        FUN_1800c5680(0x1801fc3d0,(int32_t *)&DAT_1801fc658,"nsOffsetC");
        atexit((_func_5014 *)&LAB_1801561a0);
        puVar7 = &DAT_1801fc690;
        _Init_thread_footer(&DAT_1801fc690);
      }
    }
    if (*piVar10 < DAT_1801fc694) {
      puVar7 = &DAT_1801fc694;
      FUN_180125398(&DAT_1801fc694);
      if (DAT_1801fc694 == -1) {
        FUN_1800c5680(0x1801fc3f8,(int32_t *)&DAT_1801fc658,"nsOffsetD");
        atexit((_func_5014 *)&LAB_180156190);
        puVar7 = &DAT_1801fc694;
        _Init_thread_footer(&DAT_1801fc694);
      }
    }
    if (*piVar10 < DAT_1801fc698) {
      puVar7 = &DAT_1801fc698;
      FUN_180125398(&DAT_1801fc698);
      if (DAT_1801fc698 == -1) {
        FUN_1800c5680(0x1801fc420,(int32_t *)&DAT_1801fc658,"nsOffsetE");
        atexit((_func_5014 *)&LAB_180156180);
        puVar7 = &DAT_1801fc698;
        _Init_thread_footer(&DAT_1801fc698);
      }
    }
    if (*piVar10 < DAT_1801fc69c) {
      puVar7 = &DAT_1801fc69c;
      FUN_180125398(&DAT_1801fc69c);
      if (DAT_1801fc69c == -1) {
        FUN_1800c5680(0x1801fc448,(int32_t *)&DAT_1801fc658,"clampBright");
        atexit((_func_5014 *)&LAB_180156170);
        puVar7 = &DAT_1801fc69c;
        _Init_thread_footer(&DAT_1801fc69c);
      }
    }
    if (*piVar10 < DAT_1801fc6a0) {
      puVar7 = &DAT_1801fc6a0;
      FUN_180125398(&DAT_1801fc6a0);
      if (DAT_1801fc6a0 == -1) {
        FUN_1800c5680(0x1801fc470,(int32_t *)&DAT_1801fc658,"ColorAtSun");
        atexit((_func_5014 *)&LAB_180156160);
        puVar7 = &DAT_1801fc6a0;
        _Init_thread_footer(&DAT_1801fc6a0);
      }
    }
    if (*piVar10 < DAT_1801fc6a4) {
      puVar7 = &DAT_1801fc6a4;
      FUN_180125398(&DAT_1801fc6a4);
      if (DAT_1801fc6a4 == -1) {
        FUN_1800c5680(0x1801fc498,(int32_t *)&DAT_1801fc658,"ColorBase");
        atexit((_func_5014 *)&LAB_180156150);
        puVar7 = &DAT_1801fc6a4;
        _Init_thread_footer(&DAT_1801fc6a4);
      }
    }
    if (*piVar10 < DAT_1801fc6a8) {
      puVar7 = &DAT_1801fc6a8;
      FUN_180125398(&DAT_1801fc6a8);
      if (DAT_1801fc6a8 != -1) goto LAB_1800c00b4;
      local_1b8 = (char *)0x0;
      uStack_1b0 = 0;
      local_1a8 = (longlong *)0x0;
      uStack_1a0 = 0;
      local_1b8 = (char *)operator_new(0x20);
      uVar2 = s_NVE_VolumetricClouds_fx_1801cbb30._8_8_;
      local_1a8 = plVar6;
      uStack_1a0 = uVar3;
      *(int32_t *)local_1b8 = s_NVE_VolumetricClouds_fx_1801cbb30._0_8_;
      *(int32_t *)(local_1b8 + 8) = uVar2;
      *(int32_t *)(local_1b8 + 0x10) = s_NVE_VolumetricClouds_fx_1801cbb30._16_4_;
      *(int32_t *)(local_1b8 + 0x14) = s_NVE_VolumetricClouds_fx_1801cbb30._20_2_;
      local_1b8[0x16] = s_NVE_VolumetricClouds_fx_1801cbb30[0x16];
      local_1b8[0x17] = '\0';
      local_198 = (char *)0x0;
      uStack_190 = 0;
      local_188 = (longlong *)0x0;
      uStack_180 = 0;
      local_198 = (char *)operator_new(0x20);
      uVar2 = s_NVE_VolumetricAurora_fx_1801cb848._8_8_;
      local_188 = plVar6;
      uStack_180 = uVar3;
      *(int32_t *)local_198 = s_NVE_VolumetricAurora_fx_1801cb848._0_8_;
      *(int32_t *)(local_198 + 8) = uVar2;
      *(int32_t *)(local_198 + 0x10) = s_NVE_VolumetricAurora_fx_1801cb848._16_4_;
      *(int32_t *)(local_198 + 0x14) = s_NVE_VolumetricAurora_fx_1801cb848._20_2_;
      uVar8 = (ulonglong)(byte)s_NVE_VolumetricAurora_fx_1801cb848[0x16];
      local_198[0x16] = s_NVE_VolumetricAurora_fx_1801cb848[0x16];
      local_198[0x17] = '\0';
      local_218 = (longlong *)0x0;
      plStack_210 = (longlong *)0x0;
      local_208 = (longlong *)0x0;
      plVar5 = (longlong *)FUN_1800ba8c0(uVar8,2);
      local_208 = plVar5 + 8;
      local_220 = &local_218;
      ppcVar9 = &local_1b8;
      local_228 = &local_218;
      local_238 = plVar5;
      local_218 = plVar5;
      plStack_210 = plVar5;
      do {
        local_230 = plVar5;
        FUN_1800ba630(plVar5,ppcVar9);
        plVar5 = plVar5 + 4;
        ppcVar9 = ppcVar9 + 4;
      } while (ppcVar9 != &local_178);
      local_230 = plVar5;
      plStack_210 = plVar5;
      FUN_1800c5680(0x1801fc4c0,&local_218,"SunPosition");
      plVar4 = plStack_210;
      plVar5 = local_218;
      if (local_218 == (longlong *)0x0) {
LAB_1800c0080:
        _eh_vector_destructor_iterator_(&local_1b8,0x20,2,thunk_FUN_1800a6800);
        atexit((_func_5014 *)&LAB_180156140);
        puVar7 = &DAT_1801fc6a8;
        _Init_thread_footer(&DAT_1801fc6a8);
        goto LAB_1800c00b4;
      }
      for (; plVar5 != plVar4; plVar5 = plVar5 + 4) {
        FUN_1800a6800(plVar5);
      }
      plVar5 = local_218;
      if ((((longlong)local_208 - (longlong)local_218 & 0xffffffffffffffe0U) < 0x1000) ||
         (plVar5 = (longlong *)local_218[-1],
         (ulonglong)((longlong)local_218 + (-8 - (longlong)plVar5)) < 0x20)) {
        thunk_FUN_18012d5e8(plVar5);
        local_218 = (longlong *)0x0;
        plStack_210 = (longlong *)0x0;
        local_208 = (longlong *)0x0;
        goto LAB_1800c0080;
      }
      goto LAB_1800c0d3c;
    }
LAB_1800c00b4:
    if (*piVar10 < DAT_1801fc6ac) {
      puVar7 = &DAT_1801fc6ac;
      FUN_180125398(&DAT_1801fc6ac);
      if (DAT_1801fc6ac != -1) goto LAB_1800c02b4;
      local_178 = (char *)0x0;
      uStack_170 = 0;
      local_168 = (longlong *)0x0;
      uStack_160 = 0;
      local_178 = (char *)operator_new(0x20);
      uVar2 = s_NVE_VolumetricClouds_fx_1801cbb30._8_8_;
      local_168 = plVar6;
      uStack_160 = uVar3;
      *(int32_t *)local_178 = s_NVE_VolumetricClouds_fx_1801cbb30._0_8_;
      *(int32_t *)(local_178 + 8) = uVar2;
      *(int32_t *)(local_178 + 0x10) = s_NVE_VolumetricClouds_fx_1801cbb30._16_4_;
      *(int32_t *)(local_178 + 0x14) = s_NVE_VolumetricClouds_fx_1801cbb30._20_2_;
      local_178[0x16] = s_NVE_VolumetricClouds_fx_1801cbb30[0x16];
      local_178[0x17] = '\0';
      local_158 = (char *)0x0;
      uStack_150 = 0;
      local_148 = (longlong *)0x0;
      uStack_140 = 0;
      local_158 = (char *)operator_new(0x20);
      uVar2 = s_NVE_VolumetricAurora_fx_1801cb848._8_8_;
      local_148 = plVar6;
      uStack_140 = uVar3;
      *(int32_t *)local_158 = s_NVE_VolumetricAurora_fx_1801cb848._0_8_;
      *(int32_t *)(local_158 + 8) = uVar2;
      *(int32_t *)(local_158 + 0x10) = s_NVE_VolumetricAurora_fx_1801cb848._16_4_;
      *(int32_t *)(local_158 + 0x14) = s_NVE_VolumetricAurora_fx_1801cb848._20_2_;
      uVar8 = (ulonglong)(byte)s_NVE_VolumetricAurora_fx_1801cb848[0x16];
      local_158[0x16] = s_NVE_VolumetricAurora_fx_1801cb848[0x16];
      local_158[0x17] = '\0';
      local_218 = (longlong *)0x0;
      plStack_210 = (longlong *)0x0;
      local_208 = (longlong *)0x0;
      plVar5 = (longlong *)FUN_1800ba8c0(uVar8,2);
      local_208 = plVar5 + 8;
      local_220 = &local_218;
      ppcVar9 = &local_178;
      local_228 = &local_218;
      local_238 = plVar5;
      local_218 = plVar5;
      plStack_210 = plVar5;
      do {
        local_230 = plVar5;
        FUN_1800ba630(plVar5,ppcVar9);
        plVar5 = plVar5 + 4;
        ppcVar9 = ppcVar9 + 4;
      } while (ppcVar9 != &local_138);
      local_230 = plVar5;
      plStack_210 = plVar5;
      FUN_1800c5680(0x1801fc4e8,&local_218,"SunDirection");
      plVar4 = plStack_210;
      plVar5 = local_218;
      if (local_218 == (longlong *)0x0) {
LAB_1800c0280:
        _eh_vector_destructor_iterator_(&local_178,0x20,2,thunk_FUN_1800a6800);
        atexit((_func_5014 *)&LAB_180156130);
        puVar7 = &DAT_1801fc6ac;
        _Init_thread_footer(&DAT_1801fc6ac);
        goto LAB_1800c02b4;
      }
      for (; plVar5 != plVar4; plVar5 = plVar5 + 4) {
        FUN_1800a6800(plVar5);
      }
      plVar5 = local_218;
      if ((((longlong)local_208 - (longlong)local_218 & 0xffffffffffffffe0U) < 0x1000) ||
         (plVar5 = (longlong *)local_218[-1],
         (ulonglong)((longlong)local_218 + (-8 - (longlong)plVar5)) < 0x20)) {
        thunk_FUN_18012d5e8(plVar5);
        local_218 = (longlong *)0x0;
        plStack_210 = (longlong *)0x0;
        local_208 = (longlong *)0x0;
        goto LAB_1800c0280;
      }
      goto LAB_1800c0d42;
    }
LAB_1800c02b4:
    if (*piVar10 < DAT_1801fc6b0) {
      puVar7 = &DAT_1801fc6b0;
      FUN_180125398(&DAT_1801fc6b0);
      if (DAT_1801fc6b0 != -1) goto LAB_1800c04b4;
      local_138 = (char *)0x0;
      uStack_130 = 0;
      local_128 = (longlong *)0x0;
      uStack_120 = 0;
      local_138 = (char *)operator_new(0x20);
      uVar2 = s_NVE_VolumetricClouds_fx_1801cbb30._8_8_;
      local_128 = plVar6;
      uStack_120 = uVar3;
      *(int32_t *)local_138 = s_NVE_VolumetricClouds_fx_1801cbb30._0_8_;
      *(int32_t *)(local_138 + 8) = uVar2;
      *(int32_t *)(local_138 + 0x10) = s_NVE_VolumetricClouds_fx_1801cbb30._16_4_;
      *(int32_t *)(local_138 + 0x14) = s_NVE_VolumetricClouds_fx_1801cbb30._20_2_;
      local_138[0x16] = s_NVE_VolumetricClouds_fx_1801cbb30[0x16];
      local_138[0x17] = '\0';
      local_118 = (char *)0x0;
      uStack_110 = 0;
      local_108 = (longlong *)0x0;
      uStack_100 = 0;
      local_118 = (char *)operator_new(0x20);
      uVar2 = s_NVE_VolumetricAurora_fx_1801cb848._8_8_;
      local_108 = plVar6;
      uStack_100 = uVar3;
      *(int32_t *)local_118 = s_NVE_VolumetricAurora_fx_1801cb848._0_8_;
      *(int32_t *)(local_118 + 8) = uVar2;
      *(int32_t *)(local_118 + 0x10) = s_NVE_VolumetricAurora_fx_1801cb848._16_4_;
      *(int32_t *)(local_118 + 0x14) = s_NVE_VolumetricAurora_fx_1801cb848._20_2_;
      uVar8 = (ulonglong)(byte)s_NVE_VolumetricAurora_fx_1801cb848[0x16];
      local_118[0x16] = s_NVE_VolumetricAurora_fx_1801cb848[0x16];
      local_118[0x17] = '\0';
      local_218 = (longlong *)0x0;
      plStack_210 = (longlong *)0x0;
      local_208 = (longlong *)0x0;
      plVar5 = (longlong *)FUN_1800ba8c0(uVar8,2);
      local_208 = plVar5 + 8;
      local_220 = &local_218;
      ppcVar9 = &local_138;
      local_228 = &local_218;
      local_238 = plVar5;
      local_218 = plVar5;
      plStack_210 = plVar5;
      do {
        local_230 = plVar5;
        FUN_1800ba630(plVar5,ppcVar9);
        plVar5 = plVar5 + 4;
        ppcVar9 = ppcVar9 + 4;
      } while (ppcVar9 != &local_f8);
      local_230 = plVar5;
      plStack_210 = plVar5;
      FUN_1800c5680(0x1801fc510,&local_218,"MoonPosition");
      plVar4 = plStack_210;
      plVar5 = local_218;
      if (local_218 == (longlong *)0x0) {
LAB_1800c0480:
        _eh_vector_destructor_iterator_(&local_138,0x20,2,thunk_FUN_1800a6800);
        atexit((_func_5014 *)&LAB_180156120);
        puVar7 = &DAT_1801fc6b0;
        _Init_thread_footer(&DAT_1801fc6b0);
        goto LAB_1800c04b4;
      }
      for (; plVar5 != plVar4; plVar5 = plVar5 + 4) {
        FUN_1800a6800(plVar5);
      }
      plVar5 = local_218;
      if ((((longlong)local_208 - (longlong)local_218 & 0xffffffffffffffe0U) < 0x1000) ||
         (plVar5 = (longlong *)local_218[-1],
         (ulonglong)((longlong)local_218 + (-8 - (longlong)plVar5)) < 0x20)) {
        thunk_FUN_18012d5e8(plVar5);
        local_218 = (longlong *)0x0;
        plStack_210 = (longlong *)0x0;
        local_208 = (longlong *)0x0;
        goto LAB_1800c0480;
      }
      goto LAB_1800c0d48;
    }
LAB_1800c04b4:
    if (DAT_1801fc6b4 <= *piVar10) {
LAB_1800c06c1:
      if (*piVar10 < DAT_1801fc6b8) {
        puVar7 = &DAT_1801fc6b8;
        FUN_180125398(&DAT_1801fc6b8);
        if (DAT_1801fc6b8 == -1) {
          FUN_1800c5680(0x1801fc560,(int32_t *)&DAT_1801fc658,"AmbientEast");
          atexit((_func_5014 *)&LAB_180156100);
          puVar7 = &DAT_1801fc6b8;
          _Init_thread_footer(&DAT_1801fc6b8);
        }
      }
      if (*piVar10 < DAT_1801fc6bc) {
        puVar7 = &DAT_1801fc6bc;
        FUN_180125398(&DAT_1801fc6bc);
        if (DAT_1801fc6bc == -1) {
          FUN_1800c5680(0x1801fc588,(int32_t *)&DAT_1801fc658,"AmbientWest");
          atexit((_func_5014 *)&LAB_1801560f0);
          puVar7 = &DAT_1801fc6bc;
          _Init_thread_footer(&DAT_1801fc6bc);
        }
      }
      if (*piVar10 < DAT_1801fc6c0) {
        puVar7 = &DAT_1801fc6c0;
        FUN_180125398(&DAT_1801fc6c0);
        if (DAT_1801fc6c0 == -1) {
          FUN_1800c5680(0x1801fc5b0,(int32_t *)&DAT_1801fc658,"AmbientExtra");
          atexit((_func_5014 *)&LAB_1801560e0);
          puVar7 = &DAT_1801fc6c0;
          _Init_thread_footer(&DAT_1801fc6c0);
        }
      }
      if (*piVar10 < DAT_1801fc6c4) {
        puVar7 = &DAT_1801fc6c4;
        FUN_180125398(&DAT_1801fc6c4);
        if (DAT_1801fc6c4 == -1) {
          FUN_1800c5680(0x1801fc5d8,(int32_t *)&DAT_1801fc658,"GroundShadows");
          atexit((_func_5014 *)&LAB_1801560d0);
          puVar7 = &DAT_1801fc6c4;
          _Init_thread_footer(&DAT_1801fc6c4);
        }
      }
      if (*piVar10 < DAT_1801fc6c8) {
        puVar7 = &DAT_1801fc6c8;
        FUN_180125398(&DAT_1801fc6c8);
        if (DAT_1801fc6c8 == -1) {
          FUN_1800c5680(0x1801fc600,(int32_t *)&DAT_1801fc658,"L_CenterRandomRange");
          atexit((_func_5014 *)&LAB_1801560c0);
          puVar7 = &DAT_1801fc6c8;
          _Init_thread_footer(&DAT_1801fc6c8);
        }
      }
      if (*piVar10 < DAT_1801fc6cc) {
        puVar7 = &DAT_1801fc6cc;
        FUN_180125398(&DAT_1801fc6cc);
        if (DAT_1801fc6cc == -1) {
          FUN_1800c5680(0x1801fc628,(int32_t *)&DAT_1801fc658,"topLayerMultiplier");
          atexit((_func_5014 *)&LAB_1801560b0);
          puVar7 = &DAT_1801fc6cc;
          _Init_thread_footer(&DAT_1801fc6cc);
        }
      }
      if (*piVar10 < DAT_1801fc6d0) {
        puVar7 = &DAT_1801fc6d0;
        FUN_180125398(&DAT_1801fc6d0);
        if (DAT_1801fc6d0 == -1) {
          local_b8 = (char *)0x0;
          uStack_b0 = 0;
          local_a8 = (longlong *)0x0;
          uStack_a0 = 0;
          local_b8 = (char *)operator_new(0x20);
          uVar2 = s_NVE_VolumetricClouds_fx_1801cbb30._8_8_;
          local_a8 = plVar6;
          uStack_a0 = uVar3;
          *(int32_t *)local_b8 = s_NVE_VolumetricClouds_fx_1801cbb30._0_8_;
          *(int32_t *)(local_b8 + 8) = uVar2;
          *(int32_t *)(local_b8 + 0x10) = s_NVE_VolumetricClouds_fx_1801cbb30._16_4_;
          *(int32_t *)(local_b8 + 0x14) = s_NVE_VolumetricClouds_fx_1801cbb30._20_2_;
          local_b8[0x16] = s_NVE_VolumetricClouds_fx_1801cbb30[0x16];
          local_b8[0x17] = '\0';
          local_98 = (char *)0x0;
          uStack_90 = 0;
          local_88 = (longlong *)0x0;
          uStack_80 = 0;
          local_98 = (char *)operator_new(0x20);
          uVar2 = s_NVE_VolumetricAurora_fx_1801cb848._8_8_;
          local_88 = plVar6;
          uStack_80 = uVar3;
          *(int32_t *)local_98 = s_NVE_VolumetricAurora_fx_1801cb848._0_8_;
          *(int32_t *)(local_98 + 8) = uVar2;
          *(int32_t *)(local_98 + 0x10) = s_NVE_VolumetricAurora_fx_1801cb848._16_4_;
          *(int32_t *)(local_98 + 0x14) = s_NVE_VolumetricAurora_fx_1801cb848._20_2_;
          uVar8 = (ulonglong)(byte)s_NVE_VolumetricAurora_fx_1801cb848[0x16];
          local_98[0x16] = s_NVE_VolumetricAurora_fx_1801cb848[0x16];
          local_98[0x17] = '\0';
          local_218 = (longlong *)0x0;
          plStack_210 = (longlong *)0x0;
          local_208 = (longlong *)0x0;
          plVar5 = (longlong *)FUN_1800ba8c0(uVar8,2);
          local_208 = plVar5 + 8;
          local_220 = &local_218;
          ppcVar9 = &local_b8;
          local_228 = &local_218;
          local_238 = plVar5;
          local_218 = plVar5;
          plStack_210 = plVar5;
          do {
            local_230 = plVar5;
            FUN_1800ba630(plVar5,ppcVar9);
            plVar5 = plVar5 + 4;
            ppcVar9 = ppcVar9 + 4;
          } while (ppcVar9 != &local_78);
          local_230 = plVar5;
          plStack_210 = plVar5;
          FUN_1800c5680(0x1801fbf78,&local_218,"BackBufferRes");
          plVar4 = plStack_210;
          plVar5 = local_218;
          if (local_218 != (longlong *)0x0) {
            for (; plVar5 != plVar4; plVar5 = plVar5 + 4) {
              FUN_1800a6800(plVar5);
            }
            plVar5 = local_218;
            if ((0xfff < ((longlong)local_208 - (longlong)local_218 & 0xffffffffffffffe0U)) &&
               (plVar5 = (longlong *)local_218[-1],
               0x1f < (ulonglong)((longlong)local_218 + (-8 - (longlong)plVar5))))
            goto LAB_1800c0d54;
            thunk_FUN_18012d5e8(plVar5);
            local_218 = (longlong *)0x0;
            plStack_210 = (longlong *)0x0;
            local_208 = (longlong *)0x0;
          }
          _eh_vector_destructor_iterator_(&local_b8,0x20,2,thunk_FUN_1800a6800);
          atexit((_func_5014 *)&LAB_1801560a0);
          puVar7 = &DAT_1801fc6d0;
          _Init_thread_footer(&DAT_1801fc6d0);
        }
      }
      if (DAT_1801fc6d4 <= *piVar10) goto LAB_1800c0ccc;
      puVar7 = &DAT_1801fc6d4;
      FUN_180125398(&DAT_1801fc6d4);
      if (DAT_1801fc6d4 != -1) goto LAB_1800c0ccc;
      local_78 = (char *)0x0;
      uStack_70 = 0;
      local_68 = (longlong *)0x0;
      uStack_60 = 0;
      local_78 = (char *)operator_new(0x20);
      uVar2 = s_NVE_VolumetricClouds_fx_1801cbb30._8_8_;
      local_68 = plVar6;
      uStack_60 = uVar3;
      *(int32_t *)local_78 = s_NVE_VolumetricClouds_fx_1801cbb30._0_8_;
      *(int32_t *)(local_78 + 8) = uVar2;
      *(int32_t *)(local_78 + 0x10) = s_NVE_VolumetricClouds_fx_1801cbb30._16_4_;
      *(int32_t *)(local_78 + 0x14) = s_NVE_VolumetricClouds_fx_1801cbb30._20_2_;
      local_78[0x16] = s_NVE_VolumetricClouds_fx_1801cbb30[0x16];
      local_78[0x17] = '\0';
      local_58 = (char *)0x0;
      uStack_50 = 0;
      local_48 = (longlong *)0x0;
      uStack_40 = 0;
      local_58 = (char *)operator_new(0x20);
      uVar2 = s_NVE_VolumetricAurora_fx_1801cb848._8_8_;
      local_48 = plVar6;
      uStack_40 = uVar3;
      *(int32_t *)local_58 = s_NVE_VolumetricAurora_fx_1801cb848._0_8_;
      *(int32_t *)(local_58 + 8) = uVar2;
      *(int32_t *)(local_58 + 0x10) = s_NVE_VolumetricAurora_fx_1801cb848._16_4_;
      *(int32_t *)(local_58 + 0x14) = s_NVE_VolumetricAurora_fx_1801cb848._20_2_;
      uVar8 = (ulonglong)(byte)s_NVE_VolumetricAurora_fx_1801cb848[0x16];
      local_58[0x16] = s_NVE_VolumetricAurora_fx_1801cb848[0x16];
      local_58[0x17] = '\0';
      local_218 = (longlong *)0x0;
      plStack_210 = (longlong *)0x0;
      local_208 = (longlong *)0x0;
      plVar6 = (longlong *)FUN_1800ba8c0(uVar8,2);
      local_208 = plVar6 + 8;
      local_220 = &local_218;
      ppcVar9 = &local_78;
      local_228 = &local_218;
      local_238 = plVar6;
      local_218 = plVar6;
      plStack_210 = plVar6;
      do {
        local_230 = plVar6;
        FUN_1800ba630(plVar6,ppcVar9);
        plVar6 = plVar6 + 4;
        ppcVar9 = ppcVar9 + 4;
      } while (ppcVar9 != local_38);
      local_230 = plVar6;
      plStack_210 = plVar6;
      FUN_1800c5680(0x1801fbfa0,&local_218,"ReflectionRes");
      plVar5 = plStack_210;
      plVar6 = local_218;
      if (local_218 != (longlong *)0x0) {
        for (; plVar6 != plVar5; plVar6 = plVar6 + 4) {
          FUN_1800a6800(plVar6);
        }
        plVar6 = local_218;
        if ((0xfff < ((longlong)local_208 - (longlong)local_218 & 0xffffffffffffffe0U)) &&
           (plVar6 = (longlong *)local_218[-1],
           0x1f < (ulonglong)((longlong)local_218 + (-8 - (longlong)plVar6)))) {
          FUN_18012b7b4();
          goto LAB_1800c0d36;
        }
        thunk_FUN_18012d5e8(plVar6);
        local_218 = (longlong *)0x0;
        plStack_210 = (longlong *)0x0;
        local_208 = (longlong *)0x0;
      }
      _eh_vector_destructor_iterator_(&local_78,0x20,2,thunk_FUN_1800a6800);
      atexit((_func_5014 *)&LAB_180156090);
      puVar7 = &DAT_1801fc6d4;
      _Init_thread_footer(&DAT_1801fc6d4);
LAB_1800c0ccc:
      local_220 = (longlong **)&LAB_1800c2990;
      if (DAT_1801ec6e0 == DAT_1801ec6e8) {
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
    for (; plVar5 != plVar4; plVar5 = plVar5 + 4) {
      FUN_1800a6800(plVar5);
    }
    plVar5 = local_218;
    if ((((longlong)local_208 - (longlong)local_218 & 0xffffffffffffffe0U) < 0x1000) ||
       (plVar5 = (longlong *)local_218[-1],
       (ulonglong)((longlong)local_218 + (-8 - (longlong)plVar5)) < 0x20)) {
      thunk_FUN_18012d5e8(plVar5);
      local_218 = (longlong *)0x0;
      plStack_210 = (longlong *)0x0;
      local_208 = (longlong *)0x0;
      goto LAB_1800c068d;
    }
  }
  FUN_18012b7b4();
LAB_1800c0d54:
  FUN_18012b7b4();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}
}

