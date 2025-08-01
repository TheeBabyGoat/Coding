#include "FUN_1800c8120.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800c8120(longlong *param_1,ulonglong param_2) {
longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong local_res8;
  
  (**(code **)(*param_1 + 8))(param_1,&DAT_1801cc1e0,&local_res8);
  if (local_res8 != 0) {
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_1801ee948);
    lVar1 = *(longlong *)(local_res8 + 0x38);
    plVar2 = *(longlong **)(local_res8 + 0x28);
    uVar4 = param_2 >> 4 & *(ulonglong *)(local_res8 + 0x50);
    plVar6 = *(longlong **)(lVar1 + 8 + uVar4 * 0x10);
    if (plVar6 == plVar2) {
LAB_1800c81a1:
      plVar6 = (longlong *)0x0;
    }
    else {
      uVar3 = plVar6[2];
      while (param_2 != uVar3) {
        if (plVar6 == *(longlong **)(lVar1 + uVar4 * 0x10)) goto LAB_1800c81a1;
        plVar6 = (longlong *)plVar6[1];
        uVar3 = plVar6[2];
      }
    }
    if (plVar6 == (longlong *)0x0) {
      plVar6 = plVar2;
    }
    if (plVar6 != plVar2) {
      plVar5 = (longlong *)
               ((*(ulonglong *)(local_res8 + 0x50) & (ulonglong)plVar6[2] >> 4) * 0x10 + lVar1);
      if ((longlong *)plVar5[1] == plVar6) {
        if ((longlong *)*plVar5 == plVar6) {
          *plVar5 = (longlong)plVar2;
          plVar5[1] = (longlong)plVar2;
        }
        else {
          plVar5[1] = plVar6[1];
        }
      }
      else if ((longlong *)*plVar5 == plVar6) {
        *plVar5 = *plVar6;
      }
      lVar1 = *plVar6;
      *(longlong *)(local_res8 + 0x30) = *(longlong *)(local_res8 + 0x30) + -1;
      *(longlong *)plVar6[1] = lVar1;
      *(longlong *)(lVar1 + 8) = plVar6[1];
      FUN_1800cb100(plVar6 + 0xc);
      thunk_FUN_18012d5e8(plVar6);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_1801ee948);
  }
  return;
}
}

