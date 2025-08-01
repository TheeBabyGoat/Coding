#include "FUN_1800b3370.h"
#include <stdint.h>
#include <stddef.h>

 FUN_1800b3370((longlong *)&local_128,(int32_t *)local_78,(longlong)local_60,
                  *(ulonglong *)(param_1 + 8),10);
    pcVar15 = local_128;
    for (pcVar13 = local_78; pcVar13 != pcVar15; pcVar13 = pcVar13 + 1) {
cVar3 = *pcVar13;
      if ((ulonglong)puVar12[3] < puVar12[2] + 1) {
        (**(code **)*puVar12)(puVar12);
      }
      *(char *)(puVar12[1] + puVar12[2]) = cVar3;
      puVar12[2] = puVar12[2] + 1;
    }
}

 FUN_1800b3370((longlong *)&local_128,(int32_t *)local_60,(longlong)local_48,
                  *(ulonglong *)(param_1 + 8),0x10);
    if ((ulonglong)puVar12[3] < puVar12[2] + 1) {
(**(code **)*puVar12)(puVar12);
    }
}

void FUN_1800b3370(longlong *param_1,int32_t *param_2,longlong param_3,ulonglong param_4,
                  int param_5) {
uint uVar1;
  ulonglong uVar2;
  byte bVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  int32_t auStack_78 [95];
  int32_t local_19;
  ulonglong local_18 [2];
  
  local_18[0] = DAT_1801eb080 ^ (ulonglong)auStack_78;
  uVar5 = (ulonglong)param_5;
  puVar4 = local_18;
  switch(param_5) {
  case 2:
    do {
      bVar3 = (byte)param_4;
      puVar4 = (ulonglong *)((longlong)puVar4 + -1);
      param_4 = param_4 >> 1;
      *(byte *)puVar4 = (bVar3 & 1) + 0x30;
    } while (param_4 != 0);
    break;
  case 3:
  case 5:
  case 6:
  case 7:
  case 9:
    do {
      uVar2 = param_4 / uVar5;
      puVar4 = (ulonglong *)((longlong)puVar4 + -1);
      *(char *)puVar4 = (char)(param_4 % uVar5) + '0';
      param_4 = uVar2;
    } while (uVar2 != 0);
    break;
  case 4:
    do {
      bVar3 = (byte)param_4;
      puVar4 = (ulonglong *)((longlong)puVar4 + -1);
      param_4 = param_4 >> 2;
      *(byte *)puVar4 = (bVar3 & 3) + 0x30;
    } while (param_4 != 0);
    break;
  case 8:
    do {
      bVar3 = (byte)param_4;
      puVar4 = (ulonglong *)((longlong)puVar4 + -1);
      param_4 = param_4 >> 3;
      *(byte *)puVar4 = (bVar3 & 7) + 0x30;
    } while (param_4 != 0);
    break;
  case 10:
    do {
      puVar4 = (ulonglong *)((longlong)puVar4 + -1);
      uVar5 = param_4 / 10;
      *(char *)puVar4 = (char)param_4 + (char)uVar5 * -10 + '0';
      param_4 = uVar5;
    } while (uVar5 != 0);
    break;
  default:
    do {
      uVar2 = param_4 / uVar5;
      puVar4 = (ulonglong *)((longlong)puVar4 + -1);
      *(char *)puVar4 = "0123456789abcdefghijklmnopqrstuvwxyz0b"[param_4 % uVar5];
      param_4 = uVar2;
    } while (uVar2 != 0);
    break;
  case 0x10:
    do {
      puVar4 = (ulonglong *)((longlong)puVar4 + -1);
      uVar1 = (uint)param_4;
      param_4 = param_4 >> 4;
      *(char *)puVar4 = "0123456789abcdefghijklmnopqrstuvwxyz0b"[uVar1 & 0xf];
    } while (param_4 != 0);
    break;
  case 0x20:
    do {
      puVar4 = (ulonglong *)((longlong)puVar4 + -1);
      uVar1 = (uint)param_4;
      param_4 = param_4 >> 5;
      *(char *)puVar4 = "0123456789abcdefghijklmnopqrstuvwxyz0b"[uVar1 & 0x1f];
    } while (param_4 != 0);
  }
  uVar5 = (longlong)local_18 - (longlong)puVar4;
  if (param_3 - (longlong)param_2 < (longlong)uVar5) {
    *param_1 = param_3;
    *(int32_t *)(param_1 + 1) = 0x84;
  }
  else {
    FUN_180150fd0(param_2,puVar4,uVar5);
    *(int32_t *)(param_1 + 1) = 0;
    *param_1 = (longlong)param_2 + uVar5;
  }
  FUN_1801252c0(local_18[0] ^ (ulonglong)auStack_78);
  return;
}
}

 FUN_1800b3370((longlong *)&local_58,(int32_t *)local_48,(longlong)local_38,param_3,0x10);
  local_98 = local_58;
  uStack_90 = uStack_50;
  local_a4 = 0x7830;
  local_a0[0] = ((int)local_58 - (int)local_48) + 2;
  if ((char)param_4[2] == 'P') {
local_a4 = 0x5830;
    for (pcVar5 = local_48; pcVar5 != local_58; pcVar5 = pcVar5 + 1) {
      cVar1 = *pcVar5;
      if (('`' < cVar1) && (cVar1 < '{')) {
        *pcVar5 = cVar1 + -0x20;
      }
    }
  }
  if ((*(char *)((longlong)param_4 + 0xd) == '\0') || (*(char *)((longlong)param_4 + 9) != '\0')) {
    local_88 = &local_a4;
    local_a8[0] = '\0';
    local_80 = local_a8;
    local_78 = local_a0;
    local_68 = local_48;
    local_60 = &local_98;
    local_70 = param_4;
    FUN_1800b3590(param_1,param_2,local_a0[0],param_4,CONCAT44(in_stack_ffffffffffffff4c,uVar8),
                  &local_88);
  }
  else {
    puVar6 = &local_a4;
    local_a8[0] = '\x01';
    do {
      uVar2 = *(int32_t *)puVar6;
      if ((ulonglong)param_2[3] < param_2[2] + 1) {
        (**(code **)*param_2)(param_2);
      }
      puVar6 = (int32_t *)((longlong)puVar6 + 1);
      *(int32_t *)(param_2[1] + param_2[2]) = uVar2;
      lVar3 = param_2[2] + 1;
      param_2[2] = lVar3;
    } while (puVar6 != &local_a2);
    if (((local_a8[0] != '\0') && (local_a0[0] < *param_4)) &&
       (iVar4 = *param_4 - local_a0[0], lVar7 = (longlong)iVar4, 0 < iVar4)) {
      do {
        if ((ulonglong)param_2[3] < lVar3 + 1U) {
          (**(code **)*param_2)(param_2);
        }
        lVar7 = lVar7 + -1;
        *(int32_t *)(param_2[1] + param_2[2]) = 0x30;
        param_2[2] = param_2[2] + 1;
        lVar3 = param_2[2];
      } while (0 < lVar7);
    }
    FUN_1800b6180(param_1,local_48,local_98,param_2);
  }
  FUN_1801252c0(local_38[0] ^ (ulonglong)auStackY_d8);
  return;
}
}

