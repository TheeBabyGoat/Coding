#include "FUN_1800c6090.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800c6090(longlong *param_1,longlong *param_2) {
LPVOID pvVar1;
  code *pcVar2;
  LPVOID pvVar3;
  
  if (param_1 != param_2) {
    do {
      pvVar1 = (LPVOID)*param_1;
      if (pvVar1 != (LPVOID)0x0) {
        pvVar3 = pvVar1;
        if ((0xfff < (ulonglong)(param_1[2] - (longlong)pvVar1)) &&
           (pvVar3 = *(LPVOID *)((longlong)pvVar1 + -8),
           0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3)))) {
          FUN_18012b7b4();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        thunk_FUN_18012d5e8(pvVar3);
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
      }
      param_1 = param_1 + 3;
    } while (param_1 != param_2);
  }
  return;
}
}

 FUN_1800c6090(plVar2,plVar2);
    plVar6 = (longlong *)param_1[1];
    if (param_2 != plVar6) {
plVar16 = param_2 + 1;
      do {
        lVar4 = plVar16[-1];
        lVar5 = plVar16[1];
        lVar13 = *plVar16;
        plVar16[1] = 0;
        *plVar16 = 0;
        plVar16[-1] = 0;
        *plVar12 = lVar4;
        plVar2 = plVar16 + 2;
        plVar12[1] = lVar13;
        plVar12[2] = lVar5;
        plVar12 = plVar12 + 3;
        plVar16 = plVar16 + 3;
      } while (plVar2 != plVar6);
    }
}

 FUN_1800c6090(plVar12,plVar12);
  if ((longlong *)*param_1 != (longlong *)0x0) {
FUN_1800c6090((longlong *)*param_1,(longlong *)param_1[1]);
    pvVar7 = (LPVOID)*param_1;
    pvVar15 = pvVar7;
    if ((0xfff < (ulonglong)(((param_1[2] - (longlong)pvVar7) / 0x18) * 0x18)) &&
       (pvVar15 = *(LPVOID *)((longlong)pvVar7 + -8),
       0x1f < (ulonglong)((longlong)pvVar7 + (-8 - (longlong)pvVar15)))) {
LAB_1800cf034:
      FUN_18012b7b4();
      pcVar8 = (code *)swi(3);
      plVar10 = (longlong *)(*pcVar8)();
      return plVar10;
    }
    thunk_FUN_18012d5e8(pvVar15);
  }
}

 FUN_1800c6090((longlong *)*param_1,(longlong *)param_1[1]);
    pvVar7 = (LPVOID)*param_1;
    pvVar15 = pvVar7;
    if ((0xfff < (ulonglong)(((param_1[2] - (longlong)pvVar7) / 0x18) * 0x18)) &&
       (pvVar15 = *(LPVOID *)((longlong)pvVar7 + -8),
       0x1f < (ulonglong)((longlong)pvVar7 + (-8 - (longlong)pvVar15)))) {
LAB_1800cf034:
      FUN_18012b7b4();
      pcVar8 = (code *)swi(3);
      plVar10 = (longlong *)(*pcVar8)();
      return plVar10;
    }
}

 FUN_1800c6090((longlong *)*plVar4,*(longlong **)(lVar1 + 0x138));
    pvVar2 = (LPVOID)*plVar4;
    pvVar5 = pvVar2;
    if ((0xfff < (ulonglong)(((*(longlong *)(lVar1 + 0x140) - (longlong)pvVar2) / 0x18) * 0x18)) &&
       (pvVar5 = *(LPVOID *)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar5)))) {
FUN_18012b7b4();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
}

