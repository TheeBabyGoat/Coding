#include "_wcscats.h"
#include <stdint.h>
#include <stddef.h>

void _wcscats(short *param_1,longlong param_2,int param_3,int32_t param_4) {
ulong uVar1;
  int iVar2;
  longlong *plVar3;
  int local_res18 [2];
  longlong local_res20;
  
  if (0 < param_3) {
    local_res20 = param_4;
    iVar2 = 0;
    plVar3 = (longlong *)local_res18;
    local_res18[0] = param_3;
    do {
      plVar3 = plVar3 + 1;
      uVar1 = FUN_180145d94(param_1,param_2,*plVar3);
      if (uVar1 != 0) {
                    
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_res18[0]);
  }
  return;
}
}

 _wcscats(psVar9,0x351,3,PTR_u_LC_COLLATE_18017aeb8);
    ppuVar12 = &PTR_u_LC_COLLATE_18017aeb8;
    bVar6 = true;
    do {
      uVar7 = FUN_180145d94(psVar9,0x351,0x18017afb8);
      if (uVar7 != 0) {
_invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
}

 _wcscats(psVar9,0x351,3,*ppuVar12);
      bVar6 = bVar5;
    } while ((longlong)ppuVar12 < 0x18017af18);
    if (bVar5) {
FUN_18013bf3c(psVar8);
      piVar4 = *(int **)(param_1 + 0x38);
      if (piVar4 != (int *)0x0) {
        LOCK();
        iVar1 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          FUN_18013bf3c(*(LPVOID *)(param_1 + 0x38));
        }
      }
      piVar4 = *(int **)(param_1 + 0x30);
      if (piVar4 != (int *)0x0) {
        LOCK();
        iVar1 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          FUN_18013bf3c(*(LPVOID *)(param_1 + 0x30));
        }
      }
      psVar9 = *(short **)(param_1 + 0x68);
      *(int32_t *)(param_1 + 0x30) = 0;
      *(int32_t *)(param_1 + 0x20) = 0;
      *(int32_t *)(param_1 + 0x38) = 0;
      *(int32_t *)(param_1 + 0x28) = 0;
    }
}

 _wcscats(param_1,param_2,2,&DAT_18017afd8);
    }
    if (param_3[0x80] != L'\0') {
_wcscats(param_1,param_2,2,&DAT_18017afdc);
    }
}

