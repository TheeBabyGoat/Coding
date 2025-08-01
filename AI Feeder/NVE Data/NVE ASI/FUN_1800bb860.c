#include "FUN_1800bb860.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800bb860(int32_t param_1,int param_2,int param_3) {
longlong *plVar1;
  int32_t *puVar2;
  int32_t uVar3;
  int32_t *puVar4;
  int32_t *puVar5;
  int32_t local_res8;
  longlong local_res20;
  longlong local_28 [2];
  
  if (DAT_1801f3ad8 != (longlong *)0x0) {
    uVar3 = 0x10;
    local_res8 = param_1;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x10) < DAT_1801fb520) && (FUN_180125398(&DAT_1801fb520), DAT_1801fb520 == -1)) {
      FUN_1800c5540(0x1801fb528,uVar3,"visibilityBig");
      atexit((_func_5014 *)&LAB_180155d20);
      _Init_thread_footer(&DAT_1801fb520);
    }
    puVar2 = DAT_1801fb540;
    plVar1 = DAT_1801f3ad8;
    if (param_2 == 0x320d0951) {
      if ((param_3 != 0x320d0951) && (puVar4 = DAT_1801fb538, DAT_1801f3ad8 != (longlong *)0x0)) {
        for (; puVar4 != puVar2; puVar4 = puVar4 + 4) {
          puVar5 = puVar4;
          if (0xf < (ulonglong)puVar4[3]) {
            puVar5 = (int32_t *)*puVar4;
          }
          (**(code **)(*plVar1 + 0xa0))(plVar1,local_28,puVar5,DAT_1801fb530);
          if (local_28[0] != 0) {
            (**(code **)(*plVar1 + 0x108))(plVar1,local_28[0],&DAT_1801f3ac4,1,0);
          }
        }
      }
    }
    else if (param_3 == 0x320d0951) {
      (**(code **)(*DAT_1801f3ad8 + 0xa0))(DAT_1801f3ad8,&local_res8,0,"visibilityBig");
      (**(code **)(*DAT_1801f3ad8 + 0xe8))(DAT_1801f3ad8,local_res8,&DAT_1801f3ac4,1,0);
      puVar2 = DAT_1801fb540;
      plVar1 = DAT_1801f3ad8;
      if ((DAT_1801f3ad8 != (longlong *)0x0) &&
         (puVar4 = DAT_1801fb538, DAT_1801fb538 != DAT_1801fb540)) {
        do {
          puVar5 = puVar4;
          if (0xf < (ulonglong)puVar4[3]) {
            puVar5 = (int32_t *)*puVar4;
          }
          (**(code **)(*plVar1 + 0xa0))(plVar1,&local_res20,puVar5,DAT_1801fb530);
          if (local_res20 != 0) {
            (**(code **)(*plVar1 + 0x108))(plVar1,local_res20,&DAT_1801f3ac0,1,0);
          }
          puVar4 = puVar4 + 4;
        } while (puVar4 != puVar2);
        return;
      }
    }
  }
  return;
}
}

