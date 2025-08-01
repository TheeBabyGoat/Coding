#include "FUN_1800adf10.h"
#include <stdint.h>
#include <stddef.h>

int32_t FUN_1800adf10(uint param_1,uint param_2) {
char cVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  byte bVar18;
  byte bVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  uint uVar23;
  bool bVar24;
  
  iVar14 = -0x97;
  if (param_2 != 0) {
    iVar14 = param_2 - 0x98;
  }
  uVar10 = param_1;
  if (param_2 != 0) {
    uVar10 = param_1 | 0x800000;
  }
  uVar7 = 0;
  iVar8 = 0;
  bVar19 = ~(byte)uVar10 & 1;
  uVar10 = uVar10 * 4;
  uVar20 = uVar10 + 2;
  uVar21 = 0;
  if ((param_1 != 0) || (uVar15 = uVar21, param_2 < 2)) {
    uVar15 = 1;
  }
  uVar12 = (ulonglong)uVar10;
  uVar9 = (uVar10 - uVar15) - 1;
  uVar23 = 0;
  bVar24 = false;
  bVar18 = 0;
  if (iVar14 < 0) {
    uVar5 = (uint)(iVar14 * -0xb2efb) >> 0x14;
    uVar4 = uVar5 + iVar14;
    uVar6 = *(ulonglong *)(&DAT_180182fa0 + (ulonglong)-uVar4 * 8);
    uVar16 = uVar6 >> 0x20;
    cVar1 = (char)uVar5;
    bVar3 = (cVar1 - (char)(uVar4 * -0x12934f >> 0x13)) + 0x1c;
    uVar11 = ((ulonglong)uVar20 * (uVar6 & 0xffffffff) >> 0x20) + uVar20 * uVar16 >> (bVar3 & 0x3f);
    uVar22 = uVar11 & 0xffffffff;
    uVar17 = uVar16 * uVar9 + ((uVar6 & 0xffffffff) * (ulonglong)uVar9 >> 0x20) >> (bVar3 & 0x3f);
    uVar12 = ((uVar6 & 0xffffffff) * uVar12 >> 0x20) + uVar16 * uVar12 >> (bVar3 & 0x3f);
    uVar21 = (uint)uVar11;
    if (uVar5 == 0) {
LAB_1800ae2ab:
      bVar24 = true;
      uVar23 = uVar15;
      if (bVar19 == 0) {
        uVar23 = uVar7;
        uVar21 = uVar21 - 1;
      }
      uVar22 = (ulonglong)uVar21;
      goto LAB_1800ae2cb;
    }
    if ((uVar21 - 1) / 10 <= (uint)((uVar17 & 0xffffffff) / 10)) {
      uVar6 = ((*(ulonglong *)(&DAT_180182fa0 + (ulonglong)(-uVar4 + 1) * 8) & 0xffffffff) *
               (ulonglong)uVar10 >> 0x20) +
              (*(ulonglong *)(&DAT_180182fa0 + (ulonglong)(-uVar4 + 1) * 8) >> 0x20) *
              (ulonglong)uVar10 >>
              ((cVar1 - (char)(uVar4 * -0x12934f + 0x12934f >> 0x13)) + 0x1bU & 0x3f);
      bVar18 = (char)uVar6 + (char)((uVar6 & 0xffffffff) / 10) * -10;
    }
    if (uVar5 < 2) goto LAB_1800ae2ab;
    if (0x1e < uVar5) goto LAB_1800ae2cb;
    bVar24 = (uVar10 & (1 << (cVar1 - 1U & 0x1f)) - 1U) == 0;
LAB_1800ae2d2:
    uVar10 = (uint)uVar12;
    uVar21 = (uint)uVar17;
    if (bVar24 != false) goto LAB_1800ae34d;
    uVar20 = (uint)((uVar17 & 0xffffffff) / 10);
    uVar15 = (uint)((uVar22 & 0xffffffff) / 10);
    if (uVar20 < uVar15) {
      do {
        uVar21 = uVar20;
        uVar7 = uVar7 + 1;
        uVar6 = (uVar12 & 0xffffffff) / 10;
        uVar10 = (uint)uVar6;
        bVar18 = (char)uVar12 + (char)uVar6 * -10;
        uVar15 = uVar15 / 10;
        uVar12 = uVar6;
        uVar20 = uVar21 / 10;
      } while (uVar21 / 10 < uVar15);
    }
    bVar24 = uVar10 == uVar21;
LAB_1800ae471:
    if (!bVar24) {
LAB_1800ae473:
      if (bVar18 < 5) goto LAB_1800ae47e;
    }
  }
  else {
    uVar4 = (uint)(iVar14 * 0x13441) >> 0x12;
    uVar11 = *(ulonglong *)(&DAT_180182ea0 + (ulonglong)uVar4 * 8) & 0xffffffff;
    uVar6 = *(ulonglong *)(&DAT_180182ea0 + (ulonglong)uVar4 * 8) >> 0x20;
    bVar3 = (char)uVar4 + ((char)(uVar4 * 0x12934f >> 0x13) - (char)iVar14) + '\x1b';
    uVar12 = (uVar11 * uVar12 >> 0x20) + uVar6 * uVar12 >> (bVar3 & 0x3f);
    uVar22 = (uVar20 * uVar11 >> 0x20) + uVar20 * uVar6 >> (bVar3 & 0x3f);
    uVar17 = (uVar11 * uVar9 >> 0x20) + uVar6 * uVar9 >> (bVar3 & 0x3f);
    if (uVar4 != 0) {
      if (((int)uVar22 - 1U) / 10 <= (uint)((uVar17 & 0xffffffff) / 10)) {
        uVar6 = ((*(ulonglong *)(&DAT_180182ea0 + (ulonglong)(uVar4 - 1) * 8) & 0xffffffff) *
                 (ulonglong)uVar10 >> 0x20) +
                (*(ulonglong *)(&DAT_180182ea0 + (ulonglong)(uVar4 - 1) * 8) >> 0x20) *
                (ulonglong)uVar10 >>
                ((char)uVar4 + '\x1a' + ((char)((uVar4 - 1) * 0x12934f >> 0x13) - (char)iVar14) &
                0x3fU);
        bVar18 = (char)uVar6 + (char)((uVar6 & 0xffffffff) / 10) * -10;
      }
      if (9 < uVar4) goto LAB_1800ae2cb;
    }
    uVar6 = (ulonglong)uVar10 / 5;
    uVar15 = uVar7;
    if (uVar10 == (int)uVar6 * 5) {
      do {
        uVar15 = uVar15 + 1;
        uVar11 = uVar6 / 5;
        iVar14 = (int)uVar6;
        uVar6 = uVar11;
      } while (iVar14 == (int)uVar11 * 5);
      bVar24 = uVar4 <= uVar15;
      goto LAB_1800ae2d2;
    }
    if (bVar19 == 0) {
      uVar6 = (ulonglong)uVar20 / 5;
      uVar10 = uVar7;
      if (uVar20 == (int)uVar6 * 5) {
        do {
          uVar21 = uVar10 + 1;
          uVar11 = uVar6 / 5;
          iVar14 = (int)uVar6;
          uVar6 = uVar11;
          uVar10 = uVar21;
        } while (iVar14 == (int)uVar11 * 5);
      }
      uVar22 = (ulonglong)((int)uVar22 - (uint)(uVar4 <= uVar21));
    }
    else {
      uVar6 = (ulonglong)uVar9 / 5;
      uVar10 = uVar7;
      if (uVar9 == (int)((ulonglong)uVar9 / 5) * 5) {
        do {
          uVar21 = uVar10 + 1;
          uVar11 = uVar6 / 5;
          iVar14 = (int)uVar6;
          uVar6 = uVar11;
          uVar10 = uVar21;
        } while (iVar14 == (int)uVar11 * 5);
      }
      uVar23 = (uint)(uVar4 <= uVar21);
    }
LAB_1800ae2cb:
    if ((char)uVar23 == '\0') goto LAB_1800ae2d2;
LAB_1800ae34d:
    bVar13 = SUB41(uVar23,0);
    uVar10 = (uint)((uVar17 & 0xffffffff) / 10);
    uVar21 = (uint)((uVar22 & 0xffffffff) / 10);
    uVar6 = uVar12;
    if (uVar10 < uVar21) {
      do {
        iVar14 = (int)uVar17;
        uVar17 = (ulonglong)uVar10;
        bVar13 = false;
        if (iVar14 == uVar10 * 10) {
          bVar13 = SUB41(uVar23,0);
        }
        uVar23 = (uint)bVar13;
        bVar2 = false;
        if (bVar18 == 0) {
          bVar2 = bVar24;
        }
        bVar24 = bVar2;
        uVar7 = uVar7 + 1;
        uVar12 = (uVar6 & 0xffffffff) / 10;
        bVar18 = (char)uVar6 + (char)uVar12 * -10;
        uVar10 = uVar10 / 10;
        uVar21 = uVar21 / 10;
        uVar6 = uVar12;
      } while (uVar10 < uVar21);
    }
    uVar21 = (uint)uVar17;
    if ((bVar13 != false) &&
       (uVar10 = (uint)((uVar17 & 0xffffffff) / 10), uVar6 = uVar12, uVar21 == uVar10 * 10)) {
      do {
        uVar21 = uVar10;
        uVar7 = uVar7 + 1;
        bVar24 = (bool)(bVar24 & bVar18 == 0);
        uVar12 = (uVar6 & 0xffffffff) / 10;
        bVar18 = (char)uVar6 + (char)uVar12 * -10;
        uVar6 = uVar12;
        uVar10 = uVar21 / 10;
      } while (uVar21 == (uVar21 / 10) * 10);
    }
    uVar10 = (uint)uVar12;
    if (((bVar24 != false) && (bVar18 == 5)) && ((uVar12 & 1) == 0)) {
      bVar18 = 4;
    }
    if (uVar10 != uVar21) goto LAB_1800ae473;
    if (bVar19 != 0) {
      bVar24 = bVar13 == false;
      goto LAB_1800ae471;
    }
  }
  iVar8 = 1;
LAB_1800ae47e:
  return CONCAT44(uVar7 + uVar4,iVar8 + uVar10);
}
}

