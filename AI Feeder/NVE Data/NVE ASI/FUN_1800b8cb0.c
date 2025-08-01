#include "FUN_1800b8cb0.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800b8cb0(LPCWSTR param_1,longlong *param_2) {
uint uVar1;
  bool bVar2;
  int32_t auStack_58 [32];
  uint local_38;
  uint uStack_34;
  int32_t **ppuStack_30;
  uint local_28;
  int local_24;
  ulonglong local_18;
  
  local_18 = DAT_1801eb080 ^ (ulonglong)auStack_58;
  if (7 < *(ulonglong *)(param_1 + 0xc)) {
    param_1 = *(LPCWSTR *)param_1;
  }
  local_38 = FUN_18012368c(param_1,(ulonglong *)&local_38,3,0xffffffff);
  if (local_38 == 0) {
    if (((local_28 >> 10 & 1) != 0) && ((local_24 == -0x5ffffff4 || (local_24 == -0x5ffffffd)))) {
      *param_2 = (ulonglong)uStack_34 << 0x20;
      param_2[1] = (longlong)&PTR_vftable_1801ebd20;
      goto LAB_1800b8d84;
    }
    uVar1 = (local_28 & 0x10 | 0x20) >> 4;
  }
  else {
    if (local_38 < 0x41) {
      if (((local_38 != 0x40) && (local_38 != 2)) && (local_38 != 3)) {
        bVar2 = local_38 == 0x35;
LAB_1800b8d5d:
        if (!bVar2) {
          uVar1 = 0;
          goto LAB_1800b8d68;
        }
      }
    }
    else if (local_38 != 0x7b) {
      bVar2 = local_38 == 0x10b;
      goto LAB_1800b8d5d;
    }
    uVar1 = 1;
  }
LAB_1800b8d68:
  ppuStack_30 = &PTR_vftable_1801ebd20;
  *param_2 = CONCAT44(uStack_34,local_38);
  param_2[1] = (longlong)&PTR_vftable_1801ebd20;
  if (uVar1 == 0) {
    FUN_1801252c0(local_18 ^ (ulonglong)auStack_58);
    return;
  }
LAB_1800b8d84:
  ppuStack_30 = &PTR_vftable_1801ebd20;
  param_2[1] = (longlong)&PTR_vftable_1801ebd20;
  *(int32_t *)param_2 = 0;
  FUN_1801252c0(local_18 ^ (ulonglong)auStack_58);
  return;
}
}

