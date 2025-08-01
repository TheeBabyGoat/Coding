#include "FUN_1800cff20.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800cff20(int32_t *param_1) {
code *pcVar1;
  LPVOID pvVar2;
  int32_t auStack_c8 [32];
  int32_t local_a8;
  int32_t uStack_a0;
  longlong local_98 [3];
  int32_t uStack_80;
  longlong local_78 [3];
  int32_t uStack_60;
  LPVOID local_50;
  int32_t local_48;
  longlong lStack_40;
  int32_t local_38;
  HMODULE local_30;
  int32_t local_28;
  ulonglong local_18;
  
  local_18 = DAT_1801eb080 ^ (ulonglong)auStack_c8;
  local_30 = GetModuleHandleW((LPCWSTR)0x0);
  DAT_1801ee910 = local_30 + -0x50000000;
  local_98[1] = 0;
  local_98[2] = _DAT_1801d8f70;
  uStack_80 = _UNK_1801d8f78;
  local_98[0] = 0;
  local_78[1] = 0;
  local_78[2] = _DAT_1801d8f70;
  uStack_60 = _UNK_1801d8f78;
  local_78[0] = 0;
  local_50 = (LPVOID)0x0;
  local_48 = 0;
  lStack_40 = 0;
  local_38 = 0;
  local_28 = 0;
  local_a8 = *param_1;
  uStack_a0 = param_1[1];
  FUN_180117400(local_98,&local_a8);
  FUN_1801175d0(local_98,1);
  if (local_50 != (LPVOID)0x0) {
    pvVar2 = local_50;
    if ((0xfff < (lStack_40 - (longlong)local_50 & 0xfffffffffffffff8U)) &&
       (pvVar2 = *(LPVOID *)((longlong)local_50 + -8),
       0x1f < (ulonglong)((longlong)local_50 + (-8 - (longlong)pvVar2)))) {
      FUN_18012b7b4();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    thunk_FUN_18012d5e8(pvVar2);
    local_50 = (LPVOID)0x0;
    local_48 = 0;
    lStack_40 = 0;
  }
  FUN_1800a6800(local_78);
  FUN_1800a6800(local_98);
  FUN_1801252c0(local_18 ^ (ulonglong)auStack_c8);
  return;
}
}

