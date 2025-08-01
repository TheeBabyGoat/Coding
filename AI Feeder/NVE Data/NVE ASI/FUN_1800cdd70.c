#include "FUN_1800cdd70.h"
#include <stdint.h>
#include <stddef.h>

int32_t * FUN_1800cdd70(int32_t *param_1,longlong *param_2) {
longlong *plVar1;
  bool bVar2;
  
  *param_1 = param_2;
  plVar1 = *(longlong **)((longlong)*(int *)(*param_2 + 4) + 0x48 + (longlong)param_2);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (*(int *)((longlong)*(int *)(*param_2 + 4) + 0x10 + (longlong)param_2) == 0) {
    plVar1 = *(longlong **)((longlong)*(int *)(*param_2 + 4) + 0x50 + (longlong)param_2);
    if ((plVar1 == (longlong *)0x0) || (plVar1 == param_2)) {
      bVar2 = true;
    }
    else {
      FUN_1800ce000(plVar1);
      bVar2 = *(int *)((longlong)*(int *)(*param_2 + 4) + 0x10 + (longlong)param_2) == 0;
    }
  }
  else {
    bVar2 = false;
  }
  *(bool *)(param_1 + 1) = bVar2;
  return param_1;
}
}

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
}

