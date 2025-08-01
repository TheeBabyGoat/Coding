#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_1800e8b60 ----
void FUN_1800e8b60(void)

{
  int32_t auVar1 [16];
  uint uVar2;
  __uint64 _Var3;
  int32_t *puVar4;
  __time64_t _Var5;
  uint uVar6;
  __uint64 *p_Var7;
  longlong lVar8;
  int32_t (*pauVar9) [16];
  float *pfVar10;
  int32_t *puVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  int32_t *puVar15;
  int iVar16;
  bool bVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  double dVar22;
  int32_t uVar23;
  double dVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  ulonglong local_res8;
  ulonglong local_res10;
  
  nativeInit(0x564b884a05ec45a3);
  p_Var7 = nativeCall();
  if ((int)*p_Var7 == 0x320d0951) {
    uVar18 = 10;
    uVar13 = 0x78;
    lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(int *)(lVar8 + 0x10) < DAT_1801fce44) &&
       (FUN_180125398(&DAT_1801fce44), DAT_1801fce44 == -1)) {
      DAT_1801fce48 = FUN_18011c6f0(10,0x78);
      _Init_thread_footer(&DAT_1801fce44);
    }
    if ((*(int *)(lVar8 + 0x10) < DAT_1801fce4c) &&
       (FUN_180125398(&DAT_1801fce4c), DAT_1801fce4c == -1)) {
      DAT_1801fce50 = FUN_18012b82c((longlong *)0x0);
      _Init_thread_footer(&DAT_1801fce4c);
    }
    lVar8 = FUN_18012b82c((longlong *)0x0);
    dVar22 = _difftime64(lVar8,DAT_1801fce50);
    iVar16 = 0;
    _Var5 = DAT_1801fce50;
    if ((double)(int)DAT_1801fce48 < dVar22) {
      bVar17 = DAT_1801f3b54 == '\0';
      DAT_1801f3b54 = bVar17;
      nativeInit(0x1268615ace24d504);
      local_res8 = (ulonglong)bVar17;
      nativePush64(local_res8);
      nativeCall();
      nativeInit(0xe2b187c0939b3d32);
      nativePush64(0);
      nativeCall();
      if (DAT_1801f3b54 == '\0') {
        uVar18 = 300;
      }
      else {
        uVar13 = 1;
      }
      DAT_1801fce48 = FUN_18011c6f0(uVar13,uVar18);
      nativeInit(0x338d2e3477711050);
      nativeCall();
      nativeInit(0xccc39339bef76cf5);
      nativeCall();
      puVar4 = PTR_DAT_1801ec1f0;
      nativeInit(0xed712ca327900c8a);
      nativePush64((__uint64)puVar4);
      nativeCall();
      _Var5 = lVar8;
      if (DAT_1801f3b28 == '\0') {
        nativeInit(0xccc39339bef76cf5);
        nativeCall();
      }
    }
    DAT_1801fce50 = _Var5;
    nativeInit(0x1f400fef721170da);
    pauVar9 = (int32_t (*) [16])nativeCall();
    auVar1 = *pauVar9;
    fVar29 = auVar1._8_4_;
    fVar30 = (float)*(int32_t *)pauVar9[1];
    nativeInit(0xa8cf1cc0afcd3f12);
    pfVar10 = (float *)nativeCall();
    fVar28 = *pfVar10 + DAT_1801d8e38;
    nativeInit(0xfc8202efc642e6f2);
    nativeCall();
    uVar23 = FUN_18014df60();
    uVar18 = (uint)uVar23;
    FUN_18014df60();
    FUN_18014fb00();
    FUN_18014fb00();
    FUN_18014df60();
    uVar23 = FUN_18014df60();
    fVar21 = DAT_1801d8dfc;
    fVar27 = DAT_1801d8df0;
    fVar26 = (float)((uint)uVar23 & _DAT_1801d9d30);
    fVar25 = fVar26 * DAT_1801d8e18;
    fVar19 = auVar1._0_4_;
    if (0 < DAT_1801f5380) {
      puVar14 = &DAT_1801f4b80;
      iVar12 = iVar16;
      do {
        uVar13 = *puVar14;
        if (uVar13 != 0) {
          nativeInit(0x7239b21a38f536ba);
          local_res10 = (ulonglong)uVar13;
          nativePush64(local_res10);
          p_Var7 = nativeCall();
          if ((int)*p_Var7 != 0) {
            uVar13 = *puVar14;
            nativeInit(0xda95ea3317cc5064);
            local_res10 = (ulonglong)uVar13;
            nativePush64(local_res10);
            p_Var7 = nativeCall();
            if ((int)*p_Var7 != 0) {
              uVar13 = *puVar14;
              nativeInit(0xb50c0b0cedc6ce84);
              local_res10 = (ulonglong)uVar13;
              nativePush64(local_res10);
              p_Var7 = nativeCall();
              uVar13 = *puVar14;
              if ((int)*p_Var7 == 0) {
                nativeInit(0xc5f68be9613e2d18);
                local_res10 = (ulonglong)uVar13;
                nativePush64(local_res10);
                nativePush64(1);
                local_res10 = (ulonglong)(uint)(fVar19 * fVar25 * fVar28);
                nativePush64(local_res10);
                local_res10 = (ulonglong)(uint)(fVar29 * fVar25 * fVar28);
                nativePush64(local_res10);
                fVar20 = fVar30 * fVar25 * fVar28;
              }
              else {
                nativeInit(0xc5f68be9613e2d18);
                local_res10 = (ulonglong)uVar13;
                nativePush64(local_res10);
                nativePush64(1);
                local_res10 = (ulonglong)(uint)(fVar19 * fVar25 * fVar28 * fVar21);
                nativePush64(local_res10);
                local_res10 = (ulonglong)(uint)(fVar29 * fVar25 * fVar28 * fVar21);
                nativePush64(local_res10);
                fVar20 = fVar30 * fVar25 * fVar28 * fVar27;
              }
              local_res10 = (ulonglong)(uint)fVar20;
              nativePush64(local_res10);
              nativePush64(0);
              nativePush64(0);
              nativePush64(0x3f000000);
              nativePush64(0);
              nativePush64(0);
              nativePush64(1);
              nativePush64(0);
              nativePush64(0);
              nativePush64(1);
              nativeCall();
            }
          }
        }
        iVar12 = iVar12 + 1;
        puVar14 = puVar14 + 1;
      } while (iVar12 < DAT_1801f5380);
    }
    uVar13 = DAT_1801d9d60;
    fVar21 = DAT_1801d8ea4;
    fVar27 = DAT_1801d8e10;
    if (0 < DAT_1801f4b70) {
      puVar14 = &DAT_1801f4370;
      iVar12 = iVar16;
      do {
        uVar6 = *puVar14;
        if (uVar6 != 0) {
          nativeInit(0x7239b21a38f536ba);
          local_res10 = (ulonglong)uVar6;
          nativePush64(local_res10);
          p_Var7 = nativeCall();
          if ((int)*p_Var7 != 0) {
            uVar6 = *puVar14;
            nativeInit(0x12534c348c6cb68b);
            local_res10 = (ulonglong)uVar6;
            nativePush64(local_res10);
            p_Var7 = nativeCall();
            if ((int)*p_Var7 == 0) {
              uVar6 = *puVar14;
              nativeInit(0x826aa586edb9fef8);
              local_res10 = (ulonglong)uVar6;
              nativePush64(local_res10);
              p_Var7 = nativeCall();
              if ((int)*p_Var7 == 0) {
                uVar6 = FUN_18012f0e8();
                if (0xc6 < (int)uVar6 % 0xc9) {
                  uVar6 = *puVar14;
                  nativeInit(0xe3b6097cc25aa69e);
                  local_res10 = (ulonglong)uVar6;
                  nativePush64(local_res10);
                  p_Var7 = nativeCall();
                  if ((int)*p_Var7 == 0) {
                    uVar6 = *puVar14;
                    nativeInit(0xae99fb955581844a);
                    local_res10 = (ulonglong)uVar6;
                    nativePush64(local_res10);
                    nativePush64(0);
                    nativePush64(0);
                    nativePush64(0xffffffff);
                    nativePush64(1);
                    nativePush64(0);
                    nativePush64(1);
                    nativeCall();
                    uVar6 = *puVar14;
                    nativeInit(0x18ff00fc7eff559e);
                    local_res10 = (ulonglong)uVar6;
                    nativePush64(local_res10);
                    nativePush64(0);
                    local_res10 = (ulonglong)
                                  (uint)(fVar19 * fVar25 * DAT_1801d8e18 * _DAT_1801d8e00 * fVar21);
                    nativePush64(local_res10);
                    local_res10 = (ulonglong)
                                  (uint)(fVar29 * fVar25 * DAT_1801d8e18 * _DAT_1801d8e00 * fVar21);
                    nativePush64(local_res10);
                    local_res10 = (ulonglong)
                                  (uint)(((float)(uVar18 & _DAT_1801d9d30) * _DAT_1801d8e30 + fVar30
                                         ) * fVar25 * DAT_1801d8e18 * _DAT_1801d8e00 * 0.0);
                    nativePush64(local_res10);
                    nativePush64(1);
                    nativePush64(0);
                    nativePush64(1);
                    nativePush64(0);
                    nativeCall();
                  }
                }
                uVar6 = *puVar14;
                nativeInit(0x413c6c763a4affad);
                local_res10 = (ulonglong)uVar6;
                nativePush64(local_res10);
                local_res10 = (ulonglong)((uint)fVar19 ^ uVar13);
                nativePush64(local_res10);
                local_res10 = (ulonglong)((uint)fVar29 ^ uVar13);
                nativePush64(local_res10);
                local_res10 = (ulonglong)((uint)fVar30 ^ uVar13);
                nativePush64(local_res10);
                nativePush64(1);
                nativeCall();
                uVar6 = *puVar14;
                nativeInit(0x18ff00fc7eff559e);
                local_res10 = (ulonglong)uVar6;
                nativePush64(local_res10);
                nativePush64(0);
                local_res10 = (ulonglong)
                              (uint)(fVar19 * fVar25 * DAT_1801d8e18 * _DAT_1801d8e00 *
                                    _DAT_1801d8e28);
                nativePush64(local_res10);
                local_res10 = (ulonglong)
                              (uint)(fVar29 * fVar25 * DAT_1801d8e18 * _DAT_1801d8e00 *
                                    _DAT_1801d8e28);
                nativePush64(local_res10);
                local_res10 = (ulonglong)
                              (uint)(((float)(uVar18 & _DAT_1801d9d30) * _DAT_1801d8e30 + fVar30) *
                                     fVar25 * DAT_1801d8e18 * _DAT_1801d8e00 * fVar27);
                nativePush64(local_res10);
                nativePush64(1);
                nativePush64(0);
                nativePush64(1);
                nativePush64(0);
                nativeCall();
              }
            }
          }
        }
        iVar12 = iVar12 + 1;
        puVar14 = puVar14 + 1;
      } while (iVar12 < DAT_1801f4b70);
    }
    uVar6 = _UNK_1801d9d44;
    uVar13 = _DAT_1801d9d40;
    dVar22 = DAT_1801d8e40;
    fVar27 = fVar26 * fVar28 * _DAT_1801d8e00;
    if (0 < DAT_1801f4360) {
      puVar14 = &DAT_1801f3b60;
      do {
        uVar2 = *puVar14;
        if (uVar2 != 0) {
          nativeInit(0x7239b21a38f536ba);
          local_res8 = (ulonglong)uVar2;
          nativePush64(local_res8);
          p_Var7 = nativeCall();
          if ((int)*p_Var7 != 0) {
            uVar2 = *puVar14;
            nativeInit(0xda95ea3317cc5064);
            local_res8 = (ulonglong)uVar2;
            nativePush64(local_res8);
            p_Var7 = nativeCall();
            if ((int)*p_Var7 != 0) {
              uVar2 = *puVar14;
              nativeInit(0x3fef770d40960d5a);
              local_res8 = (ulonglong)uVar2;
              nativePush64(local_res8);
              nativePush64(0);
              nativeCall();
              dVar24 = FUN_18014d9e0();
              if ((double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) & uVar6,
                                   SUB84(dVar24,0) & uVar13) < dVar22) {
                uVar2 = *puVar14;
                nativeInit(0xe7e4c198b0185900);
                local_res8 = (ulonglong)uVar2;
                nativePush64(local_res8);
                nativePush64(0);
                nativePush64(0);
                nativeCall();
              }
              uVar2 = *puVar14;
              nativeInit(0x9f47b058362c84b5);
              local_res8 = (ulonglong)uVar2;
              nativePush64(local_res8);
              p_Var7 = nativeCall();
              _Var3 = *p_Var7;
              puVar11 = DAT_1801f53e8;
              if (DAT_1801f53e8 != DAT_1801f53f0) {
                do {
                  puVar15 = puVar11;
                  if (0xf < (ulonglong)puVar11[3]) {
                    puVar15 = (int32_t *)*puVar11;
                  }
                  nativeInit(0xd24d37cc275948cc);
                  nativePush64((__uint64)puVar15);
                  p_Var7 = nativeCall();
                  if ((int)_Var3 == (int)*p_Var7) {
                    uVar2 = *puVar14;
                    nativeInit(0x18ff00fc7eff559e);
                    local_res8 = (ulonglong)uVar2;
                    nativePush64(local_res8);
                    nativePush64(0);
                    local_res8 = (ulonglong)(uint)(fVar19 * fVar27 * _DAT_1801d8e50);
                    nativePush64(local_res8);
                    local_res8 = (ulonglong)(uint)(fVar29 * fVar27 * _DAT_1801d8e50);
                    nativePush64(local_res8);
                    fVar21 = ((float)(uVar18 & _DAT_1801d9d30) * _DAT_1801d8e30 + fVar30) * fVar27 *
                             _DAT_1801d8e28 * _DAT_1801d8e50;
                    goto LAB_1800e98dd;
                  }
                  puVar11 = puVar11 + 4;
                } while (puVar11 != DAT_1801f53f0);
              }
              uVar2 = *puVar14;
              nativeInit(0x9f47b058362c84b5);
              local_res8 = (ulonglong)uVar2;
              nativePush64(local_res8);
              p_Var7 = nativeCall();
              _Var3 = *p_Var7;
              puVar11 = DAT_1801f5400;
              if (DAT_1801f5400 != DAT_1801f5408) {
                do {
                  puVar15 = puVar11;
                  if (0xf < (ulonglong)puVar11[3]) {
                    puVar15 = (int32_t *)*puVar11;
                  }
                  nativeInit(0xd24d37cc275948cc);
                  nativePush64((__uint64)puVar15);
                  p_Var7 = nativeCall();
                  if ((int)_Var3 == (int)*p_Var7) {
                    uVar2 = *puVar14;
                    nativeInit(0x18ff00fc7eff559e);
                    local_res8 = (ulonglong)uVar2;
                    nativePush64(local_res8);
                    nativePush64(0);
                    local_res8 = (ulonglong)(uint)(fVar19 * fVar27 * _DAT_1801d8e1c);
                    nativePush64(local_res8);
                    local_res8 = (ulonglong)(uint)(fVar29 * fVar27 * _DAT_1801d8e1c);
                    nativePush64(local_res8);
                    fVar21 = ((float)(uVar18 & _DAT_1801d9d30) * _DAT_1801d8e30 + fVar30) * fVar27 *
                             _DAT_1801d8e28 * _DAT_1801d8e1c;
                    goto LAB_1800e98dd;
                  }
                  puVar11 = puVar11 + 4;
                } while (puVar11 != DAT_1801f5408);
              }
              uVar2 = *puVar14;
              nativeInit(0x18ff00fc7eff559e);
              local_res8 = (ulonglong)uVar2;
              nativePush64(local_res8);
              nativePush64(0);
              local_res8 = (ulonglong)(uint)(fVar19 * fVar27);
              nativePush64(local_res8);
              local_res8 = (ulonglong)(uint)(fVar29 * fVar27);
              nativePush64(local_res8);
              fVar21 = ((float)(uVar18 & _DAT_1801d9d30) * _DAT_1801d8e30 + fVar30) * fVar27 *
                       _DAT_1801d8e28;
LAB_1800e98dd:
              local_res8 = (ulonglong)(uint)fVar21;
              nativePush64(local_res8);
              nativePush64(1);
              nativePush64(0);
              nativePush64(1);
              nativePush64(0);
              nativeCall();
            }
          }
        }
        iVar16 = iVar16 + 1;
        puVar14 = puVar14 + 1;
      } while (iVar16 < DAT_1801f4360);
    }
  }
  return;
}

