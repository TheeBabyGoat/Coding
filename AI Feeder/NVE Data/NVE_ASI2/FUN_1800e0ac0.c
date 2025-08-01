#include "FUN_1800e0ac0.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800e0ac0(void) {
LPCSTR **lpOutputString;
  int32_t auStack_88 [48];
  ulonglong local_58 [2];
  int32_t *local_48;
  int32_t local_40;
  LPCSTR *local_38 [3];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_1801eb080 ^ (ulonglong)auStack_88;
  if (DAT_1801ebe1c == 0) {
    DAT_1801f3b14 = 0;
    FUN_1801252c0(local_18 ^ (ulonglong)auStack_88);
    return;
  }
  if (DAT_1801ebe1c != 1) {
    if (DAT_1801ebe1c == 2) {
      DAT_1801f3b14 = 2;
    }
    local_58[0] = 0;
    local_58[1] = 0;
    local_48 = &DAT_1801d58cc;
    local_40 = 4;
    FUN_1800b7670((longlong *)local_38,(longlong *)&local_48,local_58);
    lpOutputString = local_38;
    if (0xf < local_20) {
      lpOutputString = (LPCSTR **)local_38[0];
    }
    OutputDebugStringA((LPCSTR)lpOutputString);
    FUN_1800a6800((longlong *)local_38);
    FUN_1801252c0(local_18 ^ (ulonglong)auStack_88);
    return;
  }
  DAT_1801f3b14 = 1;
  FUN_1801252c0(local_18 ^ (ulonglong)auStack_88);
  return;
}
}

