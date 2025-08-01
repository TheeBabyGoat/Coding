#include "FUN_1800ba630.h"
#include <stdint.h>
#include <stddef.h>

int32_t * FUN_1800ba630(int32_t *param_1,int32_t *param_2) {
ulonglong uVar1;
  ulonglong uVar2;
  code *pcVar3;
  int32_t uVar4;
  ulonglong uVar5;
  void *pvVar6;
  int32_t *puVar7;
  ulonglong uVar8;
  
  puVar7 = (int32_t *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar2 = param_2[2];
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (int32_t *)*param_2;
  }
  if (0x7fffffffffffffff < uVar2) {
    FUN_1800ba540();
    pcVar3 = (code *)swi(3);
    puVar7 = (int32_t *)(*pcVar3)();
    return puVar7;
  }
  if (uVar2 < 0x10) {
    param_1[2] = uVar2;
    param_1[3] = 0xf;
    uVar4 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar4;
    return param_1;
  }
  uVar8 = uVar2 | 0xf;
  if (uVar8 < 0x8000000000000000) {
    if (uVar8 < 0x16) {
      uVar8 = 0x16;
    }
    uVar1 = uVar8 + 1;
    if (uVar1 == 0) goto LAB_1800ba703;
    if (uVar1 < 0x1000) {
      puVar7 = (int32_t *)operator_new(uVar1);
      goto LAB_1800ba703;
    }
    uVar5 = uVar8 + 0x28;
    if (uVar5 <= uVar1) {
      FUN_1800ba8a0();
      pcVar3 = (code *)swi(3);
      puVar7 = (int32_t *)(*pcVar3)();
      return puVar7;
    }
  }
  else {
    uVar5 = 0x8000000000000027;
    uVar8 = 0x7fffffffffffffff;
  }
  pvVar6 = operator_new(uVar5);
  if (pvVar6 == (void *)0x0) {
    FUN_18012b7b4();
    pcVar3 = (code *)swi(3);
    puVar7 = (int32_t *)(*pcVar3)();
    return puVar7;
  }
  puVar7 = (int32_t *)((longlong)pvVar6 + 0x27U & 0xffffffffffffffe0);
  puVar7[-1] = pvVar6;
LAB_1800ba703:
  *param_1 = puVar7;
  param_1[2] = uVar2;
  param_1[3] = uVar8;
  FUN_180150fd0(puVar7,param_2,uVar2 + 1);
  return param_1;
}
}

 FUN_1800ba630(plVar7,ppcVar12);
        plVar7 = plVar7 + 4;
        ppcVar12 = ppcVar12 + 4;
      } while (ppcVar12 != local_18);
      local_a8 = _DAT_1801d9040;
      uStack_a0 = _UNK_1801d9048;
      local_b8 = (longlong *)s_NVE_Vignette_fx_1801cbb10._0_8_;
      uStack_b0._0_6_ =
           CONCAT24(s_NVE_Vignette_fx_1801cbb10._12_2_,s_NVE_Vignette_fx_1801cbb10._8_4_);
      uStack_b0._0_7_ = CONCAT16(s_NVE_Vignette_fx_1801cbb10[0xe],(int32_t)uStack_b0);
      uStack_b0 = (ulonglong)(uint7)uStack_b0;
      local_88 = _DAT_1801d9000;
      uStack_80 = _UNK_1801d9008;
      local_98[0] = s_NVE_Rain_fx_1801cb960[0];
      local_98[1] = s_NVE_Rain_fx_1801cb960[1];
      local_98[2] = s_NVE_Rain_fx_1801cb960[2];
      local_98[3] = s_NVE_Rain_fx_1801cb960[3];
      local_98[4] = s_NVE_Rain_fx_1801cb960[4];
      local_98[5] = s_NVE_Rain_fx_1801cb960[5];
      local_98[6] = s_NVE_Rain_fx_1801cb960[6];
      local_98[7] = s_NVE_Rain_fx_1801cb960[7];
      uStack_90._0_3_ = CONCAT12(s_NVE_Rain_fx_1801cb960[10],s_NVE_Rain_fx_1801cb960._8_2_);
      uStack_90 = (ulonglong)(uint3)uStack_90;
      local_68 = _DAT_1801d9010;
      uStack_60 = _UNK_1801d9018;
      local_78[0] = s_NVE_Bloom_fx_1801cbb20[0];
      local_78[1] = s_NVE_Bloom_fx_1801cbb20[1];
      local_78[2] = s_NVE_Bloom_fx_1801cbb20[2];
      local_78[3] = s_NVE_Bloom_fx_1801cbb20[3];
      local_78[4] = s_NVE_Bloom_fx_1801cbb20[4];
      local_78[5] = s_NVE_Bloom_fx_1801cbb20[5];
      local_78[6] = s_NVE_Bloom_fx_1801cbb20[6];
      local_78[7] = s_NVE_Bloom_fx_1801cbb20[7];
      uStack_70 = (ulonglong)(uint)s_NVE_Bloom_fx_1801cbb20._8_4_;
      local_e8 = &local_b8;
      local_e0 = &local_58;
      plStack_100 = plVar7;
      local_d0 = plVar7;
      FUN_1800a6a40(&DAT_1801fbcc8,(longlong *)&local_e8);
      _eh_vector_destructor_iterator_(&local_b8,0x20,3,thunk_FUN_1800a6800);
      plVar5 = DAT_1801fbcd0;
      plVar6 = DAT_1801fbcd0;
      plVar4 = plStack_100;
      for (plVar7 = DAT_1801fbcc8; plVar2 = local_108, plVar3 = plVar4, plVar7 != plVar5;
          plVar7 = plVar7 + 4) {
plStack_100 = plVar4;
        FUN_1800a6800(plVar7);
        plVar6 = DAT_1801fbcc8;
        plVar4 = plStack_100;
      }
}

 FUN_1800ba630(DAT_1801fbf28,&local_48);
      DAT_1801fbf30 = puVar1;
      _eh_vector_destructor_iterator_(&local_48,0x20,1,thunk_FUN_1800a6800);
      atexit((_func_5014 *)&LAB_180156080);
      puVar6 = &DAT_1801fbf20;
      _Init_thread_footer(&DAT_1801fbf20);
    }
  }
  if (*piVar8 < DAT_1801fbf40) {
puVar6 = &DAT_1801fbf40;
    FUN_180125398(&DAT_1801fbf40);
    if (DAT_1801fbf40 == -1) {
      FUN_1800c5680(0x1801fbcf0,&DAT_1801fbf28,"AzimuthWestColor");
      atexit((_func_5014 *)&LAB_180156070);
      puVar6 = &DAT_1801fbf40;
      _Init_thread_footer(&DAT_1801fbf40);
    }
  }
}

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
}

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
}

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
}

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
}

