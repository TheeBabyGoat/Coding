#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_1800bdba0 ----
void FUN_1800bdba0(longlong param_1)

{
  int32_t auVar1 [16];
  int32_t auVar2 [16];
  int32_t auVar3 [16];
  longlong lVar4;
  int32_t uVar5;
  longlong *plVar6;
  longlong *plVar7;
  int32_t *puVar8;
  int32_t *puVar9;
  int32_t *puVar10;
  int32_t uVar11;
  int32_t uVar12;
  int32_t uVar13;
  int32_t uVar14;
  int32_t uVar15;
  int32_t uVar16;
  int32_t uVar17;
  int32_t uVar18;
  int32_t uVar19;
  int32_t uVar20;
  int32_t uVar21;
  int32_t uVar22;
  int32_t uVar23;
  longlong local_res8;
  longlong local_res10;
  longlong local_res18;
  longlong local_res20;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  int32_t local_b8;
  int32_t local_b4;
  int32_t local_a8;
  int32_t local_a4;
  int32_t local_a0;
  int32_t local_9c;
  int32_t local_98;
  int32_t local_94;
  int32_t local_90;
  int32_t local_8c;
  int32_t local_88;
  int32_t local_84;
  int32_t local_80;
  int32_t local_7c;
  
  if (DAT_1801f3ad8 != (longlong *)0x0) {
    local_res8 = param_1;
    FUN_1800c73e0(&local_res8);
    lVar4 = *DAT_1801fba68;
    if (lVar4 != 0) {
      auVar1 = *(int32_t (*) [16])(lVar4 + 0xa0);
      uVar12 = auVar1._0_4_;
      uVar13 = auVar1._4_4_;
      uVar14 = auVar1._8_4_;
      uVar15 = auVar1._12_4_;
      auVar2 = *(int32_t (*) [16])(lVar4 + 0xb0);
      uVar16 = auVar2._0_4_;
      uVar17 = auVar2._4_4_;
      uVar18 = auVar2._8_4_;
      uVar19 = auVar2._12_4_;
      auVar3 = *(int32_t (*) [16])(lVar4 + 0xc0);
      uVar20 = auVar3._0_4_;
      uVar21 = auVar3._4_4_;
      uVar22 = auVar3._8_4_;
      uVar23 = auVar3._12_4_;
      uVar5 = FUN_1800c70f0((float *)0x0,auVar1._0_8_,auVar2._0_8_,auVar3._0_8_);
      puVar9 = DAT_1801fba88;
      plVar7 = DAT_1801f3ad8;
      uVar11 = (int32_t)((ulonglong)uVar5 >> 0x20);
      plVar6 = DAT_1801f3ad8;
      puVar8 = DAT_1801fba80;
      puVar10 = DAT_1801fbab0;
      if (DAT_1801f3ad8 != (longlong *)0x0) {
        for (; DAT_1801f3ad8 = plVar6, DAT_1801fbab0 = puVar10, puVar8 != puVar9;
            puVar8 = puVar8 + 4) {
          puVar10 = puVar8;
          if (0xf < (ulonglong)puVar8[3]) {
            puVar10 = (int32_t *)*puVar8;
          }
          (**(code **)(*plVar7 + 0xa0))(plVar7,&local_res10,puVar10,DAT_1801fba78);
          if (local_res10 != 0) {
            (**(code **)(*plVar7 + 0x108))(plVar7,local_res10,lVar4 + 0xd0,0x10,0);
          }
          plVar6 = DAT_1801f3ad8;
          puVar10 = DAT_1801fbab0;
        }
        puVar8 = DAT_1801fbaa8;
        if (plVar6 != (longlong *)0x0) {
          for (; puVar8 != puVar10; puVar8 = puVar8 + 4) {
            puVar9 = puVar8;
            if (0xf < (ulonglong)puVar8[3]) {
              puVar9 = (int32_t *)*puVar8;
            }
            (**(code **)(*plVar6 + 0xa0))(plVar6,&local_res18,puVar9,DAT_1801fbaa0);
            if (local_res18 != 0) {
              (**(code **)(*plVar6 + 0x108))(plVar6,local_res18,lVar4 + 0x50,0x10,0);
            }
          }
        }
      }
      puVar9 = DAT_1801fbad8;
      plVar7 = DAT_1801f3ad8;
      local_b8 = (int)uVar5;
      local_b4 = uVar11;
      local_a8 = uVar12;
      local_a4 = uVar13;
      local_a0 = uVar14;
      local_9c = uVar15;
      local_98 = uVar16;
      local_94 = uVar17;
      local_90 = uVar18;
      local_8c = uVar19;
      local_88 = uVar20;
      local_84 = uVar21;
      local_80 = uVar22;
      local_7c = uVar23;
      plVar6 = DAT_1801f3ad8;
      puVar8 = DAT_1801fbad0;
      puVar10 = DAT_1801fbb00;
      if (DAT_1801f3ad8 != (longlong *)0x0) {
        for (; DAT_1801f3ad8 = plVar6, DAT_1801fbb00 = puVar10, puVar8 != puVar9;
            puVar8 = puVar8 + 4) {
          puVar10 = puVar8;
          if (0xf < (ulonglong)puVar8[3]) {
            puVar10 = (int32_t *)*puVar8;
          }
          (**(code **)(*plVar7 + 0xa0))(plVar7,&local_res20,puVar10,DAT_1801fbac8);
          if (local_res20 != 0) {
            (**(code **)(*plVar7 + 0x108))(plVar7,local_res20,&local_b8,0x10,0);
          }
          plVar6 = DAT_1801f3ad8;
          puVar10 = DAT_1801fbb00;
        }
        plVar7 = plVar6;
        puVar8 = DAT_1801fbb28;
        puVar9 = DAT_1801fbaf8;
        if (plVar6 != (longlong *)0x0) {
          for (; DAT_1801f3ad8 = plVar7, DAT_1801fbb28 = puVar8, puVar9 != puVar10;
              puVar9 = puVar9 + 4) {
            puVar8 = puVar9;
            if (0xf < (ulonglong)puVar9[3]) {
              puVar8 = (int32_t *)*puVar9;
            }
            (**(code **)(*plVar6 + 0xa0))(plVar6,&local_d8,puVar8,DAT_1801fbaf0);
            if (local_d8 != 0) {
              (**(code **)(*plVar6 + 0x108))(plVar6,local_d8,(int32_t *)(lVar4 + 0x90),0x10,0);
            }
            plVar7 = DAT_1801f3ad8;
            puVar8 = DAT_1801fbb28;
          }
          puVar10 = DAT_1801fbb20;
          if (plVar7 != (longlong *)0x0) {
            for (; puVar10 != puVar8; puVar10 = puVar10 + 4) {
              puVar9 = puVar10;
              if (0xf < (ulonglong)puVar10[3]) {
                puVar9 = (int32_t *)*puVar10;
              }
              (**(code **)(*plVar7 + 0xa0))(plVar7,&local_d0,puVar9,DAT_1801fbb18);
              if (local_d0 != 0) {
                (**(code **)(*plVar7 + 0x108))(plVar7,local_d0,lVar4 + 0x150,0x10,0);
              }
            }
          }
        }
      }
      puVar9 = DAT_1801fbb50;
      plVar7 = DAT_1801f3ad8;
      local_res8 = *(longlong *)(lVar4 + 0x458);
      plVar6 = DAT_1801f3ad8;
      puVar8 = DAT_1801fbb48;
      puVar10 = DAT_1801fbb78;
      if (DAT_1801f3ad8 != (longlong *)0x0) {
        for (; DAT_1801f3ad8 = plVar6, DAT_1801fbb78 = puVar10, puVar8 != puVar9;
            puVar8 = puVar8 + 4) {
          puVar10 = puVar8;
          if (0xf < (ulonglong)puVar8[3]) {
            puVar10 = (int32_t *)*puVar8;
          }
          (**(code **)(*plVar7 + 0xa0))(plVar7,&local_c8,puVar10,DAT_1801fbb40);
          if (local_c8 != 0) {
            (**(code **)(*plVar7 + 0x108))(plVar7,local_c8,&local_res8,2,0);
          }
          plVar6 = DAT_1801f3ad8;
          puVar10 = DAT_1801fbb78;
        }
        puVar8 = DAT_1801fbb70;
        if (plVar6 != (longlong *)0x0) {
          for (; puVar8 != puVar10; puVar8 = puVar8 + 4) {
            puVar9 = puVar8;
            if (0xf < (ulonglong)puVar8[3]) {
              puVar9 = (int32_t *)*puVar8;
            }
            (**(code **)(*plVar6 + 0xa0))(plVar6,&local_c0,puVar9,DAT_1801fbb68);
            if (local_c0 != 0) {
              (**(code **)(*plVar6 + 0x108))(plVar6,local_c0,&DAT_1801fbb90,0x10,0);
            }
          }
        }
      }
      _DAT_1801fbb90 = *(int32_t *)(lVar4 + 0x90);
      uRam00000001801fbb98 = *(int32_t *)(lVar4 + 0x98);
      _DAT_1801fbba0 = *(int32_t *)(lVar4 + 0xa0);
      uRam00000001801fbba8 = *(int32_t *)(lVar4 + 0xa8);
      _DAT_1801fbbb0 = *(int32_t *)(lVar4 + 0xb0);
      uRam00000001801fbbb8 = *(int32_t *)(lVar4 + 0xb8);
      _DAT_1801fbbc0 = *(int32_t *)(lVar4 + 0xc0);
      uRam00000001801fbbc8 = *(int32_t *)(lVar4 + 200);
    }
    FUN_1800c73e0(&local_res8);
  }
  return;
}

// ---- Function: FUN_1800be0f0 ----
void FUN_1800be0f0(int32_t param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = DAT_1801f3ab8;
  if ((DAT_1801f3ad8 != 0) && (DAT_1801f3ab8 != 0)) {
    FUN_1800c5490(0x1801fbc10,param_2,DAT_1801f3ab8 + 0x3f0);
    FUN_1800c5490(0x1801fbc38,param_2,lVar1 + 0x3a0);
    return;
  }
  return;
}

// ---- Function: FUN_1800be150 ----
void FUN_1800be150(void)

