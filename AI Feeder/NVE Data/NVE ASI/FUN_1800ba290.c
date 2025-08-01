#include "FUN_1800ba290.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800ba290(int32_t param_1,int32_t *param_2,int32_t *param_3) {
code *pcVar1;
  int32_t local_c8;
  int32_t uStack_c0;
  int32_t local_b8 [4];
  int32_t **local_98 [18];
  
  local_c8 = *param_2;
  uStack_c0 = param_2[1];
  FUN_1800ba470(local_b8,(int32_t *)"exists");
  FUN_1800b9d70(local_98,local_b8,param_3,&local_c8);
  FUN_1801279a8((longlong *)local_98,&DAT_1801e8f98);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}
}

