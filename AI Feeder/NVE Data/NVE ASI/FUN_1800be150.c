#include "FUN_1800be150.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800be150(void) {
code *pcVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  int32_t *puVar8;
  ulonglong uVar9;
  int32_t uVar10;
  int *piVar11;
  char **ppcVar12;
  int32_t auStack_128 [32];
  longlong *local_108;
  longlong *plStack_100;
  longlong *local_f8;
  longlong **local_e8;
  char **local_e0;
  longlong *local_d8;
  longlong *local_d0;
  longlong **local_c8;
  longlong *local_b8;
  int32_t uStack_b0;
  int32_t local_a8;
  int32_t uStack_a0;
  char local_98 [8];
  int32_t uStack_90;
  int32_t local_88;
  int32_t uStack_80;
  char local_78 [8];
  ulonglong uStack_70;
  int32_t local_68;
  int32_t uStack_60;
  char *local_58;
  int32_t uStack_50;
  int32_t local_48;
  int32_t uStack_40;
  char *local_38;
  int32_t uStack_30;
  int32_t local_28;
  int32_t uStack_20;
  char *local_18 [2];
  
  local_18[0] = (char *)(DAT_1801eb080 ^ (ulonglong)auStack_128);
  puVar8 = (int32_t *)(ulonglong)_tls_index;
  uVar10 = 0x10;
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (longlong)puVar8 * 8) + 0x10
                   );
  if (*piVar11 < DAT_1801fbce0) {
    puVar8 = &DAT_1801fbce0;
    FUN_180125398(&DAT_1801fbce0);
    if (DAT_1801fbce0 == -1) {
      FUN_1800c5540(0x1801fbc68,uVar10,"DaylightTime");
      atexit((_func_5014 *)&LAB_180155f90);
      puVar8 = &DAT_1801fbce0;
      _Init_thread_footer(&DAT_1801fbce0);
    }
  }
  if (*piVar11 < DAT_1801fbce4) {
    puVar8 = &DAT_1801fbce4;
    FUN_180125398(&DAT_1801fbce4);
    if (DAT_1801fbce4 == -1) {
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
      FUN_1800a6a40(&DAT_1801fbca0,(longlong *)&local_e8);
      _eh_vector_destructor_iterator_(&local_b8,0x20,3,thunk_FUN_1800a6800);
      DAT_1801fbc98 = "InVehicle";
      atexit((_func_5014 *)&LAB_180155f80);
      puVar8 = &DAT_1801fbce4;
      _Init_thread_footer(&DAT_1801fbce4);
    }
  }
  if (*piVar11 < DAT_1801fbce8) {
    puVar8 = &DAT_1801fbce8;
    FUN_180125398(&DAT_1801fbce8);
    if (DAT_1801fbce8 == -1) {
      local_58 = (char *)0x0;
      uStack_50 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_58 = (char *)operator_new(0x20);
      uVar10 = s_NVE_VolumetricClouds_fx_1801cbb30._8_8_;
      local_48 = _DAT_1801d90a0;
      uStack_40 = _UNK_1801d90a8;
      *(int32_t *)local_58 = s_NVE_VolumetricClouds_fx_1801cbb30._0_8_;
      *(int32_t *)(local_58 + 8) = uVar10;
      *(int32_t *)(local_58 + 0x10) = s_NVE_VolumetricClouds_fx_1801cbb30._16_4_;
      *(int32_t *)(local_58 + 0x14) = s_NVE_VolumetricClouds_fx_1801cbb30._20_2_;
      local_58[0x16] = s_NVE_VolumetricClouds_fx_1801cbb30[0x16];
      local_58[0x17] = '\0';
      local_38 = (char *)0x0;
      uStack_30 = 0;
      local_28 = 0;
      uStack_20 = 0;
      local_38 = (char *)operator_new(0x20);
      uVar10 = s_NVE_VolumetricClouds2024_fx_1801cbc30._8_8_;
      local_28 = _DAT_1801d90b0;
      uStack_20 = _UNK_1801d90b8;
      *(int32_t *)local_38 = s_NVE_VolumetricClouds2024_fx_1801cbc30._0_8_;
      *(int32_t *)(local_38 + 8) = uVar10;
      *(int32_t *)(local_38 + 0x10) = s_NVE_VolumetricClouds2024_fx_1801cbc30._16_8_;
      uVar9 = (ulonglong)(ushort)s_NVE_VolumetricClouds2024_fx_1801cbc30._24_2_;
      *(int32_t *)(local_38 + 0x18) = s_NVE_VolumetricClouds2024_fx_1801cbc30._24_2_;
      local_38[0x1a] = s_NVE_VolumetricClouds2024_fx_1801cbc30[0x1a];
      local_38[0x1b] = '\0';
      local_108 = (longlong *)0x0;
      plStack_100 = (longlong *)0x0;
      local_f8 = (longlong *)0x0;
      plVar7 = (longlong *)FUN_1800ba8c0(uVar9,2);
      local_f8 = plVar7 + 8;
      local_e8 = &local_108;
      ppcVar12 = &local_58;
      local_c8 = &local_108;
      local_108 = plVar7;
      plStack_100 = plVar7;
      local_d8 = plVar7;
      do {
        local_d0 = plVar7;
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
      for (; DAT_1801fbcd0 = plVar6, plStack_100 = plVar3, plVar2 != plVar4; plVar2 = plVar2 + 4) {
        if (DAT_1801fbcd0 == DAT_1801fbcd8) {
          FUN_1800c6d30((longlong *)&DAT_1801fbcc8,DAT_1801fbcd0,plVar2);
        }
        else {
          FUN_1800ba630(DAT_1801fbcd0,plVar2);
          DAT_1801fbcd0 = DAT_1801fbcd0 + 4;
        }
        plVar6 = DAT_1801fbcd0;
        plVar3 = plStack_100;
      }
      _DAT_1801fbcc0 = "FirstPerson";
      plVar7 = local_108;
      if (local_108 != (longlong *)0x0) {
        for (; plVar7 != plVar3; plVar7 = plVar7 + 4) {
          FUN_1800a6800(plVar7);
        }
        plVar7 = local_108;
        if ((0xfff < ((longlong)local_f8 - (longlong)local_108 & 0xffffffffffffffe0U)) &&
           (plVar7 = (longlong *)local_108[-1],
           0x1f < (ulonglong)((longlong)local_108 + (-8 - (longlong)plVar7)))) {
          FUN_18012b7b4();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        thunk_FUN_18012d5e8(plVar7);
        local_108 = (longlong *)0x0;
        plStack_100 = (longlong *)0x0;
        local_f8 = (longlong *)0x0;
      }
      _eh_vector_destructor_iterator_(&local_58,0x20,2,thunk_FUN_1800a6800);
      atexit((_func_5014 *)&LAB_180155f70);
      puVar8 = &DAT_1801fbce8;
      _Init_thread_footer(&DAT_1801fbce8);
    }
  }
  local_e8 = (longlong **)FUN_1800be720;
  if (DAT_1801ec6e0 == DAT_1801ec6e8) {
    FUN_1800c69d0(puVar8,DAT_1801ec6e0,&local_e8);
  }
  else {
    *DAT_1801ec6e0 = FUN_1800be720;
    DAT_1801ec6e0 = DAT_1801ec6e0 + 1;
  }
  FUN_1801252c0((ulonglong)local_18[0] ^ (ulonglong)auStack_128);
  return;
}
}

