#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_1800b4bf0 ----
void FUN_1800b4bf0(int32_t *param_1,int32_t *param_2,longlong *param_3,int *param_4,
                  byte param_5)

{
  code *pcVar1;
  ulonglong uVar2;
  int32_t ****ppppuVar3;
  longlong lVar4;
  int32_t auStackY_1d8 [32];
  int32_t in_stack_fffffffffffffe48;
  int32_t ***local_1a8;
  byte *pbStack_1a0;
  int local_198 [2];
  int32_t ***local_190;
  int32_t uStack_188;
  int32_t local_180;
  ulonglong local_178;
  int32_t **local_168;
  int32_t *local_160;
  ulonglong local_158;
  int32_t local_150;
  int32_t ***local_148;
  int32_t local_140 [33];
  ulonglong local_38;
  
  local_38 = DAT_1801eb080 ^ (ulonglong)auStackY_1d8;
  if ((param_4[1] < 0) && (*param_4 < 1)) {
    local_1a8 = (int32_t ***)*param_3;
    pbStack_1a0 = (byte *)param_3[1];
    FUN_1800b4480(param_1,param_2,&local_1a8,param_5);
  }
  else {
    uStack_188 = 0;
    local_180 = 0;
    local_178 = 0xf;
    local_190 = (int32_t ****)0x0;
    local_160 = local_140;
    local_158 = 0;
    local_150 = 0x100;
    local_168 = &PTR_FUN_1801835f0;
    local_148 = &local_190;
    local_1a8 = (int32_t ***)*param_3;
    pbStack_1a0 = (byte *)param_3[1];
    FUN_1800b4480((int32_t *)local_198,&local_168,&local_1a8,param_5);
    uVar2 = local_158;
    local_168 = &PTR_FUN_1801835f0;
    if (local_158 != 0) {
      local_158 = 0;
      if (local_148[3] < (int32_t ***)0x10) {
        lVar4 = (longlong)local_148[2] + (longlong)local_148;
        ppppuVar3 = (int32_t ****)local_148;
      }
      else {
        lVar4 = (longlong)*local_148 + (longlong)local_148[2];
        ppppuVar3 = (int32_t ****)*local_148;
      }
      FUN_1800b7500(local_148,lVar4 - (longlong)ppppuVar3,local_140,uVar2);
    }
    local_198[0] = param_4[1];
    local_1a8 = &local_190;
    if (0xf < local_178) {
      local_1a8 = local_190;
    }
    pbStack_1a0 = (byte *)local_180;
    pbStack_1a0 = FUN_1800b5110(&local_1a8,local_198);
    local_1a8 = &local_190;
    FUN_1800b4a30(param_1,param_2,local_198[0],param_4,in_stack_fffffffffffffe48,&local_1a8);
    if (0xf < local_178) {
      ppppuVar3 = (int32_t ****)local_190;
      if ((0xfff < local_178 + 1) &&
         (ppppuVar3 = (int32_t ****)local_190[-1],
         0x1f < (ulonglong)((longlong)local_190 + (-8 - (longlong)ppppuVar3)))) {
        FUN_18012b7b4();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      thunk_FUN_18012d5e8(ppppuVar3);
    }
  }
  FUN_1801252c0(local_38 ^ (ulonglong)auStackY_1d8);
  return;
}

// ---- Function: FUN_1800b4dd0 ----
longlong * FUN_1800b4dd0(longlong *param_1)

{
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

// ---- Function: FUN_1800b5110 ----
byte * FUN_1800b5110(int32_t *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  int32_t *puVar4;
  uint *puVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  ulonglong uVar10;
  longlong local_58 [2];
  byte *local_48;
  byte *local_40;
  longlong local_38;
  uint local_30 [2];
  int32_t local_28;
  
  local_48 = (byte *)*param_1;
  iVar1 = *param_2;
  pbVar9 = local_48 + param_1[1];
  local_38 = 0;
  local_30[0] = 0;
  local_40 = pbVar9;
  if (local_48 != pbVar9) {
    plVar3 = FUN_1800b7820(local_58,local_48,pbVar9,local_30);
    local_38 = *plVar3;
  }
  local_28 = 0;
  iVar8 = 0;
  iVar7 = 0;
  if (local_48 == local_40) {
LAB_1800b525f:
    *param_2 = iVar8;
    return local_48;
  }
  do {
    iVar8 = iVar7;
    if ((iVar8 == iVar1) && (-1 < iVar1)) goto LAB_1800b525f;
    if (local_30[0] < 0x25fd) {
      uVar2 = 1;
      puVar5 = &DAT_180184f70;
      do {
        if (local_30[0] < *puVar5) goto LAB_1800b5227;
        uVar2 = uVar2 ^ 3;
        puVar5 = puVar5 + 1;
      } while (puVar5 != (uint *)&DAT_180185298);
      uVar2 = 1;
    }
    else {
      puVar4 = &DAT_180184f70;
      uVar6 = 0xca;
      do {
        uVar10 = uVar6 >> 1;
        if ((uint)puVar4[uVar10] <= local_30[0]) {
          puVar4 = puVar4 + uVar10 + 1;
          uVar10 = uVar6 + (-1 - uVar10);
        }
        uVar6 = uVar10;
      } while (0 < (longlong)uVar10);
      uVar2 = ((uint)((longlong)(puVar4 + -0x600613dc) >> 2) & 1) + 1;
    }
LAB_1800b5227:
    if ((int)(0x7fffffff - uVar2) < iVar8) {
      if (iVar1 < 0) {
        *param_2 = 0x7fffffff;
        return pbVar9;
      }
      goto LAB_1800b525f;
    }
    iVar7 = iVar8 + uVar2;
    if (((iVar1 < iVar7) && (-1 < iVar1)) ||
       (FUN_1800b4dd0((longlong *)&local_48), iVar8 = iVar7, local_48 == local_40))
    goto LAB_1800b525f;
  } while( true );
}

// ---- Function: FUN_1800b52a0 ----
int32_t *
FUN_1800b52a0(int32_t *param_1,int32_t *param_2,int param_3,int *param_4,int32_t param_5,
             int32_t *param_6)

{
  int32_t *puVar1;
  int32_t uVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int32_t *puVar6;
  int iVar7;
  ulonglong uVar8;
  int32_t *puVar9;
  
  iVar3 = *param_4;
  cVar5 = *(char *)((longlong)param_4 + 9);
  if (*(char *)((longlong)param_4 + 9) == '\0') {
    cVar5 = '\x01';
  }
  iVar7 = 0;
  iVar4 = 0;
  if (param_3 < iVar3) {
    if (cVar5 == '\x01') {
      uVar8 = (ulonglong)*(byte *)((longlong)param_4 + 0xe);
      iVar7 = iVar3 - param_3;
      goto LAB_1800b536b;
    }
    if (cVar5 == '\x02') {
      iVar4 = iVar3 - param_3;
    }
    else {
      iVar4 = 0;
      if (cVar5 == '\x03') {
        iVar4 = (iVar3 - param_3) / 2;
        iVar7 = (iVar3 - iVar4) - param_3;
      }
    }
  }
  uVar8 = (ulonglong)*(byte *)((longlong)param_4 + 0xe);
  puVar1 = (int32_t *)((longlong)param_4 + 0xf);
  if (0 < iVar4) {
    puVar6 = puVar1;
    do {
      for (; puVar6 != puVar1 + uVar8; puVar6 = puVar6 + 1) {
        uVar2 = *puVar6;
        if ((ulonglong)param_2[3] < param_2[2] + 1) {
          (**(code **)*param_2)(param_2);
        }
        *(int32_t *)(param_2[1] + param_2[2]) = uVar2;
        param_2[2] = param_2[2] + 1;
      }
      iVar4 = iVar4 + -1;
      puVar6 = puVar1;
    } while (0 < iVar4);
  }
LAB_1800b536b:
  puVar9 = (int32_t *)((longlong)param_4 + 0xf);
  puVar1 = (int32_t *)param_6[2];
  for (puVar6 = (int32_t *)*param_6; puVar6 != puVar1; puVar6 = puVar6 + 1) {
    uVar2 = *puVar6;
    if ((ulonglong)param_2[3] < param_2[2] + 1) {
      (**(code **)*param_2)(param_2);
    }
    *(int32_t *)(param_2[1] + param_2[2]) = uVar2;
    param_2[2] = param_2[2] + 1;
  }
  if (0 < iVar7) {
    puVar1 = puVar9;
    do {
      for (; puVar1 != puVar9 + uVar8; puVar1 = puVar1 + 1) {
        uVar2 = *puVar1;
        if ((ulonglong)param_2[3] < param_2[2] + 1) {
          (**(code **)*param_2)(param_2);
        }
        *(int32_t *)(param_2[1] + param_2[2]) = uVar2;
        param_2[2] = param_2[2] + 1;
      }
      iVar7 = iVar7 + -1;
      puVar1 = puVar9;
    } while (0 < iVar7);
  }
  *param_1 = param_2;
  return param_1;
}

// ---- Function: FUN_1800b5450 ----
int32_t *
FUN_1800b5450(int32_t *param_1,int32_t *param_2,longlong *param_3,longlong *param_4)

{
  int32_t uVar1;
  int32_t *puVar2;
  int32_t *puVar3;
  int local_res20 [2];
  int32_t in_stack_ffffffffffffffa8;
  int32_t in_stack_ffffffffffffffa9;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  longlong lStack_30;
  byte *local_28;
  
  if ((char)param_4[1] == '?') {
    local_38 = *param_4;
    lStack_30 = param_4[1];
    local_28 = (byte *)CONCAT44(local_28._4_4_,(int)param_4[2]);
    local_48 = *param_3;
    lStack_40 = param_3[1];
    FUN_1800b4bf0(param_1,param_2,&local_48,(int *)&local_38,0x22);
    return param_1;
  }
  local_res20[0] = *(int *)((longlong)param_4 + 4);
  if ((local_res20[0] < 0) && ((int)*param_4 < 1)) {
    puVar3 = (int32_t *)*param_3;
    puVar2 = puVar3 + param_3[1];
    for (; puVar3 != puVar2; puVar3 = puVar3 + 1) {
      uVar1 = *puVar3;
      if ((ulonglong)param_2[3] < param_2[2] + 1) {
        (**(code **)*param_2)(param_2);
      }
      *(int32_t *)(param_2[2] + param_2[1]) = uVar1;
      param_2[2] = param_2[2] + 1;
    }
    *param_1 = param_2;
    return param_1;
  }
  local_48 = *param_3;
  lStack_40 = param_3[1];
  local_38 = local_48;
  lStack_30 = lStack_40;
  local_28 = FUN_1800b5110(&local_48,local_res20);
  FUN_1800b52a0(param_1,param_2,local_res20[0],(int *)param_4,
                CONCAT71(in_stack_ffffffffffffffa9,in_stack_ffffffffffffffa8),&local_38);
  return param_1;
}

// ---- Function: FUN_1800b5580 ----
int32_t *
FUN_1800b5580(int32_t *param_1,int32_t *param_2,ulonglong param_3,longlong *param_4,
             longlong param_5)

{
  char cVar1;
  int32_t local_58 [16];
  int32_t *local_48;
  longlong lStack_40;
  int32_t local_38;
  longlong local_28;
  longlong lStack_20;
  int32_t local_18;
  
  cVar1 = (char)param_4[1];
  local_58[0] = (int32_t)param_3;
  if ((cVar1 == '\0') || (cVar1 == 'c')) {
    if (cVar1 != '?') {
      local_48 = local_58;
      lStack_40 = 1;
      FUN_1800b5450(param_1,param_2,(longlong *)&local_48,param_4);
      return param_1;
    }
  }
  else if (cVar1 != '?') {
    local_38 = (int32_t)param_4[2];
    local_48 = (int32_t *)*param_4;
    lStack_40 = param_4[1];
    FUN_1800b3b10(param_1,param_2,param_3,(int *)&local_48,param_5);
    return param_1;
  }
  local_18 = (int32_t)param_4[2];
  local_28 = *param_4;
  lStack_20 = param_4[1];
  local_48 = local_58;
  lStack_40 = 1;
  FUN_1800b4bf0(param_1,param_2,(longlong *)&local_48,(int *)&local_28,0x27);
  return param_1;
}

// ---- Function: FUN_1800b5650 ----
void FUN_1800b5650(longlong *param_1,int32_t *param_2,int32_t *param_3,uint param_4,
                  uint param_5)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  int32_t *puVar4;
  ulonglong *puVar5;
  int32_t auStack_58 [63];
  int32_t local_19;
  ulonglong local_18 [2];
  
  local_18[0] = DAT_1801eb080 ^ (ulonglong)auStack_58;
  puVar4 = param_2;
  if ((int)param_4 < 0) {
    if (param_2 == param_3) {
      *param_1 = (longlong)param_3;
      *(int32_t *)(param_1 + 1) = 0x84;
      goto LAB_1800b581e;
    }
    puVar4 = (int32_t *)((longlong)param_2 + 1);
    *(int32_t *)param_2 = 0x2d;
    param_4 = -param_4;
  }
  puVar5 = local_18;
  switch(param_5) {
  case 2:
    do {
      puVar5 = (ulonglong *)((longlong)puVar5 + -1);
      bVar1 = (byte)param_4;
      param_4 = param_4 >> 1;
      *(byte *)puVar5 = (bVar1 & 1) + 0x30;
    } while (param_4 != 0);
    break;
  case 3:
  case 5:
  case 6:
  case 7:
  case 9:
    do {
      uVar2 = param_4 / param_5;
      puVar5 = (ulonglong *)((longlong)puVar5 + -1);
      *(char *)puVar5 = (char)(param_4 % param_5) + '0';
      param_4 = uVar2;
    } while (uVar2 != 0);
    break;
  case 4:
    do {
      puVar5 = (ulonglong *)((longlong)puVar5 + -1);
      *(byte *)puVar5 = ((byte)param_4 & 3) + 0x30;
      uVar2 = param_4 >> 2;
      param_4 = param_4 >> 2;
    } while (uVar2 != 0);
    break;
  case 8:
    do {
      puVar5 = (ulonglong *)((longlong)puVar5 + -1);
      *(byte *)puVar5 = ((byte)param_4 & 7) + 0x30;
      uVar2 = param_4 >> 3;
      param_4 = param_4 >> 3;
    } while (uVar2 != 0);
    break;
  case 10:
    do {
      puVar5 = (ulonglong *)((longlong)puVar5 + -1);
      *(char *)puVar5 = (char)param_4 + (char)((ulonglong)param_4 / 10) * -10 + '0';
      param_4 = (uint)((ulonglong)param_4 / 10);
    } while (param_4 != 0);
    break;
  default:
    do {
      uVar3 = (ulonglong)param_4;
      param_4 = param_4 / param_5;
      puVar5 = (ulonglong *)((longlong)puVar5 + -1);
      *(char *)puVar5 = "0123456789abcdefghijklmnopqrstuvwxyz0b"[uVar3 % (ulonglong)param_5];
    } while (param_4 != 0);
    break;
  case 0x10:
    do {
      puVar5 = (ulonglong *)((longlong)puVar5 + -1);
      *(char *)puVar5 = "0123456789abcdefghijklmnopqrstuvwxyz0b"[param_4 & 0xf];
      uVar2 = param_4 >> 4;
      param_4 = param_4 >> 4;
    } while (uVar2 != 0);
    break;
  case 0x20:
    do {
      puVar5 = (ulonglong *)((longlong)puVar5 + -1);
      *(char *)puVar5 = "0123456789abcdefghijklmnopqrstuvwxyz0b"[param_4 & 0x1f];
      uVar2 = param_4 >> 5;
      param_4 = param_4 >> 5;
    } while (uVar2 != 0);
  }
  uVar3 = (longlong)local_18 - (longlong)puVar5;
  if ((longlong)param_3 - (longlong)puVar4 < (longlong)uVar3) {
    *param_1 = (longlong)param_3;
    *(int32_t *)(param_1 + 1) = 0x84;
  }
  else {
    FUN_180150fd0(puVar4,puVar5,uVar3);
    *(int32_t *)(param_1 + 1) = 0;
    *param_1 = (longlong)puVar4 + uVar3;
  }
LAB_1800b581e:
  FUN_1801252c0(local_18[0] ^ (ulonglong)auStack_58);
  return;
}

// ---- Function: FUN_1800b5880 ----
int32_t *
FUN_1800b5880(int32_t *param_1,int32_t *param_2,longlong param_3,int32_t *param_4,
             char param_5,uint param_6,int32_t *param_7)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  ulonglong uVar9;
  char *pcVar10;
  
  iVar6 = 0;
  pcVar10 = (char *)*param_4;
  iVar4 = 0;
  pcVar3 = (char *)param_1;
  pcVar8 = pcVar10;
  if (0 < (int)param_6) {
    uVar9 = (ulonglong)param_6;
    pcVar3 = pcVar10;
    do {
      iVar4 = iVar4 + *pcVar3;
      pcVar8 = pcVar3 + 1;
      if (pcVar3 + 1 == pcVar10 + param_4[1]) {
        iVar6 = iVar6 + 1;
        pcVar8 = pcVar3;
      }
      pcVar3 = pcVar8;
      uVar9 = uVar9 - 1;
      pcVar8 = pcVar3;
    } while (uVar9 != 0);
  }
  pcVar10 = (char *)(param_3 - iVar4);
  if (param_2 != pcVar10) {
    do {
      cVar1 = *param_2;
      if ((ulonglong)param_7[3] < param_7[2] + 1) {
        (**(code **)*param_7)(param_7);
      }
      pcVar3 = (char *)param_7[2];
      param_2 = param_2 + 1;
      pcVar3[param_7[1]] = cVar1;
      param_7[2] = param_7[2] + 1;
    } while (param_2 != pcVar10);
  }
  if ((int)param_6 < 1) {
    *param_1 = param_7;
  }
  else {
    do {
      iVar4 = iVar6 + -1;
      if (iVar6 < 1) {
        pcVar8 = pcVar8 + -1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      if ((ulonglong)param_7[3] < param_7[2] + 1) {
        (**(code **)*param_7)(param_7);
      }
      pcVar3 = (char *)param_7[2];
      pcVar3[param_7[1]] = param_5;
      lVar5 = param_7[2] + 1;
      param_7[2] = lVar5;
      cVar1 = *pcVar8;
      for (pcVar7 = pcVar10; pcVar7 != pcVar10 + cVar1; pcVar7 = pcVar7 + 1) {
        cVar2 = *pcVar7;
        if ((ulonglong)param_7[3] < lVar5 + 1U) {
          (**(code **)*param_7)(param_7);
        }
        pcVar3 = (char *)param_7[2];
        pcVar3[param_7[1]] = cVar2;
        param_7[2] = param_7[2] + 1;
        lVar5 = param_7[2];
      }
      param_6 = param_6 - 1;
      pcVar10 = pcVar10 + *pcVar8;
    } while (0 < (int)param_6);
    *param_1 = param_7;
  }
  return (int32_t *)pcVar3;
}

// ---- Function: FUN_1800b5a30 ----
int32_t * FUN_1800b5a30(int32_t *param_1,uint param_2)

{
  *param_1 = std::numpunct<char>::vftable;
  FUN_18012d5e8((LPVOID)param_1[2]);
  FUN_18012d5e8((LPVOID)param_1[4]);
  FUN_18012d5e8((LPVOID)param_1[5]);
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_18012d5e8(param_1);
  }
  return param_1;
}