// ---- Function: FUN_1800e9b20 ----
void FUN_1800e9b20(int32_t param_1,int32_t param_2,int32_t **param_3,int32_t *param_4)

{
  int32_t *******pppppppuVar1;
  char cVar2;
  code *pcVar3;
  int32_t uVar4;
  __uint64 *p_Var5;
  uint ******ppppppuVar6;
  uint ****ppppuVar7;
  char *pcVar8;
  longlong *plVar9;
  int32_t *******pppppppuVar10;
  uint *******pppppppuVar11;
  char *******pppppppcVar12;
  uint *****pppppuVar13;
  int32_t uVar14;
  char **ppcVar15;
  ulonglong uVar16;
  bool bVar17;
  int32_t auStack_5c8 [48];
  int32_t local_598;
  int32_t local_597 [7];
  int32_t local_590;
  FILE *local_588;
  char local_580 [8];
  uint *****local_578;
  char *local_570;
  char local_568 [8];
  longlong local_560;
  uint ******local_558;
  uint ***local_550;
  uint ******local_548;
  ulonglong local_540;
  int32_t *local_538;
  uint *****local_530;
  longlong local_528 [7];
  int32_t local_4f0;
  uint ****local_4e8;
  int32_t uStack_4e0;
  uint *****local_4d8;
  int32_t uStack_4d0;
  uint ******local_4b0;
  longlong local_4a8;
  uint ******local_4a0;
  ulonglong local_498;
  int32_t ******local_490;
  int32_t uStack_488;
  int32_t local_480;
  ulonglong uStack_478;
  char ******local_470 [3];
  ulonglong local_458;
  char *local_448 [130];
  char *local_38 [4];
  
  local_38[0] = (char *)(DAT_1801eb080 ^ (ulonglong)auStack_5c8);
  uVar14 = 0;
  local_590 = (uint ******)((ulonglong)local_590 & 0xffffffff00000000);
  local_4d8 = (uint *****)_DAT_1801d9020;
  uStack_4d0 = _UNK_1801d9028;
  local_4e8 = (uint ****)s_vehicles_json_1801d60c0._0_8_;
  uStack_4e0 = (uint *****)
               (ulonglong)CONCAT14(s_vehicles_json_1801d60c0[0xc],s_vehicles_json_1801d60c0._8_4_);
  FUN_18011cb10(local_470,&local_4e8,param_3);
  FUN_1800a6800((longlong *)&local_4e8);
  pppppppcVar12 = local_470;
  if (0xf < local_458) {
    pppppppcVar12 = (char *******)local_470[0];
  }
  fopen_s(&local_588,(char *)pppppppcVar12,"r");
  if (local_588 == (FILE *)0x0) {
    local_568[0] = '\0';
    FUN_1800f8a10(&local_560,'\0');
    local_448[0] = "adder";
    local_448[1] = "alpha";
    local_448[2] = "banshee";
    local_448[3] = "banshee2";
    local_448[4] = "bestiagts";
    local_448[5] = "blista";
    local_448[6] = "blista2";
    local_448[7] = "blista3";
    local_448[8] = "boxsters";
    local_448[9] = "boxterlb";
    local_448[10] = "brzrbv3";
    local_448[0xb] = "buffalo";
    local_448[0xc] = "buffalo2";
    local_448[0xd] = "buffalo3";
    local_448[0xe] = "bullet";
    local_448[0xf] = "carbonizzare";
    local_448[0x10] = "centenario";
    local_448[0x11] = "cheetah";
    local_448[0x12] = "comet2";
    local_448[0x13] = "comet3";
    local_448[0x14] = "coquette";
    local_448[0x15] = "demon";
    local_448[0x16] = "dominator";
    local_448[0x17] = "dominator2";
    local_448[0x18] = "dukes";
    local_448[0x19] = "dukes2";
    local_448[0x1a] = "elegy";
    local_448[0x1b] = "elegy2";
    local_448[0x1c] = "entity2";
    local_448[0x1d] = "entityxf";
    local_448[0x1e] = "essentia";
    local_448[0x1f] = "f250gto";
    local_448[0x20] = "f250gto64";
    local_448[0x21] = "f512tr";
    local_448[0x22] = "feltzer2";
    local_448[0x23] = "feltzer3";
    local_448[0x24] = "fmj";
    local_448[0x25] = "focusrs";
    local_448[0x26] = "furoregt";
    local_448[0x27] = "fusilade";
    local_448[0x28] = "futo";
    local_448[0x29] = "gauntlet";
    local_448[0x2a] = "gauntlet4";
    local_448[0x2b] = "gp1";
    local_448[0x2c] = "gt2rs";
    local_448[0x2d] = "hellcat";
    local_448[0x2e] = "ignus2";
    local_448[0x2f] = "infernus";
    local_448[0x30] = "infernus2";
    local_448[0x31] = "italigtb";
    local_448[0x32] = "italigtb2";
    local_448[0x33] = "jester";
    local_448[0x34] = "jester2";
    local_448[0x35] = "jugular";
    local_448[0x36] = "khamelion";
    local_448[0x37] = "krieger";
    local_448[0x38] = "kuruma";
    local_448[0x39] = "kuruma2";
    local_448[0x3a] = "laferrari";
    local_448[0x3b] = "locust";
    local_448[0x3c] = "lp770";
    local_448[0x3d] = "lynx";
    local_448[0x3e] = "massacro";
    local_448[0x3f] = "massacro2";
    local_448[0x40] = "mustangbkit";
    local_448[0x41] = "neo";
    local_448[0x42] = "nero";
    local_448[0x43] = "nero2";
    local_448[0x44] = "ninef";
    local_448[0x45] = "ninef2";
    local_448[0x46] = "nisgtr2k";
    local_448[0x47] = "omnis";
    local_448[0x48] = "osiris";
    local_448[0x49] = "p911gt2rs";
    local_448[0x4a] = "p918spyder";
    local_448[0x4b] = "penetrator";
    local_448[0x4c] = "penumbra";
    local_448[0x4d] = "pfister811";
    local_448[0x4e] = "prototipo";
    local_448[0x4f] = "quadravtech";
    local_448[0x50] = "rapidgt";
    local_448[0x51] = "rapidgt2";
    local_448[0x52] = "raptor";
    local_448[0x53] = "re7b";
    local_448[0x54] = "reaper";
    local_448[0x55] = "rrocket";
    local_448[0x56] = "ruston";
    local_448[0x57] = "sabregt";
    local_448[0x58] = "sabregt2";
    local_448[0x59] = "sagaris";
    local_448[0x5a] = "schafter2";
    local_448[0x5b] = "schafter3";
    local_448[0x5c] = "schafter4";
    local_448[0x5d] = "schafter5";
    local_448[0x5e] = "schafter6";
    local_448[0x5f] = "schwarzer";
    local_448[0x60] = "scramjet";
    local_448[0x61] = "seven70";
    local_448[0x62] = "sheava";
    local_448[99] = "specter";
    local_448[100] = "specter2";
    local_448[0x65] = "subzrb";
    local_448[0x66] = "sultan";
    local_448[0x67] = "sultanrs";
    local_448[0x68] = "superd";
    local_448[0x69] = "supragr21";
    local_448[0x6a] = "surano";
    local_448[0x6b] = "sv";
    local_448[0x6c] = "t20";
    local_448[0x6d] = "tampa2";
    local_448[0x6e] = "tempesta";
    local_448[0x6f] = "thrax";
    local_448[0x70] = "torero";
    local_448[0x71] = "tropos";
    local_448[0x72] = "turismo2";
    local_448[0x73] = "turismor";
    local_448[0x74] = "tyrus";
    local_448[0x75] = "vacca";
    local_448[0x76] = "vagner";
    local_448[0x77] = "verlierer2";
    local_448[0x78] = "vigilante";
    local_448[0x79] = "vipergtsacr";
    local_448[0x7a] = "voltic";
    local_448[0x7b] = "voltic2";
    local_448[0x7c] = "wmlykan";
    local_448[0x7d] = "xa21";
    local_448[0x7e] = "yaiba";
    local_448[0x7f] = "zeno";
    local_448[0x80] = "zentorno";
    local_448[0x81] = "zorrusso";
    local_570 = local_580;
    local_580[0] = '\0';
    local_578 = (uint *****)0x0;
    FUN_1800f9a90((longlong *)&local_578,'\0');
    local_580[0] = '\x02';
    ppppppuVar6 = (uint ******)operator_new(0x18);
    local_538 = &local_598;
    *ppppppuVar6 = (uint *****)0x0;
    ppppppuVar6[1] = (uint *****)0x0;
    ppppppuVar6[2] = (uint *****)0x0;
    local_530 = (uint *****)ppppppuVar6;
    FUN_1800f56e0((ulonglong *)ppppppuVar6,0x82);
    pppppuVar13 = *ppppppuVar6;
    ppcVar15 = local_448;
    local_558 = (uint ******)local_597;
    local_590 = ppppppuVar6;
    local_4e8 = (uint ****)pppppuVar13;
    local_4d8 = (uint *****)ppppppuVar6;
    do {
      *(char *)pppppuVar13 = '\0';
      pppppuVar13[1] = (uint ****)0x0;
      uStack_4e0 = pppppuVar13;
      FUN_1800f9a90((longlong *)(pppppuVar13 + 1),*(char *)pppppuVar13);
      *(char *)pppppuVar13 = '\x03';
      ppppuVar7 = (uint ****)operator_new(0x20);
      pcVar8 = *ppcVar15;
      *ppppuVar7 = (uint ***)0x0;
      ppppuVar7[1] = (uint ***)0x0;
      ppppuVar7[2] = (uint ***)0x0;
      ppppuVar7[3] = (uint ***)0x0;
      uVar16 = 0xffffffffffffffff;
      do {
        uVar16 = uVar16 + 1;
      } while (pcVar8[uVar16] != '\0');
      local_550 = (uint ***)ppppuVar7;
      FUN_1800ba360(ppppuVar7,(int32_t *)pcVar8,uVar16);
      local_550 = (uint ***)0x0;
      pppppuVar13[1] = ppppuVar7;
      pppppuVar13 = pppppuVar13 + 2;
      ppcVar15 = ppcVar15 + 1;
    } while (ppcVar15 != local_38);
    ppppppuVar6[1] = pppppuVar13;
    local_4e8 = (uint ****)0x0;
    uStack_4e0 = (uint *****)0x0;
    local_4d8 = (uint *****)0x0;
    uStack_4d0 = 0;
    local_578 = (uint *****)ppppppuVar6;
    local_4e8 = (uint ****)operator_new(0x20);
    uVar4 = s_VehiclesWithNitrous_1801d60d8._8_8_;
    local_4d8 = (uint *****)0x13;
    uStack_4d0 = 0x1f;
    *local_4e8 = (uint ***)s_VehiclesWithNitrous_1801d60d8._0_8_;
    local_4e8[1] = (uint ***)uVar4;
    *(int32_t *)(local_4e8 + 2) = s_VehiclesWithNitrous_1801d60d8._16_2_;
    *(char *)((longlong)local_4e8 + 0x12) = s_VehiclesWithNitrous_1801d60d8[0x12];
    *(char *)((longlong)local_4e8 + 0x13) = '\0';
    pcVar8 = (char *)FUN_1800edd90((longlong *)local_568,(longlong *)&local_4e8);
    cVar2 = *pcVar8;
    *pcVar8 = local_580[0];
    pppppuVar13 = *(uint ******)(pcVar8 + 8);
    *(uint ******)(pcVar8 + 8) = local_578;
    local_580[0] = cVar2;
    local_578 = pppppuVar13;
    FUN_1800f9a90((longlong *)&local_578,cVar2);
    ppcVar15 = local_448;
    do {
      pcVar8 = *ppcVar15;
      nativeInit(0xd24d37cc275948cc);
      nativePush64((__uint64)pcVar8);
      p_Var5 = nativeCall();
      local_590 = (uint ******)CONCAT44(local_590._4_4_,(uint)*p_Var5);
      FUN_1800ecab0((ulonglong)(uint)*p_Var5,&local_538,(uint *)&local_590);
      ppcVar15 = ppcVar15 + 1;
    } while (ppcVar15 != local_38);
    FUN_1800eb7a0(local_568,&local_4b0);
    pppppppcVar12 = local_470;
    if (0xf < local_458) {
      pppppppcVar12 = (char *******)local_470[0];
    }
    fopen_s(&local_588,(char *)pppppppcVar12,"w");
    pppppppuVar11 = &local_4b0;
    if (0xf < local_498) {
      pppppppuVar11 = (uint *******)local_4b0;
    }
    FUN_18012e4a0(pppppppuVar11,(longlong)local_4a0,1,(longlong)local_588);
    fflush(local_588);
    FUN_18012f050((int *)local_588);
    FUN_1800a6800((longlong *)&local_4b0);
    FUN_1800f9a90(&local_560,local_568[0]);
LAB_1800ea79c:
    FUN_1800a6800((longlong *)local_470);
    FUN_1801252c0((ulonglong)local_38[0] ^ (ulonglong)auStack_5c8);
    return;
  }
  local_4f0 = 0;
  FUN_1800ec930((int32_t **)local_568,&local_588,local_528,param_4);
  local_4e8 = (uint ****)0x0;
  uStack_4e0 = (uint *****)0x0;
  local_4d8 = (uint *****)0x0;
  uStack_4d0 = 0;
  local_4e8 = (uint ****)operator_new(0x20);
  uVar4 = s_VehiclesWithNitrous_1801d60d8._8_8_;
  local_4d8 = (uint *****)0x13;
  uStack_4d0 = 0x1f;
  *local_4e8 = (uint ***)s_VehiclesWithNitrous_1801d60d8._0_8_;
  local_4e8[1] = (uint ***)uVar4;
  *(int32_t *)(local_4e8 + 2) = s_VehiclesWithNitrous_1801d60d8._16_2_;
  *(char *)((longlong)local_4e8 + 0x12) = s_VehiclesWithNitrous_1801d60d8[0x12];
  *(char *)((longlong)local_4e8 + 0x13) = '\0';
  uVar4 = FUN_1800edd90((longlong *)local_568,(longlong *)&local_4e8);
  FUN_1800f9490(uVar4,&local_558);
  FUN_1800f93b0(uVar4,&local_4b0);
  uVar16 = _UNK_1801d8f78;
  uVar4 = _DAT_1801d8f70;
  do {
    if (local_558 != local_4b0) {
LAB_1800ea80e:
      FUN_1800ba470(&local_4b0,(int32_t *)"cannot compare iterators of different containers");
      FUN_1800f8fa0(&local_4e8,0xd4,&local_4b0);
      FUN_1801279a8((longlong *)&local_4e8,&DAT_1801e92f8);
switchD_1800e9cf0_caseD_0:
      FUN_1800ba470(&local_4b0,(int32_t *)"cannot get value");
      pppppppuVar11 = &local_4b0;
      FUN_1800f8fa0(&local_4e8,0xd6,pppppppuVar11);
      FUN_1801279a8((longlong *)&local_4e8,&DAT_1801e92f8);
LAB_1800ea876:
      FUN_18012b7b4();
LAB_1800ea87c:
      local_570 = FUN_1800f7810((int32_t *)pppppppuVar11);
      plVar9 = FUN_1800f24a0((longlong *)&local_4b0,(int32_t *)"type must be string, but is ",
                             (longlong *)&local_570);
      FUN_1800ed150(&local_4e8,0x12e,plVar9);
      FUN_1801279a8((longlong *)&local_4e8,&DAT_1801e9200);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    switch(*(int32_t *)local_558) {
    default:
      bVar17 = local_540 == local_498;
      break;
    case 1:
      bVar17 = local_550 == (uint ***)local_4a8;
      break;
    case 2:
      bVar17 = local_548 == local_4a0;
    }
    if (bVar17) {
      FUN_18012f050((int *)local_588);
      FUN_1800f9a90(&local_560,local_568[0]);
      goto LAB_1800ea79c;
    }
    pppppppuVar11 = (uint *******)local_548;
    switch(*(int32_t *)local_558) {
    case 0:
      goto switchD_1800e9cf0_caseD_0;
    case 1:
      pppppppuVar11 = (uint *******)((longlong)local_550 + 0x40);
      break;
    case 2:
      break;
    default:
      pppppppuVar11 = (uint *******)local_558;
      if (local_540 != 0) {
        FUN_1800ba470(&local_4b0,(int32_t *)"cannot get value");
        FUN_1800f8fa0(&local_4e8,0xd6,&local_4b0);
        FUN_1801279a8((longlong *)&local_4e8,&DAT_1801e92f8);
        goto LAB_1800ea80e;
      }
    }
    uStack_488 = 0;
    local_480 = uVar4;
    uStack_478 = uVar16;
    local_490 = (int32_t *******)0x0;
    local_590._4_4_ = (int32_t)((ulonglong)local_590 >> 0x20);
    local_590 = (uint ******)(CONCAT44(local_590._4_4_,uVar14) | 2);
    if (*(char *)pppppppuVar11 != '\x03') goto LAB_1800ea87c;
    pppppppuVar10 = (int32_t *******)pppppppuVar11[1];
    if (&local_490 != pppppppuVar10) {
      pppppppuVar1 = pppppppuVar10 + 2;
      if ((int32_t ******)0xf < pppppppuVar10[3]) {
        pppppppuVar10 = (int32_t *******)*pppppppuVar10;
      }
      FUN_1800de6e0((longlong *)&local_490,pppppppuVar10,(ulonglong)*pppppppuVar1);
    }
    uVar14 = 1;
    pppppppuVar10 = &local_490;
    if (0xf < uStack_478) {
      pppppppuVar10 = (int32_t *******)local_490;
    }
    nativeInit(0xd24d37cc275948cc);
    nativePush64((__uint64)pppppppuVar10);
    p_Var5 = nativeCall();
    local_590 = (uint ******)CONCAT44(local_590._4_4_,(uint)*p_Var5);
    pppppppuVar11 = (uint *******)&local_590;
    FUN_1800ecab0((ulonglong)(uint)*p_Var5,&local_538,(uint *)pppppppuVar11);
    if (0xf < uStack_478) {
      pppppppuVar10 = (int32_t *******)local_490;
      if ((0xfff < uStack_478 + 1) &&
         (pppppppuVar10 = (int32_t *******)local_490[-1],
         0x1f < (ulonglong)((longlong)local_490 + (-8 - (longlong)pppppppuVar10))))
      goto LAB_1800ea876;
      thunk_FUN_18012d5e8(pppppppuVar10);
    }
    FUN_1800f92f0(&local_558);
  } while( true );
}

// ---- Function: FUN_1800ea920 ----
void FUN_1800ea920(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  int32_t local_38;
  
  nativeInit(0xc8e9b6b71b8e660d);
  local_38 = (ulonglong)param_1;
  nativePush64(local_38);
  local_38 = (ulonglong)param_2;
  nativePush64(local_38);
  local_38 = (ulonglong)param_3;
  nativePush64(local_38);
  local_38 = (ulonglong)param_4;
  nativePush64(local_38);
  local_38 = (ulonglong)param_5;
  nativePush64(local_38);
  nativePush64(0);
                    
                    
  nativeCall();
  return;
}

// ---- Function: FUN_1800ea9f0 ----
void FUN_1800ea9f0(void)

{
  float fVar1;
  float fVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  __uint64 _Var9;
  __uint64 _Var10;
  __uint64 _Var11;
  longlong *plVar12;
  __uint64 *p_Var13;
  float *pfVar14;
  int32_t uVar15;
  longlong *plVar16;
  ulonglong local_res8;
  
  uVar5 = DAT_1801f539c;
  if (DAT_1801f5390 == '\0') {
    if (DAT_1801f53a0 != 0) {
      nativeInit(0x4a04de7cab2739a1);
      local_res8 = (ulonglong)uVar5;
      nativePush64(local_res8);
      nativePush64(1);
      nativeCall();
      DAT_1801f5390 = '\x01';
    }
  }
  else if (DAT_1801f53a0 == 0) {
    DAT_1801f5390 = '\0';
  }
  uVar5 = DAT_1801f539c;
  nativeInit(0x7239b21a38f536ba);
  local_res8 = (ulonglong)uVar5;
  nativePush64(local_res8);
  p_Var13 = nativeCall();
  if (((int)*p_Var13 != 0) &&
     (FUN_1800ea920(DAT_1801f539c,(uint)DAT_1801f53a0,0,0,DAT_1801d8ea8), uVar5 = DAT_1801f539c,
     DAT_1801f53a0 != 0)) {
    nativeInit(0x5721b434ad84d57a);
    local_res8 = (ulonglong)uVar5;
    nativePush64(local_res8);
    p_Var13 = nativeCall();
    uVar5 = DAT_1801f539c;
    if ((int)*p_Var13 == 0) {
      nativeInit(0x9f47b058362c84b5);
      local_res8 = (ulonglong)uVar5;
      nativePush64(local_res8);
      p_Var13 = nativeCall();
      uVar5 = DAT_1801f539c;
      _Var9 = *p_Var13;
      nativeInit(0xd5037ba82e12416f);
      local_res8 = (ulonglong)uVar5;
      nativePush64(local_res8);
      pfVar14 = (float *)nativeCall();
      fVar1 = *pfVar14;
      nativeInit(0xf417c2502fffed43);
      local_res8 = (ulonglong)(uint)_Var9;
      nativePush64(local_res8);
      pfVar14 = (float *)nativeCall();
      uVar5 = DAT_1801f539c;
      fVar2 = *pfVar14;
      nativeInit(0xb59e4bd37ae292db);
      local_res8 = (ulonglong)uVar5;
      nativePush64(local_res8);
      local_res8 = (ulonglong)(uint)((fVar2 + fVar2) / fVar1);
      nativePush64(local_res8);
      nativeCall();
    }
  }
  nativeInit(0x15c40837039ffaf7);
  pfVar14 = (float *)nativeCall();
  fVar1 = *pfVar14;
  DAT_1801f5394 = DAT_1801f5394 + fVar1;
  if (DAT_1801f53a0 == 0) {
    if (DAT_1801ec224 < DAT_1801d8e7c) {
      DAT_1801ec224 = DAT_1801ec224 + fVar1;
    }
  }
  else {
    DAT_1801ec224 = DAT_1801ec224 - fVar1;
    if (DAT_1801ec224 <= 0.0) {
      DAT_1801f53a0 = 0;
      DAT_1801ec224 = 0.0;
    }
  }
  nativeInit(0xd80958fc74e988a6);
  p_Var13 = nativeCall();
  uVar5 = (uint)*p_Var13;
  nativeInit(0x997abd671d25ca0b);
  local_res8 = (ulonglong)uVar5;
  nativePush64(local_res8);
  nativePush64(0);
  p_Var13 = nativeCall();
  if ((int)*p_Var13 != 0) {
    nativeInit(0x9a9112a0fe9a4713);
    local_res8 = (ulonglong)uVar5;
    nativePush64(local_res8);
    nativePush64(0);
    p_Var13 = nativeCall();
    uVar6 = (uint)*p_Var13;
    nativeInit(0xbb40dd2270b65366);
    local_res8 = (ulonglong)uVar6;
    nativePush64(local_res8);
    nativePush64(0xffffffff);
    nativePush64(0);
    p_Var13 = nativeCall();
    if (uVar5 == (uint)*p_Var13) {
      if (uVar6 != DAT_1801f539c) {
        uVar15 = FUN_1800eb2e0(uVar6);
        DAT_1801f5398 = (char)uVar15;
        DAT_1801f539c = uVar6;
      }
      nativeInit(0xe38e9162a2500646);
      local_res8 = (ulonglong)uVar6;
      nativePush64(local_res8);
      nativePush64(0xb);
      p_Var13 = nativeCall();
      _Var9 = *p_Var13;
      nativeInit(0x772960298da26fdb);
      local_res8 = (ulonglong)uVar6;
      nativePush64(local_res8);
      nativePush64(0xb);
      p_Var13 = nativeCall();
      if ((int)*p_Var13 == (int)_Var9 + -1) {
        nativeInit(0x84b233a8c8fc8ae7);
        local_res8 = (ulonglong)uVar6;
        nativePush64(local_res8);
        nativePush64(0x12);
        p_Var13 = nativeCall();
        if (((int)*p_Var13 != 0) && (DAT_1801f5398 != '\0')) {
          nativeInit(0x580417101ddb492f);
          nativePush64(2);
          nativePush64(0x49);
          p_Var13 = nativeCall();
          uVar5 = DAT_1801d8e38;
          if ((int)*p_Var13 != 0) {
            DAT_1801f53a0 = 1;
          }
          nativeInit(0x8702416e512ec454);
          nativePush64(0x1801d66a8);
          p_Var13 = nativeCall();
          fVar1 = DAT_1801d8eec;
          if ((int)*p_Var13 != 0) {
            plVar16 = (longlong *)*DAT_1801fce58;
            cVar4 = *(char *)((longlong)plVar16 + 0x19);
            while (cVar4 == '\0') {
              nativeInit(0xd45dc2893621e1fe);
              nativePush64((ulonglong)uVar6);
              p_Var13 = nativeCall();
              _Var9 = *p_Var13;
              nativeInit(0xe83d4f9ba2a38914);
              nativePush64((ulonglong)uVar6);
              pfVar14 = (float *)nativeCall();
              uVar7 = *(uint *)((longlong)plVar16 + 0x1c);
              fVar2 = *pfVar14;
              nativeInit(0x44a8fcb8ed227738);
              nativePush64((ulonglong)uVar6);
              nativePush64((ulonglong)uVar7);
              p_Var13 = nativeCall();
              _Var10 = *p_Var13;
              _Var11 = p_Var13[1];
              uVar3 = p_Var13[2];
              nativeInit(0x6c38af3693a69a91);
              nativePush64(0x1801d66a8);
              nativeCall();
              nativeInit(0x25129531f77b9ed3);
              nativePush64(0x1801d66c0);
              nativePush64((ulonglong)(uint)_Var10);
              nativePush64((ulonglong)(uint)_Var11);
              nativePush64(uVar3 & 0xffffffff);
              nativePush64(0);
              nativePush64((ulonglong)(uint)_Var9);
              nativePush64((ulonglong)(uint)(fVar2 - fVar1));
              nativePush64((ulonglong)uVar5);
              nativePush64(0);
              nativePush64(0);
              nativePush64(0);
              nativeCall();
              plVar8 = (longlong *)plVar16[2];
              if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
                cVar4 = *(char *)(*plVar8 + 0x19);
                plVar16 = plVar8;
                plVar8 = (longlong *)*plVar8;
                while (cVar4 == '\0') {
                  cVar4 = *(char *)(*plVar8 + 0x19);
                  plVar16 = plVar8;
                  plVar8 = (longlong *)*plVar8;
                }
              }
              else {
                cVar4 = *(char *)(plVar16[1] + 0x19);
                plVar12 = (longlong *)plVar16[1];
                plVar8 = plVar16;
                while ((plVar16 = plVar12, cVar4 == '\0' && (plVar8 == (longlong *)plVar16[2]))) {
                  cVar4 = *(char *)(plVar16[1] + 0x19);
                  plVar12 = (longlong *)plVar16[1];
                  plVar8 = plVar16;
                }
              }
              cVar4 = *(char *)((longlong)plVar16 + 0x19);
            }
            return;
          }
          nativeInit(0xb80d8756b4668ab6);
          nativePush64(0x1801d66a8);
                    
                    
          nativeCall();
          return;
        }
      }
    }
  }
  DAT_1801f53a0 = 0;
  return;
}

