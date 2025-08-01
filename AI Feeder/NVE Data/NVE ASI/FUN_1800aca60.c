#include "FUN_1800aca60.h"
#include <stdint.h>
#include <stddef.h>

 FUN_1800aca60((longlong *)&local_128,(int32_t *)local_90,(int32_t *)local_78,
                  *(ulonglong *)(param_1 + 8),10);
    pcVar15 = local_128;
    for (pcVar13 = local_90; pcVar13 != pcVar15; pcVar13 = pcVar13 + 1) {
cVar3 = *pcVar13;
      if ((ulonglong)puVar12[3] < puVar12[2] + 1) {
        (**(code **)*puVar12)(puVar12);
      }
      *(char *)(puVar12[2] + puVar12[1]) = cVar3;
      puVar12[2] = puVar12[2] + 1;
    }
}

void FUN_1800aca60(longlong *param_1,int32_t *param_2,int32_t *param_3,ulonglong param_4,
                  int param_5) {
uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int32_t *puVar4;
  byte bVar5;
  ulonglong *puVar6;
  int32_t auStack_78 [95];
  int32_t local_19;
  ulonglong local_18 [2];
  
  local_18[0] = DAT_1801eb080 ^ (ulonglong)auStack_78;
  puVar4 = param_2;
  if ((longlong)param_4 < 0) {
    if (param_2 == param_3) {
      *param_1 = (longlong)param_3;
      *(int32_t *)(param_1 + 1) = 0x84;
      goto LAB_1800acc52;
    }
    puVar4 = (int32_t *)((longlong)param_2 + 1);
    *(int32_t *)param_2 = 0x2d;
    param_4 = -param_4;
  }
  uVar3 = (ulonglong)param_5;
  puVar6 = local_18;
  switch(param_5) {
  case 2:
    do {
      bVar5 = (byte)param_4;
      puVar6 = (ulonglong *)((longlong)puVar6 + -1);
      param_4 = param_4 >> 1;
      *(byte *)puVar6 = (bVar5 & 1) + 0x30;
    } while (param_4 != 0);
    break;
  case 3:
  case 5:
  case 6:
  case 7:
  case 9:
    do {
      uVar2 = param_4 / uVar3;
      puVar6 = (ulonglong *)((longlong)puVar6 + -1);
      *(char *)puVar6 = (char)(param_4 % uVar3) + '0';
      param_4 = uVar2;
    } while (uVar2 != 0);
    break;
  case 4:
    do {
      bVar5 = (byte)param_4;
      puVar6 = (ulonglong *)((longlong)puVar6 + -1);
      param_4 = param_4 >> 2;
      *(byte *)puVar6 = (bVar5 & 3) + 0x30;
    } while (param_4 != 0);
    break;
  case 8:
    do {
      bVar5 = (byte)param_4;
      puVar6 = (ulonglong *)((longlong)puVar6 + -1);
      param_4 = param_4 >> 3;
      *(byte *)puVar6 = (bVar5 & 7) + 0x30;
    } while (param_4 != 0);
    break;
  case 10:
    do {
      puVar6 = (ulonglong *)((longlong)puVar6 + -1);
      uVar3 = param_4 / 10;
      *(char *)puVar6 = (char)param_4 + (char)uVar3 * -10 + '0';
      param_4 = uVar3;
    } while (uVar3 != 0);
    break;
  default:
    do {
      uVar2 = param_4 / uVar3;
      puVar6 = (ulonglong *)((longlong)puVar6 + -1);
      *(char *)puVar6 = "0123456789abcdefghijklmnopqrstuvwxyz0b"[param_4 % uVar3];
      param_4 = uVar2;
    } while (uVar2 != 0);
    break;
  case 0x10:
    do {
      puVar6 = (ulonglong *)((longlong)puVar6 + -1);
      uVar1 = (uint)param_4;
      param_4 = param_4 >> 4;
      *(char *)puVar6 = "0123456789abcdefghijklmnopqrstuvwxyz0b"[uVar1 & 0xf];
    } while (param_4 != 0);
    break;
  case 0x20:
    do {
      puVar6 = (ulonglong *)((longlong)puVar6 + -1);
      uVar1 = (uint)param_4;
      param_4 = param_4 >> 5;
      *(char *)puVar6 = "0123456789abcdefghijklmnopqrstuvwxyz0b"[uVar1 & 0x1f];
    } while (param_4 != 0);
  }
  uVar3 = (longlong)local_18 - (longlong)puVar6;
  if ((longlong)param_3 - (longlong)puVar4 < (longlong)uVar3) {
    *param_1 = (longlong)param_3;
    *(int32_t *)(param_1 + 1) = 0x84;
  }
  else {
    FUN_180150fd0(puVar4,puVar6,uVar3);
    *(int32_t *)(param_1 + 1) = 0;
    *param_1 = (longlong)puVar4 + uVar3;
  }
LAB_1800acc52:
  FUN_1801252c0(local_18[0] ^ (ulonglong)auStack_78);
  return;
}
}

