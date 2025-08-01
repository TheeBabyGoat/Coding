#include "FUN_1800c84c0.h"
#include <stdint.h>
#include <stddef.h>

ulonglong FUN_1800c84c0(longlong *param_1,int32_t param_2,float *param_3) {
longlong *in_RAX;
  longlong *plVar1;
  longlong *extraout_RAX;
  bool bVar2;
  char *local_res18 [2];
  ulonglong local_38;
  int32_t *local_30;
  int32_t local_28;
  int32_t local_20 [3];
  
  if (param_3 != (float *)0x0) {
    (**(code **)(*param_1 + 8))(param_1,&DAT_1801cc1d0,local_res18);
    plVar1 = (longlong *)(**(code **)(*param_1 + 0x18))(param_1);
    in_RAX = (longlong *)(**(code **)(*plVar1 + 0x68))(plVar1,&local_38,param_2);
    if (*param_3 != DAT_1801d8e38) {
      local_30 = &DAT_1801ee948;
      local_28 = 0;
      bVar2 = *local_res18[0] != '\0';
      if (bVar2) {
        AcquireSRWLockShared((PSRWLOCK)&DAT_1801ee948);
      }
      local_28 = bVar2;
      in_RAX = FUN_1800ca300((float *)(local_res18[0] + 0x28),local_20,&local_38);
      *(int32_t *)(*in_RAX + 0x79) = 1;
      if (bVar2) {
        ReleaseSRWLockShared((PSRWLOCK)&DAT_1801ee948);
        in_RAX = extraout_RAX;
      }
    }
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}
}

