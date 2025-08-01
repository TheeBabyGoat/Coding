#include "FUN_1800b9200.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800b9200(int32_t **param_1,int32_t *param_2) {
int32_t *puVar1;
  int32_t *puVar2;
  int32_t auStack_68 [32];
  int32_t **local_48;
  int32_t local_40;
  int32_t **local_38 [3];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_1801eb080 ^ (ulonglong)auStack_68;
  local_48 = param_1;
  (**(code **)(*(longlong *)param_2[1] + 0x10))
            ((longlong *)param_2[1],local_38,*(int32_t *)param_2);
  *param_1 = std::exception::vftable;
  local_40 = 1;
  local_48 = local_38;
  if (0xf < local_20) {
    local_48 = local_38[0];
  }
  param_1[1] = (int32_t *)0x0;
  param_1[2] = (int32_t *)0x0;
  __std_exception_copy((longlong *)&local_48,(longlong *)(param_1 + 1));
  *param_1 = std::runtime_error::vftable;
  FUN_1800a6800((longlong *)local_38);
  puVar1 = (int32_t *)*param_2;
  puVar2 = (int32_t *)param_2[1];
  *param_1 = std::system_error::vftable;
  param_1[3] = puVar1;
  param_1[4] = puVar2;
  FUN_1801252c0(local_18 ^ (ulonglong)auStack_68);
  return;
}
}

