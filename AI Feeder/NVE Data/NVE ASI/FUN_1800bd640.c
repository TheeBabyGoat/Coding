#include "FUN_1800bd640.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800bd640(int32_t param_1,int32_t *param_2) {
longlong lVar1;
  int32_t uVar2;
  int32_t *puVar3;
  int32_t *puVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  int32_t auStack_108 [32];
  int32_t *local_e8;
  int32_t *local_e0;
  int32_t *local_d8;
  int32_t *local_d0;
  ulonglong local_c8;
  int32_t uStack_c0;
  int32_t local_b8;
  int32_t uStack_b0;
  char local_a8 [8];
  int32_t uStack_a0;
  int32_t local_98;
  int32_t uStack_90;
  char local_88 [8];
  ulonglong uStack_80;
  int32_t local_78;
  int32_t uStack_70;
  char *local_68;
  int32_t uStack_60;
  int32_t local_58;
  int32_t uStack_50;
  char *local_48;
  int32_t uStack_40;
  int32_t local_38;
  int32_t uStack_30;
  ulonglong local_28 [2];
  
  local_28[0] = DAT_1801eb080 ^ (ulonglong)auStack_108;
  puVar4 = (int32_t *)(ulonglong)_tls_index;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (longlong)puVar4 * 8);
  if (*(int *)(lVar1 + 0x10) < DAT_1801fbbd0) {
    puVar4 = &DAT_1801fbbd0;
    FUN_180125398(&DAT_1801fbbd0);
    if (DAT_1801fbbd0 == -1) {
      local_b8 = _DAT_1801d9040;
      uStack_b0 = _UNK_1801d9048;
      local_c8._0_1_ = s_NVE_Vignette_fx_1801cbb10[0];
      local_c8._1_1_ = s_NVE_Vignette_fx_1801cbb10[1];
      local_c8._2_1_ = s_NVE_Vignette_fx_1801cbb10[2];
      local_c8._3_1_ = s_NVE_Vignette_fx_1801cbb10[3];
      local_c8._4_1_ = s_NVE_Vignette_fx_1801cbb10[4];
      local_c8._5_1_ = s_NVE_Vignette_fx_1801cbb10[5];
      local_c8._6_1_ = s_NVE_Vignette_fx_1801cbb10[6];
      local_c8._7_1_ = s_NVE_Vignette_fx_1801cbb10[7];
      uStack_c0 = (ulonglong)
                  CONCAT16(s_NVE_Vignette_fx_1801cbb10[0xe],
                           CONCAT24(s_NVE_Vignette_fx_1801cbb10._12_2_,
                                    s_NVE_Vignette_fx_1801cbb10._8_4_));
      local_98 = _DAT_1801d9000;
      uStack_90 = _UNK_1801d9008;
      local_a8[0] = s_NVE_Rain_fx_1801cb960[0];
      local_a8[1] = s_NVE_Rain_fx_1801cb960[1];
      local_a8[2] = s_NVE_Rain_fx_1801cb960[2];
      local_a8[3] = s_NVE_Rain_fx_1801cb960[3];
      local_a8[4] = s_NVE_Rain_fx_1801cb960[4];
      local_a8[5] = s_NVE_Rain_fx_1801cb960[5];
      local_a8[6] = s_NVE_Rain_fx_1801cb960[6];
      local_a8[7] = s_NVE_Rain_fx_1801cb960[7];
      uStack_a0 = (ulonglong)CONCAT12(s_NVE_Rain_fx_1801cb960[10],s_NVE_Rain_fx_1801cb960._8_2_);
      local_78 = _DAT_1801d9010;
      uStack_70 = _UNK_1801d9018;
      local_88[0] = s_NVE_Bloom_fx_1801cbb20[0];
      local_88[1] = s_NVE_Bloom_fx_1801cbb20[1];
      local_88[2] = s_NVE_Bloom_fx_1801cbb20[2];
      local_88[3] = s_NVE_Bloom_fx_1801cbb20[3];
      local_88[4] = s_NVE_Bloom_fx_1801cbb20[4];
      local_88[5] = s_NVE_Bloom_fx_1801cbb20[5];
      local_88[6] = s_NVE_Bloom_fx_1801cbb20[6];
      local_88[7] = s_NVE_Bloom_fx_1801cbb20[7];
      uStack_80 = (ulonglong)(uint)s_NVE_Bloom_fx_1801cbb20._8_4_;
      local_68 = (char *)0x0;
      uStack_60 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_68 = (char *)operator_new(0x20);
      uVar2 = s_NVE_VolumetricClouds_fx_1801cbb30._8_8_;
      local_58 = _DAT_1801d90a0;
      uStack_50 = _UNK_1801d90a8;
      *(int32_t *)local_68 = s_NVE_VolumetricClouds_fx_1801cbb30._0_8_;
      *(int32_t *)(local_68 + 8) = uVar2;
      *(int32_t *)(local_68 + 0x10) = s_NVE_VolumetricClouds_fx_1801cbb30._16_4_;
      *(int32_t *)(local_68 + 0x14) = s_NVE_VolumetricClouds_fx_1801cbb30._20_2_;
      local_68[0x16] = s_NVE_VolumetricClouds_fx_1801cbb30[0x16];
      local_68[0x17] = '\0';
      local_48 = (char *)0x0;
      uStack_40 = 0;
      local_38 = 0;
      uStack_30 = 0;
      local_48 = (char *)operator_new(0x20);
      uVar2 = s_NVE_VolumetricAurora_fx_1801cb848._8_8_;
      local_38 = _DAT_1801d90a0;
      uStack_30 = _UNK_1801d90a8;
      *(int32_t *)local_48 = s_NVE_VolumetricAurora_fx_1801cb848._0_8_;
      *(int32_t *)(local_48 + 8) = uVar2;
      *(int32_t *)(local_48 + 0x10) = s_NVE_VolumetricAurora_fx_1801cb848._16_4_;
      uVar5 = (ulonglong)(ushort)s_NVE_VolumetricAurora_fx_1801cb848._20_2_;
      *(int32_t *)(local_48 + 0x14) = s_NVE_VolumetricAurora_fx_1801cb848._20_2_;
      local_48[0x16] = s_NVE_VolumetricAurora_fx_1801cb848[0x16];
      local_48[0x17] = '\0';
      DAT_1801fbbd8 = (int32_t *)0x0;
      DAT_1801fbbe0 = (int32_t *)0x0;
      _DAT_1801fbbe8 = (int32_t *)0x0;
      puVar3 = (int32_t *)FUN_1800ba8c0(uVar5,5);
      _DAT_1801fbbe8 = puVar3 + 0x14;
      local_e8 = &DAT_1801fbbd8;
      puVar6 = &local_c8;
      local_d0 = &DAT_1801fbbd8;
      DAT_1801fbbd8 = puVar3;
      DAT_1801fbbe0 = puVar3;
      local_e0 = puVar3;
      do {
        local_d8 = puVar3;
        FUN_1800ba630(puVar3,puVar6);
        puVar3 = puVar3 + 4;
        puVar6 = puVar6 + 4;
      } while (puVar6 != local_28);
      param_2 = (int32_t *)0x20;
      DAT_1801fbbe0 = puVar3;
      local_d8 = puVar3;
      _eh_vector_destructor_iterator_(&local_c8,0x20,5,thunk_FUN_1800a6800);
      atexit((_func_5014 *)&LAB_180155f40);
      puVar4 = &DAT_1801fbbd0;
      _Init_thread_footer(&DAT_1801fbbd0);
    }
  }
  if (*(int *)(lVar1 + 0x10) < DAT_1801fbbf0) {
    puVar4 = &DAT_1801fbbf0;
    FUN_180125398(&DAT_1801fbbf0);
    if (DAT_1801fbbf0 == -1) {
      FUN_1800c5840(0x1801fba70,param_2,"InverseView");
      atexit((_func_5014 *)&LAB_180155f30);
      puVar4 = &DAT_1801fbbf0;
      _Init_thread_footer(&DAT_1801fbbf0);
    }
  }
  if (*(int *)(lVar1 + 0x10) < DAT_1801fbbf4) {
    puVar4 = &DAT_1801fbbf4;
    FUN_180125398(&DAT_1801fbbf4);
    if (DAT_1801fbbf4 == -1) {
      FUN_1800c5840(0x1801fba98,param_2,"WorldView");
      atexit((_func_5014 *)&LAB_180155f20);
      puVar4 = &DAT_1801fbbf4;
      _Init_thread_footer(&DAT_1801fbbf4);
    }
  }
  if (*(int *)(lVar1 + 0x10) < DAT_1801fbbf8) {
    puVar4 = &DAT_1801fbbf8;
    FUN_180125398(&DAT_1801fbbf8);
    if (DAT_1801fbbf8 == -1) {
      FUN_1800c5840(0x1801fbac0,param_2,"WorldInverseViewProjection");
      atexit((_func_5014 *)&LAB_180155f10);
      puVar4 = &DAT_1801fbbf8;
      _Init_thread_footer(&DAT_1801fbbf8);
    }
  }
  if (*(int *)(lVar1 + 0x10) < DAT_1801fbbfc) {
    puVar4 = &DAT_1801fbbfc;
    FUN_180125398(&DAT_1801fbbfc);
    if (DAT_1801fbbfc == -1) {
      FUN_1800c5840(0x1801fbae8,param_2,"WorldViewProjection");
      atexit((_func_5014 *)&LAB_180155f00);
      puVar4 = &DAT_1801fbbfc;
      _Init_thread_footer(&DAT_1801fbbfc);
    }
  }
  if (*(int *)(lVar1 + 0x10) < DAT_1801fbc00) {
    puVar4 = &DAT_1801fbc00;
    FUN_180125398(&DAT_1801fbc00);
    if (DAT_1801fbc00 == -1) {
      FUN_1800c5840(0x1801fbb10,param_2,"Projection");
      atexit((_func_5014 *)&LAB_180155ef0);
      puVar4 = &DAT_1801fbc00;
      _Init_thread_footer(&DAT_1801fbc00);
    }
  }
  if (*(int *)(lVar1 + 0x10) < DAT_1801fbc04) {
    puVar4 = &DAT_1801fbc04;
    FUN_180125398(&DAT_1801fbc04);
    if (DAT_1801fbc04 == -1) {
      param_2 = &DAT_1801fbbd8;
      FUN_1800c5680(0x1801fbb38,&DAT_1801fbbd8,"Clips");
      atexit((_func_5014 *)&LAB_180155ee0);
      puVar4 = &DAT_1801fbc04;
      _Init_thread_footer(&DAT_1801fbc04);
    }
  }
  if (*(int *)(lVar1 + 0x10) < DAT_1801fbc08) {
    puVar4 = &DAT_1801fbc08;
    FUN_180125398(&DAT_1801fbc08);
    if (DAT_1801fbc08 == -1) {
      FUN_1800c5840(0x1801fbb60,param_2,"WorldViewProjectionPrev");
      atexit((_func_5014 *)&LAB_180155ed0);
      puVar4 = &DAT_1801fbc08;
      _Init_thread_footer(&DAT_1801fbc08);
    }
  }
  if (*(int *)(lVar1 + 0x10) < DAT_1801fbc0c) {
    puVar4 = &DAT_1801fbc0c;
    FUN_180125398(&DAT_1801fbc0c);
    if (DAT_1801fbc0c == -1) {
      _DAT_1801fbb90 = 0;
      uRam00000001801fbb98 = 0;
      _DAT_1801fbba0 = 0;
      uRam00000001801fbba8 = 0;
      _DAT_1801fbbb0 = 0;
      uRam00000001801fbbb8 = 0;
      _DAT_1801fbbc0 = 0;
      uRam00000001801fbbc8 = 0;
      puVar4 = &DAT_1801fbc0c;
      _Init_thread_footer(&DAT_1801fbc0c);
    }
  }
  local_e8 = (int32_t *)&LAB_1800be0e0;
  if (DAT_1801ec6e0 == DAT_1801ec6e8) {
    FUN_1800c69d0(puVar4,DAT_1801ec6e0,&local_e8);
  }
  else {
    *DAT_1801ec6e0 = &LAB_1800be0e0;
    DAT_1801ec6e0 = DAT_1801ec6e0 + 1;
  }
  FUN_1801252c0(local_28[0] ^ (ulonglong)auStack_108);
  return;
}
}