// ---- Function: FUN_1800b5a90 ----
int32_t FUN_1800b5a90(longlong param_1)

{
  return *(int32_t *)(param_1 + 0x18);
}

// ---- Function: FUN_1800b5aa0 ----
int32_t FUN_1800b5aa0(longlong param_1)

{
  return *(int32_t *)(param_1 + 0x19);
}

// ---- Function: FUN_1800b5ab0 ----
int32_t * FUN_1800b5ab0(longlong param_1,int32_t *param_2)

{
  int32_t *puVar1;
  ulonglong uVar2;
  
  puVar1 = *(int32_t **)(param_1 + 0x10);
  uVar2 = 0xffffffffffffffff;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  do {
    uVar2 = uVar2 + 1;
  } while (*(char *)((longlong)puVar1 + uVar2) != '\0');
  FUN_1800ba360(param_2,puVar1,uVar2);
  return param_2;
}

// ---- Function: FUN_1800b5af0 ----
int32_t * FUN_1800b5af0(longlong param_1,int32_t *param_2)

{
  int32_t *puVar1;
  ulonglong uVar2;
  
  puVar1 = *(int32_t **)(param_1 + 0x20);
  uVar2 = 0xffffffffffffffff;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  do {
    uVar2 = uVar2 + 1;
  } while (*(char *)((longlong)puVar1 + uVar2) != '\0');
  FUN_1800ba360(param_2,puVar1,uVar2);
  return param_2;
}