// ---- Function: FUN_1800eb2e0 ----
ulonglong FUN_1800eb2e0(uint param_1)

{
  char cVar1;
  uint uVar2;
  __uint64 _Var3;
  __uint64 *p_Var4;
  __uint64 *p_Var5;
  longlong *plVar6;
  __uint64 *p_Var7;
  __uint64 *p_Var8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  int32_t uVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  uint uVar16;
  ulonglong local_res10;
  longlong *local_48;
  int32_t uStack_40;
  
  nativeInit(0x2a1f4f37f95bad08);
  local_res10 = (ulonglong)param_1;
  nativePush64(local_res10);
  nativePush64(0x11);
  nativePush64(1);
  nativeCall();
  FUN_1800ea920(param_1,1,0,0,DAT_1801d8ea8);
  nativeInit(0x9f47b058362c84b5);
  local_res10 = (ulonglong)param_1;
  nativePush64(local_res10);
  p_Var8 = nativeCall();
  plVar10 = (longlong *)DAT_1801fce68[1];
  cVar1 = *(char *)((longlong)plVar10 + 0x19);
  plVar14 = DAT_1801fce68;
  while (cVar1 == '\0') {
    plVar13 = plVar10;
    if (*(uint *)((longlong)plVar10 + 0x1c) < (uint)*p_Var8) {
      plVar10 = plVar10 + 2;
      plVar13 = plVar14;
    }
    plVar10 = (longlong *)*plVar10;
    plVar14 = plVar13;
    cVar1 = *(char *)((longlong)plVar10 + 0x19);
  }
  if ((*(char *)((longlong)plVar14 + 0x19) == '\0') &&
     (*(uint *)((longlong)plVar14 + 0x1c) <= (uint)*p_Var8)) {
    nativeInit(0xb80d8756b4668ab6);
    nativePush64(0x1801d66a8);
    nativeCall();
    plVar14 = DAT_1801fce58;
    cVar1 = *(char *)(DAT_1801fce58[1] + 0x19);
    plVar10 = (longlong *)DAT_1801fce58[1];
    while (cVar1 == '\0') {
      FUN_1800ecbd0(&DAT_1801fce58,&DAT_1801fce58,(longlong *)plVar10[2]);
      plVar13 = (longlong *)*plVar10;
      thunk_FUN_18012d5e8(plVar10);
      plVar10 = plVar13;
      cVar1 = *(char *)((longlong)plVar13 + 0x19);
    }
    plVar14[1] = (longlong)plVar14;
    *plVar14 = (longlong)plVar14;
    plVar14[2] = (longlong)plVar14;
    DAT_1801fce60 = 0;
    p_Var8 = *(__uint64 **)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    p_Var4 = DAT_1801fcf00;
    p_Var5 = DAT_1801fcf08;
    if (((int)p_Var8[2] < DAT_1801fce78) &&
       (p_Var8 = (__uint64 *)FUN_180125398(&DAT_1801fce78), p_Var4 = DAT_1801fcf00,
       p_Var5 = DAT_1801fcf08, DAT_1801fce78 == -1)) {
      DAT_1801fce80 = "exhaust";
      DAT_1801fce88 = "exhaust_2";
      _DAT_1801fce90 = "exhaust_3";
      _DAT_1801fce98 = "exhaust_4";
      _DAT_1801fcea0 = "exhaust_5";
      _DAT_1801fcea8 = "exhaust_6";
      _DAT_1801fceb0 = "exhaust_7";
      _DAT_1801fceb8 = "exhaust_8";
      _DAT_1801fcec0 = "exhaust_9";
      _DAT_1801fcec8 = "exhaust_10";
      _DAT_1801fced0 = "exhaust_11";
      _DAT_1801fced8 = "exhaust_12";
      _DAT_1801fcee0 = "exhaust_13";
      _DAT_1801fcee8 = "exhaust_14";
      _DAT_1801fcef0 = "exhaust_15";
      _DAT_1801fcef8 = "exhaust_16";
      DAT_1801fcf00 = (__uint64 *)&DAT_1801fce80;
      DAT_1801fcf08 = (__uint64 *)&DAT_1801fcf00;
      p_Var8 = (__uint64 *)_Init_thread_footer(&DAT_1801fce78);
      p_Var4 = DAT_1801fcf00;
      p_Var5 = DAT_1801fcf08;
    }
    for (; p_Var7 = DAT_1801fcf08, p_Var4 != DAT_1801fcf08; p_Var4 = p_Var4 + 1) {
      _Var3 = *p_Var4;
      DAT_1801fcf08 = p_Var5;
      nativeInit(0xfb71170b7e76acba);
      local_res10 = (ulonglong)param_1;
      nativePush64(local_res10);
      nativePush64(_Var3);
      p_Var8 = nativeCall();
      plVar10 = DAT_1801fce58;
      uVar2 = (uint)*p_Var8;
      if (-1 < (int)uVar2) {
        plVar14 = (longlong *)0x20;
        plVar9 = (longlong *)operator_new(0x20);
        *(uint *)((longlong)plVar9 + 0x1c) = uVar2;
        *plVar9 = (longlong)plVar10;
        plVar9[1] = (longlong)plVar10;
        plVar9[2] = (longlong)plVar10;
        *(int32_t *)(plVar9 + 3) = 0;
        plVar10 = (longlong *)DAT_1801fce58[1];
        uVar16 = 0;
        cVar1 = *(char *)((longlong)plVar10 + 0x19);
        local_48 = plVar10;
        plVar13 = DAT_1801fce58;
        while (plVar6 = plVar10, cVar1 == '\0') {
          uVar16 = *(uint *)((longlong)plVar6 + 0x1c);
          plVar14 = (longlong *)(ulonglong)uVar16;
          plVar10 = plVar6;
          plVar15 = plVar6;
          if (uVar16 < uVar2) {
            plVar10 = plVar6 + 2;
            plVar15 = plVar13;
          }
          uVar16 = (uint)(uVar2 <= uVar16);
          cVar1 = *(char *)(*plVar10 + 0x19);
          plVar10 = (longlong *)*plVar10;
          local_48 = plVar6;
          plVar13 = plVar15;
        }
        uStack_40 = CONCAT44(uStack_40._4_4_,uVar16);
        if ((*(char *)((longlong)plVar13 + 0x19) == '\0') &&
           (*(uint *)((longlong)plVar13 + 0x1c) <= uVar2)) {
          p_Var8 = (__uint64 *)thunk_FUN_18012d5e8(plVar9);
        }
        else {
          if (DAT_1801fce60 == 0x7ffffffffffffff) {
            FUN_1800d8950();
            cVar1 = *(char *)((longlong)*(longlong **)(*plVar14 + 8) + 0x19);
            plVar10 = *(longlong **)(*plVar14 + 8);
            while (cVar1 == '\0') {
              FUN_1800ecbd0(plVar14,plVar14,(longlong *)plVar10[2]);
              plVar13 = (longlong *)*plVar10;
              thunk_FUN_18012d5e8(plVar10);
              plVar10 = plVar13;
              cVar1 = *(char *)((longlong)plVar13 + 0x19);
            }
            uVar12 = thunk_FUN_18012d5e8((LPVOID)*plVar14);
            return uVar12;
          }
          p_Var8 = (__uint64 *)
                   FUN_1800d86d0((longlong *)&DAT_1801fce58,(longlong *)&local_48,plVar9);
        }
      }
      p_Var5 = DAT_1801fcf08;
      DAT_1801fcf08 = p_Var7;
    }
    uVar11 = CONCAT71((int7)((ulonglong)p_Var8 >> 8),1);
    DAT_1801fcf08 = p_Var5;
  }
  else {
    uVar11 = (ulonglong)plVar10 & 0xffffffffffffff00;
  }
  return uVar11;
}

