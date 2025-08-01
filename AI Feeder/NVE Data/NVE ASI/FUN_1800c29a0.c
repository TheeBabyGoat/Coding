#include "FUN_1800c29a0.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800c29a0(void) {
int32_t *puVar1;
  longlong *plVar2;
  int32_t *puVar3;
  int32_t *puVar4;
  longlong local_res8;
  longlong local_res10;
  
  puVar1 = DAT_1801fc6f0;
  plVar2 = DAT_1801f3ad8;
  if ((DAT_1801f3ad8 != (longlong *)0x0) && (DAT_1801f3ad8 != (longlong *)0x0)) {
    puVar3 = DAT_1801fc6e8;
    if (DAT_1801fc6e8 != DAT_1801fc6f0) {
      do {
        puVar4 = puVar3;
        if (0xf < (ulonglong)puVar3[3]) {
          puVar4 = (int32_t *)*puVar3;
        }
        (**(code **)(*plVar2 + 0xa0))(plVar2,&local_res8,puVar4,DAT_1801fc6e0);
        if (local_res8 != 0) {
          (**(code **)(*plVar2 + 0x108))(plVar2,local_res8,&DAT_1801ec708,3,0);
        }
        puVar3 = puVar3 + 4;
      } while (puVar3 != puVar1);
    }
    puVar3 = DAT_1801fc718;
    plVar2 = DAT_1801f3ad8;
    puVar1 = DAT_1801fc710;
    if (DAT_1801f3ad8 != (longlong *)0x0) {
      for (; puVar1 != puVar3; puVar1 = puVar1 + 4) {
        puVar4 = puVar1;
        if (0xf < (ulonglong)puVar1[3]) {
          puVar4 = (int32_t *)*puVar1;
        }
        (**(code **)(*plVar2 + 0xa0))(plVar2,&local_res10,puVar4,DAT_1801fc708);
        if (local_res10 != 0) {
          (**(code **)(*plVar2 + 0x108))(plVar2,local_res10,&DAT_1801f3ab0,1,0);
        }
      }
    }
  }
  return;
}
}

