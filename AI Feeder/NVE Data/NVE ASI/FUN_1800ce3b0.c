#include "FUN_1800ce3b0.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800ce3b0(longlong param_1,int32_t param_2) {
longlong *plVar1;
  code *pcVar2;
  int32_t uVar3;
  uint uVar4;
  void *pvVar5;
  _Locimp *p_Var6;
  longlong *plVar7;
  int32_t *puVar8;
  char *pcVar9;
  int32_t local_48 [2];
  longlong *local_40;
  int32_t **local_38 [6];
  
  *(int32_t *)(param_1 + 0x40) = 0;
  *(int32_t *)(param_1 + 8) = 0;
  *(int32_t *)(param_1 + 0x14) = 0;
  *(int32_t *)(param_1 + 0x18) = 0x201;
  *(int32_t *)(param_1 + 0x20) = 6;
  *(int32_t *)(param_1 + 0x28) = 0;
  *(int32_t *)(param_1 + 0x30) = 0;
  *(int32_t *)(param_1 + 0x38) = 0;
  *(int32_t *)(param_1 + 0x10) = 0;
  pvVar5 = operator_new(0x10);
  p_Var6 = FUN_180124548('\x01');
  *(_Locimp **)((longlong)pvVar5 + 8) = p_Var6;
  *(void **)(param_1 + 0x40) = pvVar5;
  *(int32_t *)(param_1 + 0x48) = param_2;
  *(int32_t *)(param_1 + 0x50) = 0;
  plVar1 = *(longlong **)((longlong)pvVar5 + 8);
  local_40 = plVar1;
  (**(code **)(*plVar1 + 8))(plVar1);
  plVar7 = FUN_1800cf400((longlong)local_48);
  uVar3 = (**(code **)(*plVar7 + 0x40))(plVar7,CONCAT71((int7)((ulonglong)*plVar7 >> 8),0x20));
  puVar8 = (int32_t *)(**(code **)(*plVar1 + 0x10))(plVar1);
  if (puVar8 != (int32_t *)0x0) {
    (**(code **)*puVar8)(puVar8,1);
  }
  *(int32_t *)(param_1 + 0x58) = uVar3;
  if (*(longlong *)(param_1 + 0x48) == 0) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0x13;
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
    uVar4 = *(uint *)(param_1 + 0x10) & *(uint *)(param_1 + 0x14);
    if (uVar4 != 0) {
      if ((uVar4 & 4) == 0) {
        pcVar9 = "ios_base::failbit set";
        if ((uVar4 & 2) == 0) {
          pcVar9 = "ios_base::eofbit set";
        }
      }
      else {
        pcVar9 = "ios_base::badbit set";
      }
      puVar8 = (int32_t *)FUN_1800cf690(local_48,1);
      FUN_1800cf520(local_38,(int32_t *)pcVar9,puVar8);
      FUN_1801279a8((longlong *)local_38,&DAT_1801e90c8);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}
}

 FUN_1800ce3b0((longlong)*(int *)(*param_1 + 4) + (longlong)param_1,param_1 + 2);
  *(int32_t ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) = &PTR_LAB_1801cc4b8;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0xb0;
  FUN_1800cdf70(param_1 + 2);
  lVar3 = FUN_1800ceb80((longlong)(param_1 + 2),param_2);
  if (lVar3 == 0) {
lVar3 = (longlong)*(int *)(*param_1 + 4);
    uVar2 = 4;
    if (*(longlong *)(lVar3 + 0x48 + (longlong)param_1) != 0) {
      uVar2 = 0;
    }
    uVar2 = uVar2 | *(uint *)(lVar3 + 0x10 + (longlong)param_1) & 0x15 | 2;
    *(uint *)(lVar3 + 0x10 + (longlong)param_1) = uVar2;
    uVar2 = uVar2 & *(uint *)(lVar3 + 0x14 + (longlong)param_1);
    if (uVar2 != 0) {
      if ((uVar2 & 4) == 0) {
        pcVar6 = "ios_base::failbit set";
        if ((uVar2 & 2) == 0) {
          pcVar6 = "ios_base::eofbit set";
        }
      }
      else {
        pcVar6 = "ios_base::badbit set";
      }
      puVar4 = (int32_t *)FUN_1800cf690(local_58,1);
      FUN_1800cf520(local_48,(int32_t *)pcVar6,puVar4);
      FUN_1801279a8((longlong *)local_48,&DAT_1801e90c8);
      pcVar1 = (code *)swi(3);
      plVar5 = (longlong *)(*pcVar1)();
      return plVar5;
    }
  }
}