{
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

// ---- Function: FUN_1800be720 ----
void FUN_1800be720(int32_t param_1,longlong param_2)

{
  int32_t *puVar1;
  longlong *plVar2;
  int32_t *puVar3;
  int32_t *puVar4;
  int32_t local_res8;
  int32_t local_res9;
  int32_t local_resb;
  longlong local_res10;
  longlong local_res18;
  
  puVar1 = DAT_1801fbc80;
  plVar2 = DAT_1801f3ad8;
  if (DAT_1801f3ad8 != (longlong *)0x0) {
    if (DAT_1801f3ad8 != (longlong *)0x0) {
      puVar3 = DAT_1801fbc78;
      if (DAT_1801fbc78 != DAT_1801fbc80) {
        do {
          puVar4 = puVar3;
          if (0xf < (ulonglong)puVar3[3]) {
            puVar4 = (int32_t *)*puVar3;
          }
          (**(code **)(*plVar2 + 0xa0))(plVar2,&local_res10,puVar4,DAT_1801fbc70);
          param_2 = local_res10;
          if (local_res10 != 0) {
            (**(code **)(*plVar2 + 0x108))(plVar2,local_res10,&DAT_1801f3a08,1,0);
          }
          puVar3 = puVar3 + 4;
        } while (puVar3 != puVar1);
      }
      puVar3 = DAT_1801fbca8;
      plVar2 = DAT_1801f3ad8;
      puVar1 = DAT_1801fbca0;
      if (DAT_1801f3ad8 != (longlong *)0x0) {
        for (; puVar1 != puVar3; puVar1 = puVar1 + 4) {
          puVar4 = puVar1;
          if (0xf < (ulonglong)puVar1[3]) {
            puVar4 = (int32_t *)*puVar1;
          }
          (**(code **)(*plVar2 + 0xa0))(plVar2,&local_res18,puVar4,DAT_1801fbc98);
          param_2 = local_res18;
          if (local_res18 != 0) {
            local_res8 = DAT_1801f3a0d;
            local_res9 = 1;
            local_resb = 0;
            (**(code **)(*plVar2 + 0x100))(plVar2,local_res18,&local_res8,4,0);
          }
        }
      }
    }
    FUN_1800c53d0(0x1801fbcb8,param_2,&DAT_1801f3a11);
  }
  return;
}

// ---- Function: FUN_1800be880 ----
void FUN_1800be880(void)

{
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

// ---- Function: FUN_1800bf000 ----
void FUN_1800bf000(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int32_t *puVar3;
  int32_t *puVar4;
  int32_t *puVar5;
  longlong local_res8;
  longlong local_res10;
  longlong local_res18;
  longlong local_res20;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  
  puVar4 = DAT_1801fbd08;
  plVar1 = DAT_1801f3ad8;
  if ((DAT_1801f3ad8 != (longlong *)0x0) && (DAT_1801f3ad8 != (longlong *)0x0)) {
    puVar3 = DAT_1801fbd00;
    local_res8 = param_1;
    if (DAT_1801fbd00 != DAT_1801fbd08) {
      do {
        puVar5 = puVar3;
        if (0xf < (ulonglong)puVar3[3]) {
          puVar5 = (int32_t *)*puVar3;
        }
        (**(code **)(*plVar1 + 0xa0))(plVar1,&local_res8,puVar5,DAT_1801fbcf8);
        if (local_res8 != 0) {
          (**(code **)(*plVar1 + 0x108))(plVar1,local_res8,&DAT_1801ec490,3,0);
        }
        puVar3 = puVar3 + 4;
      } while (puVar3 != puVar4);
    }
    puVar5 = DAT_1801fbd30;
    plVar2 = DAT_1801f3ad8;
    plVar1 = DAT_1801f3ad8;
    puVar4 = DAT_1801fbd28;
    puVar3 = DAT_1801fbd58;
    if (DAT_1801f3ad8 != (longlong *)0x0) {
      for (; DAT_1801f3ad8 = plVar1, DAT_1801fbd58 = puVar3, puVar4 != puVar5; puVar4 = puVar4 + 4)
      {
        puVar3 = puVar4;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar3 = (int32_t *)*puVar4;
        }
        (**(code **)(*plVar2 + 0xa0))(plVar2,&local_res10,puVar3,DAT_1801fbd20);
        if (local_res10 != 0) {
          (**(code **)(*plVar2 + 0x108))(plVar2,local_res10,&DAT_1801ec4a0,3,0);
        }
        plVar1 = DAT_1801f3ad8;
        puVar3 = DAT_1801fbd58;
      }
      plVar2 = plVar1;
      puVar4 = DAT_1801fbd80;
      puVar5 = DAT_1801fbd50;
      if (plVar1 != (longlong *)0x0) {
        for (; DAT_1801f3ad8 = plVar2, DAT_1801fbd80 = puVar4, puVar5 != puVar3; puVar5 = puVar5 + 4
            ) {
          puVar4 = puVar5;
          if (0xf < (ulonglong)puVar5[3]) {
            puVar4 = (int32_t *)*puVar5;
          }
          (**(code **)(*plVar1 + 0xa0))(plVar1,&local_res18,puVar4,DAT_1801fbd48);
          if (local_res18 != 0) {
            (**(code **)(*plVar1 + 0x108))(plVar1,local_res18,&DAT_1801ec4b0,3,0);
          }
          plVar2 = DAT_1801f3ad8;
          puVar4 = DAT_1801fbd80;
        }
        plVar1 = plVar2;
        puVar3 = DAT_1801fbda8;
        puVar5 = DAT_1801fbd78;
        if (plVar2 != (longlong *)0x0) {
          for (; DAT_1801f3ad8 = plVar1, DAT_1801fbda8 = puVar3, puVar5 != puVar4;
              puVar5 = puVar5 + 4) {
            puVar3 = puVar5;
            if (0xf < (ulonglong)puVar5[3]) {
              puVar3 = (int32_t *)*puVar5;
            }
            (**(code **)(*plVar2 + 0xa0))(plVar2,&local_res20,puVar3,DAT_1801fbd70);
            if (local_res20 != 0) {
              (**(code **)(*plVar2 + 0x108))(plVar2,local_res20,&DAT_1801ec4c0,3,0);
            }
            plVar1 = DAT_1801f3ad8;
            puVar3 = DAT_1801fbda8;
          }
          plVar2 = plVar1;
          puVar4 = DAT_1801fbdd0;
          puVar5 = DAT_1801fbda0;
          if (plVar1 != (longlong *)0x0) {
            for (; DAT_1801f3ad8 = plVar2, DAT_1801fbdd0 = puVar4, puVar5 != puVar3;
                puVar5 = puVar5 + 4) {
              puVar4 = puVar5;
              if (0xf < (ulonglong)puVar5[3]) {
                puVar4 = (int32_t *)*puVar5;
              }
              (**(code **)(*plVar1 + 0xa0))(plVar1,&local_78,puVar4,DAT_1801fbd98);
              if (local_78 != 0) {
                (**(code **)(*plVar1 + 0x108))(plVar1,local_78,&DAT_1801ec4d0,3,0);
              }
              plVar2 = DAT_1801f3ad8;
              puVar4 = DAT_1801fbdd0;
            }
            plVar1 = plVar2;
            puVar3 = DAT_1801fbdf8;
            puVar5 = DAT_1801fbdc8;
            if (plVar2 != (longlong *)0x0) {
              for (; DAT_1801f3ad8 = plVar1, DAT_1801fbdf8 = puVar3, puVar5 != puVar4;
                  puVar5 = puVar5 + 4) {
                puVar3 = puVar5;
                if (0xf < (ulonglong)puVar5[3]) {
                  puVar3 = (int32_t *)*puVar5;
                }
                (**(code **)(*plVar2 + 0xa0))(plVar2,&local_70,puVar3,DAT_1801fbdc0);
                if (local_70 != 0) {
                  (**(code **)(*plVar2 + 0x108))(plVar2,local_70,&DAT_1801fb108,4,0);
                }
                plVar1 = DAT_1801f3ad8;
                puVar3 = DAT_1801fbdf8;
              }
              plVar2 = plVar1;
              puVar4 = DAT_1801fbe20;
              puVar5 = DAT_1801fbdf0;
              if (plVar1 != (longlong *)0x0) {
                for (; DAT_1801f3ad8 = plVar2, DAT_1801fbe20 = puVar4, puVar5 != puVar3;
                    puVar5 = puVar5 + 4) {
                  puVar4 = puVar5;
                  if (0xf < (ulonglong)puVar5[3]) {
                    puVar4 = (int32_t *)*puVar5;
                  }
                  (**(code **)(*plVar1 + 0xa0))(plVar1,&local_68,puVar4,DAT_1801fbde8);
                  if (local_68 != 0) {
                    (**(code **)(*plVar1 + 0x108))(plVar1,local_68,&DAT_1801ec4e0,3,0);
                  }
                  plVar2 = DAT_1801f3ad8;
                  puVar4 = DAT_1801fbe20;
                }
                plVar1 = plVar2;
                puVar3 = DAT_1801fbe48;
                puVar5 = DAT_1801fbe18;
                if (plVar2 != (longlong *)0x0) {
                  for (; DAT_1801f3ad8 = plVar1, DAT_1801fbe48 = puVar3, puVar5 != puVar4;
                      puVar5 = puVar5 + 4) {
                    puVar3 = puVar5;
                    if (0xf < (ulonglong)puVar5[3]) {
                      puVar3 = (int32_t *)*puVar5;
                    }
                    (**(code **)(*plVar2 + 0xa0))(plVar2,&local_60,puVar3,DAT_1801fbe10);
                    if (local_60 != 0) {
                      (**(code **)(*plVar2 + 0x108))(plVar2,local_60,&DAT_1801ec4f0,3,0);
                    }
                    plVar1 = DAT_1801f3ad8;
                    puVar3 = DAT_1801fbe48;
                  }
                  plVar2 = plVar1;
                  puVar4 = DAT_1801fbe70;
                  puVar5 = DAT_1801fbe40;
                  if (plVar1 != (longlong *)0x0) {
                    for (; DAT_1801f3ad8 = plVar2, DAT_1801fbe70 = puVar4, puVar5 != puVar3;
                        puVar5 = puVar5 + 4) {
                      puVar4 = puVar5;
                      if (0xf < (ulonglong)puVar5[3]) {
                        puVar4 = (int32_t *)*puVar5;
                      }
                      (**(code **)(*plVar1 + 0xa0))(plVar1,&local_58,puVar4,DAT_1801fbe38);
                      if (local_58 != 0) {
                        (**(code **)(*plVar1 + 0x108))(plVar1,local_58,&DAT_1801ec500,3,0);
                      }
                      plVar2 = DAT_1801f3ad8;
                      puVar4 = DAT_1801fbe70;
                    }
                    plVar1 = plVar2;
                    puVar3 = DAT_1801fbe98;
                    puVar5 = DAT_1801fbe68;
                    if (plVar2 != (longlong *)0x0) {
                      for (; DAT_1801f3ad8 = plVar1, DAT_1801fbe98 = puVar3, puVar5 != puVar4;
                          puVar5 = puVar5 + 4) {
                        puVar3 = puVar5;
                        if (0xf < (ulonglong)puVar5[3]) {
                          puVar3 = (int32_t *)*puVar5;
                        }
                        (**(code **)(*plVar2 + 0xa0))(plVar2,&local_50,puVar3,DAT_1801fbe60);
                        if (local_50 != 0) {
                          (**(code **)(*plVar2 + 0x108))(plVar2,local_50,&DAT_1801ec510,3,0);
                        }
                        plVar1 = DAT_1801f3ad8;
                        puVar3 = DAT_1801fbe98;
                      }
                      plVar2 = plVar1;
                      puVar4 = DAT_1801fbec0;
                      puVar5 = DAT_1801fbe90;
                      if (plVar1 != (longlong *)0x0) {
                        for (; DAT_1801f3ad8 = plVar2, DAT_1801fbec0 = puVar4, puVar5 != puVar3;
                            puVar5 = puVar5 + 4) {
                          puVar4 = puVar5;
                          if (0xf < (ulonglong)puVar5[3]) {
                            puVar4 = (int32_t *)*puVar5;
                          }
                          (**(code **)(*plVar1 + 0xa0))(plVar1,&local_48,puVar4,DAT_1801fbe88);
                          if (local_48 != 0) {
                            (**(code **)(*plVar1 + 0x108))(plVar1,local_48,&DAT_1801ec520,3,0);
                          }
                          plVar2 = DAT_1801f3ad8;
                          puVar4 = DAT_1801fbec0;
                        }
                        plVar1 = plVar2;
                        puVar3 = DAT_1801fbee8;
                        puVar5 = DAT_1801fbeb8;
                        if (plVar2 != (longlong *)0x0) {
                          for (; DAT_1801f3ad8 = plVar1, DAT_1801fbee8 = puVar3, puVar5 != puVar4;
                              puVar5 = puVar5 + 4) {
                            puVar3 = puVar5;
                            if (0xf < (ulonglong)puVar5[3]) {
                              puVar3 = (int32_t *)*puVar5;
                            }
                            (**(code **)(*plVar2 + 0xa0))(plVar2,&local_40,puVar3,DAT_1801fbeb0);
                            if (local_40 != 0) {
                              (**(code **)(*plVar2 + 0x108))(plVar2,local_40,&DAT_1801ec530,3,0);
                            }
                            plVar1 = DAT_1801f3ad8;
                            puVar3 = DAT_1801fbee8;
                          }
                          plVar2 = plVar1;
                          puVar4 = DAT_1801fbf10;
                          puVar5 = DAT_1801fbee0;
                          if (plVar1 != (longlong *)0x0) {
                            for (; DAT_1801f3ad8 = plVar2, DAT_1801fbf10 = puVar4, puVar5 != puVar3;
                                puVar5 = puVar5 + 4) {
                              puVar4 = puVar5;
                              if (0xf < (ulonglong)puVar5[3]) {
                                puVar4 = (int32_t *)*puVar5;
                              }
                              (**(code **)(*plVar1 + 0xa0))(plVar1,&local_38,puVar4,DAT_1801fbed8);
                              if (local_38 != 0) {
                                (**(code **)(*plVar1 + 0x108))(plVar1,local_38,&DAT_1801ec540,3,0);
                              }
                              plVar2 = DAT_1801f3ad8;
                              puVar4 = DAT_1801fbf10;
                            }
                            puVar3 = DAT_1801fbf08;
                            if (plVar2 != (longlong *)0x0) {
                              for (; puVar3 != puVar4; puVar3 = puVar3 + 4) {
                                puVar5 = puVar3;
                                if (0xf < (ulonglong)puVar3[3]) {
                                  puVar5 = (int32_t *)*puVar3;
                                }
                                (**(code **)(*plVar2 + 0xa0))(plVar2,&local_30,puVar5,DAT_1801fbf00)
                                ;
                                if (local_30 != 0) {
                                  (**(code **)(*plVar2 + 0x108))(plVar2,local_30,&DAT_1801ec550,3,0)
                                  ;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}

// ---- Function: FUN_1800bf750 ----
void FUN_1800bf750(void)

{
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

// ---- Function: FUN_1800c0d60 ----
void FUN_1800c0d60(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int32_t *puVar4;
  int32_t *puVar5;
  int32_t *puVar6;
  ulonglong uVar7;
  float fVar8;
  longlong local_res8;
  int local_res10;
  int32_t local_res14;
  float local_res18;
  float local_res1c;
  int32_t local_res20;
  int32_t local_res24;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  int32_t local_1ac;
  int32_t local_1a8;
  int32_t local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  int32_t local_178;
  int32_t local_170;
  int32_t local_168;
  int32_t local_160;
  int32_t local_158;
  int32_t local_150;
  int32_t local_148;
  int32_t local_140;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  int32_t local_70;
  int32_t local_68;
  int32_t local_60;
  longlong local_58 [5];
  
  if ((DAT_1801f3ad8 != (longlong *)0x0) &&
     (local_res8 = param_1, cVar3 = (*DAT_1801ec0b0)(1), cVar3 == '\0')) {
    FUN_1800c73e0(&local_res8);
    FUN_18011cdd0((int *)&local_res8,&local_res10);
    puVar5 = DAT_1801fbf90;
    plVar1 = DAT_1801f3ad8;
    uVar7 = DAT_1801f3a28;
    if (DAT_1801f3a18 != '\0') {
      uVar7 = DAT_1801ec178;
    }
    local_res18 = (float)(int)local_res8;
    local_res1c = (float)local_res10;
    puVar4 = DAT_1801fbf88;
    if (DAT_1801f3ad8 != (longlong *)0x0) {
      for (; puVar4 != puVar5; puVar4 = puVar4 + 4) {
        puVar6 = puVar4;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar6 = (int32_t *)*puVar4;
        }
        (**(code **)(*plVar1 + 0xa0))(plVar1,&local_a8,puVar6,DAT_1801fbf80);
        if (local_a8 != 0) {
          (**(code **)(*plVar1 + 0x108))(plVar1,local_a8,&local_res18,2,0);
        }
      }
    }
    puVar5 = DAT_1801fbfb8;
    plVar1 = DAT_1801f3ad8;
    if ((longlong)(uVar7 * 2) < 0) {
      fVar8 = (float)(uVar7 & 0x7fffffffffffffff) + (float)(uVar7 & 0x7fffffffffffffff);
    }
    else {
      fVar8 = (float)(longlong)(uVar7 * 2);
    }
    local_res8 = CONCAT44(local_res8._4_4_,fVar8);
    puVar4 = DAT_1801fbfb0;
    if (DAT_1801f3ad8 != (longlong *)0x0) {
      for (; puVar4 != puVar5; puVar4 = puVar4 + 4) {
        puVar6 = puVar4;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar6 = (int32_t *)*puVar4;
        }
        (**(code **)(*plVar1 + 0xa0))(plVar1,&local_78,puVar6,DAT_1801fbfa8);
        if (local_78 != 0) {
          (**(code **)(*plVar1 + 0x108))(plVar1,local_78,&local_res8,1,0);
        }
      }
    }
    _DAT_1801fbfd0 = DAT_1801f3ae8;
    _DAT_1801fbfd8 = DAT_1801f553c;
    _DAT_1801fbfd4 = DAT_1801f5538;
    _DAT_1801fbfe0 = DAT_1801f5550;
    _DAT_1801fbfdc = DAT_1801f554c;
    _DAT_1801fbfe8 = DAT_1801f5574;
    _DAT_1801fbfe4 = DAT_1801f5554;
    _DAT_1801fbff0 = DAT_1801f557c;
    _DAT_1801fbfec = DAT_1801f5578;
    _DAT_1801fbff8 = DAT_1801f567c;
    _DAT_1801fbff4 = DAT_1801f5664;
    if (DAT_1801ec180 == 0) {
      _DAT_1801fc000 = DAT_1801f55cc;
      _DAT_1801fc008 = DAT_1801f55c4;
      _DAT_1801fc004 = DAT_1801f55c0;
    }
    else if (DAT_1801ec180 == 1) {
      _DAT_1801fc004 = DAT_1801f55c0;
      _DAT_1801fc000 = DAT_1801f55cc * _DAT_1801d8e54;
      _DAT_1801fc008 = DAT_1801f55c4;
    }
    else if (DAT_1801ec180 == 2) {
      _DAT_1801fc004 = DAT_1801f55c0;
      _DAT_1801fc000 = DAT_1801f55cc * DAT_1801d8e60;
      _DAT_1801fc008 = DAT_1801f55c4;
    }
    else if (DAT_1801ec180 == 3) {
      _DAT_1801fc004 = DAT_1801f55c0 + DAT_1801d8e60;
      _DAT_1801fc008 = DAT_1801f55c4 + DAT_1801d8eb4;
      _DAT_1801fc000 = DAT_1801f55cc * DAT_1801d8e70;
    }
    else if (DAT_1801ec180 == 4) {
      _DAT_1801fc004 = DAT_1801f55c0 + DAT_1801d8e88;
      _DAT_1801fc008 = DAT_1801f55c4 + DAT_1801d8ecc;
      _DAT_1801fc000 = DAT_1801f55cc * DAT_1801d8e74;
    }
    _DAT_1801fbffc = DAT_1801f55c8;
    _DAT_1801fc00c = DAT_1801f55d4;
    _DAT_1801fc010 = DAT_1801f55e0;
    _DAT_1801fc014 = DAT_1801f5540;
    _DAT_1801fc018 = DAT_1801f5544;
    _DAT_1801fc01c = DAT_1801f5548;
    _DAT_1801fc020 = _DAT_1801f55f0;
    uRam00000001801fc028 = _DAT_1801f55f8;
    _DAT_1801fc034 = DAT_1801f5604;
    _DAT_1801fc030 = DAT_1801f5600;
    _DAT_1801fc03c = DAT_1801ec304;
    _DAT_1801fc038 = DAT_1801f5608;
    _DAT_1801fc044 = DAT_1801ec314;
    _DAT_1801fc040 = DAT_1801ec310;
    _DAT_1801fc04c = DAT_1801ec320;
    _DAT_1801fc048 = DAT_1801ec318;
    _DAT_1801fc054 = DAT_1801ec328;
    _DAT_1801fc050 = DAT_1801ec324;
    _DAT_1801fc05c = DAT_1801f5598;
    _DAT_1801fc058 = DAT_1801f5594;
    _DAT_1801fc064 = DAT_1801ec300;
    _DAT_1801fc060 = DAT_1801ec2fc;
    _DAT_1801fc07c = DAT_1801f5584;
    _DAT_1801fc068 = _DAT_1801f559c;
    uRam00000001801fc070 = _DAT_1801f55a4;
    _DAT_1801fc084 = DAT_1801f5558;
    _DAT_1801fc078 = DAT_1801f5580;
    _DAT_1801fc08c = DAT_1801f5630;
    _DAT_1801fc080 = DAT_1801f5588;
    _DAT_1801fc094 = DAT_1801f5638;
    _DAT_1801fc088 = DAT_1801f562c;
    _DAT_1801fc0b0 = DAT_1801f54f8;
    _DAT_1801fc090 = DAT_1801f5634;
    _DAT_1801fc09c = _DAT_1801f5500;
    uRam00000001801fc0a4 = _DAT_1801f5508;
    _DAT_1801fc0ac = DAT_1801f54f4;
    _DAT_1801fc0c0 = (float)DAT_1801f5510;
    _DAT_1801fc0b4 = DAT_1801f54fc;
    _DAT_1801fc0c4 = DAT_1801f5660;
    _DAT_1801fc0cc = DAT_1801f5518;
    _DAT_1801fc0c8 = DAT_1801f5514;
    _DAT_1801fc0d8 = DAT_1801ec2f4;
    _DAT_1801fc0d4 = DAT_1801ec2f0;
    _DAT_1801fc0dc = _DAT_1801f551c;
    uRam00000001801fc0e4 = _DAT_1801f5524;
    if (DAT_1801f39f6 == '\0') {
      _DAT_1801fc0ec = DAT_1801f55d8;
    }
    else {
      _DAT_1801fc0ec = 0;
    }
    _DAT_1801fc0f0 = DAT_1801f55dc;
    _DAT_1801fc0f8 = DAT_1801ec30c;
    _DAT_1801fc100 = DAT_1801f55e8;
    _DAT_1801fc108 = (float)DAT_1801f5678;
    _DAT_1801fc0f4 = DAT_1801f55d0;
    _DAT_1801fc110 = DAT_1801f552c;
    _DAT_1801fc0fc = DAT_1801f55e4;
    _DAT_1801fc118 = DAT_1801f5648;
    _DAT_1801fc104 = DAT_1801f55ec;
    _DAT_1801fc120 = DAT_1801f5534;
    _DAT_1801fc10c = DAT_1801f5680;
    _DAT_1801fc128 = DAT_1801f5640;
    _DAT_1801fc114 = DAT_1801f5530;
    _DAT_1801fc130 = DAT_1801ec2e8;
    _DAT_1801fc11c = DAT_1801f564c;
    _DAT_1801fc138 = DAT_1801f555c;
    _DAT_1801fc124 = DAT_1801f563c;
    _DAT_1801fc150 = _DAT_1801f560c;
    uRam00000001801fc158 = _DAT_1801f5614;
    _DAT_1801fc12c = DAT_1801f5644;
    _DAT_1801fc160 = (float)DAT_1801ec308;
    _DAT_1801fc134 = DAT_1801ec2ec;
    _DAT_1801fc13c = _DAT_1801f5564;
    uRam00000001801fc144 = _DAT_1801f556c;
    _DAT_1801fc174 = DAT_1801f5668;
    _DAT_1801fc14c = DAT_1801f5560;
    _DAT_1801fc178 = DAT_1801ec2f8;
    _DAT_1801fc168 = DAT_1801ec31c;
    _DAT_1801fc184 = DAT_1801ec330;
    _DAT_1801fc170 = DAT_1801ec3b0;
    _DAT_1801fc190 = _DAT_1801ec360;
    uRam00000001801fc198 = _DAT_1801ec368;
    _DAT_1801fc180 = DAT_1801ec32c;
    _DAT_1801fc1a0 = _DAT_1801ec370;
    uRam00000001801fc1a8 = _DAT_1801ec378;
    _DAT_1801fc188 = DAT_1801ec3e8;
    _DAT_1801fc1b0 = DAT_1801ec380;
    _DAT_1801fc1b4 = DAT_1801ec384;
    _DAT_1801fc1b8 = DAT_1801ec354;
    _DAT_1801fc1bc = DAT_1801ec358;
    _DAT_1801fc1c0 = DAT_1801ec35c;
    _DAT_1801fc1c4 = DAT_1801ec388;
    _DAT_1801fc0b8 = DAT_1801ec38c;
    _DAT_1801fc0bc = DAT_1801ec390;
    _DAT_1801fc164 = DAT_1801f5688;
    _DAT_1801fc16c = DAT_1801f568c;
    _DAT_1801fc17c = DAT_1801f5690;
    _DAT_1801fc18c = DAT_1801f5694;
    _DAT_1801fc1d0 = DAT_1801f5698;
    _DAT_1801fc1d4 = DAT_1801f569c;
    _DAT_1801fc1d8 = DAT_1801f56a0;
    _DAT_1801fc1dc = DAT_1801f561c;
    _DAT_1801fc1e0 = DAT_1801f5620;
    _DAT_1801fc1e4 = DAT_1801f5624;
    _DAT_1801fc1e8 = DAT_1801f56a4;
    _DAT_1801fc1ec = DAT_1801f56a8;
    _DAT_1801fc208 = DAT_1801ec3a8;
    _DAT_1801fc098 = DAT_1801ec3c0;
    _DAT_1801fc1c8 = DAT_1801ec3b8;
    _DAT_1801fc1f4 = _DAT_1801ec394;
    uRam00000001801fc1fc = _DAT_1801ec39c;
    _DAT_1801fc204 = DAT_1801ec3a4;
    _DAT_1801fc20c = DAT_1801ec3ac;
    _DAT_1801fc0d0 = DAT_1801ec3b4;
    _DAT_1801fc210 = _DAT_1801ec3c4;
    uRam00000001801fc218 = _DAT_1801ec3cc;
    _DAT_1801fc1cc = DAT_1801ec3bc;
    _DAT_1801fc22c = DAT_1801ec3d4;
    _DAT_1801fc220 = DAT_1801ec3d8;
    _DAT_1801fc224 = DAT_1801ec3dc;
    _DAT_1801fc228 = DAT_1801ec3e0;
    _DAT_1801fc1f0 = DAT_1801f5650;
    _DAT_1801fc248 = DAT_1801ec3f0;
    _DAT_1801fc250 = _DAT_1801f56c0;
    uRam00000001801fc258 = _DAT_1801f56c8;
    _DAT_1801fc260 = DAT_1801f56d0;
    _DAT_1801fc268 = DAT_1801f56d8;
    _DAT_1801fc270 = DAT_1801ec3f8;
    _DAT_1801fc230 = _DAT_1801f55ac;
    uRam00000001801fc238 = _DAT_1801f55b4;
    _DAT_1801fc240 = DAT_1801ec3e4;
    _DAT_1801fc244 = DAT_1801ec3ec;
    _DAT_1801fc24c = DAT_1801ec3f4;
    _DAT_1801fc264 = DAT_1801f56d4;
    _DAT_1801fc26c = DAT_1801f5684;
    if (DAT_1801f3ad8 != (longlong *)0x0) {
      (**(code **)(*DAT_1801f3ad8 + 0xa0))
                (DAT_1801f3ad8,&local_70,"NVE_VolumetricClouds.fx",&DAT_1801cbd80);
      (**(code **)(*DAT_1801f3ad8 + 0x108))(DAT_1801f3ad8,local_70,&DAT_1801fbfd0,0x10,0);
      if (DAT_1801f3ad8 != (longlong *)0x0) {
        (**(code **)(*DAT_1801f3ad8 + 0xa0))
                  (DAT_1801f3ad8,&local_68,"NVE_VolumetricClouds.fx",&DAT_1801cbd84);
        (**(code **)(*DAT_1801f3ad8 + 0x108))(DAT_1801f3ad8,local_68,&DAT_1801fc010,0x10,0);
        if (DAT_1801f3ad8 != (longlong *)0x0) {
          (**(code **)(*DAT_1801f3ad8 + 0xa0))
                    (DAT_1801f3ad8,&local_60,"NVE_VolumetricClouds.fx",&DAT_1801cbd88);
          (**(code **)(*DAT_1801f3ad8 + 0x108))(DAT_1801f3ad8,local_60,&DAT_1801fc050,0x10,0);
          if (DAT_1801f3ad8 != (longlong *)0x0) {
            (**(code **)(*DAT_1801f3ad8 + 0xa0))
                      (DAT_1801f3ad8,&local_178,"NVE_VolumetricClouds.fx",&DAT_1801cbd8c);
            (**(code **)(*DAT_1801f3ad8 + 0x108))(DAT_1801f3ad8,local_178,&DAT_1801fc090,0x10,0);
            if (DAT_1801f3ad8 != (longlong *)0x0) {
              (**(code **)(*DAT_1801f3ad8 + 0xa0))
                        (DAT_1801f3ad8,&local_170,"NVE_VolumetricClouds.fx",&DAT_1801cbd90);
              (**(code **)(*DAT_1801f3ad8 + 0x108))(DAT_1801f3ad8,local_170,&DAT_1801fc0d0,0x10,0);
              if (DAT_1801f3ad8 != (longlong *)0x0) {
                (**(code **)(*DAT_1801f3ad8 + 0xa0))
                          (DAT_1801f3ad8,&local_168,"NVE_VolumetricClouds.fx",&DAT_1801cbd94);
                (**(code **)(*DAT_1801f3ad8 + 0x108))(DAT_1801f3ad8,local_168,&DAT_1801fc110,0x10,0)
                ;
                if (DAT_1801f3ad8 != (longlong *)0x0) {
                  (**(code **)(*DAT_1801f3ad8 + 0xa0))
                            (DAT_1801f3ad8,&local_160,"NVE_VolumetricClouds.fx",&DAT_1801cbd98);
                  (**(code **)(*DAT_1801f3ad8 + 0x108))
                            (DAT_1801f3ad8,local_160,&DAT_1801fc150,0x10,0);
                  if (DAT_1801f3ad8 != (longlong *)0x0) {
                    (**(code **)(*DAT_1801f3ad8 + 0xa0))
                              (DAT_1801f3ad8,&local_158,"NVE_VolumetricClouds.fx",&DAT_1801cbd9c);
                    (**(code **)(*DAT_1801f3ad8 + 0x108))
                              (DAT_1801f3ad8,local_158,&DAT_1801fc190,0x10,0);
                    if (DAT_1801f3ad8 != (longlong *)0x0) {
                      (**(code **)(*DAT_1801f3ad8 + 0xa0))
                                (DAT_1801f3ad8,&local_150,"NVE_VolumetricClouds.fx",&DAT_1801cbda0);
                      (**(code **)(*DAT_1801f3ad8 + 0x108))
                                (DAT_1801f3ad8,local_150,&DAT_1801fc1d0,0x10,0);
                      if (DAT_1801f3ad8 != (longlong *)0x0) {
                        (**(code **)(*DAT_1801f3ad8 + 0xa0))
                                  (DAT_1801f3ad8,&local_148,"NVE_VolumetricClouds.fx",&DAT_1801cbda4
                                  );
                        (**(code **)(*DAT_1801f3ad8 + 0x108))
                                  (DAT_1801f3ad8,local_148,&DAT_1801fc210,0x10,0);
                        if (DAT_1801f3ad8 != (longlong *)0x0) {
                          (**(code **)(*DAT_1801f3ad8 + 0xa0))
                                    (DAT_1801f3ad8,&local_140,"NVE_VolumetricClouds.fx",
                                     &DAT_1801cbdac);
                          (**(code **)(*DAT_1801f3ad8 + 0x108))
                                    (DAT_1801f3ad8,local_140,&DAT_1801fc250,0x10,0);
                          puVar4 = DAT_1801fc2a8;
                          plVar1 = DAT_1801f3ad8;
                          puVar5 = DAT_1801fc2a0;
                          if (DAT_1801f3ad8 != (longlong *)0x0) {
                            for (; puVar5 != puVar4; puVar5 = puVar5 + 4) {
                              puVar6 = puVar5;
                              if (0xf < (ulonglong)puVar5[3]) {
                                puVar6 = (int32_t *)*puVar5;
                              }
                              (**(code **)(*plVar1 + 0xa0))(plVar1,&local_138,puVar6,DAT_1801fc298);
                              if (local_138 != 0) {
                                (**(code **)(*plVar1 + 0x108))(plVar1,local_138,&DAT_1801ec440,3,0);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar6 = DAT_1801fc2d0;
    plVar2 = DAT_1801f3ad8;
    local_1ac = DAT_1801ec450;
    local_1a4 = DAT_1801f3a30;
    local_1a8 = DAT_1801ec454;
    plVar1 = DAT_1801f3ad8;
    puVar5 = DAT_1801fc2c8;
    puVar4 = DAT_1801fc2f8;
    if (DAT_1801f3ad8 != (longlong *)0x0) {
      for (; DAT_1801f3ad8 = plVar1, DAT_1801fc2f8 = puVar4, puVar5 != puVar6; puVar5 = puVar5 + 4)
      {
        puVar4 = puVar5;
        if (0xf < (ulonglong)puVar5[3]) {
          puVar4 = (int32_t *)*puVar5;
        }
        (**(code **)(*plVar2 + 0xa0))(plVar2,&local_130,puVar4,DAT_1801fc2c0);
        if (local_130 != 0) {
          (**(code **)(*plVar2 + 0x108))(plVar2,local_130,&local_1ac,3,0);
        }
        plVar1 = DAT_1801f3ad8;
        puVar4 = DAT_1801fc2f8;
      }
      plVar2 = plVar1;
      puVar5 = DAT_1801fc320;
      puVar6 = DAT_1801fc2f0;
      if (plVar1 != (longlong *)0x0) {
        for (; DAT_1801f3ad8 = plVar2, DAT_1801fc320 = puVar5, puVar6 != puVar4; puVar6 = puVar6 + 4
            ) {
          puVar5 = puVar6;
          if (0xf < (ulonglong)puVar6[3]) {
            puVar5 = (int32_t *)*puVar6;
          }
          (**(code **)(*plVar1 + 0xa0))(plVar1,&local_128,puVar5,DAT_1801fc2e8);
          if (local_128 != 0) {
            (**(code **)(*plVar1 + 0x108))(plVar1,local_128,&DAT_1801ec590,3,0);
          }
          plVar2 = DAT_1801f3ad8;
          puVar5 = DAT_1801fc320;
        }
        plVar1 = plVar2;
        puVar4 = DAT_1801fc348;
        puVar6 = DAT_1801fc318;
        if (plVar2 != (longlong *)0x0) {
          for (; DAT_1801f3ad8 = plVar1, DAT_1801fc348 = puVar4, puVar6 != puVar5;
              puVar6 = puVar6 + 4) {
            puVar4 = puVar6;
            if (0xf < (ulonglong)puVar6[3]) {
              puVar4 = (int32_t *)*puVar6;
            }
            (**(code **)(*plVar2 + 0xa0))(plVar2,&local_120,puVar4,DAT_1801fc310);
            if (local_120 != 0) {
              (**(code **)(*plVar2 + 0x108))(plVar2,local_120,&DAT_1801ec5a0,3,0);
            }
            plVar1 = DAT_1801f3ad8;
            puVar4 = DAT_1801fc348;
          }
          plVar2 = plVar1;
          puVar5 = DAT_1801fc370;
          puVar6 = DAT_1801fc340;
          if (plVar1 != (longlong *)0x0) {
            for (; DAT_1801f3ad8 = plVar2, DAT_1801fc370 = puVar5, puVar6 != puVar4;
                puVar6 = puVar6 + 4) {
              puVar5 = puVar6;
              if (0xf < (ulonglong)puVar6[3]) {
                puVar5 = (int32_t *)*puVar6;
              }
              (**(code **)(*plVar1 + 0xa0))(plVar1,&local_118,puVar5,DAT_1801fc338);
              if (local_118 != 0) {
                (**(code **)(*plVar1 + 0x108))(plVar1,local_118,&DAT_1801ec5b0,3,0);
              }
              plVar2 = DAT_1801f3ad8;
              puVar5 = DAT_1801fc370;
            }
            plVar1 = plVar2;
            puVar4 = DAT_1801fc398;
            puVar6 = DAT_1801fc368;
            if (plVar2 != (longlong *)0x0) {
              for (; DAT_1801f3ad8 = plVar1, DAT_1801fc398 = puVar4, puVar6 != puVar5;
                  puVar6 = puVar6 + 4) {
                puVar4 = puVar6;
                if (0xf < (ulonglong)puVar6[3]) {
                  puVar4 = (int32_t *)*puVar6;
                }
                (**(code **)(*plVar2 + 0xa0))(plVar2,&local_110,puVar4,DAT_1801fc360);
                if (local_110 != 0) {
                  (**(code **)(*plVar2 + 0x108))(plVar2,local_110,&DAT_1801f566c,3,0);
                }
                plVar1 = DAT_1801f3ad8;
                puVar4 = DAT_1801fc398;
              }
              plVar2 = plVar1;
              puVar5 = DAT_1801fc3c0;
              puVar6 = DAT_1801fc390;
              if (plVar1 != (longlong *)0x0) {
                for (; DAT_1801f3ad8 = plVar2, DAT_1801fc3c0 = puVar5, puVar6 != puVar4;
                    puVar6 = puVar6 + 4) {
                  puVar5 = puVar6;
                  if (0xf < (ulonglong)puVar6[3]) {
                    puVar5 = (int32_t *)*puVar6;
                  }
                  (**(code **)(*plVar1 + 0xa0))(plVar1,&local_108,puVar5,DAT_1801fc388);
                  if (local_108 != 0) {
                    (**(code **)(*plVar1 + 0x108))(plVar1,local_108,&DAT_1801f54b8,3,0);
                  }
                  plVar2 = DAT_1801f3ad8;
                  puVar5 = DAT_1801fc3c0;
                }
                plVar1 = plVar2;
                puVar4 = DAT_1801fc3e8;
                puVar6 = DAT_1801fc3b8;
                if (plVar2 != (longlong *)0x0) {
                  for (; DAT_1801f3ad8 = plVar1, DAT_1801fc3e8 = puVar4, puVar6 != puVar5;
                      puVar6 = puVar6 + 4) {
                    puVar4 = puVar6;
                    if (0xf < (ulonglong)puVar6[3]) {
                      puVar4 = (int32_t *)*puVar6;
                    }
                    (**(code **)(*plVar2 + 0xa0))(plVar2,&local_100,puVar4,DAT_1801fc3b0);
                    if (local_100 != 0) {
                      (**(code **)(*plVar2 + 0x108))(plVar2,local_100,&DAT_1801f54c4,3,0);
                    }
                    plVar1 = DAT_1801f3ad8;
                    puVar4 = DAT_1801fc3e8;
                  }
                  plVar2 = plVar1;
                  puVar5 = DAT_1801fc410;
                  puVar6 = DAT_1801fc3e0;
                  if (plVar1 != (longlong *)0x0) {
                    for (; DAT_1801f3ad8 = plVar2, DAT_1801fc410 = puVar5, puVar6 != puVar4;
                        puVar6 = puVar6 + 4) {
                      puVar5 = puVar6;
                      if (0xf < (ulonglong)puVar6[3]) {
                        puVar5 = (int32_t *)*puVar6;
                      }
                      (**(code **)(*plVar1 + 0xa0))(plVar1,&local_f8,puVar5,DAT_1801fc3d8);
                      if (local_f8 != 0) {
                        (**(code **)(*plVar1 + 0x108))(plVar1,local_f8,&DAT_1801f54d0,3,0);
                      }
                      plVar2 = DAT_1801f3ad8;
                      puVar5 = DAT_1801fc410;
                    }
                    plVar1 = plVar2;
                    puVar4 = DAT_1801fc438;
                    puVar6 = DAT_1801fc408;
                    if (plVar2 != (longlong *)0x0) {
                      for (; DAT_1801f3ad8 = plVar1, DAT_1801fc438 = puVar4, puVar6 != puVar5;
                          puVar6 = puVar6 + 4) {
                        puVar4 = puVar6;
                        if (0xf < (ulonglong)puVar6[3]) {
                          puVar4 = (int32_t *)*puVar6;
                        }
                        (**(code **)(*plVar2 + 0xa0))(plVar2,&local_f0,puVar4,DAT_1801fc400);
                        if (local_f0 != 0) {
                          (**(code **)(*plVar2 + 0x108))(plVar2,local_f0,&DAT_1801f54dc,3,0);
                        }
                        plVar1 = DAT_1801f3ad8;
                        puVar4 = DAT_1801fc438;
                      }
                      plVar2 = plVar1;
                      puVar5 = DAT_1801fc460;
                      puVar6 = DAT_1801fc430;
                      if (plVar1 != (longlong *)0x0) {
                        for (; DAT_1801f3ad8 = plVar2, DAT_1801fc460 = puVar5, puVar6 != puVar4;
                            puVar6 = puVar6 + 4) {
                          puVar5 = puVar6;
                          if (0xf < (ulonglong)puVar6[3]) {
                            puVar5 = (int32_t *)*puVar6;
                          }
                          (**(code **)(*plVar1 + 0xa0))(plVar1,&local_e8,puVar5,DAT_1801fc428);
                          if (local_e8 != 0) {
                            (**(code **)(*plVar1 + 0x108))(plVar1,local_e8,&DAT_1801f54e8,3,0);
                          }
                          plVar2 = DAT_1801f3ad8;
                          puVar5 = DAT_1801fc460;
                        }
                        plVar1 = plVar2;
                        puVar4 = DAT_1801fc488;
                        puVar6 = DAT_1801fc458;
                        if (plVar2 != (longlong *)0x0) {
                          for (; DAT_1801f3ad8 = plVar1, DAT_1801fc488 = puVar4, puVar6 != puVar5;
                              puVar6 = puVar6 + 4) {
                            puVar4 = puVar6;
                            if (0xf < (ulonglong)puVar6[3]) {
                              puVar4 = (int32_t *)*puVar6;
                            }
                            (**(code **)(*plVar2 + 0xa0))(plVar2,&local_e0,puVar4,DAT_1801fc450);
                            if (local_e0 != 0) {
                              (**(code **)(*plVar2 + 0x108))(plVar2,local_e0,&DAT_1801f5654,3,0);
                            }
                            plVar1 = DAT_1801f3ad8;
                            puVar4 = DAT_1801fc488;
                          }
                          plVar2 = plVar1;
                          puVar5 = DAT_1801fc4b0;
                          puVar6 = DAT_1801fc480;
                          if (plVar1 != (longlong *)0x0) {
                            for (; DAT_1801f3ad8 = plVar2, DAT_1801fc4b0 = puVar5, puVar6 != puVar4;
                                puVar6 = puVar6 + 4) {
                              puVar5 = puVar6;
                              if (0xf < (ulonglong)puVar6[3]) {
                                puVar5 = (int32_t *)*puVar6;
                              }
                              (**(code **)(*plVar1 + 0xa0))(plVar1,&local_d8,puVar5,DAT_1801fc478);
                              if (local_d8 != 0) {
                                (**(code **)(*plVar1 + 0x108))(plVar1,local_d8,&DAT_1801ec2d0,3,0);
                              }
                              plVar2 = DAT_1801f3ad8;
                              puVar5 = DAT_1801fc4b0;
                            }
                            puVar4 = DAT_1801fc4a8;
                            if (plVar2 != (longlong *)0x0) {
                              for (; puVar4 != puVar5; puVar4 = puVar4 + 4) {
                                puVar6 = puVar4;
                                if (0xf < (ulonglong)puVar4[3]) {
                                  puVar6 = (int32_t *)*puVar4;
                                }
                                (**(code **)(*plVar2 + 0xa0))(plVar2,&local_d0,puVar6,DAT_1801fc4a0)
                                ;
                                if (local_d0 != 0) {
                                  (**(code **)(*plVar2 + 0x108))(plVar2,local_d0,&DAT_1801ec2dc,3,0)
                                  ;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar4 = DAT_1801fc4d8;
    plVar1 = DAT_1801f3ad8;
    fVar8 = DAT_1801d8f30;
    local_1a0 = DAT_1801fb450 * DAT_1801d8f30;
    local_198 = DAT_1801fb458 * DAT_1801d8f30;
    local_19c = DAT_1801fb454 * DAT_1801d8f30;
    puVar5 = DAT_1801fc4d0;
    if (DAT_1801f3ad8 != (longlong *)0x0) {
      for (; puVar5 != puVar4; puVar5 = puVar5 + 4) {
        puVar6 = puVar5;
        if (0xf < (ulonglong)puVar5[3]) {
          puVar6 = (int32_t *)*puVar5;
        }
        (**(code **)(*plVar1 + 0xa0))(plVar1,&local_c8,puVar6,DAT_1801fc4c8);
        if (local_c8 != 0) {
          (**(code **)(*plVar1 + 0x108))(plVar1,local_c8,&local_1a0,3,0);
        }
      }
    }
    puVar4 = DAT_1801fc500;
    plVar1 = DAT_1801f3ad8;
    local_194 = DAT_1801fb450;
    local_190 = DAT_1801fb454;
    local_18c = DAT_1801fb458;
    puVar5 = DAT_1801fc4f8;
    if (DAT_1801f3ad8 != (longlong *)0x0) {
      for (; puVar5 != puVar4; puVar5 = puVar5 + 4) {
        puVar6 = puVar5;
        if (0xf < (ulonglong)puVar5[3]) {
          puVar6 = (int32_t *)*puVar5;
        }
        (**(code **)(*plVar1 + 0xa0))(plVar1,&local_c0,puVar6,DAT_1801fc4f0);
        if (local_c0 != 0) {
          (**(code **)(*plVar1 + 0x108))(plVar1,local_c0,&local_194,3,0);
        }
      }
    }
    puVar4 = DAT_1801fc528;
    plVar1 = DAT_1801f3ad8;
    local_188 = DAT_1801fb440 * fVar8;
    local_184 = DAT_1801fb444 * fVar8;
    local_180 = DAT_1801fb448 * fVar8;
    puVar5 = DAT_1801fc520;
    if (DAT_1801f3ad8 != (longlong *)0x0) {
      for (; puVar5 != puVar4; puVar5 = puVar5 + 4) {
        puVar6 = puVar5;
        if (0xf < (ulonglong)puVar5[3]) {
          puVar6 = (int32_t *)*puVar5;
        }
        (**(code **)(*plVar1 + 0xa0))(plVar1,&local_b8,puVar6,DAT_1801fc518);
        if (local_b8 != 0) {
          (**(code **)(*plVar1 + 0x108))(plVar1,local_b8,&local_188,3,0);
        }
      }
    }
    puVar6 = DAT_1801fc550;
    plVar2 = DAT_1801f3ad8;
    local_1b8 = DAT_1801fb440;
    local_1b4 = DAT_1801fb444;
    local_1b0 = DAT_1801fb448;
    plVar1 = DAT_1801f3ad8;
    puVar5 = DAT_1801fc548;
    puVar4 = DAT_1801fc578;
    if (DAT_1801f3ad8 != (longlong *)0x0) {
      for (; DAT_1801f3ad8 = plVar1, DAT_1801fc578 = puVar4, puVar5 != puVar6; puVar5 = puVar5 + 4)
      {
        puVar4 = puVar5;
        if (0xf < (ulonglong)puVar5[3]) {
          puVar4 = (int32_t *)*puVar5;
        }
        (**(code **)(*plVar2 + 0xa0))(plVar2,&local_b0,puVar4,DAT_1801fc540);
        if (local_b0 != 0) {
          (**(code **)(*plVar2 + 0x108))(plVar2,local_b0,&local_1b8,3,0);
        }
        plVar1 = DAT_1801f3ad8;
        puVar4 = DAT_1801fc578;
      }
      plVar2 = plVar1;
      puVar5 = DAT_1801fc5a0;
      puVar6 = DAT_1801fc570;
      if (plVar1 != (longlong *)0x0) {
        for (; DAT_1801f3ad8 = plVar2, DAT_1801fc5a0 = puVar5, puVar6 != puVar4; puVar6 = puVar6 + 4
            ) {
          puVar5 = puVar6;
          if (0xf < (ulonglong)puVar6[3]) {
            puVar5 = (int32_t *)*puVar6;
          }
          (**(code **)(*plVar1 + 0xa0))(plVar1,&local_80,puVar5,DAT_1801fc568);
          if (local_80 != 0) {
            (**(code **)(*plVar1 + 0x108))(plVar1,local_80,&DAT_1801ec334,3,0);
          }
          plVar2 = DAT_1801f3ad8;
          puVar5 = DAT_1801fc5a0;
        }
        puVar4 = DAT_1801fc598;
        if (plVar2 != (longlong *)0x0) {
          for (; puVar4 != puVar5; puVar4 = puVar4 + 4) {
            puVar6 = puVar4;
            if (0xf < (ulonglong)puVar4[3]) {
              puVar6 = (int32_t *)*puVar4;
            }
            (**(code **)(*plVar2 + 0xa0))(plVar2,&local_a0,puVar6,DAT_1801fc590);
            if (local_a0 != 0) {
              (**(code **)(*plVar2 + 0x108))(plVar2,local_a0,&DAT_1801ec340,3,0);
            }
          }
        }
      }
    }
    puVar4 = DAT_1801fc5c8;
    plVar1 = DAT_1801f3ad8;
    local_res10 = DAT_1801ec34c;
    local_res14 = DAT_1801ec350;
    puVar5 = DAT_1801fc5c0;
    if (DAT_1801f3ad8 != (longlong *)0x0) {
      for (; puVar5 != puVar4; puVar5 = puVar5 + 4) {
        puVar6 = puVar5;
        if (0xf < (ulonglong)puVar5[3]) {
          puVar6 = (int32_t *)*puVar5;
        }
        (**(code **)(*plVar1 + 0xa0))(plVar1,&local_98,puVar6,DAT_1801fc5b8);
        if (local_98 != 0) {
          (**(code **)(*plVar1 + 0x108))(plVar1,local_98,&local_res10,2,0);
        }
      }
    }
    puVar6 = DAT_1801fc5f0;
    plVar2 = DAT_1801f3ad8;
    local_res20 = DAT_1801f56b8;
    local_res24 = DAT_1801f56bc;
    plVar1 = DAT_1801f3ad8;
    puVar5 = DAT_1801fc5e8;
    puVar4 = DAT_1801fc618;
    if (DAT_1801f3ad8 != (longlong *)0x0) {
      for (; DAT_1801f3ad8 = plVar1, DAT_1801fc618 = puVar4, puVar5 != puVar6; puVar5 = puVar5 + 4)
      {
        puVar4 = puVar5;
        if (0xf < (ulonglong)puVar5[3]) {
          puVar4 = (int32_t *)*puVar5;
        }
        (**(code **)(*plVar2 + 0xa0))(plVar2,&local_90,puVar4,DAT_1801fc5e0);
        if (local_90 != 0) {
          (**(code **)(*plVar2 + 0x108))(plVar2,local_90,&local_res20,2,0);
        }
        plVar1 = DAT_1801f3ad8;
        puVar4 = DAT_1801fc618;
      }
      plVar2 = plVar1;
      puVar5 = DAT_1801fc640;
      puVar6 = DAT_1801fc610;
      if (plVar1 != (longlong *)0x0) {
        for (; DAT_1801f3ad8 = plVar2, DAT_1801fc640 = puVar5, puVar6 != puVar4; puVar6 = puVar6 + 4
            ) {
          puVar5 = puVar6;
          if (0xf < (ulonglong)puVar6[3]) {
            puVar5 = (int32_t *)*puVar6;
          }
          (**(code **)(*plVar1 + 0xa0))(plVar1,&local_88,puVar5,DAT_1801fc608);
          if (local_88 != 0) {
            (**(code **)(*plVar1 + 0x108))(plVar1,local_88,&DAT_1801f56ac,3,0);
          }
          plVar2 = DAT_1801f3ad8;
          puVar5 = DAT_1801fc640;
        }
        puVar4 = DAT_1801fc638;
        if (plVar2 != (longlong *)0x0) {
          for (; puVar4 != puVar5; puVar4 = puVar4 + 4) {
            puVar6 = puVar4;
            if (0xf < (ulonglong)puVar4[3]) {
              puVar6 = (int32_t *)*puVar4;
            }
            (**(code **)(*plVar2 + 0xa0))(plVar2,local_58,puVar6,DAT_1801fc630);
            if (local_58[0] != 0) {
              (**(code **)(*plVar2 + 0x108))(plVar2,local_58[0],&DAT_1801f55bc,1,0);
            }
          }
        }
      }
    }
    FUN_1800c73e0(&local_res8);
  }
  return;
}

// ---- Function: FUN_1800c29a0 ----
void FUN_1800c29a0(void)

{
  int32_t *puVar1;
  longlong *plVar2;
  int32_t *puVar3;
  int32_t *puVar4;
  longlong local_res8;
  longlong local_res10;
  
  puVar1 = DAT_1801fc6f0;
  plVar2 = DAT_1801f3ad8;
  if ((DAT_1801f3ad8 != (longlong *)0x0) && (DAT_1801f3ad8 != (longlong *)0x0)) {
    puVar3 = DAT_1801fc6e8;
    if (DAT_1801fc6e8 != DAT_1801fc6f0) {
      do {
        puVar4 = puVar3;
        if (0xf < (ulonglong)puVar3[3]) {
          puVar4 = (int32_t *)*puVar3;
        }
        (**(code **)(*plVar2 + 0xa0))(plVar2,&local_res8,puVar4,DAT_1801fc6e0);
        if (local_res8 != 0) {
          (**(code **)(*plVar2 + 0x108))(plVar2,local_res8,&DAT_1801ec708,3,0);
        }
        puVar3 = puVar3 + 4;
      } while (puVar3 != puVar1);
    }
    puVar3 = DAT_1801fc718;
    plVar2 = DAT_1801f3ad8;
    puVar1 = DAT_1801fc710;
    if (DAT_1801f3ad8 != (longlong *)0x0) {
      for (; puVar1 != puVar3; puVar1 = puVar1 + 4) {
        puVar4 = puVar1;
        if (0xf < (ulonglong)puVar1[3]) {
          puVar4 = (int32_t *)*puVar1;
        }
        (**(code **)(*plVar2 + 0xa0))(plVar2,&local_res10,puVar4,DAT_1801fc708);
        if (local_res10 != 0) {
          (**(code **)(*plVar2 + 0x108))(plVar2,local_res10,&DAT_1801f3ab0,1,0);
        }
      }
    }
  }
  return;
}

// ---- Function: FUN_1800c2ad0 ----
void FUN_1800c2ad0(void)

{
  (*DAT_1801fc730)();
  if (DAT_1801f3ad8 != (longlong *)0x0) {
                    
                    
    (**(code **)(*DAT_1801f3ad8 + 0x48))(DAT_1801f3ad8,DAT_1801f3ad0,DAT_1801fb430,DAT_1801fb438);
    return;
  }
  return;
}

// ---- Function: FUN_1800c2b10 ----
void FUN_1800c2b10(void)

{
  (*DAT_1801fc738)();
  if (DAT_1801f3ad8 != (longlong *)0x0) {
                    
                    
    (**(code **)(*DAT_1801f3ad8 + 0x48))(DAT_1801f3ad8,DAT_1801f3ad0,DAT_1801fb430,DAT_1801fb438);
    return;
  }
  return;
}

// ---- Function: FUN_1800c2e90 ----
void FUN_1800c2e90(void)

{
  longlong lVar1;
  code *pcVar2;
  int32_t uVar3;
  HMODULE pHVar4;
  FARPROC pFVar5;
  INT_PTR IVar6;
  int *piVar7;
  int32_t *puVar8;
  int32_t *puVar9;
  longlong *plVar10;
  int32_t *puVar11;
  HMODULE pHVar12;
  int32_t auStack_108 [32];
  char *local_e8;
  int32_t local_e0;
  DWORD local_d8 [2];
  _SYSTEM_INFO local_d0;
  longlong local_98;
  int32_t uStack_90;
  int32_t local_88;
  int32_t uStack_80;
  longlong local_78;
  int32_t uStack_70;
  int32_t local_68;
  int32_t uStack_60;
  longlong *local_50;
  longlong local_48;
  longlong lStack_40;
  int32_t local_38;
  int32_t local_30;
  int32_t local_28;
  ulonglong local_18;
  
  local_18 = DAT_1801eb080 ^ (ulonglong)auStack_108;
  uVar3 = FUN_1800c6ef0(DAT_1801f3a40);
  pHVar4 = (HMODULE)FUN_1800c6f60();
  if ((((pHVar4 != (HMODULE)0x0) &&
       (pFVar5 = GetProcAddress(pHVar4,"ReShadeRegisterAddon"), pFVar5 != (FARPROC)0x0)) &&
      (IVar6 = (*pFVar5)(uVar3,0xd), (char)IVar6 != '\0')) &&
     ((pFVar5 = GetProcAddress(pHVar4,"ReShadeGetImGuiFunctionTable"), pFVar5 != (FARPROC)0x0 &&
      (DAT_1801f3ae0 = (*pFVar5)(0x4a60), DAT_1801f3ae0 != 0)))) {
    FUN_1800e0ba0();
    local_30 = FUN_1800c6f60();
    uStack_90 = 0;
    local_88 = _DAT_1801d8f70;
    uStack_80 = _UNK_1801d8f78;
    local_98 = 0;
    uStack_70 = 0;
    local_68 = _DAT_1801d8f70;
    uStack_60 = _UNK_1801d8f78;
    local_78 = 0;
    local_50 = (longlong *)0x0;
    local_48 = 0;
    lStack_40 = 0;
    local_38 = 0;
    local_28 = 0;
    local_e8 = "C7 05 ? ? ? ? ? ? ? ? 3A C1";
    local_e0 = 0x1b;
    FUN_180117400(&local_98,&local_e8);
    FUN_1801175d0(&local_98,0xffffffff);
    if (7 < (ulonglong)(local_48 - (longlong)local_50)) {
      FUN_1801175d0(&local_98,1);
      lVar1 = *local_50;
      VirtualProtect((LPVOID)(lVar1 + -0x28),6,0x40,local_d8);
      *(int32_t *)(lVar1 + -0x28) = 0x90909090;
      *(int32_t *)(lVar1 + -0x24) = 0x9090;
      VirtualProtect((LPVOID)(lVar1 + -0x28),6,local_d8[0],local_d8);
    }
    if (local_50 != (longlong *)0x0) {
      plVar10 = local_50;
      if ((0xfff < (lStack_40 - (longlong)local_50 & 0xfffffffffffffff8U)) &&
         (plVar10 = (longlong *)local_50[-1],
         0x1f < (ulonglong)((longlong)local_50 + (-8 - (longlong)plVar10)))) {
        FUN_18012b7b4();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      thunk_FUN_18012d5e8(plVar10);
      local_50 = (longlong *)0x0;
      local_48 = 0;
      lStack_40 = 0;
    }
    FUN_1800a6800(&local_78);
    FUN_1800a6800(&local_98);
    local_e8 = "33 C0 48 39 05 ? ? ? ? 74 2E 48 8B 0D ? ? ? ? 48 85 C9 74 22";
    local_e0 = 0x3c;
    piVar7 = (int *)FUN_1800a68d0(&local_e8);
    DAT_1801fba68 = (longlong)piVar7 + (longlong)*piVar7 + 4;
    local_e8 = "0F 29 62 20 8B 81 ? ? 00 00";
    local_e0 = 0x1b;
    piVar7 = (int *)FUN_1800a68d0(&local_e8);
    DAT_1801fb468 = (longlong)piVar7 + (longlong)*piVar7 + 4;
    local_e8 = "4C 8D 05 ? ? ? ? 45 33 C9 BA CE 00 00 00";
    local_e0 = 0x28;
    piVar7 = (int *)FUN_1800a68d0(&local_e8);
    FUN_180121510((int32_t *)((longlong)piVar7 + (longlong)*piVar7 + 4),FUN_1800bb320,
                  &DAT_1801fb460);
    local_e8 = "84 C3 74 0D 83 C9 FF E8";
    local_e0 = 0x17;
    puVar8 = (int32_t *)FUN_1800a68d0(&local_e8);
    FUN_180121510(puVar8,FUN_1800a7f80,(longlong *)0x0);
    local_e8 = "48 8B 1F 33 D2 48 8B CB";
    local_e0 = 0x17;
    puVar8 = (int32_t *)FUN_1800a68d0(&local_e8);
    FUN_180121510(puVar8,FUN_1800c2ad0,&DAT_1801fc730);
    local_e8 = "83 FB 0A 0F 85 ? ? ? ? 8B";
    local_e0 = 0x19;
    puVar9 = (int32_t *)FUN_1800a68d0(&local_e8);
    DAT_1801fc738 = puVar9 + (longlong)*(int *)(puVar9 + 1) + 5;
    pHVar4 = GetModuleHandleW((LPCWSTR)0x0);
    if (DAT_1801f53c0 == (int32_t *)0x0) {
      GetSystemInfo(&local_d0);
      pHVar12 = (HMODULE)local_d0.lpMinimumApplicationAddress;
      if (((HMODULE)0x40000000 < pHVar4) &&
         (local_d0.lpMinimumApplicationAddress < pHVar4 + -0x10000000)) {
        pHVar12 = pHVar4 + -0x10000000;
      }
      do {
        if ((pHVar4 < pHVar12) ||
           (pHVar4 = (HMODULE)FUN_180117dd0((ulonglong)pHVar4,pHVar12,
                                            (ulonglong)local_d0.dwAllocationGranularity),
           pHVar4 == (HMODULE)0x0)) {
          puVar11 = (int32_t *)0x0;
          if (DAT_1801f53c0 == (int32_t *)0x0) goto LAB_1800c32a2;
          break;
        }
        DAT_1801f53c0 = (int32_t *)VirtualAlloc(pHVar4,0x1000,0x3000,0x40);
      } while (DAT_1801f53c0 == (int32_t *)0x0);
    }
    *DAT_1801f53c0 = 0xb848;
    *(code **)(DAT_1801f53c0 + 1) = FUN_1800c2b10;
    DAT_1801f53c0[5] = 0xe0ff;
    *(int32_t *)(DAT_1801f53c0 + 6) = 0xcccccccccccccccc;
    puVar11 = DAT_1801f53c0;
    DAT_1801f53c0 = DAT_1801f53c0 + 10;
LAB_1800c32a2:
    *puVar9 = 0xe8;
    *(int *)(puVar9 + 1) = ((int)puVar11 - (int)puVar9) + -5;
    piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x10);
    if ((*piVar7 < DAT_1801f3a84) && (FUN_180125398(&DAT_1801f3a84), DAT_1801f3a84 == -1)) {
      pHVar4 = (HMODULE)FUN_1800c6f60();
      DAT_1801f3a88 = GetProcAddress(pHVar4,"ReShadeRegisterOverlay");
      _Init_thread_footer(&DAT_1801f3a84);
    }
    if (DAT_1801f3a88 != (FARPROC)0x0) {
      (*DAT_1801f3a88)(&DAT_180182d14,FUN_1800e2480);
    }
    FUN_1800c5f70(FUN_1800baee0);
    if ((*piVar7 < DAT_1801fc740) && (FUN_180125398(&DAT_1801fc740), DAT_1801fc740 == -1)) {
      pHVar4 = (HMODULE)FUN_1800c6f60();
      DAT_1801fc748 = GetProcAddress(pHVar4,"ReShadeRegisterEvent");
      _Init_thread_footer(&DAT_1801fc740);
    }
    if (DAT_1801fc748 != (FARPROC)0x0) {
      (*DAT_1801fc748)(0x4b,FUN_1800bb2e0);
    }
    FUN_1800c6000(FUN_1800bb280);
    if ((*piVar7 < DAT_1801fc750) && (FUN_180125398(&DAT_1801fc750), DAT_1801fc750 == -1)) {
      pHVar4 = (HMODULE)FUN_1800c6f60();
      DAT_1801fc758 = GetProcAddress(pHVar4,"ReShadeRegisterEvent");
      _Init_thread_footer(&DAT_1801fc750);
    }
    if (DAT_1801fc758 != (FARPROC)0x0) {
      (*DAT_1801fc758)(0x1b,&LAB_1800cbee0);
    }
    if ((*piVar7 < DAT_1801fc760) && (FUN_180125398(&DAT_1801fc760), DAT_1801fc760 == -1)) {
      pHVar4 = (HMODULE)FUN_1800c6f60();
      DAT_1801fc768 = GetProcAddress(pHVar4,"ReShadeRegisterEvent");
      _Init_thread_footer(&DAT_1801fc760);
    }
    if (DAT_1801fc768 != (FARPROC)0x0) {
      (*DAT_1801fc768)(0x1a,FUN_1800cbea0);
    }
    if ((*piVar7 < DAT_1801fc770) && (FUN_180125398(&DAT_1801fc770), DAT_1801fc770 == -1)) {
      pHVar4 = (HMODULE)FUN_1800c6f60();
      DAT_1801fc778 = GetProcAddress(pHVar4,"ReShadeRegisterEvent");
      _Init_thread_footer(&DAT_1801fc770);
    }
    if (DAT_1801fc778 != (FARPROC)0x0) {
      (*DAT_1801fc778)(0x51,&LAB_1800c2b50);
    }
    FUN_1800c90b0();
  }
  FUN_1801252c0(local_18 ^ (ulonglong)auStack_108);
  return;
}

// ---- Function: FUN_1800c3510 ----
char * FUN_1800c3510(char *param_1)

{
  int iVar1;
  
  iVar1 = ((0x59 - *(int *)(param_1 + 0x30)) * 0x3f) % 0x7f + 0x7f;
  *param_1 = (char)iVar1 +
             (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
             (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x59 - *(int *)(param_1 + 0x34)) * 0x3f) % 0x7f + 0x7f;
  param_1[1] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x59 - *(int *)(param_1 + 0x38)) * 0x3f) % 0x7f + 0x7f;
  param_1[2] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x59 - *(int *)(param_1 + 0x3c)) * 0x3f) % 0x7f + 0x7f;
  param_1[3] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x59 - *(int *)(param_1 + 0x40)) * 0x3f) % 0x7f + 0x7f;
  param_1[4] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x59 - *(int *)(param_1 + 0x44)) * 0x3f) % 0x7f + 0x7f;
  param_1[5] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x59 - *(int *)(param_1 + 0x48)) * 0x3f) % 0x7f + 0x7f;
  param_1[6] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x59 - *(int *)(param_1 + 0x4c)) * 0x3f) % 0x7f + 0x7f;
  param_1[7] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x59 - *(int *)(param_1 + 0x50)) * 0x3f) % 0x7f + 0x7f;
  param_1[8] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x59 - *(int *)(param_1 + 0x54)) * 0x3f) % 0x7f + 0x7f;
  param_1[9] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x59 - *(int *)(param_1 + 0x58)) * 0x3f) % 0x7f + 0x7f;
  param_1[10] = (char)iVar1 +
                (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x59 - *(int *)(param_1 + 0x5c)) * 0x3f) % 0x7f + 0x7f;
  param_1[0xb] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x59 - *(int *)(param_1 + 0x60)) * 0x3f) % 0x7f + 0x7f;
  param_1[0xc] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x59 - *(int *)(param_1 + 100)) * 0x3f) % 0x7f + 0x7f;
  param_1[0xd] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x59 - *(int *)(param_1 + 0x68)) * 0x3f) % 0x7f + 0x7f;
  param_1[0xe] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x59 - *(int *)(param_1 + 0x6c)) * 0x3f) % 0x7f + 0x7f;
  param_1[0xf] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x59 - *(int *)(param_1 + 0x70)) * 0x3f) % 0x7f + 0x7f;
  param_1[0x10] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x59 - *(int *)(param_1 + 0x74)) * 0x3f) % 0x7f + 0x7f;
  param_1[0x11] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x59 - *(int *)(param_1 + 0x78)) * 0x3f) % 0x7f + 0x7f;
  param_1[0x12] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x59 - *(int *)(param_1 + 0x7c)) * 0x3f) % 0x7f + 0x7f;
  param_1[0x13] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x59 - *(int *)(param_1 + 0x80)) * 0x3f) % 0x7f + 0x7f;
  param_1[0x14] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x59 - *(int *)(param_1 + 0x84)) * 0x3f) % 0x7f + 0x7f;
  param_1[0x15] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x59 - *(int *)(param_1 + 0x88)) * 0x3f) % 0x7f + 0x7f;
  param_1[0x16] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x59 - *(int *)(param_1 + 0x8c)) * 0x3f) % 0x7f + 0x7f;
  param_1[0x17] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x59 - *(int *)(param_1 + 0x90)) * 0x3f) % 0x7f + 0x7f;
  param_1[0x18] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x59 - *(int *)(param_1 + 0x94)) * 0x3f) % 0x7f + 0x7f;
  param_1[0x19] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x59 - *(int *)(param_1 + 0x98)) * 0x3f) % 0x7f + 0x7f;
  param_1[0x1a] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x59 - *(int *)(param_1 + 0x9c)) * 0x3f) % 0x7f + 0x7f;
  param_1[0x1b] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x59 - *(int *)(param_1 + 0xa0)) * 0x3f) % 0x7f + 0x7f;
  param_1[0x1c] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x59 - *(int *)(param_1 + 0xa4)) * 0x3f) % 0x7f + 0x7f;
  param_1[0x1d] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x59 - *(int *)(param_1 + 0xa8)) * 0x3f) % 0x7f + 0x7f;
  param_1[0x1e] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x59 - *(int *)(param_1 + 0xac)) * 0x3f) % 0x7f + 0x7f;
  param_1[0x1f] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x59 - *(int *)(param_1 + 0xb0)) * 0x3f) % 0x7f + 0x7f;
  param_1[0x20] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x59 - *(int *)(param_1 + 0xb4)) * 0x3f) % 0x7f + 0x7f;
  param_1[0x21] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x59 - *(int *)(param_1 + 0xb8)) * 0x3f) % 0x7f + 0x7f;
  param_1[0x22] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x59 - *(int *)(param_1 + 0xbc)) * 0x3f) % 0x7f + 0x7f;
  param_1[0x23] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x59 - *(int *)(param_1 + 0xc0)) * 0x3f) % 0x7f + 0x7f;
  param_1[0x24] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x59 - *(int *)(param_1 + 0xc4)) * 0x3f) % 0x7f + 0x7f;
  param_1[0x25] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x59 - *(int *)(param_1 + 200)) * 0x3f) % 0x7f + 0x7f;
  param_1[0x26] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x59 - *(int *)(param_1 + 0xcc)) * 0x3f) % 0x7f + 0x7f;
  param_1[0x27] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x59 - *(int *)(param_1 + 0xd0)) * 0x3f) % 0x7f + 0x7f;
  param_1[0x28] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x59 - *(int *)(param_1 + 0xd4)) * 0x3f) % 0x7f + 0x7f;
  param_1[0x29] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x59 - *(int *)(param_1 + 0xd8)) * 0x3f) % 0x7f + 0x7f;
  param_1[0x2a] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x59 - *(int *)(param_1 + 0xdc)) * 0x3f) % 0x7f + 0x7f;
  param_1[0x2b] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x59 - *(int *)(param_1 + 0xe0)) * 0x3f) % 0x7f + 0x7f;
  param_1[0x2c] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x59 - *(int *)(param_1 + 0xe4)) * 0x3f) % 0x7f + 0x7f;
  param_1[0x2d] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  param_1[0x2e] = '\0';
  return param_1;
}

