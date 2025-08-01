#include "FUN_1800ba040.h"
#include <stdint.h>
#include <stddef.h>

 FUN_1800ba040((longlong *)&local_70);
    FUN_1800a6800(local_50);
    FUN_1800a6800(&local_90);
    if (bVar11 == 0) goto LAB_1800a7803;
    uStack_88 = 0;
    local_80 = _DAT_1801d8fc0;
    uStack_78 = _UNK_1801d8fc8;
    local_90._0_6_ = CONCAT24(s_crashes_180182c98._4_2_,s_crashes_180182c98._0_4_);
    local_90._0_7_ = CONCAT16(s_crashes_180182c98[6],(int32_t)local_90);
    local_90 = (LPVOID)(ulonglong)(uint7)local_90;
    pppppppWVar13 = (LPCWSTR ******)FUN_18011cb10(local_50,&local_90,pppppppWVar15);
    ppppppWVar2 = pppppppWVar13[2];
    if ((LPCWSTR *****)0xf < pppppppWVar13[3]) {
pppppppWVar13 = (LPCWSTR ******)*pppppppWVar13;
    }
}

 FUN_1800ba040((longlong *)&local_70);
      FUN_1800a6800(local_50);
      if (0xf < uStack_78) {
pvVar18 = local_90;
        if (0xfff < uStack_78 + 1) {
          iVar20 = (int)(uStack_78 + 0x28 >> 0x20);
          pvVar18 = *(LPVOID *)((longlong)local_90 + -8);
          if (0x1f < (ulonglong)((longlong)local_90 + (-8 - (longlong)pvVar18))) goto LAB_1800a7855;
        }
        thunk_FUN_18012d5e8(pvVar18);
      }
}

 FUN_1800ba040((longlong *)pppppppWVar15);
        }
        pppppppWVar13 = (LPCWSTR ******)local_a8;
        if ((0xfff < (local_98 - (longlong)local_a8 & 0xffffffffffffffe0U)) &&
           (pppppppWVar13 = (LPCWSTR ******)((LPCWSTR ******)local_a8)[-1],
           0x1f < (ulonglong)((longlong)local_a8 + (-8 - (longlong)pppppppWVar13)))) {
FUN_18012b7b4();
          goto LAB_1800a7832;
        }
}

 FUN_1800ba040((longlong *)local_1d8);
    FUN_1800a6800((longlong *)local_198);
    if (0xf < uStack_1a0) {
pcVar15 = local_1b8;
      if ((0xfff < uStack_1a0 + 1) &&
         (pcVar15 = *(char **)(local_1b8 + -8), (char *)0x1f < local_1b8 + (-8 - (longlong)pcVar15))
         ) goto LAB_1800a89e4;
      thunk_FUN_18012d5e8(pcVar15);
    }
}

 FUN_1800ba040(plVar15);
        }
        pvVar6 = (LPVOID)*param_1;
        pvVar14 = pvVar6;
        if ((0xfff < (param_1[2] - (longlong)pvVar6 & 0xffffffffffffffe0U)) &&
           (pvVar14 = *(LPVOID *)((longlong)pvVar6 + -8),
           0x1f < (ulonglong)((longlong)pvVar6 + (-8 - (longlong)pvVar14)))) {
FUN_18012b7b4();
          goto LAB_1800aa3d7;
        }
}

 FUN_1800ba040(plVar5);
  }
  pvVar2 = *(LPVOID *)(param_1 + 8);
  pvVar4 = pvVar2;
  if ((0xfff < (ulonglong)(*(longlong *)(param_1 + 0x10) << 5)) &&
     (pvVar4 = *(LPVOID *)((longlong)pvVar2 + -8),
     0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar4)))) {
FUN_18012b7b4();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
}

void FUN_1800ba040(longlong *param_1) {
LPVOID pvVar1;
  code *pcVar2;
  LPVOID pvVar3;
  
  if (7 < (ulonglong)param_1[3]) {
    pvVar1 = (LPVOID)*param_1;
    pvVar3 = pvVar1;
    if ((0xfff < param_1[3] * 2 + 2U) &&
       (pvVar3 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3)))) {
      FUN_18012b7b4();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    thunk_FUN_18012d5e8(pvVar3);
  }
  param_1[3] = 7;
  param_1[2] = 0;
  *(int32_t *)param_1 = 0;
  return;
}
}

