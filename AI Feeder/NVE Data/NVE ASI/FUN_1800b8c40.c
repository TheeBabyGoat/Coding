#include "FUN_1800b8c40.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800b8c40(int32_t *param_1,int32_t param_2,int32_t *param_3) {
code *pcVar1;
  int32_t *puVar2;
  int32_t local_d8;
  int32_t uStack_d0;
  int32_t local_c8 [4];
  int32_t local_b8 [4];
  int32_t **local_98 [18];
  
  puVar2 = (int32_t *)FUN_1800b94e0(local_c8,param_2);
  local_d8 = *puVar2;
  uStack_d0 = puVar2[1];
  FUN_1800ba470(local_b8,param_1);
  FUN_1800b9d70(local_98,local_b8,param_3,&local_d8);
  FUN_1801279a8((longlong *)local_98,&DAT_1801e8f98);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}
}