// ---- Function: FUN_1800eb7a0 ----
void FUN_1800eb7a0(int32_t *param_1,int32_t *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  int32_t (*pauVar6) [32];
  int32_t auStackY_338 [32];
  longlong *local_2c8;
  longlong *local_2c0;
  int32_t local_2b8;
  int32_t uStack_2b0;
  int32_t local_2a8;
  int32_t uStack_2a0;
  int32_t local_298;
  int32_t uStack_290;
  int32_t local_288;
  int32_t uStack_280;
  int32_t *local_278;
  int32_t local_270;
  int32_t local_26f;
  int32_t local_26e [512];
  int32_t local_6e;
  int32_t (*local_68) [32];
  int32_t uStack_60;
  int32_t local_58;
  int32_t local_50;
  int32_t local_48;
  ulonglong local_38;
  
  local_38 = DAT_1801eb080 ^ (ulonglong)auStackY_338;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(int32_t *)param_2 = 0;
  plVar5 = (longlong *)operator_new(0x20);
  *plVar5 = 0;
  plVar5[1] = 0;
  *(int32_t *)(plVar5 + 1) = 1;
  *(int32_t *)((longlong)plVar5 + 0xc) = 1;
  *plVar5 = (longlong)&PTR_FUN_1801d7d98;
  local_2c8 = plVar5 + 2;
  *local_2c8 = (longlong)&PTR_LAB_1801d6910;
  plVar5[3] = (longlong)param_2;
  LOCK();
  *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
  UNLOCK();
  local_2b8 = 0;
  uStack_2b0 = 0;
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_298 = 0;
  uStack_290 = 0;
  local_288 = 0;
  uStack_280 = 0;
  local_2c0 = plVar5;
  local_278 = (int32_t *)FUN_18012d604();
  if ((int32_t *)local_278[1] == (int32_t *)0x0) {
    local_270 = 0;
  }
  else {
    local_270 = *(int32_t *)local_278[1];
  }
  if ((int32_t *)*local_278 == (int32_t *)0x0) {
    local_26f = 0;
  }
  else {
    local_26f = *(int32_t *)*local_278;
  }
  FUN_180151670((int32_t (*) [32])local_26e,0,0x200);
  local_6e = 9;
  local_68 = (int32_t (*) [32])0x0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0;
  pauVar6 = (int32_t (*) [32])operator_new(0x210);
  local_58 = 0x200;
  local_50 = 0x20f;
  local_68 = pauVar6;
  FUN_180151670(pauVar6,9,0x200);
  pauVar6[0x10][0] = 0;
  local_48 = 0;
  LOCK();
  plVar1 = plVar5 + 1;
  lVar4 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar4 == 1) {
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
  }
  FUN_1800eba90(&local_2c8,param_1,'\x01',0,1,0);
  FUN_1800a6800((longlong *)&local_68);
  plVar5 = local_2c0;
  if (local_2c0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_2c0 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_2c0)(local_2c0);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  FUN_1801252c0(local_38 ^ (ulonglong)auStackY_338);
  return;
}

