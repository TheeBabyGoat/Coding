#include "FUN_1800b18f0.h"
#include <stdint.h>
#include <stddef.h>

 FUN_1800b18f0((uint)uVar8,local_50[0],param_2);
    pcVar9 = param_2 + uVar8;
    lVar5 = (longlong)(iVar10 + -1);
    if (-1 < iVar10 + -1) {
do {
        FUN_1800b20c0(local_50[lVar5 + 4],pcVar9);
        pcVar9 = pcVar9 + 9;
        lVar5 = lVar5 + -1;
      } while (-1 < lVar5);
    }
}

void FUN_1800b18f0(uint param_1,uint param_2,char *param_3) {
longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = 0;
  uVar2 = (ulonglong)param_1;
  uVar5 = uVar4;
  uVar3 = param_2;
  if (9999 < param_2) {
    do {
      param_2 = uVar3 / 10000;
      uVar4 = (ulonglong)((int)uVar5 + 4);
      *(int32_t *)(param_3 + (uVar2 - uVar5) + -2) =
           *(int32_t *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
            + ((uVar3 % 10000) % 100) * 2);
      *(int32_t *)(param_3 + (uVar2 - uVar5) + -4) =
           *(int32_t *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
            + ((uVar3 % 10000) / 100) * 2);
      uVar5 = uVar4;
      uVar3 = param_2;
    } while (9999 < param_2);
  }
  uVar3 = param_2;
  if (99 < param_2) {
    uVar3 = param_2 / 100;
    lVar1 = uVar2 - uVar4;
    uVar4 = (ulonglong)((int)uVar4 + 2);
    *(int32_t *)(param_3 + lVar1 + -2) =
         *(int32_t *)
          (
          "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
          + (param_2 % 100) * 2);
  }
  if (9 < uVar3) {
    *(int32_t *)(param_3 + (uVar2 - uVar4) + -2) =
         *(int32_t *)
          (
          "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
          + uVar3 * 2);
    return;
  }
  *param_3 = (char)uVar3 + '0';
  return;
}
}

