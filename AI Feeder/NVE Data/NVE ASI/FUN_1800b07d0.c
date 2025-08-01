#include "FUN_1800b07d0.h"
#include <stdint.h>
#include <stddef.h>

longlong * FUN_1800b07d0(longlong *param_1,ulonglong param_2,uint param_3) {
int32_t auVar1 [16];
  int32_t auVar2 [16];
  int32_t auVar3 [16];
  int32_t auVar4 [16];
  int32_t auVar5 [16];
  int32_t auVar6 [16];
  int32_t auVar7 [16];
  int32_t auVar8 [16];
  int32_t auVar9 [16];
  int32_t auVar10 [16];
  int32_t auVar11 [16];
  int32_t auVar12 [16];
  int32_t auVar13 [16];
  int32_t auVar14 [16];
  int32_t auVar15 [16];
  int32_t auVar16 [16];
  int32_t auVar17 [16];
  int32_t auVar18 [16];
  int32_t auVar19 [16];
  int32_t auVar20 [16];
  int32_t auVar21 [16];
  int32_t auVar22 [16];
  int32_t auVar23 [16];
  int32_t auVar24 [16];
  int32_t auVar25 [16];
  int32_t auVar26 [16];
  int32_t auVar27 [16];
  bool bVar28;
  longlong lVar29;
  byte bVar30;
  uint uVar31;
  longlong lVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  bool bVar40;
  uint uVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  int iVar44;
  ulonglong uVar45;
  byte bVar46;
  byte bVar47;
  bool bVar48;
  
  iVar44 = -0x434;
  if (param_3 != 0) {
    iVar44 = param_3 - 0x435;
  }
  uVar36 = param_2;
  if (param_3 != 0) {
    uVar36 = param_2 | 0x10000000000000;
  }
  uVar39 = 0;
  bVar46 = ~(byte)uVar36 & 1;
  uVar36 = uVar36 * 4;
  if ((param_2 == 0) && (1 < param_3)) {
    bVar30 = 0;
    uVar34 = uVar39;
  }
  else {
    uVar34 = 1;
    bVar30 = 1;
  }
  uVar43 = 0;
  bVar48 = false;
  if (iVar44 < 0) {
    uVar41 = ((uint)(iVar44 * -0xb2efb) >> 0x14) - (uint)(iVar44 < -1);
    uVar31 = uVar41 + iVar44;
    uVar35 = *(ulonglong *)(&DAT_18015c038 + (longlong)(int)-uVar31 * 0x10);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar35;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar36 + 2;
    lVar29 = SUB168(auVar7 * auVar19,8);
    uVar45 = *(ulonglong *)(&DAT_18015c030 + (longlong)(int)-uVar31 * 0x10);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar45;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar36 + 2;
    uVar33 = SUB168(auVar8 * auVar20,8);
    uVar38 = SUB168(auVar7 * auVar19,0) + uVar33;
    if (uVar38 < uVar33) {
      lVar29 = lVar29 + 1;
    }
    bVar47 = ((char)uVar41 - (char)(uVar31 * -0x12934f >> 0x13)) + 0x38;
    uVar33 = uVar38 >> (bVar47 & 0x3f) | lVar29 << 0x40 - (bVar47 & 0x3f);
    uVar34 = (uVar36 - uVar34) - 1;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar35;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar34;
    lVar29 = SUB168(auVar9 * auVar21,8);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar45;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar34;
    uVar34 = SUB168(auVar10 * auVar22,8);
    uVar38 = SUB168(auVar9 * auVar21,0) + uVar34;
    if (uVar38 < uVar34) {
      lVar29 = lVar29 + 1;
    }
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar35;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar36;
    lVar32 = SUB168(auVar11 * auVar23,8);
    uVar34 = uVar38 >> (bVar47 & 0x3f) | lVar29 << 0x40 - (bVar47 & 0x3f);
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar45;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar36;
    uVar35 = SUB168(auVar12 * auVar24,8);
    uVar45 = SUB168(auVar11 * auVar23,0) + uVar35;
    if (uVar45 < uVar35) {
      lVar32 = lVar32 + 1;
    }
    uVar35 = uVar45 >> (bVar47 & 0x3f) | lVar32 << 0x40 - (bVar47 & 0x3f);
    if (uVar41 < 2) {
      bVar48 = true;
      if (bVar46 == 0) {
        uVar33 = uVar33 - 1;
      }
      uVar43 = (ulonglong)bVar30;
      if (bVar46 == 0) {
        uVar43 = uVar39;
      }
    }
    else if (uVar41 < 0x3f) {
      bVar48 = (uVar36 & (1L << ((char)uVar41 - 1U & 0x3f)) - 1U) == 0;
      goto LAB_1800b0b2c;
    }
LAB_1800b0b1e:
    uVar36 = uVar35;
    if ((char)uVar43 == '\0') goto LAB_1800b0b2c;
LAB_1800b0c5a:
    iVar44 = 0;
    bVar30 = 0;
    bVar40 = SUB81(uVar43,0);
    uVar33 = uVar33 / 10;
    uVar35 = uVar34 / 10;
    uVar45 = uVar36;
    uVar38 = uVar34;
    if (uVar34 / 10 < uVar33) {
      do {
        uVar34 = uVar35;
        uVar36 = uVar45 / 10;
        bVar40 = false;
        if ((int)uVar38 == (int)uVar34 * 10) {
          bVar40 = SUB81(uVar43,0);
        }
        uVar43 = (ulonglong)bVar40;
        bVar28 = false;
        if (bVar30 == 0) {
          bVar28 = bVar48;
        }
        bVar48 = bVar28;
        iVar44 = iVar44 + 1;
        bVar30 = (char)uVar45 + (char)uVar36 * -10;
        uVar33 = uVar33 / 10;
        uVar35 = uVar34 / 10;
        uVar45 = uVar36;
        uVar38 = uVar34;
      } while (uVar34 / 10 < uVar33);
    }
    if ((bVar40 != false) &&
       (uVar43 = uVar34 / 10, uVar35 = uVar36, (int)uVar34 == (int)(uVar34 / 10) * 10)) {
      do {
        uVar34 = uVar43;
        uVar36 = uVar35 / 10;
        iVar44 = iVar44 + 1;
        bVar48 = (bool)(bVar48 & bVar30 == 0);
        bVar30 = (char)uVar35 + (char)uVar36 * -10;
        uVar43 = uVar34 / 10;
        uVar35 = uVar36;
      } while ((int)uVar34 == (int)(uVar34 / 10) * 10);
    }
    if (((bVar48 != false) && (bVar30 == 5)) && ((uVar36 & 1) == 0)) {
      bVar30 = 4;
    }
    if (((uVar36 != uVar34) || ((bVar46 != 0 && (bVar40 != false)))) && (bVar30 < 5))
    goto LAB_1800b0d9b;
  }
  else {
    uVar45 = uVar36 + 2;
    uVar31 = ((uint)(iVar44 * 0x13441) >> 0x12) - (uint)(3 < iVar44);
    lVar29 = (ulonglong)uVar31 * 0x10;
    bVar30 = ((char)(uVar31 * 0x12934f >> 0x13) - (char)iVar44) + ':' + (char)uVar31;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = *(ulonglong *)(&DAT_18015adf8 + lVar29);
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar45;
    lVar32 = SUB168(auVar1 * auVar13,8);
    uVar35 = *(ulonglong *)(&DAT_18015adf0 + lVar29);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar35;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar45;
    uVar33 = SUB168(auVar2 * auVar14,8);
    uVar38 = SUB168(auVar1 * auVar13,0) + uVar33;
    if (uVar38 < uVar33) {
      lVar32 = lVar32 + 1;
    }
    uVar37 = (uVar36 - uVar34) - 1;
    uVar33 = uVar38 >> (bVar30 & 0x3f) | lVar32 << 0x40 - (bVar30 & 0x3f);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = *(ulonglong *)(&DAT_18015adf8 + lVar29);
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar37;
    lVar32 = SUB168(auVar3 * auVar15,8);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar35;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar37;
    uVar34 = SUB168(auVar4 * auVar16,8);
    uVar38 = SUB168(auVar3 * auVar15,0) + uVar34;
    if (uVar38 < uVar34) {
      lVar32 = lVar32 + 1;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = *(ulonglong *)(&DAT_18015adf8 + lVar29);
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar36;
    lVar29 = SUB168(auVar5 * auVar17,8);
    uVar34 = uVar38 >> (bVar30 & 0x3f) | lVar32 << 0x40 - (bVar30 & 0x3f);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar35;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar36;
    uVar35 = SUB168(auVar6 * auVar18,8);
    uVar38 = SUB168(auVar5 * auVar17,0) + uVar35;
    if (uVar38 < uVar35) {
      lVar29 = lVar29 + 1;
    }
    uVar35 = uVar38 >> (bVar30 & 0x3f) | lVar29 << 0x40 - (bVar30 & 0x3f);
    if (0x15 < uVar31) goto LAB_1800b0b1e;
    uVar38 = uVar36 / 5;
    uVar42 = uVar39;
    if ((int)uVar36 != (int)uVar38 * 5) {
      uVar41 = 0;
      if (bVar46 == 0) {
        uVar36 = uVar45 / 5;
        uVar38 = uVar39;
        if ((int)uVar45 == (int)(uVar45 / 5) * 5) {
          do {
            uVar41 = (int)uVar38 + 1;
            uVar38 = (ulonglong)uVar41;
            uVar45 = uVar36 / 5;
            iVar44 = (int)uVar36;
            uVar36 = uVar45;
          } while (iVar44 == (int)uVar45 * 5);
        }
        uVar33 = uVar33 - (uVar31 <= uVar41);
      }
      else {
        uVar36 = uVar37 / 5;
        uVar43 = uVar39;
        if ((int)uVar37 == (int)uVar36 * 5) {
          do {
            uVar41 = (int)uVar43 + 1;
            uVar45 = uVar36 / 5;
            iVar44 = (int)uVar36;
            uVar36 = uVar45;
            uVar43 = (ulonglong)uVar41;
          } while (iVar44 == (int)uVar45 * 5);
        }
        uVar43 = (ulonglong)(uVar31 <= uVar41);
      }
      goto LAB_1800b0b1e;
    }
    do {
      uVar41 = (int)uVar42 + 1;
      uVar36 = uVar38 / 5;
      iVar44 = (int)uVar38;
      uVar38 = uVar36;
      uVar42 = (ulonglong)uVar41;
    } while (iVar44 == (int)uVar36 * 5);
    bVar48 = uVar31 <= uVar41;
LAB_1800b0b2c:
    iVar44 = 0;
    uVar36 = uVar35;
    if (bVar48 != false) goto LAB_1800b0c5a;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar33;
    lVar29 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar25,8);
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar34;
    lVar32 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar26,8);
    uVar43 = (uVar33 - lVar29 >> 1) + lVar29 >> 6;
    uVar45 = (uVar34 - lVar32 >> 1) + lVar32 >> 6;
    bVar48 = false;
    if (uVar45 < uVar43) {
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar35;
      lVar29 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar27,8);
      iVar44 = 2;
      uVar36 = (uVar35 - lVar29 >> 1) + lVar29 >> 6;
      bVar48 = 0x31 < (uint)((int)uVar35 + (int)uVar36 * -100);
      uVar33 = uVar43;
      uVar34 = uVar45;
    }
    uVar33 = uVar33 / 10;
    uVar43 = uVar34 / 10;
    uVar35 = uVar36;
    if (uVar34 / 10 < uVar33) {
      do {
        uVar34 = uVar43;
        uVar36 = uVar35 / 10;
        bVar48 = 4 < (uint)((int)uVar35 + (int)uVar36 * -10);
        iVar44 = iVar44 + 1;
        uVar33 = uVar33 / 10;
        uVar43 = uVar34 / 10;
        uVar35 = uVar36;
      } while (uVar34 / 10 < uVar33);
    }
    if ((uVar36 != uVar34) && (!bVar48)) goto LAB_1800b0d9b;
  }
  uVar39 = 1;
LAB_1800b0d9b:
  *(uint *)(param_1 + 1) = uVar31 + iVar44;
  *param_1 = uVar39 + uVar36;
  return param_1;
}
}

