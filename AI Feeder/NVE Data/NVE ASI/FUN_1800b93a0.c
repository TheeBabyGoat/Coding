#include "FUN_1800b93a0.h"
#include <stdint.h>
#include <stddef.h>

int32_t * FUN_1800b93a0(int32_t param_1,int32_t *param_2,int param_3) {
char *pcVar1;
  ulonglong uVar2;
  
  pcVar1 = FUN_180123c58(param_3);
  uVar2 = 0xffffffffffffffff;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  do {
    uVar2 = uVar2 + 1;
  } while (pcVar1[uVar2] != '\0');
  FUN_1800ba360(param_2,(int32_t *)pcVar1,uVar2);
  return param_2;
}
}

