#include "FUN_1800b93f0.h"
#include <stdint.h>
#include <stddef.h>

int * FUN_1800b93f0(int32_t param_1,int *param_2,int param_3) {
int iVar1;
  
  if (param_3 == 0) {
    *param_2 = 0;
    *(int32_t ***)(param_2 + 2) = &PTR_vftable_1801ebd10;
    return param_2;
  }
  iVar1 = FUN_180123c80(param_3);
  if (iVar1 == 0) {
    *param_2 = param_3;
    *(int32_t ***)(param_2 + 2) = &PTR_vftable_1801ebd20;
    return param_2;
  }
  *param_2 = iVar1;
  *(int32_t ***)(param_2 + 2) = &PTR_vftable_1801ebd10;
  return param_2;
}
}