// ---- Function: FUN_1800eba30 ----
void FUN_1800eba30(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  FUN_1800a6800((longlong *)(param_1 + 0x260));
  plVar4 = *(longlong **)(param_1 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  return;
}

// ---- Function: FUN_1800eba90 ----
void FUN_1800eba90(int32_t *param_1,int32_t *param_2,char param_3,byte param_4,int param_5,
                  int param_6)

{
  char cVar1;
  ulonglong uVar2;
  short sVar3;
  int32_t *puVar4;
  longlong *plVar5;
  int32_t *puVar6;
  longlong *plVar7;
  char *pcVar8;
  int32_t *puVar9;
  byte *pbVar10;
  ulonglong uVar11;
  longlong *plVar12;
  int32_t uVar13;
  uint uVar14;
  
  switch(*param_2) {
  case 1:
    plVar7 = (longlong *)*param_1;
    puVar4 = (int32_t *)*plVar7;
    if (*(longlong *)(*(longlong *)(param_2 + 8) + 8) == 0) {
      (*(code *)puVar4[1])(plVar7,&DAT_1801d5f64,2);
    }
    else if (param_3 == '\0') {
      (*(code *)*puVar4)(plVar7,0x7b);
      uVar11 = 0;
      plVar7 = *(longlong **)**(int32_t **)(param_2 + 8);
      if ((*(int32_t **)(param_2 + 8))[1] != 1) {
        do {
          (*(code *)**(int32_t **)*param_1)((int32_t *)*param_1,0x22);
          FUN_1800ec490(param_1,plVar7 + 4);
          (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,&DAT_1801d67d0);
          FUN_1800eba90(param_1,(int32_t *)(plVar7 + 8),'\0',0,param_5,param_6);
          (*(code *)**(int32_t **)*param_1)((int32_t *)*param_1,0x2c);
          plVar12 = (longlong *)plVar7[2];
          uVar11 = uVar11 + 1;
          if (*(char *)((longlong)plVar12 + 0x19) == '\0') {
            cVar1 = *(char *)(*plVar12 + 0x19);
            plVar7 = plVar12;
            plVar12 = (longlong *)*plVar12;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*plVar12 + 0x19);
              plVar7 = plVar12;
              plVar12 = (longlong *)*plVar12;
            }
          }
          else {
            cVar1 = *(char *)(plVar7[1] + 0x19);
            plVar5 = (longlong *)plVar7[1];
            plVar12 = plVar7;
            while ((plVar7 = plVar5, cVar1 == '\0' && (plVar12 == (longlong *)plVar7[2]))) {
              cVar1 = *(char *)(plVar7[1] + 0x19);
              plVar5 = (longlong *)plVar7[1];
              plVar12 = plVar7;
            }
          }
        } while (uVar11 < *(longlong *)(*(longlong *)(param_2 + 8) + 8) - 1U);
      }
      (*(code *)**(int32_t **)*param_1)((int32_t *)*param_1,0x22);
      FUN_1800ec490(param_1,plVar7 + 4);
      (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,&DAT_1801d67d0);
      FUN_1800eba90(param_1,(int32_t *)(plVar7 + 8),'\0',0,param_5,param_6);
      (*(code *)**(int32_t **)*param_1)((int32_t *)*param_1,0x7d);
    }
    else {
      (*(code *)puVar4[1])(plVar7,&DAT_1801d67c4,2);
      uVar14 = param_6 + param_5;
      uVar11 = param_1[0x4e];
      if (uVar11 < uVar14) {
        uVar2 = uVar11 * 2;
        puVar4 = param_1 + 0x4c;
        if (uVar11 < uVar2) {
          if (param_1[0x4f] - uVar11 < uVar11) {
            FUN_1800b8fd0(puVar4,uVar11,(ulonglong)param_4,uVar11,0x20);
          }
          else {
            param_1[0x4e] = uVar2;
            if (0xf < (ulonglong)param_1[0x4f]) {
              puVar4 = (int32_t *)*puVar4;
            }
            FUN_180151670((int32_t (*) [32])(uVar11 + (longlong)puVar4),0x20,uVar11);
            *(int32_t *)(uVar11 * 2 + (longlong)puVar4) = 0;
          }
        }
        else {
          param_1[0x4e] = uVar2;
          if (0xf < (ulonglong)param_1[0x4f]) {
            puVar4 = (int32_t *)*puVar4;
          }
          *(int32_t *)(uVar2 + (longlong)puVar4) = 0;
        }
      }
      uVar11 = 0;
      plVar7 = *(longlong **)**(int32_t **)(param_2 + 8);
      if ((*(int32_t **)(param_2 + 8))[1] != 1) {
        do {
          puVar4 = param_1 + 0x4c;
          if (0xf < (ulonglong)param_1[0x4f]) {
            puVar4 = (int32_t *)param_1[0x4c];
          }
          (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,puVar4,(ulonglong)uVar14);
          (*(code *)**(int32_t **)*param_1)((int32_t *)*param_1,0x22);
          FUN_1800ec490(param_1,plVar7 + 4);
          (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,&DAT_1801d67c8,3);
          FUN_1800eba90(param_1,(int32_t *)(plVar7 + 8),'\x01',0,param_5,uVar14);
          (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,&DAT_1801d67cc,2);
          plVar12 = (longlong *)plVar7[2];
          uVar11 = uVar11 + 1;
          if (*(char *)((longlong)plVar12 + 0x19) == '\0') {
            cVar1 = *(char *)(*plVar12 + 0x19);
            plVar7 = plVar12;
            plVar12 = (longlong *)*plVar12;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*plVar12 + 0x19);
              plVar7 = plVar12;
              plVar12 = (longlong *)*plVar12;
            }
          }
          else {
            cVar1 = *(char *)(plVar7[1] + 0x19);
            plVar5 = (longlong *)plVar7[1];
            plVar12 = plVar7;
            while ((plVar7 = plVar5, cVar1 == '\0' && (plVar12 == (longlong *)plVar7[2]))) {
              cVar1 = *(char *)(plVar7[1] + 0x19);
              plVar5 = (longlong *)plVar7[1];
              plVar12 = plVar7;
            }
          }
        } while (uVar11 < *(longlong *)(*(longlong *)(param_2 + 8) + 8) - 1U);
      }
      plVar12 = param_1 + 0x4c;
      plVar5 = plVar12;
      if (0xf < (ulonglong)param_1[0x4f]) {
        plVar5 = (longlong *)*plVar12;
      }
      (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,plVar5,uVar14);
      (*(code *)**(int32_t **)*param_1)((int32_t *)*param_1,0x22);
      FUN_1800ec490(param_1,plVar7 + 4);
      (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,&DAT_1801d67c8,3);
      FUN_1800eba90(param_1,(int32_t *)(plVar7 + 8),'\x01',0,param_5,uVar14);
      (*(code *)**(int32_t **)*param_1)((int32_t *)*param_1,10);
      if (0xf < (ulonglong)param_1[0x4f]) {
        plVar12 = (longlong *)*plVar12;
      }
      (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,plVar12,param_6);
      (*(code *)**(int32_t **)*param_1)((int32_t *)*param_1,0x7d);
    }
    break;
  case 2:
    plVar7 = *(longlong **)(param_2 + 8);
    plVar12 = (longlong *)*param_1;
    puVar4 = (int32_t *)*plVar12;
    if (*plVar7 == plVar7[1]) {
      (*(code *)puVar4[1])(plVar12,&DAT_1801d67d4,2);
    }
    else if (param_3 == '\0') {
      (*(code *)*puVar4)(plVar12,CONCAT71((int7)((ulonglong)plVar7 >> 8),0x5b));
      plVar7 = *(longlong **)(param_2 + 8);
      puVar9 = (int32_t *)*plVar7;
      if (puVar9 != (int32_t *)(plVar7[1] + -0x10)) {
        do {
          FUN_1800eba90(param_1,puVar9,'\0',0,param_5,param_6);
          (*(code *)**(int32_t **)*param_1)((int32_t *)*param_1,0x2c);
          plVar7 = *(longlong **)(param_2 + 8);
          puVar9 = puVar9 + 0x10;
        } while (puVar9 != (int32_t *)(plVar7[1] + -0x10));
      }
      FUN_1800eba90(param_1,(int32_t *)(plVar7[1] + -0x10),'\0',0,param_5,param_6);
      (*(code *)**(int32_t **)*param_1)((int32_t *)*param_1,0x5d);
    }
    else {
      (*(code *)puVar4[1])(plVar12,&DAT_1801d67d8,2);
      puVar4 = param_1 + 0x4c;
      uVar14 = param_5 + param_6;
      if ((ulonglong)param_1[0x4e] < (ulonglong)uVar14) {
        FUN_1800b9160(puVar4,param_1[0x4e] * 2,0x20);
      }
      puVar9 = (int32_t *)**(longlong **)(param_2 + 8);
      if (puVar9 != (int32_t *)((*(longlong **)(param_2 + 8))[1] + -0x10)) {
        do {
          puVar6 = puVar4;
          if (0xf < (ulonglong)param_1[0x4f]) {
            puVar6 = (int32_t *)*puVar4;
          }
          (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,puVar6,(ulonglong)uVar14);
          FUN_1800eba90(param_1,puVar9,'\x01',0,param_5,uVar14);
          (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,&DAT_1801d67cc,2);
          puVar9 = puVar9 + 0x10;
        } while (puVar9 != (int32_t *)(*(longlong *)(*(longlong *)(param_2 + 8) + 8) + -0x10));
      }
      puVar6 = param_1 + 0x4c;
      puVar4 = puVar6;
      if (0xf < (ulonglong)param_1[0x4f]) {
        puVar4 = (int32_t *)*puVar6;
      }
      (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,puVar4,uVar14);
      FUN_1800eba90(param_1,(int32_t *)(*(longlong *)(*(longlong *)(param_2 + 8) + 8) + -0x10),
                    '\x01',0,param_5,uVar14);
      (*(code *)**(int32_t **)*param_1)((int32_t *)*param_1,10);
      if (0xf < (ulonglong)param_1[0x4f]) {
        puVar6 = (int32_t *)*puVar6;
      }
      (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,puVar6,param_6);
      (*(code *)**(int32_t **)*param_1)((int32_t *)*param_1,0x5d);
    }
    break;
  case 3:
    (*(code *)**(int32_t **)*param_1)((int32_t *)*param_1,0x22);
    FUN_1800ec490(param_1,*(longlong **)(param_2 + 8));
    (*(code *)**(int32_t **)*param_1)((int32_t *)*param_1,0x22);
    break;
  case 4:
    plVar7 = (longlong *)*param_1;
    if (param_2[8] == '\0') {
      (**(code **)(*plVar7 + 8))(plVar7,"false",5);
    }
    else {
      (**(code **)(*plVar7 + 8))(plVar7,&DAT_1801874e8,4);
    }
    break;
  case 5:
    FUN_1800ecea0(param_1,*(ulonglong *)(param_2 + 8));
    break;
  case 6:
    FUN_1800ecd70(param_1,*(ulonglong *)(param_2 + 8));
    break;
  case 7:
    puVar9 = param_2;
    sVar3 = _dclass(*(int32_t *)(param_2 + 8));
    if (sVar3 < 1) {
      puVar4 = param_1 + 2;
      pcVar8 = FUN_1800ed3a0(puVar4,(ulonglong)puVar9,*(int32_t *)(param_2 + 8));
      (**(code **)(*(longlong *)*param_1 + 8))
                ((longlong *)*param_1,puVar4,(longlong)pcVar8 - (longlong)puVar4);
      return;
    }
  case 0:
    pcVar8 = "null";
    uVar13 = 4;
    goto LAB_1800ec3ce;
  case 8:
    plVar7 = (longlong *)*param_1;
    if (param_3 != '\0') {
      (**(code **)(*plVar7 + 8))(plVar7,&DAT_1801d67c4,2);
      puVar4 = param_1 + 0x4c;
      uVar14 = param_5 + param_6;
      if ((ulonglong)param_1[0x4e] < (ulonglong)uVar14) {
        FUN_1800b9160(puVar4,param_1[0x4e] * 2,0x20);
      }
      if (0xf < (ulonglong)param_1[0x4f]) {
        puVar4 = (int32_t *)*puVar4;
      }
      (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,puVar4,(ulonglong)uVar14);
      (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,"\"bytes\": [",10);
      puVar4 = *(int32_t **)(param_2 + 8);
      pbVar10 = (byte *)*puVar4;
      if (pbVar10 != (byte *)puVar4[1]) {
        if (pbVar10 != (byte *)puVar4[1] + -1) {
          do {
            FUN_1800ecc30(param_1,*pbVar10);
            (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,&DAT_1801d67ec,2);
            puVar4 = *(int32_t **)(param_2 + 8);
            pbVar10 = pbVar10 + 1;
          } while (pbVar10 != (byte *)(puVar4[1] + -1));
        }
        FUN_1800ecc30(param_1,*(byte *)(puVar4[1] + -1));
      }
      puVar6 = param_1 + 0x4c;
      (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,&DAT_1801d67f0,3);
      puVar4 = puVar6;
      if (0xf < (ulonglong)param_1[0x4f]) {
        puVar4 = (int32_t *)*puVar6;
      }
      (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,puVar4,uVar14);
      (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,"\"subtype\": ",0xb);
      if (*(char *)(*(longlong *)(param_2 + 8) + 0x20) == '\0') {
        (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,&DAT_1801d81d0,4);
      }
      else {
        FUN_1800ecd70(param_1,*(ulonglong *)(*(longlong *)(param_2 + 8) + 0x18));
      }
      (*(code *)**(int32_t **)*param_1)((int32_t *)*param_1,10);
      if (0xf < (ulonglong)param_1[0x4f]) {
        puVar6 = (int32_t *)*puVar6;
      }
      (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,puVar6,param_6);
      (*(code *)**(int32_t **)*param_1)((int32_t *)*param_1,0x7d);
      return;
    }
    (**(code **)(*plVar7 + 8))(plVar7,"{\"bytes\":[",10);
    puVar4 = *(int32_t **)(param_2 + 8);
    pbVar10 = (byte *)*puVar4;
    if (pbVar10 != (byte *)puVar4[1]) {
      if (pbVar10 != (byte *)puVar4[1] + -1) {
        do {
          FUN_1800ecc30(param_1,*pbVar10);
          (*(code *)**(int32_t **)*param_1)((int32_t *)*param_1,0x2c);
          puVar4 = *(int32_t **)(param_2 + 8);
          pbVar10 = pbVar10 + 1;
        } while (pbVar10 != (byte *)(puVar4[1] + -1));
      }
      FUN_1800ecc30(param_1,*(byte *)(puVar4[1] + -1));
    }
    (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,"],\"subtype\":",0xc);
    if (*(char *)(*(longlong *)(param_2 + 8) + 0x20) != '\0') {
      FUN_1800ecd70(param_1,*(ulonglong *)(*(longlong *)(param_2 + 8) + 0x18));
      (*(code *)**(int32_t **)*param_1)((int32_t *)*param_1,0x7d);
      return;
    }
    uVar13 = 5;
    pcVar8 = "null}";
    goto LAB_1800ec3ce;
  case 9:
    uVar13 = 0xb;
    pcVar8 = "<discarded>";
