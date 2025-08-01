#include "FUN_1800b7500.h"
#include <stdint.h>
#include <stddef.h>

 FUN_1800b7500(local_148,lVar4 - (longlong)ppppuVar3,local_140,uVar2);
    }
    local_198[0] = param_4[1];
    local_1a8 = &local_190;
    if (0xf < local_178) {
local_1a8 = local_190;
    }
}

int32_t * FUN_1800b7500(int32_t *param_1,ulonglong param_2,int32_t *param_3,ulonglong param_4) {
int32_t *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  int32_t *puVar4;
  ulonglong uVar5;
  
  uVar2 = param_1[2];
  if (uVar2 < param_2) {
    FUN_1800b7330();
    pcVar3 = (code *)swi(3);
    puVar4 = (int32_t *)(*pcVar3)();
    return puVar4;
  }
  if (param_1[3] - uVar2 < param_4) {
    puVar4 = FUN_1800b7350(param_1,param_4,uVar2,param_2,param_3,param_4);
    return puVar4;
  }
  param_1[2] = uVar2 + param_4;
  puVar4 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar4 = (int32_t *)*param_1;
  }
  puVar1 = (int32_t *)((longlong)puVar4 + param_2);
  uVar5 = param_4;
  if ((puVar1 < (int32_t *)((longlong)param_3 + param_4)) &&
     (param_3 <= (int32_t *)(uVar2 + (longlong)puVar4))) {
    if (param_3 < puVar1) {
      uVar5 = (longlong)puVar1 - (longlong)param_3;
    }
    else {
      uVar5 = 0;
    }
  }
  FUN_180150fd0((int32_t *)((longlong)puVar1 + param_4),puVar1,(uVar2 - param_2) + 1);
  FUN_180150fd0(puVar1,param_3,uVar5);
  FUN_180150fd0((int32_t *)(uVar5 + (longlong)puVar1),
                (int32_t *)((longlong)param_3 + param_4 + uVar5),param_4 - uVar5);
  return param_1;
}
}

