#include "FUN_1800cf520.h"
#include <stdint.h>
#include <stddef.h>

 FUN_1800cf520(local_70,(int32_t *)pcVar7,puVar3);
    FUN_1801279a8((longlong *)local_70,&DAT_1801e90c8);
  }
  if ((uVar8 & 4) == 0) {
pcVar7 = "ios_base::failbit set";
    if ((uVar8 & 2) == 0) {
      pcVar7 = "ios_base::eofbit set";
    }
  }
}

 FUN_1800cf520(local_48,(int32_t *)pcVar8,puVar6);
    FUN_1801279a8((longlong *)local_48,&DAT_1801e90c8);
    pcVar1 = (code *)swi(3);
    plVar7 = (longlong *)(*pcVar1)();
    return plVar7;
  }
  plVar7 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
  if (plVar7 != (longlong *)0x0) {
(**(code **)(*plVar7 + 0x10))();
  }
}

 FUN_1800cf520(local_38,(int32_t *)pcVar8,puVar3);
        FUN_1801279a8((longlong *)local_38,&DAT_1801e90c8);
        pcVar1 = (code *)swi(3);
        plVar4 = (longlong *)(*pcVar1)();
        return plVar4;
      }
    }
    iVar2 = __uncaught_exceptions();
    if (iVar2 == 0) {
FUN_1800ce150(local_58);
    }
}

void FUN_1800cf520(int32_t ***param_1,int32_t *param_2,int32_t *param_3) {
code *pcVar1;
  int32_t ***pppuVar2;
  int32_t uVar3;
  LPVOID pvVar4;
  ulonglong uVar5;
  int32_t auStack_78 [32];
  int32_t ***local_58;
  int32_t uStack_50;
  LPVOID local_48;
  int32_t uStack_40;
  int32_t local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1801eb080 ^ (ulonglong)auStack_78;
  pppuVar2 = (int32_t ***)*param_3;
  uVar3 = param_3[1];
  local_48 = (LPVOID)0x0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  uVar5 = 0xffffffffffffffff;
  do {
    uVar5 = uVar5 + 1;
  } while (*(char *)((longlong)param_2 + uVar5) != '\0');
  local_58 = param_1;
  FUN_1800ba360(&local_48,param_2,uVar5);
  local_58 = pppuVar2;
  uStack_50 = uVar3;
  FUN_1800b8dc0(param_1,(ulonglong *)&local_58,&local_48);
  if (0xf < uStack_30) {
    pvVar4 = local_48;
    if ((0xfff < uStack_30 + 1) &&
       (pvVar4 = *(LPVOID *)((longlong)local_48 + -8),
       0x1f < (ulonglong)((longlong)local_48 + (-8 - (longlong)pvVar4)))) {
      FUN_18012b7b4();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    thunk_FUN_18012d5e8(pvVar4);
  }
  *param_1 = (int32_t **)std::ios_base::failure::vftable;
  FUN_1801252c0(local_28 ^ (ulonglong)auStack_78);
  return;
}
}

