#include "FUN_1800a97e0.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800a97e0(int32_t param_1,int32_t param_2,longlong *param_3) {
char cVar1;
  longlong *plVar2;
  LPVOID pvVar3;
  code *pcVar4;
  LPVOID pvVar5;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  do {
    if (cVar1 != '\0') {
      return;
    }
    FUN_1800a97e0(param_1,param_2,(longlong *)param_3[2]);
    plVar2 = (longlong *)*param_3;
    pvVar3 = (LPVOID)param_3[5];
    if (pvVar3 != (LPVOID)0x0) {
      pvVar5 = pvVar3;
      if ((0xfff < (ulonglong)(((param_3[7] - (longlong)pvVar3) / 0x18) * 0x18)) &&
         (pvVar5 = *(LPVOID *)((longlong)pvVar3 + -8),
         0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar5)))) {
        FUN_18012b7b4();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      thunk_FUN_18012d5e8(pvVar5);
      param_3[5] = 0;
      param_3[6] = 0;
      param_3[7] = 0;
    }
    thunk_FUN_18012d5e8(param_3);
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
    param_3 = plVar2;
  } while( true );
}
}

 FUN_1800a97e0(param_1,param_2,(longlong *)param_3[2]);
    plVar2 = (longlong *)*param_3;
    pvVar3 = (LPVOID)param_3[5];
    if (pvVar3 != (LPVOID)0x0) {
pvVar5 = pvVar3;
      if ((0xfff < (ulonglong)(((param_3[7] - (longlong)pvVar3) / 0x18) * 0x18)) &&
         (pvVar5 = *(LPVOID *)((longlong)pvVar3 + -8),
         0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar5)))) {
        FUN_18012b7b4();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      thunk_FUN_18012d5e8(pvVar5);
      param_3[5] = 0;
      param_3[6] = 0;
      param_3[7] = 0;
    }
}

