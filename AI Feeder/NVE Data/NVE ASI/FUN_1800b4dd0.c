#include "FUN_1800b4dd0.h"
#include <stdint.h>
#include <stddef.h>

longlong * FUN_1800b4dd0(longlong *param_1) {
uint uVar1;
  byte *pbVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  byte bVar15;
  int32_t *puVar16;
  longlong lVar17;
  longlong local_38 [2];
  
  uVar12 = *(uint *)(param_1 + 3);
  puVar16 = &DAT_1801852a0;
  uVar8 = 0x55b;
  do {
    uVar9 = uVar8 >> 1;
    if (*(uint *)(puVar16 + uVar9 * 4) <= uVar12) {
      puVar16 = puVar16 + uVar9 * 4 + 4;
      uVar9 = uVar8 + (-1 - uVar9);
    }
    uVar8 = uVar9;
  } while (0 < (longlong)uVar9);
  lVar17 = (longlong)(puVar16 + -0x1801852a0) >> 2;
  if ((lVar17 == 0) ||
     ((*(ushort *)(&UNK_18018680a + lVar17 * 2) & 0xfff) + *(int *)(&UNK_18018529c + lVar17 * 4) <=
      uVar12)) {
    uVar11 = 0xff;
  }
  else {
    uVar11 = (uint)(*(ushort *)(&UNK_18018680a + lVar17 * 2) >> 0xc);
  }
  puVar16 = &DAT_1801872d0;
  uVar8 = 0x4e;
  do {
    uVar9 = uVar8 >> 1;
    if (*(uint *)(puVar16 + uVar9 * 4) <= uVar12) {
      puVar16 = puVar16 + uVar9 * 4 + 4;
      uVar9 = uVar8 + (-1 - uVar9);
    }
    uVar8 = uVar9;
  } while (0 < (longlong)uVar9);
  lVar17 = (longlong)(puVar16 + -0x1801872d0) >> 2;
  bVar5 = false;
  bVar13 = bVar5;
  if (lVar17 == 0) {
    bVar3 = true;
  }
  else {
    bVar3 = true;
    if (uVar12 < (uint)*(ushort *)(&UNK_180187406 + lVar17 * 2) +
                 *(int *)(&UNK_1801872cc + lVar17 * 4)) {
      bVar3 = bVar5;
    }
  }
LAB_1800b4ee0:
  uVar12 = uVar11;
  pbVar2 = (byte *)param_1[2];
  *param_1 = (longlong)pbVar2;
  if (pbVar2 != (byte *)param_1[1]) {
    plVar7 = FUN_1800b7820(local_38,pbVar2,(byte *)param_1[1],(uint *)(param_1 + 3));
    param_1[2] = *plVar7;
  }
  if (*param_1 == param_1[1]) {
    return param_1;
  }
  uVar1 = *(uint *)(param_1 + 3);
  puVar16 = &DAT_1801852a0;
  uVar8 = 0x55b;
  do {
    uVar9 = uVar8 >> 1;
    if (*(uint *)(puVar16 + uVar9 * 4) <= uVar1) {
      puVar16 = puVar16 + uVar9 * 4 + 4;
      uVar9 = uVar8 + (-1 - uVar9);
    }
    uVar8 = uVar9;
  } while (0 < (longlong)uVar9);
  lVar17 = (longlong)(puVar16 + -0x1801852a0) >> 2;
  if ((lVar17 == 0) ||
     ((*(ushort *)(&UNK_18018680a + lVar17 * 2) & 0xfff) + *(int *)(&UNK_18018529c + lVar17 * 4) <=
      uVar1)) {
    uVar11 = 0xff;
  }
  else {
    uVar11 = (uint)(*(ushort *)(&UNK_18018680a + lVar17 * 2) >> 0xc);
  }
  puVar16 = &DAT_1801872d0;
  uVar8 = 0x4e;
  do {
    uVar9 = uVar8 >> 1;
    if (*(uint *)(puVar16 + uVar9 * 4) <= uVar1) {
      puVar16 = puVar16 + uVar9 * 4 + 4;
      uVar9 = uVar8 + (-1 - uVar9);
    }
    uVar8 = uVar9;
  } while (0 < (longlong)uVar9);
  lVar17 = (longlong)(puVar16 + -0x1801872d0) >> 2;
  if (lVar17 == 0) {
    bVar4 = true;
  }
  else {
    bVar4 = true;
    if (uVar1 < (uint)*(ushort *)(&UNK_180187406 + lVar17 * 2) +
                *(int *)(&UNK_1801872cc + lVar17 * 4)) {
      bVar4 = bVar5;
    }
  }
  cVar10 = (char)uVar12;
  bVar15 = (byte)uVar11;
  if ((char)param_1[4] == '\0') {
    if (!bVar3) {
      *(int32_t *)(param_1 + 4) = 1;
    }
LAB_1800b502d:
    bVar6 = false;
    bVar13 = (bool)(bVar13 ^ 1);
    if (cVar10 != '\b') {
      bVar13 = bVar5;
    }
    if (cVar10 == '\0') {
      bVar3 = bVar4;
      if (bVar15 != 4) {
        return param_1;
      }
      goto LAB_1800b4ee0;
    }
    if (cVar10 == '\x01') {
      return param_1;
    }
    bVar14 = bVar13;
    if (cVar10 == '\x04') {
      return param_1;
    }
  }
  else {
    if ((char)param_1[4] != '\x01') goto LAB_1800b502d;
    bVar14 = bVar5;
    if (cVar10 == '\f') {
      *(int32_t *)(param_1 + 4) = 0;
      bVar6 = true;
    }
    else {
      bVar6 = false;
      if (cVar10 != '\x02') {
        *(int32_t *)(param_1 + 4) = 0;
        goto LAB_1800b502d;
      }
    }
  }
  if (((uVar11 & 0xfa) == 0) && (bVar15 != 5)) {
    return param_1;
  }
  bVar13 = bVar14;
  if (cVar10 == '\x03') {
    if ((bVar15 < 0xc) && (bVar3 = bVar4, (0x868U >> (uVar11 & 0x1f) & 1) != 0)) goto LAB_1800b4ee0;
  }
  else if ((((cVar10 == '\x05') || (cVar10 == '\v')) && (bVar3 = bVar4, (byte)(bVar15 - 10) < 2)) ||
          (((uVar12 - 6 & 0xfb) == 0 && (bVar3 = bVar4, bVar15 == 10)))) goto LAB_1800b4ee0;
  if ((((0xc < bVar15) || (bVar3 = bVar4, (0x1204U >> (uVar11 & 0x1f) & 1) == 0)) &&
      (bVar3 = bVar4, cVar10 != '\a')) && ((!bVar6 || (bVar4)))) {
    if (cVar10 != '\b') {
      return param_1;
    }
    if (bVar15 != 8) {
      return param_1;
    }
    if (!bVar14) {
      return param_1;
    }
  }
  goto LAB_1800b4ee0;
}
}

