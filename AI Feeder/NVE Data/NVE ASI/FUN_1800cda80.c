#include "FUN_1800cda80.h"
#include <stdint.h>
#include <stddef.h>

longlong * FUN_1800cda80(longlong *param_1,int32_t param_2,longlong param_3) {
code *pcVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  int32_t *puVar6;
  longlong *plVar7;
  char *pcVar8;
  int32_t local_58 [4];
  int32_t **local_48 [6];
  
  param_1[1] = 0;
  plVar7 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 8))();
  }
  uVar4 = FUN_1800ce210(param_1);
  uVar3 = 0;
  if (((char)uVar4 != '\0') && (uVar3 = 0, 0 < param_3)) {
    plVar7 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
    lVar5 = (**(code **)(*plVar7 + 0x40))(plVar7,param_2,param_3);
    param_1[1] = lVar5;
    uVar3 = 0;
    if (lVar5 != param_3) {
      uVar3 = 3;
    }
  }
  lVar5 = (longlong)*(int *)(*param_1 + 4);
  uVar2 = 4;
  if (*(longlong *)(lVar5 + 0x48 + (longlong)param_1) != 0) {
    uVar2 = 0;
  }
  uVar3 = uVar2 | uVar3 | *(uint *)(lVar5 + 0x10 + (longlong)param_1) & 0x17;
  *(uint *)(lVar5 + 0x10 + (longlong)param_1) = uVar3;
  uVar3 = uVar3 & *(uint *)(lVar5 + 0x14 + (longlong)param_1);
  if (uVar3 != 0) {
    if ((uVar3 & 4) == 0) {
      pcVar8 = "ios_base::failbit set";
      if ((uVar3 & 2) == 0) {
        pcVar8 = "ios_base::eofbit set";
      }
    }
    else {
      pcVar8 = "ios_base::badbit set";
    }
    puVar6 = (int32_t *)FUN_1800cf690(local_58,1);
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
  return param_1;
}
}

