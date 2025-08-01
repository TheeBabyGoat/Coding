#include "FUN_1800b20c0.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800b20c0(uint param_1,char *param_2) {
ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  longlong lVar5;
  
  if (param_1 == 0) {
    builtin_strncpy(param_2,"000000000",9);
    return;
  }
  lVar5 = 2;
  pcVar4 = param_2 + 5;
  do {
    uVar1 = (ulonglong)param_1;
    uVar3 = (uint)(uVar1 / 10000);
    uVar2 = param_1 + uVar3 * -10000;
    *(int32_t *)(pcVar4 + 2) =
         *(int32_t *)
          (
          "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
          + (uVar2 % 100) * 2);
    *(int32_t *)pcVar4 =
         *(int32_t *)
          (
          "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
          + (uVar2 / 100) * 2);
    lVar5 = lVar5 + -1;
    pcVar4 = pcVar4 + -4;
    param_1 = uVar3;
  } while (lVar5 != 0);
  *param_2 = (char)(uVar1 / 10000) + '0';
  return;
}
}