LAB_1800ec3ce:
    (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,pcVar8,uVar13);
  }
  return;
}

// ---- Function: FUN_1800ec490 ----
void FUN_1800ec490(int32_t *param_1,longlong *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  code *pcVar5;
  int32_t *puVar6;
  byte *pbVar7;
  longlong *plVar8;
  int32_t *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  int32_t auStackY_f8 [32];
  longlong local_c8 [7];
  longlong local_90 [4];
  longlong local_70 [4];
  longlong local_50 [4];
  ulonglong local_30;
  
  local_30 = DAT_1801eb080 ^ (ulonglong)auStackY_f8;
  uVar14 = 0;
  uVar15 = 0;
  lVar10 = 0;
  lVar13 = 0;
  lVar12 = 0;
  uVar11 = 0;
  if (param_2[2] != 0) {
    do {
      uVar4 = param_2[3];
      plVar8 = param_2;
      if (0xf < uVar4) {
        plVar8 = (longlong *)*param_2;
      }
      bVar1 = *(byte *)((longlong)plVar8 + uVar11);
      if ((char)uVar15 == '\0') {
        uVar14 = 0xffU >> ((&DAT_1801d8040)[bVar1] & 0x1f) & (uint)bVar1;
      }
      else {
        uVar14 = bVar1 & 0x3f | uVar14 << 6;
      }
      bVar2 = (&DAT_1801d8140)[uVar15 * 0x10 + (ulonglong)(byte)(&DAT_1801d8040)[bVar1]];
      uVar15 = (ulonglong)bVar2;
      if (bVar2 == 0) {
        switch(uVar14) {
        case 8:
          *(int32_t *)((longlong)param_1 + lVar10 + 0x5a) = 0x5c;
          *(int32_t *)(lVar10 + 0x5b + (longlong)param_1) = 0x62;
          lVar10 = lVar10 + 2;
          break;
        case 9:
          *(int32_t *)((longlong)param_1 + lVar10 + 0x5a) = 0x5c;
          *(int32_t *)(lVar10 + 0x5b + (longlong)param_1) = 0x74;
          lVar10 = lVar10 + 2;
          break;
        case 10:
          *(int32_t *)((longlong)param_1 + lVar10 + 0x5a) = 0x5c;
          *(int32_t *)(lVar10 + 0x5b + (longlong)param_1) = 0x6e;
          lVar10 = lVar10 + 2;
          break;
        default:
          if (uVar14 < 0x20) {
            FUN_1800f87d0((int32_t *)((longlong)param_1 + lVar10 + 0x5a),7,0x1801d683c,
                          (ulonglong)(uVar14 & 0xffff));
            lVar10 = lVar10 + 6;
          }
          else {
            plVar8 = param_2;
            if (0xf < uVar4) {
              plVar8 = (longlong *)*param_2;
            }
            *(int32_t *)((longlong)param_1 + lVar10 + 0x5a) =
                 *(int32_t *)((longlong)plVar8 + uVar11);
            lVar10 = lVar10 + 1;
          }
          break;
        case 0xc:
          *(int32_t *)((longlong)param_1 + lVar10 + 0x5a) = 0x5c;
          *(int32_t *)(lVar10 + 0x5b + (longlong)param_1) = 0x66;
          lVar10 = lVar10 + 2;
          break;
        case 0xd:
          *(int32_t *)((longlong)param_1 + lVar10 + 0x5a) = 0x5c;
          *(int32_t *)(lVar10 + 0x5b + (longlong)param_1) = 0x72;
          lVar10 = lVar10 + 2;
          break;
        case 0x22:
          *(int32_t *)((longlong)param_1 + lVar10 + 0x5a) = 0x5c;
          *(int32_t *)(lVar10 + 0x5b + (longlong)param_1) = 0x22;
          lVar10 = lVar10 + 2;
          break;
        case 0x5c:
          *(int32_t *)((longlong)param_1 + lVar10 + 0x5a) = 0x5c;
          *(int32_t *)(lVar10 + 0x5b + (longlong)param_1) = 0x5c;
          lVar10 = lVar10 + 2;
        }
        if (0x200U - lVar10 < 0xd) {
          (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,(longlong)param_1 + 0x5a);
          lVar10 = 0;
        }
        lVar12 = 0;
        lVar13 = lVar10;
      }
      else if (bVar2 == 1) {
        iVar3 = *(int *)(param_1 + 0x50);
        if (iVar3 == 0) {
          plVar8 = FUN_1800ec8a0(local_50,(ulonglong)bVar1);
          puVar6 = (int32_t *)FUN_1800f8740(local_90,uVar11);
          plVar8 = FUN_1800ed070(local_70,uVar11,puVar6,lVar13,plVar8);
          FUN_1800ed150(local_c8,0x13c,plVar8);
          FUN_1801279a8(local_c8,&DAT_1801e9200);
          goto LAB_1800ec7d6;
        }
        if ((iVar3 == 1) || (iVar3 == 2)) {
          if (lVar12 != 0) {
            uVar11 = uVar11 - 1;
          }
          lVar10 = lVar13;
          if (iVar3 == 1) {
            *(int32_t *)((longlong)param_1 + lVar13 + 0x5a) = 0xef;
            *(int32_t *)((longlong)param_1 + lVar13 + 0x5b) = 0xbdbf;
            lVar10 = lVar13 + 3;
            if (0x1feU - (lVar13 + 1) < 0xd) {
              (**(code **)(*(longlong *)*param_1 + 8))();
              lVar10 = 0;
            }
          }
          lVar12 = 0;
          uVar15 = 0;
          lVar13 = lVar10;
        }
      }
      else {
        plVar8 = param_2;
        if (0xf < uVar4) {
          plVar8 = (longlong *)*param_2;
        }
        *(int32_t *)((longlong)param_1 + lVar10 + 0x5a) =
             *(int32_t *)((longlong)plVar8 + uVar11);
        lVar10 = lVar10 + 1;
        lVar12 = lVar12 + 1;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < (ulonglong)param_2[2]);
    if ((char)uVar15 == '\0') {
      if (lVar10 == 0) goto LAB_1800ec702;
      plVar8 = (longlong *)*param_1;
      puVar9 = (int32_t *)((longlong)param_1 + 0x5a);
      lVar12 = *plVar8;
      lVar13 = lVar10;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x50);
      if (iVar3 == 0) {
LAB_1800ec7d6:
        pbVar7 = (byte *)FUN_1800ec910(param_2);
        uVar11 = (ulonglong)*pbVar7;
        plVar8 = FUN_1800ec8a0(local_70,uVar11);
        plVar8 = FUN_1800ed300(local_90,uVar11,plVar8);
        FUN_1800ed150(local_c8,0x13c,plVar8);
        FUN_1801279a8(local_c8,&DAT_1801e9200);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (iVar3 == 1) {
        (**(code **)(*(longlong *)*param_1 + 8))
                  ((longlong *)*param_1,(longlong)param_1 + 0x5a,lVar13);
        plVar8 = (longlong *)*param_1;
        lVar12 = *plVar8;
        lVar13 = 3;
        puVar9 = &DAT_1801d6898;
      }
      else {
        if (iVar3 != 2) goto LAB_1800ec702;
        plVar8 = (longlong *)*param_1;
        puVar9 = (int32_t *)((longlong)param_1 + 0x5a);
        lVar12 = *plVar8;
      }
    }
    (**(code **)(lVar12 + 8))(plVar8,puVar9,lVar13);
  }
LAB_1800ec702:
  FUN_1801252c0(local_30 ^ (ulonglong)auStackY_f8);
  return;
}

// ---- Function: FUN_1800ec8a0 ----
longlong * FUN_1800ec8a0(longlong *param_1,ulonglong param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 2;
  param_1[3] = 0xf;
  *(int32_t *)param_1 = 0x4646;
  *(int32_t *)((longlong)param_1 + 2) = 0;
  *(char *)param_1 = "0123456789ABCDEF"[(param_2 & 0xff) >> 4];
  if (0xf < (ulonglong)param_1[3]) {
    *(char *)(*param_1 + 1) = "0123456789ABCDEF"[(uint)param_2 & 0xf];
    return param_1;
  }
  *(char *)((longlong)param_1 + 1) = "0123456789ABCDEF"[(uint)param_2 & 0xf];
  return param_1;
}

// ---- Function: FUN_1800ec910 ----
longlong FUN_1800ec910(int32_t *param_1)

{
  int32_t *puVar1;
  
  puVar1 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar1 = (int32_t *)*param_1;
  }
  return param_1[2] + -1 + (longlong)puVar1;
}

