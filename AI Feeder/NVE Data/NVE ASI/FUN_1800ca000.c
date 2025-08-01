#include "FUN_1800ca000.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800ca000(longlong *param_1) {
LPVOID local_res8;
  
  (**(code **)(*param_1 + 8))(param_1,&DAT_1801cc1d0,&local_res8);
  if (local_res8 != (LPVOID)0x0) {
    FUN_1800c76d0((longlong)local_res8 + 0x28);
    thunk_FUN_18012d5e8(local_res8);
  }
  (**(code **)(*param_1 + 0x10))(param_1,&DAT_1801cc1d0,0);
  return;
}
}

