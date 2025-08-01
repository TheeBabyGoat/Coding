#include "AcquireSRWLockExclusive.h"
#include <stdint.h>
#include <stddef.h>

void __stdcall AcquireSRWLockExclusive(PSRWLOCK SRWLock) {
AcquireSRWLockExclusive(SRWLock);
  return;
}
}

 AcquireSRWLockExclusive((PSRWLOCK)&DAT_1801ee948);
    lVar1 = *(longlong *)(local_res8 + 0x38);
    plVar2 = *(longlong **)(local_res8 + 0x28);
    uVar4 = param_2 >> 4 & *(ulonglong *)(local_res8 + 0x50);
    plVar6 = *(longlong **)(lVar1 + 8 + uVar4 * 0x10);
    if (plVar6 == plVar2) {
LAB_1800c81a1:
      plVar6 = (longlong *)0x0;
    }
}

 AcquireSRWLockExclusive((PSRWLOCK)&DAT_1801ee948);
  local_c0 = 1;
  FUN_1800c74c0(local_b8,1);
  puVar1 = (int32_t *)local_res10[2];
  plVar6 = local_88;
  for (puVar12 = (int32_t *)local_res10[1]; local_88 = plVar6, puVar12 != puVar1;
      puVar12 = puVar12 + 1) {
(**(code **)(*(longlong *)*puVar12 + 8))((longlong *)*puVar12,&DAT_1801cc1d0,local_d8);
    lVar3 = local_d8[0];
    FUN_1800c75a0((longlong)local_b8,local_d8[0]);
    *(int32_t *)(lVar3 + 0x6c) = 0;
    *(int32_t *)(lVar3 + 0x74) = 0;
    *(int32_t *)(lVar3 + 0x7c) = 0;
    *(int32_t *)(lVar3 + 0x84) = 0;
    *(int32_t *)(lVar3 + 0x8c) = 0x3f800000;
    FUN_1800c9a40(lVar3 + 0x28);
    plVar6 = local_88;
  }
}

 AcquireSRWLockExclusive((PSRWLOCK)&DAT_1801ed680);
  do {
    if (*param_1 == 0) {
*param_1 = -1;
LAB_1801253fd:
                    
                    
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_1801ed680);
      return;
    }
}

