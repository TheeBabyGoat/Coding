#include "FUN_1800ce210.h"
#include <stdint.h>
#include <stddef.h>

 FUN_1800ce210(param_1);
  if ((*(byte *)((longlong)*(int *)(*param_1 + 4) + 0x10 + (longlong)param_1) & 6) == 0) {
plVar1 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
    (**(code **)(*plVar1 + 0x50))(plVar1,param_2,0,1,1);
    plVar1 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
    }
  }
}

ulonglong FUN_1800ce210(longlong *param_1) {
int iVar1;
  longlong *plVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  int32_t *puVar6;
  ulonglong uVar7;
  char *pcVar8;
  int32_t local_48 [4];
  int32_t **local_38 [6];
  
  iVar1 = *(int *)(*param_1 + 4);
  uVar5 = *(uint *)((longlong)param_1 + (longlong)iVar1 + 0x10);
  if (uVar5 == 0) {
    plVar2 = *(longlong **)((longlong)param_1 + (longlong)iVar1 + 0x50);
    if (plVar2 != (longlong *)0x0) {
      FUN_1800ce000(plVar2);
    }
    return CONCAT71((int7)((ulonglong)*param_1 >> 8),
                    *(int *)((longlong)*(int *)(*param_1 + 4) + 0x10 + (longlong)param_1) == 0);
  }
  uVar4 = 4;
  if (*(longlong *)((longlong)param_1 + (longlong)iVar1 + 0x48) != 0) {
    uVar4 = 0;
  }
  uVar5 = uVar4 | uVar5 & 0x15 | 2;
  *(uint *)((longlong)param_1 + (longlong)iVar1 + 0x10) = uVar5;
  uVar5 = uVar5 & *(uint *)((longlong)param_1 + (longlong)iVar1 + 0x14);
  if (uVar5 == 0) {
    return (ulonglong)uVar5;
  }
  if ((uVar5 & 4) == 0) {
    pcVar8 = "ios_base::failbit set";
    if ((uVar5 & 2) == 0) {
      pcVar8 = "ios_base::eofbit set";
    }
  }
  else {
    pcVar8 = "ios_base::badbit set";
  }
  puVar6 = (int32_t *)FUN_1800cf690(local_48,1);
  FUN_1800cf520(local_38,(int32_t *)pcVar8,puVar6);
  FUN_1801279a8((longlong *)local_38,&DAT_1801e90c8);
  pcVar3 = (code *)swi(3);
  uVar7 = (*pcVar3)();
  return uVar7;
}
}

