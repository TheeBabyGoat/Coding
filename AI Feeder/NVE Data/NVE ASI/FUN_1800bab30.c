#include "FUN_1800bab30.h"
#include <stdint.h>
#include <stddef.h>

int32_t * FUN_1800bab30(int32_t *param_1) {
__uint64 _Var1;
  __uint64 _Var2;
  int iVar3;
  __uint64 *p_Var4;
  int32_t uVar5;
  
  if (DAT_1801f3a38 != '\0') {
    nativeInit(0x1f400fef721170da);
    p_Var4 = nativeCall();
    _Var2 = p_Var4[1];
    _Var1 = p_Var4[2];
    *param_1 = (int)*p_Var4;
    param_1[1] = (int)_Var2;
    param_1[2] = (int)_Var1;
    return param_1;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x10
              ) < DAT_1801fb370) {
    FUN_180125398(&DAT_1801fb370);
    if (DAT_1801fb370 == -1) {
      iVar3 = FUN_18011ccf0();
      DAT_1801fb374 = iVar3 < 0xcba;
      _Init_thread_footer(&DAT_1801fb370);
    }
  }
  if (DAT_1801fb374 == '\0') {
    FUN_1800bacc0();
  }
  else {
    FUN_1800bad50();
  }
  uVar5 = FUN_18014fb00();
  *param_1 = (int)uVar5;
  uVar5 = FUN_18014df60();
  param_1[2] = 0;
  param_1[1] = (int)uVar5;
  return param_1;
}
}

 FUN_1800bab30(&local_a8);
    DAT_1801f3940 = local_a8;
    DAT_1801f3944 = local_a4;
    DAT_1801f3948 = local_a0;
    DAT_1801ee938 = FUN_18011c6f0(15000,45000);
    _DAT_1801f3938 = iVar1;
  }
  if (DAT_1801ee93c < (uint)(iVar1 - _DAT_1801f393c)) {
if (DAT_1801f3a38 == '\0') {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x10) < DAT_1801fb378) {
        FUN_180125398(&DAT_1801fb378);
        if (DAT_1801fb378 == -1) {
          iVar2 = FUN_18011ccf0();
          DAT_1801fb37c = iVar2 < 0xcba;
          _Init_thread_footer(&DAT_1801fb378);
        }
      }
      if (DAT_1801fb37c == '\0') {
        lVar4 = FUN_1800bacc0();
        DAT_1801f397c = *(float *)(lVar4 + 0x1af4);
      }
      else {
        lVar4 = FUN_1800bad50();
        DAT_1801f397c = *(float *)(lVar4 + 0xeb4);
      }
    }
    else {
      nativeInit(0xa8cf1cc0afcd3f12);
      pfVar3 = (float *)nativeCall();
      DAT_1801f397c = *pfVar3;
    }
    DAT_1801ee93c = FUN_18011c6f0(10000,40000);
    _DAT_1801f393c = iVar1;
  }
}

