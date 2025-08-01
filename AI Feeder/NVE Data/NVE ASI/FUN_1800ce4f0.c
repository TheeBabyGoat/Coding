#include "FUN_1800ce4f0.h"
#include <stdint.h>
#include <stddef.h>

 FUN_1800ce4f0(local_1d8,pwVar10);
    FUN_1800cd880(local_1d8,pwVar10,2);
    ppauVar11 = local_c8;
    plVar5 = FUN_1800cd7a0(local_1d8,ppauVar11);
    uVar4 = plVar5[1] + *plVar5;
    local_1f8 = (int32_t (*) [32])0x0;
    ppuStack_1f0 = (int32_t **)0x0;
    local_1e8 = (int32_t (*) [32])0x0;
    if (uVar4 == 0) {
pauVar14 = (int32_t (*) [32])0x0;
    }
}

longlong * FUN_1800ce4f0(longlong *param_1,wchar_t *param_2) {
code *pcVar1;
  uint uVar2;
  longlong lVar3;
  int32_t *puVar4;
  longlong *plVar5;
  char *pcVar6;
  int32_t local_58 [4];
  int32_t **local_48 [6];
  
  if (7 < *(ulonglong *)(param_2 + 0xc)) {
    param_2 = *(wchar_t **)param_2;
  }
  *param_1 = (longlong)&DAT_1801cc344;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(int32_t *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x16] = (longlong)&PTR_FUN_1801cc4c8;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(int32_t *)(param_1 + 0x21) = 0;
  *(int32_t ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) = &PTR_LAB_1801cc4b0;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0x18;
  param_1[1] = 0;
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
  *(int32_t ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) = &PTR_LAB_1801cc4b8;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0xb0;
  return param_1;
}
}

