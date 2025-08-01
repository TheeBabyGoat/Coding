#include "FUN_1800cd050.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800cd050(longlong param_1) {
int32_t uVar1;
  int iVar2;
  ulonglong uVar3;
  int32_t *******pppppppuVar4;
  longlong lVar5;
  ulonglong uVar6;
  int32_t *******pppppppuVar7;
  int32_t auStack_98 [32];
  longlong *local_78;
  int32_t *local_70;
  byte *local_68;
  int32_t **local_60;
  int32_t local_58;
  byte local_57 [7];
  longlong local_50;
  int32_t *local_48;
  int32_t *******local_40;
  int32_t uStack_38;
  ulonglong local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_1801eb080 ^ (ulonglong)auStack_98;
  uVar3 = **(ulonglong **)(param_1 + 0x38);
  if (uVar3 != 0) {
    iVar2 = **(int **)(param_1 + 0x50);
    if (uVar3 < uVar3 + (longlong)iVar2) {
      **(int **)(param_1 + 0x50) = iVar2 + -1;
      **(longlong **)(param_1 + 0x38) = **(longlong **)(param_1 + 0x38) + 1;
      goto LAB_1800cd26b;
    }
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    if (**(longlong **)(param_1 + 0x18) == param_1 + 0x70) {
      uVar1 = *(int32_t *)(param_1 + 0x90);
      lVar5 = *(longlong *)(param_1 + 0x88);
      **(longlong **)(param_1 + 0x18) = lVar5;
      **(longlong **)(param_1 + 0x38) = lVar5;
      **(int **)(param_1 + 0x50) = (int)uVar1 - (int)lVar5;
    }
    if (*(longlong *)(param_1 + 0x68) != 0) {
      uStack_38 = 0;
      local_30 = 0;
      local_28 = 0xf;
      local_40 = (int32_t *******)0x0;
      uVar3 = FUN_18012e8b0(*(int32_t **)(param_1 + 0x80));
      iVar2 = (int)uVar3;
      uVar6 = local_30;
      while( true ) {
        local_30 = uVar6;
        if (iVar2 == -1) goto LAB_1800cd260;
        if (uVar6 < local_28) {
          local_30 = uVar6 + 1;
          pppppppuVar4 = &local_40;
          if (0xf < local_28) {
            pppppppuVar4 = local_40;
          }
          *(char *)((longlong)pppppppuVar4 + uVar6) = (char)uVar3;
          *(int32_t *)((longlong)pppppppuVar4 + uVar6 + 1) = 0;
        }
        else {
          FUN_1800b99a0(&local_40,1,(ulonglong)local_57[0],(char)uVar3);
        }
        pppppppuVar4 = &local_40;
        if (0xf < local_28) {
          pppppppuVar4 = local_40;
        }
        pppppppuVar7 = &local_40;
        if (0xf < local_28) {
          pppppppuVar7 = local_40;
        }
        local_60 = &local_48;
        local_68 = local_57;
        local_70 = &local_58;
        local_78 = &local_50;
        iVar2 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x30))
                          (*(longlong **)(param_1 + 0x68),param_1 + 0x74,pppppppuVar7,
                           local_30 + (longlong)pppppppuVar4);
        if ((iVar2 != 0) && (iVar2 != 1)) goto LAB_1800cd260;
        if (local_48 != &local_58) break;
        pppppppuVar4 = &local_40;
        if (0xf < local_28) {
          pppppppuVar4 = local_40;
        }
        uVar3 = local_50 - (longlong)pppppppuVar4;
        if (local_30 < (ulonglong)(local_50 - (longlong)pppppppuVar4)) {
          uVar3 = local_30;
        }
        pppppppuVar4 = &local_40;
        if (0xf < local_28) {
          pppppppuVar4 = local_40;
        }
        uVar6 = local_30 - uVar3;
        FUN_180150fd0(pppppppuVar4,(int32_t *)(uVar3 + (longlong)pppppppuVar4),uVar6 + 1);
        local_30 = uVar6;
        uVar3 = FUN_18012e8b0(*(int32_t **)(param_1 + 0x80));
        iVar2 = (int)uVar3;
        uVar6 = local_30;
      }
      pppppppuVar4 = &local_40;
      if (0xf < local_28) {
        pppppppuVar4 = local_40;
      }
      lVar5 = (local_30 - local_50) + (longlong)pppppppuVar4;
      while (0 < lVar5) {
        lVar5 = lVar5 + -1;
        ungetc((int)*(char *)(lVar5 + local_50),*(FILE **)(param_1 + 0x80));
      }
LAB_1800cd260:
      FUN_1800a6800((longlong *)&local_40);
      goto LAB_1800cd26b;
    }
    FUN_18012e8b0(*(int32_t **)(param_1 + 0x80));
  }
LAB_1800cd26b:
  FUN_1801252c0(local_20 ^ (ulonglong)auStack_98);
  return;
}
}

