#include "FUN_1800c8770.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800c8770(longlong *param_1,longlong *param_2) {
longlong lVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  longlong *plVar6;
  bool bVar7;
  char *local_res8;
  char *local_res10;
  int32_t local_28 [2];
  
  (**(code **)(*param_1 + 8))(param_1,&DAT_1801cc1d0,&local_res10);
  (**(code **)(*param_2 + 8))(param_2,&DAT_1801cc1d0,&local_res8);
  if (((*(longlong *)(local_res10 + 0x20) == 0) || (*(longlong *)(local_res8 + 0x20) != 0)) ||
     (*(longlong *)(local_res8 + 0x38) != 0)) {
    bVar7 = *local_res10 == '\0';
    if (!bVar7) {
      AcquireSRWLockShared((PSRWLOCK)&DAT_1801ee948);
    }
    FUN_1800c75a0((longlong)local_res10,(longlong)local_res8);
  }
  else {
    uVar2 = *(int32_t *)(local_res8 + 8);
    uVar3 = *(int32_t *)(local_res8 + 0xc);
    uVar4 = *(int32_t *)(local_res8 + 0x10);
    *(int32_t *)(local_res10 + 4) = *(int32_t *)(local_res8 + 4);
    *(int32_t *)(local_res10 + 8) = uVar2;
    *(int32_t *)(local_res10 + 0xc) = uVar3;
    *(int32_t *)(local_res10 + 0x10) = uVar4;
    *(int32_t *)(local_res10 + 0x14) = *(int32_t *)(local_res8 + 0x14);
    (**(code **)(*param_1 + 8))(param_1,&DAT_1801cc1d0,&local_res8);
    if (*(longlong *)(local_res8 + 0x20) == 0) {
      return;
    }
    bVar7 = *local_res8 == '\0';
    if (!bVar7) {
      AcquireSRWLockShared((PSRWLOCK)&DAT_1801ee948);
    }
    plVar6 = FUN_1800ca300((float *)(local_res8 + 0x28),local_28,(ulonglong *)(local_res8 + 0x20));
    lVar1 = *plVar6;
    *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
    *(int *)(lVar1 + 0x20) = *(int *)(lVar1 + 0x20) + 1;
    *(int *)(lVar1 + 0x40) = *(int *)(lVar1 + 0x40) + 1;
    *(int *)(lVar1 + 0x44) = *(int *)(lVar1 + 0x44) + 1;
    uVar5 = *(int32_t *)(local_res8 + 0xc);
    *(int32_t *)(lVar1 + 0x48) = *(int32_t *)(local_res8 + 4);
    *(int32_t *)(lVar1 + 0x50) = uVar5;
    *(int32_t *)(lVar1 + 0x58) = *(int32_t *)(local_res8 + 0x14);
  }
  if (!bVar7) {
    ReleaseSRWLockShared((PSRWLOCK)&DAT_1801ee948);
  }
  return;
}
}