// ---- Function: FUN_1800ec930 ----
void FUN_1800ec930(int32_t **param_1,int32_t *param_2,longlong *param_3,int32_t *param_4)

{
  int32_t *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong **pplVar4;
  int32_t auStack_188 [48];
  int32_t local_158;
  longlong *local_150;
  int32_t **local_148;
  longlong *local_140;
  longlong local_138 [7];
  int32_t local_100;
  longlong local_f8 [7];
  longlong *local_c0;
  int32_t local_b0 [152];
  ulonglong local_18;
  
  local_18 = DAT_1801eb080 ^ (ulonglong)auStack_188;
  local_158 = 0;
  *(int32_t *)param_1 = 0;
  local_148 = param_1;
  local_140 = param_3;
  FUN_1800f8a10(param_1 + 1,'\0');
  local_158 = 1;
  local_150 = local_138;
  local_100 = 0;
  puVar1 = (int32_t *)param_3[7];
  if (puVar1 != (int32_t *)0x0) {
    local_100 = (**(code **)*puVar1)(puVar1,local_138);
  }
  local_150 = (longlong *)*param_2;
  pplVar4 = &local_150;
  lVar3 = FUN_1800f07b0((longlong)local_f8,pplVar4,local_138);
  FUN_1800ed5e0(lVar3,pplVar4,param_1,param_4);
  FUN_1800ed560((longlong)local_b0);
  if (local_c0 != (longlong *)0x0) {
    (**(code **)(*local_c0 + 0x20))(local_c0,local_c0 != local_f8);
  }
  plVar2 = (longlong *)param_3[7];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != param_3);
    param_3[7] = 0;
  }
  FUN_1801252c0(local_18 ^ (ulonglong)auStack_188);
  return;
}

