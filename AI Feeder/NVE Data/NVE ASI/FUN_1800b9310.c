#include "FUN_1800b9310.h"
#include <stdint.h>
#include <stddef.h>

int32_t * FUN_1800b9310(int32_t param_1,int32_t *param_2,DWORD param_3) {
char *pcVar1;
  ulonglong uVar2;
  char *local_20;
  ulonglong local_18;
  
  local_20 = (char *)0x0;
  local_18 = FUN_180123ca4(param_3,(longlong *)&local_20);
  if ((local_20 == (char *)0x0) || (pcVar1 = local_20, uVar2 = local_18, local_18 == 0)) {
    pcVar1 = "unknown error";
    uVar2 = 0xd;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  FUN_1800ba360(param_2,(int32_t *)pcVar1,uVar2);
  LocalFree(local_20);
  return param_2;
}
}

