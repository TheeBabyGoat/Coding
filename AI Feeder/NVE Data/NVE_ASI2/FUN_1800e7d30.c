#include "FUN_1800e7d30.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800e7d30(void) {
int32_t uVar1;
  longlong lVar2;
  code *pcVar3;
  longlong *plVar4;
  int32_t auStack_e8 [32];
  char *local_c8;
  int32_t local_c0;
  longlong local_b8 [3];
  int32_t uStack_a0;
  longlong local_98 [3];
  int32_t uStack_80;
  longlong *local_70;
  int32_t local_68;
  longlong lStack_60;
  int32_t local_58;
  HMODULE local_50;
  int32_t local_48;
  ulonglong local_38;
  
  local_38 = DAT_1801eb080 ^ (ulonglong)auStack_e8;
  if ((*DAT_1801f3b30 != 0) && (*(longlong *)(*DAT_1801f3b30 + 8) != 0)) {
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(int *)(lVar2 + 0x10) < DAT_1801fce34) &&
       (FUN_180125398(&DAT_1801fce34), DAT_1801fce34 == -1)) {
      local_50 = GetModuleHandleW((LPCWSTR)0x0);
      DAT_1801ee910 = local_50 + -0x50000000;
      local_b8[1] = 0;
      local_b8[2] = _DAT_1801d8f70;
      uStack_a0 = _UNK_1801d8f78;
      local_b8[0] = 0;
      local_98[1] = 0;
      local_98[2] = _DAT_1801d8f70;
      uStack_80 = _UNK_1801d8f78;
      local_98[0] = 0;
      local_70 = (longlong *)0x0;
      local_68 = 0;
      lStack_60 = 0;
      local_58 = 0;
      local_48 = 0;
      local_c8 = "40 38 78 08 75 03";
      local_c0 = 0x11;
      FUN_180117400(local_b8,&local_c8);
      FUN_1801175d0(local_b8,1);
      FUN_1801175d0(local_b8,1);
      uVar1 = *(int32_t *)(*local_70 + 0x19);
      if (local_70 != (longlong *)0x0) {
        plVar4 = local_70;
        if ((0xfff < (lStack_60 - (longlong)local_70 & 0xfffffffffffffff8U)) &&
           (plVar4 = (longlong *)local_70[-1],
           0x1f < (ulonglong)((longlong)local_70 + (-8 - (longlong)plVar4)))) goto LAB_1800e805a;
        thunk_FUN_18012d5e8(plVar4);
        local_70 = (longlong *)0x0;
        local_68 = 0;
        lStack_60 = 0;
      }
      FUN_1800a6800(local_98);
      FUN_1800a6800(local_b8);
      DAT_1801fce38 = uVar1;
      _Init_thread_footer(&DAT_1801fce34);
    }
    if ((*(int *)(lVar2 + 0x10) < DAT_1801fce3c) &&
       (FUN_180125398(&DAT_1801fce3c), DAT_1801fce3c == -1)) {
      local_50 = GetModuleHandleW((LPCWSTR)0x0);
      DAT_1801ee910 = local_50 + -0x50000000;
      local_b8[1] = 0;
      local_b8[2] = _DAT_1801d8f70;
      uStack_a0 = _UNK_1801d8f78;
      local_b8[0] = 0;
      local_98[1] = 0;
      local_98[2] = _DAT_1801d8f70;
      uStack_80 = _UNK_1801d8f78;
      local_98[0] = 0;
      local_70 = (longlong *)0x0;
      local_68 = 0;
      lStack_60 = 0;
      local_58 = 0;
      local_48 = 0;
      local_c8 = "73 1E F3 41 0F 59 86 ? ? ? ? F3 0F 59 C2 F3 0F 59 C7";
      local_c0 = 0x34;
      FUN_180117400(local_b8,&local_c8);
      FUN_1801175d0(local_b8,1);
      FUN_1801175d0(local_b8,1);
      uVar1 = *(int32_t *)(*local_70 + 7);
      if (local_70 != (longlong *)0x0) {
        plVar4 = local_70;
        if ((0xfff < (lStack_60 - (longlong)local_70 & 0xfffffffffffffff8U)) &&
           (plVar4 = (longlong *)local_70[-1],
           0x1f < (ulonglong)((longlong)local_70 + (-8 - (longlong)plVar4)))) {
          FUN_18012b7b4();
LAB_1800e805a:
          FUN_18012b7b4();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        thunk_FUN_18012d5e8(plVar4);
        local_70 = (longlong *)0x0;
        local_68 = 0;
        lStack_60 = 0;
      }
      FUN_1800a6800(local_98);
      FUN_1800a6800(local_b8);
      DAT_1801fce40 = uVar1;
      _Init_thread_footer(&DAT_1801fce3c);
    }
  }
  FUN_1801252c0(local_38 ^ (ulonglong)auStack_e8);
  return;
}
}

