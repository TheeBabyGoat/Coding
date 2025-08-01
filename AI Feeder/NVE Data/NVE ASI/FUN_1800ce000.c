#include "FUN_1800ce000.h"
#include <stdint.h>
#include <stddef.h>

longlong * FUN_1800ce000(longlong *param_1) {
code *pcVar1;
  int iVar2;
  int32_t *puVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  longlong *local_58;
  char local_50;
  int32_t local_48 [4];
  int32_t **local_38 [6];
  
  plVar4 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
  if (plVar4 != (longlong *)0x0) {
    FUN_1800cdd70(&local_58,param_1);
    if (local_50 != '\0') {
      iVar2 = (**(code **)(*plVar4 + 0x68))(plVar4);
      uVar6 = 4;
      uVar7 = 0;
      if (iVar2 == -1) {
        uVar7 = uVar6;
      }
      lVar5 = (longlong)*(int *)(*param_1 + 4);
      if (*(longlong *)(lVar5 + 0x48 + (longlong)param_1) != 0) {
        uVar6 = 0;
      }
      uVar7 = uVar6 | *(uint *)(lVar5 + 0x10 + (longlong)param_1) & 0x17 | uVar7;
      *(uint *)(lVar5 + 0x10 + (longlong)param_1) = uVar7;
      uVar7 = uVar7 & *(uint *)(lVar5 + 0x14 + (longlong)param_1);
      if (uVar7 != 0) {
        if ((uVar7 & 4) == 0) {
          pcVar8 = "ios_base::failbit set";
          if ((uVar7 & 2) == 0) {
            pcVar8 = "ios_base::eofbit set";
          }
        }
        else {
          pcVar8 = "ios_base::badbit set";
        }
        puVar3 = (int32_t *)FUN_1800cf690(local_48,1);
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
    plVar4 = *(longlong **)((longlong)*(int *)(*local_58 + 4) + 0x48 + (longlong)local_58);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  return param_1;
}
}

 FUN_1800ce000(plVar2);
    }
    return CONCAT71((int7)((ulonglong)*param_1 >> 8),
                    *(int *)((longlong)*(int *)(*param_1 + 4) + 0x10 + (longlong)param_1) == 0);
  }
  uVar4 = 4;
  if (*(longlong *)((longlong)param_1 + (longlong)iVar1 + 0x48) != 0) {
uVar4 = 0;
  }
}