// ---- Function: FUN_1800b5b30 ----
int32_t * FUN_1800b5b30(longlong param_1,int32_t *param_2)

{
  int32_t *puVar1;
  ulonglong uVar2;
  
  puVar1 = *(int32_t **)(param_1 + 0x28);
  uVar2 = 0xffffffffffffffff;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  do {
    uVar2 = uVar2 + 1;
  } while (*(char *)((longlong)puVar1 + uVar2) != '\0');
  FUN_1800ba360(param_2,puVar1,uVar2);
  return param_2;
}

// ---- Function: FUN_1800b5b70 ----
void FUN_1800b5b70(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_18012d5e8(*(LPVOID *)(lVar1 + 0x10));
    FUN_18012d5e8(*(LPVOID *)(lVar1 + 0x20));
    FUN_18012d5e8(*(LPVOID *)(lVar1 + 0x28));
    return;
  }
  return;
}

// ---- Function: FUN_1800b5bb0 ----
void FUN_1800b5bb0(int32_t *param_1)

{
  if ((LPVOID)*param_1 != (LPVOID)0x0) {
    FUN_18012d5e8((LPVOID)*param_1);
  }
  *param_1 = 0;
  return;
}

// ---- Function: FUN_1800b5be0 ----
void FUN_1800b5be0(_Locinfo *param_1)

