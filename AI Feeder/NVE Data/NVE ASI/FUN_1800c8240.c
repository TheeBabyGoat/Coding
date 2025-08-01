#include "FUN_1800c8240.h"
#include <stdint.h>
#include <stddef.h>

ulonglong FUN_1800c8240(longlong *param_1,int param_2,int param_3) {
char cVar1;
  longlong lVar2;
  int32_t uVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *extraout_RAX;
  char *local_res8;
  int32_t local_28 [2];
  
  plVar5 = (longlong *)(**(code **)(*param_1 + 8))(param_1,&DAT_1801cc1d0,&local_res8);
  if (*(longlong *)(local_res8 + 0x20) != 0) {
    if ((param_2 == 6) && (param_3 == 1)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    cVar1 = *local_res8;
    if (cVar1 != '\0') {
      AcquireSRWLockShared((PSRWLOCK)&DAT_1801ee948);
    }
    local_res8[0x68] = '\0';
    plVar5 = FUN_1800ca300((float *)(local_res8 + 0x28),local_28,(ulonglong *)(local_res8 + 0x20));
    lVar2 = *plVar5;
    *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + param_2 * param_3;
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    *(int *)(lVar2 + 0x3c) = *(int *)(lVar2 + 0x3c) + param_2 * param_3;
    *(int *)(lVar2 + 0x40) = *(int *)(lVar2 + 0x40) + 1;
    if (!bVar4) {
      uVar3 = *(int32_t *)(local_res8 + 0xc);
      *(int32_t *)(lVar2 + 0x48) = *(int32_t *)(local_res8 + 4);
      *(int32_t *)(lVar2 + 0x50) = uVar3;
      *(int32_t *)(lVar2 + 0x58) = *(int32_t *)(local_res8 + 0x14);
    }
    if (cVar1 != '\0') {
      ReleaseSRWLockShared((PSRWLOCK)&DAT_1801ee948);
      plVar5 = extraout_RAX;
    }
  }
  return (ulonglong)plVar5 & 0xffffffffffffff00;
}
}

