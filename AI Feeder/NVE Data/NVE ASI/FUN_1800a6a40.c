#include "FUN_1800a6a40.h"
#include <stdint.h>
#include <stddef.h>

int32_t * FUN_1800a6a40(int32_t *param_1,longlong *param_2) {
code *pcVar1;
  int32_t *puVar2;
  int32_t *puVar3;
  int32_t *puVar4;
  ulonglong uVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar3 = (int32_t *)param_2[1];
  puVar4 = (int32_t *)*param_2;
  uVar5 = (longlong)puVar3 - (longlong)puVar4 >> 5;
  if (uVar5 != 0) {
    if (0x7ffffffffffffff < uVar5) {
      FUN_1800aa480();
      pcVar1 = (code *)swi(3);
      puVar3 = (int32_t *)(*pcVar1)();
      return puVar3;
    }
    puVar2 = (int32_t *)FUN_1800ba8c0(param_1,uVar5);
    *param_1 = puVar2;
    param_1[1] = puVar2;
    param_1[2] = puVar2 + uVar5 * 4;
    for (; puVar4 != puVar3; puVar4 = puVar4 + 4) {
      FUN_1800ba630(puVar2,puVar4);
      puVar2 = puVar2 + 4;
    }
    param_1[1] = puVar2;
  }
  return param_1;
}
}

