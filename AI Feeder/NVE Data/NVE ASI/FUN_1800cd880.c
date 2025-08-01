#include "FUN_1800cd880.h"
#include <stdint.h>
#include <stddef.h>

longlong * FUN_1800cd880(longlong *param_1,int32_t param_2,int32_t param_3) {
code *pcVar1;
  ulonglong uVar2;
  int32_t *puVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  char *pcVar7;
  uint uVar8;
  longlong *local_98;
  int32_t local_90;
  longlong local_88;
  longlong local_80;
  int32_t **local_70 [5];
  int32_t **local_48 [6];
  
  lVar6 = (longlong)*(int *)(*param_1 + 4);
  uVar8 = 4;
  uVar5 = 4;
  if (*(longlong *)(lVar6 + 0x48 + (longlong)param_1) != 0) {
    uVar5 = 0;
  }
  uVar5 = uVar5 | *(uint *)(lVar6 + 0x10 + (longlong)param_1) & 0x16;
  *(uint *)(lVar6 + 0x10 + (longlong)param_1) = uVar5;
  uVar5 = uVar5 & *(uint *)(lVar6 + 0x14 + (longlong)param_1);
  if (uVar5 == 0) {
    plVar4 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
    local_98 = param_1;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    uVar2 = FUN_1800ce210(param_1);
    local_90 = (int32_t)uVar2;
    uVar8 = 0;
    if (((*(byte *)((longlong)*(int *)(*param_1 + 4) + 0x10 + (longlong)param_1) & 6) == 0) &&
       (plVar4 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1),
       (**(code **)(*plVar4 + 0x50))(plVar4,&local_88,0,param_3,1), uVar8 = 0,
       local_80 + local_88 == -1)) {
      uVar8 = 2;
    }
    lVar6 = (longlong)*(int *)(*param_1 + 4);
    uVar5 = 4;
    if (*(longlong *)(lVar6 + 0x48 + (longlong)param_1) != 0) {
      uVar5 = 0;
    }
    uVar8 = uVar5 | *(uint *)(lVar6 + 0x10 + (longlong)param_1) & 0x17 | uVar8;
    *(uint *)(lVar6 + 0x10 + (longlong)param_1) = uVar8;
    uVar8 = uVar8 & *(uint *)(lVar6 + 0x14 + (longlong)param_1);
    if (uVar8 == 0) {
      plVar4 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))();
      }
      return param_1;
    }
  }
  else {
    if ((uVar5 & 4) == 0) {
      pcVar7 = "ios_base::failbit set";
      if ((uVar5 & 2) == 0) {
        pcVar7 = "ios_base::eofbit set";
      }
    }
    else {
      pcVar7 = "ios_base::badbit set";
    }
    puVar3 = (int32_t *)FUN_1800cf690((int32_t *)&local_98,1);
    FUN_1800cf520(local_70,(int32_t *)pcVar7,puVar3);
    FUN_1801279a8((longlong *)local_70,&DAT_1801e90c8);
  }
  if ((uVar8 & 4) == 0) {
    pcVar7 = "ios_base::failbit set";
    if ((uVar8 & 2) == 0) {
      pcVar7 = "ios_base::eofbit set";
    }
  }
  else {
    pcVar7 = "ios_base::badbit set";
  }
  puVar3 = (int32_t *)FUN_1800cf690((int32_t *)&local_88,1);
  FUN_1800cf520(local_48,(int32_t *)pcVar7,puVar3);
  FUN_1801279a8((longlong *)local_48,&DAT_1801e90c8);
  pcVar1 = (code *)swi(3);
  plVar4 = (longlong *)(*pcVar1)();
  return plVar4;
}
}

