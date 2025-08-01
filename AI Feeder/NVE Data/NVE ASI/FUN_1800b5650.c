#include "FUN_1800b5650.h"
#include <stdint.h>
#include <stddef.h>

 FUN_1800b5650((longlong *)&local_128,(int32_t *)local_c0,(int32_t *)local_a8,
                  *(uint *)(param_1 + 8),10);
    pcVar15 = local_128;
    for (pcVar13 = local_c0; pcVar13 != pcVar15; pcVar13 = pcVar13 + 1) {
cVar3 = *pcVar13;
      if ((ulonglong)puVar12[3] < puVar12[2] + 1) {
        (**(code **)*puVar12)(puVar12);
      }
      *(char *)(puVar12[2] + puVar12[1]) = cVar3;
      puVar12[2] = puVar12[2] + 1;
    }
}

void FUN_1800b5650(longlong *param_1,int32_t *param_2,int32_t *param_3,uint param_4,
                  uint param_5) {
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
}

