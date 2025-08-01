#include "FUN_1800b9d70.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800b9d70(int32_t ***param_1,int32_t *param_2,int32_t *param_3,int32_t *param_4) {
int32_t auStack_88 [32];
  int32_t **local_68;
  longlong lStack_60;
  int32_t ***local_58;
  longlong local_48 [3];
  int32_t uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1801eb080 ^ (ulonglong)auStack_88;
  local_68 = (int32_t **)*param_4;
  lStack_60 = param_4[1];
  local_58 = param_1;
  FUN_1800b8dc0(param_1,(ulonglong *)&local_68,param_2);
  *param_1 = (int32_t **)&PTR_FUN_1801879a0;
  FUN_1800b9f10(param_1 + 5,param_3);
  param_1[0xb] = (int32_t **)0x0;
  param_1[0xc] = (int32_t **)0x0;
  param_1[9] = (int32_t **)0x0;
  param_1[10] = (int32_t **)0x0;
  param_1[0xb] = (int32_t **)0x0;
  param_1[0xc] = (int32_t **)0x7;
  *(int32_t *)(param_1 + 9) = 0;
  local_48[1] = 0;
  local_48[2] = _DAT_1801d8f60;
  uStack_30 = _UNK_1801d8f68;
  local_48[0] = 0;
  local_68 = (int32_t **)"Unknown exception";
  if (param_1[1] != (int32_t **)0x0) {
    local_68 = param_1[1];
  }
  lStack_60 = -1;
  do {
    lStack_60 = lStack_60 + 1;
  } while (*(char *)((longlong)local_68 + lStack_60) != '\0');
  FUN_1800b9b10((longlong *)(param_1 + 0xd),&local_68,param_3,local_48);
  FUN_1800ba040(local_48);
  FUN_1801252c0(local_28 ^ (ulonglong)auStack_88);
  return;
}
}

