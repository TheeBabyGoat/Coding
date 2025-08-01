#include "FUN_1800c86e0.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800c86e0(longlong *param_1,longlong *param_2) {
longlong *plVar1;
  longlong local_res8;
  longlong local_res10;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x38))();
  if (param_2 != plVar1) {
    (**(code **)(*param_1 + 8))(param_1,&DAT_1801cc1d0,&local_res10);
    (**(code **)(*param_2 + 8))(param_2,&DAT_1801cc1d0,&local_res8);
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_1801ee948);
    FUN_1800c75a0(local_res10,local_res8);
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_1801ee948);
  }
  return;
}
}

