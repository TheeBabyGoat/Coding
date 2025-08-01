#include "FUN_1800cd460.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800cd460(longlong param_1,int param_2) {
byte *pbVar1;
  longlong lVar2;
  int32_t uVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  byte bVar8;
  int32_t auStack_88 [32];
  int32_t *local_68;
  int32_t *local_60;
  ulonglong *local_58;
  longlong *local_50;
  byte local_48;
  int32_t local_47 [7];
  longlong local_40;
  int32_t local_38;
  int32_t local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_1801eb080 ^ (ulonglong)auStack_88;
  if (param_2 != -1) {
    uVar7 = **(ulonglong **)(param_1 + 0x40);
    bVar8 = (byte)param_2;
    if (uVar7 != 0) {
      iVar5 = **(int **)(param_1 + 0x58);
      if (uVar7 < uVar7 + (longlong)iVar5) {
        **(int **)(param_1 + 0x58) = iVar5 + -1;
        pbVar1 = (byte *)**(longlong **)(param_1 + 0x40);
        **(longlong **)(param_1 + 0x40) = (longlong)(pbVar1 + 1);
        *pbVar1 = bVar8;
        goto LAB_1800cd5db;
      }
    }
    if (*(longlong *)(param_1 + 0x80) != 0) {
      if (**(longlong **)(param_1 + 0x18) == param_1 + 0x70) {
        lVar2 = *(longlong *)(param_1 + 0x88);
        uVar3 = *(int32_t *)(param_1 + 0x90);
        **(longlong **)(param_1 + 0x18) = lVar2;
        **(longlong **)(param_1 + 0x38) = lVar2;
        **(int **)(param_1 + 0x50) = (int)uVar3 - (int)lVar2;
      }
      plVar4 = *(longlong **)(param_1 + 0x68);
      if (plVar4 != (longlong *)0x0) {
        local_50 = &local_40;
        local_58 = &local_10;
        local_60 = local_30;
        local_68 = &local_38;
        local_48 = bVar8;
        iVar5 = (**(code **)(*plVar4 + 0x38))(plVar4,param_1 + 0x74,&local_48,local_47);
        if ((iVar5 == 0) || (iVar5 == 1)) {
          uVar7 = local_40 - (longlong)local_30;
          if ((uVar7 == 0) ||
             (uVar6 = FUN_18012e4a0(local_30,1,uVar7,*(longlong *)(param_1 + 0x80)), uVar7 == uVar6)
             ) {
            *(int32_t *)(param_1 + 0x71) = 1;
          }
          goto LAB_1800cd5db;
        }
        bVar8 = local_48;
        if (iVar5 != 3) goto LAB_1800cd5db;
      }
      FUN_18012eca4(bVar8,*(longlong **)(param_1 + 0x80));
    }
  }
LAB_1800cd5db:
  FUN_1801252c0(local_10 ^ (ulonglong)auStack_88);
  return;
}
}