{
  std::_Locinfo::_Locinfo_dtor(param_1);
  if (*(LPVOID *)(param_1 + 0x58) != (LPVOID)0x0) {
    FUN_18012d5e8(*(LPVOID *)(param_1 + 0x58));
  }
  *(int32_t *)(param_1 + 0x58) = 0;
  if (*(LPVOID *)(param_1 + 0x48) != (LPVOID)0x0) {
    FUN_18012d5e8(*(LPVOID *)(param_1 + 0x48));
  }
  *(int32_t *)(param_1 + 0x48) = 0;
  if (*(LPVOID *)(param_1 + 0x38) != (LPVOID)0x0) {
    FUN_18012d5e8(*(LPVOID *)(param_1 + 0x38));
  }
  *(int32_t *)(param_1 + 0x38) = 0;
  if (*(LPVOID *)(param_1 + 0x28) != (LPVOID)0x0) {
    FUN_18012d5e8(*(LPVOID *)(param_1 + 0x28));
  }
  *(int32_t *)(param_1 + 0x28) = 0;
  if (*(LPVOID *)(param_1 + 0x18) != (LPVOID)0x0) {
    FUN_18012d5e8(*(LPVOID *)(param_1 + 0x18));
  }
  *(int32_t *)(param_1 + 0x18) = 0;
  if (*(LPVOID *)(param_1 + 8) != (LPVOID)0x0) {
    FUN_18012d5e8(*(LPVOID *)(param_1 + 8));
  }
  *(int32_t *)(param_1 + 8) = 0;
  std::_Lockit::~_Lockit((_Lockit *)param_1);
  return;
}