// ---- Function: FUN_1800c4130 ----
longlong FUN_1800c4130(longlong param_1)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  longlong lVar4;
  
  lVar4 = 6;
  piVar3 = (int *)(param_1 + 0x48);
  pcVar2 = (char *)(param_1 + 2);
  do {
    iVar1 = ((0x26 - piVar3[-1]) * 0x27) % 0x7f + 0x7f;
    pcVar2[-2] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
    iVar1 = ((0x26 - *piVar3) * 0x27) % 0x7f + 0x7f;
    pcVar2[-1] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
    iVar1 = ((0x26 - piVar3[1]) * 0x27) % 0x7f + 0x7f;
    *pcVar2 = (char)iVar1 +
              (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
              (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
    iVar1 = ((0x26 - piVar3[2]) * 0x27) % 0x7f + 0x7f;
    pcVar2[1] = (char)iVar1 +
                (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
    iVar1 = ((0x26 - piVar3[3]) * 0x27) % 0x7f + 0x7f;
    pcVar2[2] = (char)iVar1 +
                (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
    iVar1 = ((0x26 - piVar3[4]) * 0x27) % 0x7f + 0x7f;
    pcVar2[3] = (char)iVar1 +
                (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
    iVar1 = ((0x26 - piVar3[5]) * 0x27) % 0x7f + 0x7f;
    pcVar2[4] = (char)iVar1 +
                (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
    iVar1 = ((0x26 - piVar3[6]) * 0x27) % 0x7f + 0x7f;
    pcVar2[5] = (char)iVar1 +
                (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
    iVar1 = ((0x26 - piVar3[7]) * 0x27) % 0x7f + 0x7f;
    pcVar2[6] = (char)iVar1 +
                (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
    iVar1 = ((0x26 - piVar3[8]) * 0x27) % 0x7f + 0x7f;
    pcVar2[7] = (char)iVar1 +
                (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
    iVar1 = ((0x26 - piVar3[9]) * 0x27) % 0x7f + 0x7f;
    piVar3 = piVar3 + 0xb;
    pcVar2[8] = (char)iVar1 +
                (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
    lVar4 = lVar4 + -1;
    pcVar2 = pcVar2 + 0xb;
  } while (lVar4 != 0);
  *(int32_t *)(param_1 + 0x42) = 0;
  return param_1;
}

// ---- Function: FUN_1800c44a0 ----
int32_t * FUN_1800c44a0(int32_t *param_1)

{
  longlong lVar1;
  int *piVar2;
  longlong lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  lVar3 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(int32_t *)(param_1 + 8) = 0;
  *(int32_t *)((longlong)param_1 + 0x42) = 0;
  piVar2 = (int *)(param_1 + 9);
  do {
    piVar2[-1] = ("You can disable MSAA by going into the GTAV graphics settings tab."[lVar3] * 0xd
                 + 0x26) % 0x7f;
    *piVar2 = ("You can disable MSAA by going into the GTAV graphics settings tab."[lVar3 + 1] * 0xd
              + 0x26) % 0x7f;
    piVar2[1] = ("You can disable MSAA by going into the GTAV graphics settings tab."[lVar3 + 2] *
                 0xd + 0x26) % 0x7f;
    piVar2[2] = ("You can disable MSAA by going into the GTAV graphics settings tab."[lVar3 + 3] *
                 0xd + 0x26) % 0x7f;
    piVar2[3] = ("You can disable MSAA by going into the GTAV graphics settings tab."[lVar3 + 4] *
                 0xd + 0x26) % 0x7f;
    piVar2[4] = ("You can disable MSAA by going into the GTAV graphics settings tab."[lVar3 + 5] *
                 0xd + 0x26) % 0x7f;
    piVar2[5] = ("You can disable MSAA by going into the GTAV graphics settings tab."[lVar3 + 6] *
                 0xd + 0x26) % 0x7f;
    piVar2[6] = ("You can disable MSAA by going into the GTAV graphics settings tab."[lVar3 + 7] *
                 0xd + 0x26) % 0x7f;
    piVar2[7] = ("You can disable MSAA by going into the GTAV graphics settings tab."[lVar3 + 8] *
                 0xd + 0x26) % 0x7f;
    piVar2[8] = ("You can disable MSAA by going into the GTAV graphics settings tab."[lVar3 + 9] *
                 0xd + 0x26) % 0x7f;
    lVar1 = lVar3 + 10;
    lVar3 = lVar3 + 0xb;
    piVar2[9] = ("You can disable MSAA by going into the GTAV graphics settings tab."[lVar1] * 0xd +
                0x26) % 0x7f;
    piVar2 = piVar2 + 0xb;
  } while (lVar3 < 0x42);
  return param_1;
}

// ---- Function: FUN_1800c46e0 ----
char * FUN_1800c46e0(char *param_1)

{
  int iVar1;
  
  iVar1 = ((99 - *(int *)(param_1 + 0x34)) * 0x1b) % 0x7f + 0x7f;
  *param_1 = (char)iVar1 +
             (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
             (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((99 - *(int *)(param_1 + 0x38)) * 0x1b) % 0x7f + 0x7f;
  param_1[1] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((99 - *(int *)(param_1 + 0x3c)) * 0x1b) % 0x7f + 0x7f;
  param_1[2] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((99 - *(int *)(param_1 + 0x40)) * 0x1b) % 0x7f + 0x7f;
  param_1[3] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((99 - *(int *)(param_1 + 0x44)) * 0x1b) % 0x7f + 0x7f;
  param_1[4] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((99 - *(int *)(param_1 + 0x48)) * 0x1b) % 0x7f + 0x7f;
  param_1[5] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((99 - *(int *)(param_1 + 0x4c)) * 0x1b) % 0x7f + 0x7f;
  param_1[6] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((99 - *(int *)(param_1 + 0x50)) * 0x1b) % 0x7f + 0x7f;
  param_1[7] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((99 - *(int *)(param_1 + 0x54)) * 0x1b) % 0x7f + 0x7f;
  param_1[8] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((99 - *(int *)(param_1 + 0x58)) * 0x1b) % 0x7f + 0x7f;
  param_1[9] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((99 - *(int *)(param_1 + 0x5c)) * 0x1b) % 0x7f + 0x7f;
  param_1[10] = (char)iVar1 +
                (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((99 - *(int *)(param_1 + 0x60)) * 0x1b) % 0x7f + 0x7f;
  param_1[0xb] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((99 - *(int *)(param_1 + 100)) * 0x1b) % 0x7f + 0x7f;
  param_1[0xc] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((99 - *(int *)(param_1 + 0x68)) * 0x1b) % 0x7f + 0x7f;
  param_1[0xd] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((99 - *(int *)(param_1 + 0x6c)) * 0x1b) % 0x7f + 0x7f;
  param_1[0xe] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((99 - *(int *)(param_1 + 0x70)) * 0x1b) % 0x7f + 0x7f;
  param_1[0xf] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((99 - *(int *)(param_1 + 0x74)) * 0x1b) % 0x7f + 0x7f;
  param_1[0x10] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((99 - *(int *)(param_1 + 0x78)) * 0x1b) % 0x7f + 0x7f;
  param_1[0x11] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((99 - *(int *)(param_1 + 0x7c)) * 0x1b) % 0x7f + 0x7f;
  param_1[0x12] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((99 - *(int *)(param_1 + 0x80)) * 0x1b) % 0x7f + 0x7f;
  param_1[0x13] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((99 - *(int *)(param_1 + 0x84)) * 0x1b) % 0x7f + 0x7f;
  param_1[0x14] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((99 - *(int *)(param_1 + 0x88)) * 0x1b) % 0x7f + 0x7f;
  param_1[0x15] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((99 - *(int *)(param_1 + 0x8c)) * 0x1b) % 0x7f + 0x7f;
  param_1[0x16] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((99 - *(int *)(param_1 + 0x90)) * 0x1b) % 0x7f + 0x7f;
  param_1[0x17] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((99 - *(int *)(param_1 + 0x94)) * 0x1b) % 0x7f + 0x7f;
  param_1[0x18] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((99 - *(int *)(param_1 + 0x98)) * 0x1b) % 0x7f + 0x7f;
  param_1[0x19] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((99 - *(int *)(param_1 + 0x9c)) * 0x1b) % 0x7f + 0x7f;
  param_1[0x1a] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((99 - *(int *)(param_1 + 0xa0)) * 0x1b) % 0x7f + 0x7f;
  param_1[0x1b] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((99 - *(int *)(param_1 + 0xa4)) * 0x1b) % 0x7f + 0x7f;
  param_1[0x1c] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((99 - *(int *)(param_1 + 0xa8)) * 0x1b) % 0x7f + 0x7f;
  param_1[0x1d] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((99 - *(int *)(param_1 + 0xac)) * 0x1b) % 0x7f + 0x7f;
  param_1[0x1e] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((99 - *(int *)(param_1 + 0xb0)) * 0x1b) % 0x7f + 0x7f;
  param_1[0x1f] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((99 - *(int *)(param_1 + 0xb4)) * 0x1b) % 0x7f + 0x7f;
  param_1[0x20] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((99 - *(int *)(param_1 + 0xb8)) * 0x1b) % 0x7f + 0x7f;
  param_1[0x21] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((99 - *(int *)(param_1 + 0xbc)) * 0x1b) % 0x7f + 0x7f;
  param_1[0x22] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((99 - *(int *)(param_1 + 0xc0)) * 0x1b) % 0x7f + 0x7f;
  param_1[0x23] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((99 - *(int *)(param_1 + 0xc4)) * 0x1b) % 0x7f + 0x7f;
  param_1[0x24] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((99 - *(int *)(param_1 + 200)) * 0x1b) % 0x7f + 0x7f;
  param_1[0x25] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((99 - *(int *)(param_1 + 0xcc)) * 0x1b) % 0x7f + 0x7f;
  param_1[0x26] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((99 - *(int *)(param_1 + 0xd0)) * 0x1b) % 0x7f + 0x7f;
  param_1[0x27] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((99 - *(int *)(param_1 + 0xd4)) * 0x1b) % 0x7f + 0x7f;
  param_1[0x28] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((99 - *(int *)(param_1 + 0xd8)) * 0x1b) % 0x7f + 0x7f;
  param_1[0x29] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((99 - *(int *)(param_1 + 0xdc)) * 0x1b) % 0x7f + 0x7f;
  param_1[0x2a] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((99 - *(int *)(param_1 + 0xe0)) * 0x1b) % 0x7f + 0x7f;
  param_1[0x2b] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((99 - *(int *)(param_1 + 0xe4)) * 0x1b) % 0x7f + 0x7f;
  param_1[0x2c] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((99 - *(int *)(param_1 + 0xe8)) * 0x1b) % 0x7f + 0x7f;
  param_1[0x2d] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((99 - *(int *)(param_1 + 0xec)) * 0x1b) % 0x7f + 0x7f;
  param_1[0x2e] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((99 - *(int *)(param_1 + 0xf0)) * 0x1b) % 0x7f + 0x7f;
  param_1[0x2f] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((99 - *(int *)(param_1 + 0xf4)) * 0x1b) % 0x7f + 0x7f;
  param_1[0x30] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  param_1[0x31] = '\0';
  return param_1;
}

// ---- Function: FUN_1800c53d0 ----
void FUN_1800c53d0(longlong param_1,int32_t param_2,int32_t *param_3)

{
  int32_t *puVar1;
  longlong *plVar2;
  int32_t uVar3;
  int32_t *puVar4;
  int32_t *puVar5;
  int32_t local_res10;
  longlong local_res20;
  
  plVar2 = DAT_1801f3ad8;
  if (DAT_1801f3ad8 != (longlong *)0x0) {
    puVar1 = *(int32_t **)(param_1 + 0x18);
    local_res10 = param_2;
    for (puVar4 = *(int32_t **)(param_1 + 0x10); puVar4 != puVar1; puVar4 = puVar4 + 4) {
      puVar5 = puVar4;
      if (0xf < (ulonglong)puVar4[3]) {
        puVar5 = (int32_t *)*puVar4;
      }
      (**(code **)(*plVar2 + 0xa0))(plVar2,&local_res20,puVar5,*(int32_t *)(param_1 + 8));
      uVar3 = local_res10;
      if (local_res20 != 0) {
        local_res10._4_4_ = SUB84(uVar3,4);
        local_res10._0_4_ = (uint)CONCAT21(1,*param_3);
        (**(code **)(*plVar2 + 0x100))(plVar2,local_res20,&local_res10,4,0);
      }
    }
  }
  return;
}