// ---- Function: FUN_1800eca60 ----
void FUN_1800eca60(longlong *param_1,int32_t *param_2)

{
  ulonglong uVar1;
  longlong local_28 [4];
  
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  uVar1 = 0xffffffffffffffff;
  do {
    uVar1 = uVar1 + 1;
  } while (*(char *)((longlong)param_2 + uVar1) != '\0');
  FUN_1800ba360(local_28,param_2,uVar1);
  FUN_1800edd90(param_1,local_28);
  return;
}

// ---- Function: FUN_1800ecab0 ----
int32_t * FUN_1800ecab0(int32_t param_1,int32_t *param_2,uint *param_3)

{
  code *pcVar1;
  longlong *plVar2;
  longlong *plVar3;
  int32_t uVar4;
  longlong *plVar5;
  longlong *plVar6;
  int32_t *puVar7;
  longlong *plVar8;
  longlong *local_38;
  int32_t uStack_30;
  longlong *local_28;
  uint uStack_20;
  int32_t uStack_1c;
  
  plVar2 = DAT_1801fce68;
  local_28 = (longlong *)DAT_1801fce68[1];
  uStack_20 = 0;
  plVar6 = DAT_1801fce68;
  if (*(char *)((longlong)local_28 + 0x19) == '\0') {
    plVar3 = local_28;
    plVar8 = DAT_1801fce68;
    do {
      local_28 = plVar3;
      plVar5 = local_28;
      plVar6 = local_28;
      if (*(uint *)((longlong)local_28 + 0x1c) < *param_3) {
        plVar5 = local_28 + 2;
        plVar6 = plVar8;
      }
      uStack_20 = (uint)(*param_3 <= *(uint *)((longlong)local_28 + 0x1c));
      plVar3 = (longlong *)*plVar5;
      plVar8 = plVar6;
    } while (*(char *)(*plVar5 + 0x19) == '\0');
  }
  if ((*(char *)((longlong)plVar6 + 0x19) == '\0') &&
     (*(uint *)((longlong)plVar6 + 0x1c) <= *param_3)) {
    uVar4 = 0;
  }
  else {
    if (DAT_1801fce70 == 0x7ffffffffffffff) {
      FUN_1800d8950();
      pcVar1 = (code *)swi(3);
      puVar7 = (int32_t *)(*pcVar1)();
      return puVar7;
    }
    local_38 = (longlong *)&DAT_1801fce68;
    uStack_30 = 0;
    plVar6 = (longlong *)operator_new(0x20);
    *(uint *)((longlong)plVar6 + 0x1c) = *param_3;
    *plVar6 = (longlong)plVar2;
    plVar6[1] = (longlong)plVar2;
    plVar6[2] = (longlong)plVar2;
    *(int32_t *)(plVar6 + 3) = 0;
    uStack_30 = CONCAT44(uStack_1c,uStack_20);
    local_38 = local_28;
    plVar6 = FUN_1800d86d0((longlong *)&DAT_1801fce68,(longlong *)&local_38,plVar6);
    uVar4 = 1;
  }
  *param_2 = plVar6;
  *(int32_t *)(param_2 + 1) = uVar4;
  return param_2;
}

// ---- Function: FUN_1800ecbd0 ----
void FUN_1800ecbd0(int32_t param_1,int32_t param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_1800ecbd0(param_1,param_2,(longlong *)param_3[2]);
    plVar2 = (longlong *)*param_3;
    thunk_FUN_18012d5e8(param_3);
    param_3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}

// ---- Function: FUN_1800ecc30 ----
void FUN_1800ecc30(int32_t *param_1,byte param_2)

{
  int32_t auVar1 [16];
  int32_t *puVar2;
  int32_t in_register_00000011;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 != 0) {
    uVar5 = (ulonglong)param_2;
    uVar4 = 1;
    if (9 < uVar5) {
      if (uVar5 < 100) {
        uVar4 = 2;
      }
      else if (uVar5 < 1000) {
        uVar4 = 3;
      }
      else if (uVar5 < 10000) {
        uVar4 = 4;
      }
      else {
        uVar4 = 5;
      }
    }
    puVar2 = (int32_t *)((longlong)param_1 + (ulonglong)uVar4 + 0x10);
    while (99 < uVar5) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar5;
      lVar3 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar1,8);
      uVar6 = (uVar5 - lVar3 >> 1) + lVar3 >> 6;
      lVar3 = (uVar5 + uVar6 * -100 & 0xffffffff) * 2;
      puVar2[-1] = "0010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                   [lVar3];
      puVar2 = puVar2 + -2;
      *puVar2 = (&DAT_1801d7f70)[lVar3];
      uVar5 = uVar6;
    }
    if (uVar5 < 10) {
      puVar2[-1] = (char)uVar5 + '0';
    }
    else {
      lVar3 = (uVar5 & 0xffffffff) * 2;
      puVar2[-1] = "0010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                   [lVar3];
      puVar2[-2] = (&DAT_1801d7f70)[lVar3];
    }
                    
                    
    (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,param_1 + 2,(ulonglong)uVar4);
    return;
  }
                    
                    
  (*(code *)**(int32_t **)*param_1)((int32_t *)*param_1,CONCAT71(in_register_00000011,0x30));
  return;
}

// ---- Function: FUN_1800ecd70 ----
void FUN_1800ecd70(int32_t *param_1,ulonglong param_2)

{
  int32_t auVar1 [16];
  int32_t *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  
  if (param_2 == 0) {
                    
                    
    (*(code *)**(int32_t **)*param_1)((int32_t *)*param_1,0x30);
    return;
  }
  uVar5 = 1;
  uVar3 = param_2;
  if (9 < param_2) {
    do {
      if (uVar3 < 100) {
        uVar5 = uVar5 + 1;
        break;
      }
      if (uVar3 < 1000) {
        uVar5 = uVar5 + 2;
        break;
      }
      if (uVar3 < 10000) {
        uVar5 = uVar5 + 3;
        break;
      }
      uVar5 = uVar5 + 4;
      uVar3 = uVar3 / 10000;
    } while (9 < uVar3);
  }
  puVar2 = (int32_t *)((longlong)param_1 + (ulonglong)uVar5 + 0x10);
  uVar3 = param_2;
  if (99 < param_2) {
    do {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = param_2;
      lVar4 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar1,8);
      uVar3 = (param_2 - lVar4 >> 1) + lVar4 >> 6;
      lVar4 = (param_2 + uVar3 * -100 & 0xffffffff) * 2;
      puVar2[-1] = "0010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                   [lVar4];
      puVar2 = puVar2 + -2;
      *puVar2 = (&DAT_1801d7ea0)[lVar4];
      param_2 = uVar3;
    } while (99 < uVar3);
  }
  if (uVar3 < 10) {
    puVar2[-1] = (char)uVar3 + '0';
  }
  else {
    lVar4 = (uVar3 & 0xffffffff) * 2;
    puVar2[-1] = "0010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                 [lVar4];
    puVar2[-2] = (&DAT_1801d7ea0)[lVar4];
  }
                    
                    
  (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,param_1 + 2,(ulonglong)uVar5);
  return;
}

