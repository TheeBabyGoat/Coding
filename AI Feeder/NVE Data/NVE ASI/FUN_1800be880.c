#include "FUN_1800be880.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800be880(void) {
int32_t *puVar1;
  int32_t *puVar2;
  int32_t uVar3;
  longlong *plVar4;
  longlong *plVar5;
  int32_t *puVar6;
  ulonglong uVar7;
  int *piVar8;
  longlong *plVar9;
  int32_t auStack_f8 [32];
  char *local_d8;
  char **local_d0;
  int32_t *local_c8;
  int32_t *local_c0;
  int32_t *local_b8;
  char local_a8 [8];
  int32_t uStack_a0;
  int32_t local_98;
  int32_t uStack_90;
  char local_88 [8];
  int32_t uStack_80;
  int32_t local_78;
  int32_t uStack_70;
  char local_68 [8];
  ulonglong uStack_60;
  int32_t local_58;
  int32_t uStack_50;
  char *local_48;
  int32_t uStack_40;
  int32_t local_38;
  int32_t uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1801eb080 ^ (ulonglong)auStack_f8;
  puVar6 = (int32_t *)(ulonglong)_tls_index;
  piVar8 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (longlong)puVar6 * 8) + 0x10)
  ;
  if (*piVar8 < DAT_1801fbf20) {
    puVar6 = &DAT_1801fbf20;
    FUN_180125398(&DAT_1801fbf20);
    if (DAT_1801fbf20 == -1) {
      local_48 = (char *)0x0;
      uStack_40 = 0;
      local_38 = 0;
      uStack_30 = 0;
      local_48 = (char *)operator_new(0x20);
      uVar3 = s_NVE_VolumetricClouds_fx_1801cbb30._8_8_;
      local_38 = _DAT_1801d90a0;
      uStack_30 = _UNK_1801d90a8;
      *(int32_t *)local_48 = s_NVE_VolumetricClouds_fx_1801cbb30._0_8_;
      *(int32_t *)(local_48 + 8) = uVar3;
      *(int32_t *)(local_48 + 0x10) = s_NVE_VolumetricClouds_fx_1801cbb30._16_4_;
      uVar7 = (ulonglong)(ushort)s_NVE_VolumetricClouds_fx_1801cbb30._20_2_;
      *(int32_t *)(local_48 + 0x14) = s_NVE_VolumetricClouds_fx_1801cbb30._20_2_;
      local_48[0x16] = s_NVE_VolumetricClouds_fx_1801cbb30[0x16];
      local_48[0x17] = '\0';
      DAT_1801fbf28 = (int32_t *)0x0;
      DAT_1801fbf30 = (int32_t *)0x0;
      _DAT_1801fbf38 = (int32_t *)0x0;
      DAT_1801fbf28 = (int32_t *)FUN_1800ba8c0(uVar7,1);
      puVar1 = DAT_1801fbf28 + 4;
      local_d8 = (char *)&DAT_1801fbf28;
      local_b8 = &DAT_1801fbf28;
      DAT_1801fbf30 = DAT_1801fbf28;
      _DAT_1801fbf38 = puVar1;
      local_c8 = DAT_1801fbf28;
      local_c0 = DAT_1801fbf28;
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
  if (*piVar8 < DAT_1801fbf44) {
    puVar6 = &DAT_1801fbf44;
    FUN_180125398(&DAT_1801fbf44);
    if (DAT_1801fbf44 == -1) {
      FUN_1800c5680(0x1801fbd18,&DAT_1801fbf28,"AzimuthEastColor");
      atexit((_func_5014 *)&LAB_180156060);
      puVar6 = &DAT_1801fbf44;
      _Init_thread_footer(&DAT_1801fbf44);
    }
  }
  if (*piVar8 < DAT_1801fbf48) {
    puVar6 = &DAT_1801fbf48;
    FUN_180125398(&DAT_1801fbf48);
    if (DAT_1801fbf48 == -1) {
      FUN_1800c5680(0x1801fbd40,&DAT_1801fbf28,"AzimuthTransitionColor");
      atexit((_func_5014 *)&LAB_180156050);
      puVar6 = &DAT_1801fbf48;
      _Init_thread_footer(&DAT_1801fbf48);
    }
  }
  if (*piVar8 < DAT_1801fbf4c) {
    puVar6 = &DAT_1801fbf4c;
    FUN_180125398(&DAT_1801fbf4c);
    if (DAT_1801fbf4c == -1) {
      FUN_1800c5680(0x1801fbd68,&DAT_1801fbf28,"ZenithColor");
      atexit((_func_5014 *)&LAB_180156040);
      puVar6 = &DAT_1801fbf4c;
      _Init_thread_footer(&DAT_1801fbf4c);
    }
  }
  if (*piVar8 < DAT_1801fbf50) {
    puVar6 = &DAT_1801fbf50;
    FUN_180125398(&DAT_1801fbf50);
    if (DAT_1801fbf50 == -1) {
      FUN_1800c5680(0x1801fbd90,&DAT_1801fbf28,"ZenithTransitionColor");
      atexit((_func_5014 *)&LAB_180156030);
      puVar6 = &DAT_1801fbf50;
      _Init_thread_footer(&DAT_1801fbf50);
    }
  }
  if (*piVar8 < DAT_1801fbf54) {
    puVar6 = &DAT_1801fbf54;
    FUN_180125398(&DAT_1801fbf54);
    if (DAT_1801fbf54 == -1) {
      local_98 = _DAT_1801d9040;
      uStack_90 = _UNK_1801d9048;
      local_a8[0] = s_NVE_Vignette_fx_1801cbb10[0];
      local_a8[1] = s_NVE_Vignette_fx_1801cbb10[1];
      local_a8[2] = s_NVE_Vignette_fx_1801cbb10[2];
      local_a8[3] = s_NVE_Vignette_fx_1801cbb10[3];
      local_a8[4] = s_NVE_Vignette_fx_1801cbb10[4];
      local_a8[5] = s_NVE_Vignette_fx_1801cbb10[5];
      local_a8[6] = s_NVE_Vignette_fx_1801cbb10[6];
      local_a8[7] = s_NVE_Vignette_fx_1801cbb10[7];
      uStack_a0 = (ulonglong)
                  CONCAT16(s_NVE_Vignette_fx_1801cbb10[0xe],
                           CONCAT24(s_NVE_Vignette_fx_1801cbb10._12_2_,
                                    s_NVE_Vignette_fx_1801cbb10._8_4_));
      local_78 = _DAT_1801d9000;
      uStack_70 = _UNK_1801d9008;
      local_88[0] = s_NVE_Rain_fx_1801cb960[0];
      local_88[1] = s_NVE_Rain_fx_1801cb960[1];
      local_88[2] = s_NVE_Rain_fx_1801cb960[2];
      local_88[3] = s_NVE_Rain_fx_1801cb960[3];
      local_88[4] = s_NVE_Rain_fx_1801cb960[4];
      local_88[5] = s_NVE_Rain_fx_1801cb960[5];
      local_88[6] = s_NVE_Rain_fx_1801cb960[6];
      local_88[7] = s_NVE_Rain_fx_1801cb960[7];
      uStack_80 = (ulonglong)CONCAT12(s_NVE_Rain_fx_1801cb960[10],s_NVE_Rain_fx_1801cb960._8_2_);
      local_58 = _DAT_1801d9010;
      uStack_50 = _UNK_1801d9018;
      local_68[0] = s_NVE_Bloom_fx_1801cbb20[0];
      local_68[1] = s_NVE_Bloom_fx_1801cbb20[1];
      local_68[2] = s_NVE_Bloom_fx_1801cbb20[2];
      local_68[3] = s_NVE_Bloom_fx_1801cbb20[3];
      local_68[4] = s_NVE_Bloom_fx_1801cbb20[4];
      local_68[5] = s_NVE_Bloom_fx_1801cbb20[5];
      local_68[6] = s_NVE_Bloom_fx_1801cbb20[6];
      local_68[7] = s_NVE_Bloom_fx_1801cbb20[7];
      uStack_60 = (ulonglong)(uint)s_NVE_Bloom_fx_1801cbb20._8_4_;
      local_d8 = local_a8;
      local_d0 = &local_48;
      FUN_1800a6a40(&DAT_1801fbdc8,(longlong *)&local_d8);
      _eh_vector_destructor_iterator_(local_a8,0x20,3,thunk_FUN_1800a6800);
      plVar4 = DAT_1801fbdd0;
      plVar5 = DAT_1801fbdd0;
      puVar1 = DAT_1801fbf30;
      for (plVar9 = DAT_1801fbdc8; puVar2 = DAT_1801fbf28, DAT_1801fbf30 = puVar1, plVar9 != plVar4;
          plVar9 = plVar9 + 4) {
        FUN_1800a6800(plVar9);
        plVar5 = DAT_1801fbdc8;
        puVar1 = DAT_1801fbf30;
      }
      for (; DAT_1801fbdd0 = plVar5, puVar2 != puVar1; puVar2 = puVar2 + 4) {
        if (DAT_1801fbdd0 == DAT_1801fbdd8) {
          FUN_1800c6d30((longlong *)&DAT_1801fbdc8,DAT_1801fbdd0,puVar2);
        }
        else {
          FUN_1800ba630(DAT_1801fbdd0,puVar2);
          DAT_1801fbdd0 = DAT_1801fbdd0 + 4;
        }
        plVar5 = DAT_1801fbdd0;
      }
      DAT_1801fbdc0 = "SkyPlaneColor";
      atexit((_func_5014 *)&LAB_180156020);
      puVar6 = &DAT_1801fbf54;
      _Init_thread_footer(&DAT_1801fbf54);
    }
  }
  if (*piVar8 < DAT_1801fbf58) {
    puVar6 = &DAT_1801fbf58;
    FUN_180125398(&DAT_1801fbf58);
    if (DAT_1801fbf58 == -1) {
      FUN_1800c5680(0x1801fbde0,&DAT_1801fbf28,"SunColor");
      atexit((_func_5014 *)&LAB_180156010);
      puVar6 = &DAT_1801fbf58;
      _Init_thread_footer(&DAT_1801fbf58);
    }
  }
  if (*piVar8 < DAT_1801fbf5c) {
    puVar6 = &DAT_1801fbf5c;
    FUN_180125398(&DAT_1801fbf5c);
    if (DAT_1801fbf5c == -1) {
      FUN_1800c5680(0x1801fbe08,&DAT_1801fbf28,"SunColorHdr");
      atexit((_func_5014 *)&LAB_180156000);
      puVar6 = &DAT_1801fbf5c;
      _Init_thread_footer(&DAT_1801fbf5c);
    }
  }
  if (*piVar8 < DAT_1801fbf60) {
    puVar6 = &DAT_1801fbf60;
    FUN_180125398(&DAT_1801fbf60);
    if (DAT_1801fbf60 == -1) {
      FUN_1800c5680(0x1801fbe30,&DAT_1801fbf28,"SunDiscColorHdr");
      atexit((_func_5014 *)&LAB_180155ff0);
      puVar6 = &DAT_1801fbf60;
      _Init_thread_footer(&DAT_1801fbf60);
    }
  }
  if (*piVar8 < DAT_1801fbf64) {
    puVar6 = &DAT_1801fbf64;
    FUN_180125398(&DAT_1801fbf64);
    if (DAT_1801fbf64 == -1) {
      FUN_1800c5680(0x1801fbe58,&DAT_1801fbf28,"SmallCloudColorHdr");
      atexit((_func_5014 *)&LAB_180155fe0);
      puVar6 = &DAT_1801fbf64;
      _Init_thread_footer(&DAT_1801fbf64);
    }
  }
  if (*piVar8 < DAT_1801fbf68) {
    puVar6 = &DAT_1801fbf68;
    FUN_180125398(&DAT_1801fbf68);
    if (DAT_1801fbf68 == -1) {
      FUN_1800c5680(0x1801fbe80,&DAT_1801fbf28,"MoonColor");
      atexit((_func_5014 *)&LAB_180155fd0);
      puVar6 = &DAT_1801fbf68;
      _Init_thread_footer(&DAT_1801fbf68);
    }
  }
  if (*piVar8 < DAT_1801fbf6c) {
    puVar6 = &DAT_1801fbf6c;
    FUN_180125398(&DAT_1801fbf6c);
    if (DAT_1801fbf6c == -1) {
      FUN_1800c5680(0x1801fbea8,&DAT_1801fbf28,"CloudBaseMinusMidColor");
      atexit((_func_5014 *)&LAB_180155fc0);
      puVar6 = &DAT_1801fbf6c;
      _Init_thread_footer(&DAT_1801fbf6c);
    }
  }
  if (*piVar8 < DAT_1801fbf70) {
    puVar6 = &DAT_1801fbf70;
    FUN_180125398(&DAT_1801fbf70);
    if (DAT_1801fbf70 == -1) {
      FUN_1800c5680(0x1801fbed0,&DAT_1801fbf28,"CloudMidColor");
      atexit((_func_5014 *)&LAB_180155fb0);
      puVar6 = &DAT_1801fbf70;
      _Init_thread_footer(&DAT_1801fbf70);
    }
  }
  if (*piVar8 < DAT_1801fbf74) {
    puVar6 = &DAT_1801fbf74;
    FUN_180125398(&DAT_1801fbf74);
    if (DAT_1801fbf74 == -1) {
      FUN_1800c5680(0x1801fbef8,&DAT_1801fbf28,"CloudShadowMinusBaseColorTimesShadowStrength");
      atexit((_func_5014 *)&LAB_180155fa0);
      puVar6 = &DAT_1801fbf74;
      _Init_thread_footer(&DAT_1801fbf74);
    }
  }
  local_d8 = &LAB_1800bf740;
  if (DAT_1801ec6e0 == DAT_1801ec6e8) {
    FUN_1800c69d0(puVar6,DAT_1801ec6e0,&local_d8);
  }
  else {
    *DAT_1801ec6e0 = &LAB_1800bf740;
    DAT_1801ec6e0 = DAT_1801ec6e0 + 1;
  }
  FUN_1801252c0(local_28 ^ (ulonglong)auStack_f8);
  return;
}
}

