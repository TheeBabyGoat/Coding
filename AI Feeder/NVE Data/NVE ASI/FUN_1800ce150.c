#include "FUN_1800ce150.h"
#include <stdint.h>
#include <stddef.h>

 FUN_1800ce150((longlong *)*param_1);
  }
  plVar1 = *(longlong **)((longlong)*(int *)(*(longlong *)*param_1 + 4) + 0x48 + *param_1);
  if (plVar1 != (longlong *)0x0) {
(**(code **)(*plVar1 + 0x10))();
  }
}

 FUN_1800ce150(local_58);
    }
    plVar4 = *(longlong **)((longlong)*(int *)(*local_58 + 4) + 0x48 + (longlong)local_58);
    if (plVar4 != (longlong *)0x0) {
(**(code **)(*plVar4 + 0x10))();
    }
}

void FUN_1800ce150(longlong *param_1) {
code *pcVar1;
  int iVar2;
  uint uVar3;
  int32_t *puVar4;
  longlong lVar5;
  char *pcVar6;
  int32_t local_48 [4];
  int32_t **local_38 [6];
  
  lVar5 = (longlong)*(int *)(*param_1 + 4);
  if (((*(int *)(lVar5 + 0x10 + (longlong)param_1) == 0) &&
      ((*(byte *)(lVar5 + 0x18 + (longlong)param_1) & 2) != 0)) &&
     (iVar2 = (**(code **)(**(longlong **)(lVar5 + 0x48 + (longlong)param_1) + 0x68))(), iVar2 == -1
     )) {
    lVar5 = (longlong)*(int *)(*param_1 + 4);
    uVar3 = *(uint *)(lVar5 + 0x10 + (longlong)param_1) & 0x13 | 4;
    *(uint *)(lVar5 + 0x10 + (longlong)param_1) = uVar3;
    uVar3 = uVar3 & *(uint *)(lVar5 + 0x14 + (longlong)param_1);
    if (uVar3 != 0) {
      if ((uVar3 & 4) == 0) {
        pcVar6 = "ios_base::failbit set";
        if ((uVar3 & 2) == 0) {
          pcVar6 = "ios_base::eofbit set";
        }
      }
      else {
        pcVar6 = "ios_base::badbit set";
      }
      puVar4 = (int32_t *)FUN_1800cf690(local_48,1);
      FUN_1800cf520(local_38,(int32_t *)pcVar6,puVar4);
      FUN_1801279a8((longlong *)local_38,&DAT_1801e90c8);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}
}

