#include "FUN_1800c8340.h"
#include <stdint.h>
#include <stddef.h>

ulonglong FUN_1800c8340(longlong *param_1,int param_2,int32_t param_3,int32_t param_4,
                       uint param_5) {
longlong lVar1;
  int32_t uVar2;
  ulonglong in_RAX;
  longlong *plVar3;
  ulonglong extraout_RAX;
  bool bVar4;
  char *local_38;
  int32_t *local_30;
  int32_t local_28;
  int32_t local_20 [3];
  
  if (param_2 != 3) {
    in_RAX = (**(code **)(*param_1 + 8))(param_1,&DAT_1801cc1d0,&local_38);
    if (*(longlong *)(local_38 + 0x20) != 0) {
      local_30 = &DAT_1801ee948;
      local_28 = 0;
      bVar4 = *local_38 != '\0';
      if (bVar4) {
        AcquireSRWLockShared((PSRWLOCK)&DAT_1801ee948);
      }
      local_28 = bVar4;
      plVar3 = FUN_1800ca300((float *)(local_38 + 0x28),local_20,(ulonglong *)(local_38 + 0x20));
      lVar1 = *plVar3;
      in_RAX = (ulonglong)param_5;
      *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + param_5;
      *(int *)(lVar1 + 0x20) = *(int *)(lVar1 + 0x20) + param_5;
      *(int *)(lVar1 + 0x40) = *(int *)(lVar1 + 0x40) + param_5;
      *(int *)(lVar1 + 0x44) = *(int *)(lVar1 + 0x44) + param_5;
      uVar2 = *(int32_t *)(local_38 + 0xc);
      *(int32_t *)(lVar1 + 0x48) = *(int32_t *)(local_38 + 4);
      *(int32_t *)(lVar1 + 0x50) = uVar2;
      *(int32_t *)(lVar1 + 0x58) = *(int32_t *)(local_38 + 0x14);
      if (bVar4) {
        ReleaseSRWLockShared((PSRWLOCK)&DAT_1801ee948);
        in_RAX = extraout_RAX;
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}
}

