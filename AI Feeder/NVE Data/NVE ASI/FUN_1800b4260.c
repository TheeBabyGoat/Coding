#include "FUN_1800b4260.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800b4260(longlong *param_1,int32_t *param_2,longlong param_3,ulonglong param_4,
                  int param_5) {
char cVar1;
  byte bVar2;
  byte bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong *puVar7;
  int32_t auStack_38 [39];
  int32_t local_11;
  ulonglong local_10;
  
  local_10 = DAT_1801eb080 ^ (ulonglong)auStack_38;
  uVar4 = param_4 & 0xff;
  puVar7 = &local_10;
  switch(param_5) {
  case 2:
    do {
      bVar2 = (byte)uVar4;
      puVar7 = (ulonglong *)((longlong)puVar7 + -1);
      bVar3 = bVar2 >> 1;
      uVar4 = (ulonglong)bVar3;
      *(byte *)puVar7 = (bVar2 & 1) + 0x30;
    } while (bVar3 != 0);
    break;
  case 3:
  case 5:
  case 6:
  case 7:
  case 9:
    do {
      uVar5 = uVar4 & 0xff;
      puVar7 = (ulonglong *)((longlong)puVar7 + -1);
      uVar4 = (longlong)uVar5 / (longlong)param_5 & 0xffffffff;
      *(char *)puVar7 = (char)((longlong)uVar5 % (longlong)param_5) + '0';
    } while ((char)uVar4 != '\0');
    break;
  case 4:
    do {
      bVar2 = (byte)uVar4;
      puVar7 = (ulonglong *)((longlong)puVar7 + -1);
      bVar3 = bVar2 >> 2;
      uVar4 = (ulonglong)bVar3;
      *(byte *)puVar7 = (bVar2 & 3) + 0x30;
    } while (bVar3 != 0);
    break;
  case 8:
    do {
      bVar2 = (byte)uVar4;
      puVar7 = (ulonglong *)((longlong)puVar7 + -1);
      bVar3 = bVar2 >> 3;
      uVar4 = (ulonglong)bVar3;
      *(byte *)puVar7 = (bVar2 & 7) + 0x30;
    } while (bVar3 != 0);
    break;
  case 10:
    do {
      puVar7 = (ulonglong *)((longlong)puVar7 + -1);
      cVar1 = (char)(uVar4 / 10);
      *(char *)puVar7 = (char)uVar4 + cVar1 * -10 + '0';
      uVar4 = uVar4 / 10;
    } while (cVar1 != '\0');
    break;
  default:
    do {
      uVar5 = uVar4 & 0xff;
      puVar7 = (ulonglong *)((longlong)puVar7 + -1);
      uVar4 = (longlong)uVar5 / (longlong)param_5 & 0xffffffff;
      *(char *)puVar7 =
           "0123456789abcdefghijklmnopqrstuvwxyz0b"[(int)((longlong)uVar5 % (longlong)param_5)];
    } while ((char)uVar4 != '\0');
    break;
  case 0x10:
    do {
      puVar7 = (ulonglong *)((longlong)puVar7 + -1);
      uVar6 = (uint)uVar4;
      uVar4 = uVar4 >> 4;
      *(char *)puVar7 = "0123456789abcdefghijklmnopqrstuvwxyz0b"[uVar6 & 0xf];
    } while ((char)uVar4 != '\0');
    break;
  case 0x20:
    do {
      puVar7 = (ulonglong *)((longlong)puVar7 + -1);
      uVar6 = (uint)uVar4;
      uVar4 = uVar4 >> 5;
      *(char *)puVar7 = "0123456789abcdefghijklmnopqrstuvwxyz0b"[uVar6 & 0x1f];
    } while ((char)uVar4 != '\0');
  }
  uVar4 = (longlong)&local_10 - (longlong)puVar7;
  if (param_3 - (longlong)param_2 < (longlong)uVar4) {
    *param_1 = param_3;
    *(int32_t *)(param_1 + 1) = 0x84;
  }
  else {
    FUN_180150fd0(param_2,puVar7,uVar4);
    *(int32_t *)(param_1 + 1) = 0;
    *param_1 = (longlong)param_2 + uVar4;
  }
  FUN_1801252c0(local_10 ^ (ulonglong)auStack_38);
  return;
}
}

 FUN_1800b4260((longlong *)local_58,&local_48,(longlong)&local_40,(ulonglong)*pbVar17,0x10);
        puVar8 = local_58[0];
        for (puVar14 = &local_48; puVar14 != puVar8; puVar14 = (int32_t *)((longlong)puVar14 + 1)) {
uVar4 = *(int32_t *)puVar14;
          if ((ulonglong)param_2[3] < param_2[2] + 1) {
            (**(code **)*param_2)(param_2);
          }
          *(int32_t *)(param_2[2] + param_2[1]) = uVar4;
          param_2[2] = param_2[2] + 1;
        }
}

