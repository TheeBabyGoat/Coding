#include "FUN_1800e8b60.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800e8b60(void) {
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
}

