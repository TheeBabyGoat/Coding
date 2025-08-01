#include "FUN_1800b4050.h"
#include <stdint.h>
#include <stddef.h>

 FUN_1800b4050((longlong *)&local_128,(int32_t *)local_a8,(longlong)local_90,
                  (ulonglong)*(uint *)(param_1 + 8),10);
    pcVar15 = local_128;
    for (pcVar13 = local_a8; pcVar13 != pcVar15; pcVar13 = pcVar13 + 1) {
cVar3 = *pcVar13;
      if ((ulonglong)puVar12[3] < puVar12[2] + 1) {
        (**(code **)*puVar12)(puVar12);
      }
      *(char *)(puVar12[1] + puVar12[2]) = cVar3;
      puVar12[2] = puVar12[2] + 1;
    }
}

void FUN_1800b4050(longlong *param_1,int32_t *param_2,longlong param_3,ulonglong param_4,
                  uint param_5) {
ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong *puVar5;
  int32_t auStack_58 [63];
  int32_t local_19;
  ulonglong local_18 [2];
  
  local_18[0] = DAT_1801eb080 ^ (ulonglong)auStack_58;
  puVar5 = local_18;
  switch(param_5) {
  case 2:
    do {
      bVar2 = (byte)param_4;
      puVar5 = (ulonglong *)((longlong)puVar5 + -1);
      uVar3 = (uint)param_4 >> 1;
      param_4 = (ulonglong)uVar3;
      *(byte *)puVar5 = (bVar2 & 1) + 0x30;
    } while (uVar3 != 0);
    break;
  case 3:
  case 5:
  case 6:
  case 7:
  case 9:
    do {
      uVar1 = param_4 & 0xffffffff;
      param_4 = uVar1 / param_5;
      puVar5 = (ulonglong *)((longlong)puVar5 + -1);
      *(char *)puVar5 = (char)(uVar1 % (ulonglong)param_5) + '0';
    } while ((int)param_4 != 0);
    break;
  case 4:
    do {
      bVar2 = (byte)param_4;
      puVar5 = (ulonglong *)((longlong)puVar5 + -1);
      param_4 = param_4 >> 2 & 0x3fffffff;
      *(byte *)puVar5 = (bVar2 & 3) + 0x30;
    } while ((int)param_4 != 0);
    break;
  case 8:
    do {
      bVar2 = (byte)param_4;
      puVar5 = (ulonglong *)((longlong)puVar5 + -1);
      param_4 = param_4 >> 3 & 0x1fffffff;
      *(byte *)puVar5 = (bVar2 & 7) + 0x30;
    } while ((int)param_4 != 0);
    break;
  case 10:
    do {
      puVar5 = (ulonglong *)((longlong)puVar5 + -1);
      uVar1 = (param_4 & 0xffffffff) / 10;
      *(char *)puVar5 = (char)param_4 + (char)uVar1 * -10 + '0';
      param_4 = uVar1;
    } while ((int)uVar1 != 0);
    break;
  default:
    do {
      uVar1 = param_4 & 0xffffffff;
      param_4 = uVar1 / param_5;
      puVar5 = (ulonglong *)((longlong)puVar5 + -1);
      *(char *)puVar5 = "0123456789abcdefghijklmnopqrstuvwxyz0b"[uVar1 % (ulonglong)param_5];
    } while ((int)param_4 != 0);
    break;
  case 0x10:
    do {
      uVar3 = (uint)param_4;
      puVar5 = (ulonglong *)((longlong)puVar5 + -1);
      uVar4 = uVar3 >> 4;
      param_4 = (ulonglong)uVar4;
      *(char *)puVar5 = "0123456789abcdefghijklmnopqrstuvwxyz0b"[uVar3 & 0xf];
    } while (uVar4 != 0);
    break;
  case 0x20:
    do {
      uVar3 = (uint)param_4;
      puVar5 = (ulonglong *)((longlong)puVar5 + -1);
      uVar4 = uVar3 >> 5;
      param_4 = (ulonglong)uVar4;
      *(char *)puVar5 = "0123456789abcdefghijklmnopqrstuvwxyz0b"[uVar3 & 0x1f];
    } while (uVar4 != 0);
  }
  uVar1 = (longlong)local_18 - (longlong)puVar5;
  if (param_3 - (longlong)param_2 < (longlong)uVar1) {
    *param_1 = param_3;
    *(int32_t *)(param_1 + 1) = 0x84;
  }
  else {
    FUN_180150fd0(param_2,puVar5,uVar1);
    *(int32_t *)(param_1 + 1) = 0;
    *param_1 = (longlong)param_2 + uVar1;
  }
  FUN_1801252c0(local_18[0] ^ (ulonglong)auStack_58);
  return;
}
}

 FUN_1800b4050((longlong *)local_68,&local_48,(longlong)&local_40,uVar12,0x10);
      puVar8 = local_68[0];
      for (puVar14 = &local_48; puVar14 != puVar8; puVar14 = (int32_t *)((longlong)puVar14 + 1)) {
uVar4 = *(int32_t *)puVar14;
        if ((ulonglong)param_2[3] < param_2[2] + 1) {
          (**(code **)*param_2)(param_2);
        }
        *(int32_t *)(param_2[2] + param_2[1]) = uVar4;
        param_2[2] = param_2[2] + 1;
      }
}

