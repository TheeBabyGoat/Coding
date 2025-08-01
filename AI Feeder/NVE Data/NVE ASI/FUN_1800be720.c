#include "FUN_1800be720.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800be720(int32_t param_1,longlong param_2) {
int32_t *puVar1;
  longlong *plVar2;
  int32_t *puVar3;
  int32_t *puVar4;
  int32_t local_res8;
  int32_t local_res9;
  int32_t local_resb;
  longlong local_res10;
  longlong local_res18;
  
  puVar1 = DAT_1801fbc80;
  plVar2 = DAT_1801f3ad8;
  if (DAT_1801f3ad8 != (longlong *)0x0) {
    if (DAT_1801f3ad8 != (longlong *)0x0) {
      puVar3 = DAT_1801fbc78;
      if (DAT_1801fbc78 != DAT_1801fbc80) {
        do {
          puVar4 = puVar3;
          if (0xf < (ulonglong)puVar3[3]) {
            puVar4 = (int32_t *)*puVar3;
          }
          (**(code **)(*plVar2 + 0xa0))(plVar2,&local_res10,puVar4,DAT_1801fbc70);
          param_2 = local_res10;
          if (local_res10 != 0) {
            (**(code **)(*plVar2 + 0x108))(plVar2,local_res10,&DAT_1801f3a08,1,0);
          }
          puVar3 = puVar3 + 4;
        } while (puVar3 != puVar1);
      }
      puVar3 = DAT_1801fbca8;
      plVar2 = DAT_1801f3ad8;
      puVar1 = DAT_1801fbca0;
      if (DAT_1801f3ad8 != (longlong *)0x0) {
        for (; puVar1 != puVar3; puVar1 = puVar1 + 4) {
          puVar4 = puVar1;
          if (0xf < (ulonglong)puVar1[3]) {
            puVar4 = (int32_t *)*puVar1;
          }
          (**(code **)(*plVar2 + 0xa0))(plVar2,&local_res18,puVar4,DAT_1801fbc98);
          param_2 = local_res18;
          if (local_res18 != 0) {
            local_res8 = DAT_1801f3a0d;
            local_res9 = 1;
            local_resb = 0;
            (**(code **)(*plVar2 + 0x100))(plVar2,local_res18,&local_res8,4,0);
          }
        }
      }
    }
    FUN_1800c53d0(0x1801fbcb8,param_2,&DAT_1801f3a11);
  }
  return;
}
}

