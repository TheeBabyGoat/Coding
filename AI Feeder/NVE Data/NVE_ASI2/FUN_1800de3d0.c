#include "FUN_1800de3d0.h"
#include <stdint.h>
#include <stddef.h>

longlong * FUN_1800de3d0(longlong param_1) {
longlong *plVar1;
  int32_t *puVar2;
  longlong lVar3;
  int32_t *puVar4;
  longlong lVar5;
  code *pcVar6;
  longlong *in_RAX;
  int32_t *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  int32_t local_res8;
  
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    plVar8 = *(longlong **)(param_1 + 8);
    if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x38) >> 3) {
      plVar1 = (longlong *)*plVar8;
      if (plVar1 == plVar8) {
        return plVar8;
      }
      puVar2 = (int32_t *)plVar1[1];
      lVar3 = *(longlong *)(param_1 + 0x18);
      puVar4 = *(int32_t **)(param_1 + 8);
      plVar12 = (longlong *)
                (((((((ulonglong)*(byte *)(plVar1 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar1 + 0x11)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar1 + 0x12)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar1 + 0x13)) * 0x100000001b3 &
                 *(ulonglong *)(param_1 + 0x30)) * 0x10 + lVar3);
      lVar5 = *plVar12;
      plVar11 = (longlong *)plVar12[1];
      plVar9 = plVar1;
      do {
        plVar10 = (longlong *)*plVar9;
        FUN_1800a6c20((longlong)(plVar9 + 3));
        if (0x1f < (ulonglong)((longlong)plVar9 + (-8 - plVar9[-1]))) {
LAB_1800de6da:
          FUN_18012b7b4();
          pcVar6 = (code *)swi(3);
          plVar8 = (longlong *)(*pcVar6)();
          return plVar8;
        }
        thunk_FUN_18012d5e8((LPVOID)plVar9[-1]);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
        if (plVar9 == plVar11) {
          puVar7 = puVar2;
          if ((longlong *)lVar5 == plVar1) {
            *plVar12 = (longlong)puVar4;
            puVar7 = puVar4;
          }
          plVar12[1] = (longlong)puVar7;
          while (plVar10 != plVar8) {
            plVar12 = (longlong *)
                      (((((((ulonglong)*(byte *)(plVar10 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3
                          ^ (ulonglong)*(byte *)((longlong)plVar10 + 0x11)) * 0x100000001b3 ^
                         (ulonglong)*(byte *)((longlong)plVar10 + 0x12)) * 0x100000001b3 ^
                        (ulonglong)*(byte *)((longlong)plVar10 + 0x13)) * 0x100000001b3 &
                       *(ulonglong *)(param_1 + 0x30)) * 0x10 + lVar3);
            plVar1 = (longlong *)plVar12[1];
            plVar11 = plVar10;
            while( true ) {
              plVar10 = (longlong *)*plVar11;
              FUN_1800a6c20((longlong)(plVar11 + 3));
              if (0x1f < (ulonglong)((longlong)plVar11 + (-8 - plVar11[-1]))) goto LAB_1800de6da;
              thunk_FUN_18012d5e8((LPVOID)plVar11[-1]);
              *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
              if (plVar11 == plVar1) break;
              plVar11 = plVar10;
              if (plVar10 == plVar8) goto LAB_1800de5c1;
            }
            *plVar12 = (longlong)puVar4;
            plVar12[1] = (longlong)puVar4;
          }
          goto LAB_1800de5c5;
        }
        plVar9 = plVar10;
        if (plVar10 == plVar8) {
          if ((longlong *)lVar5 == plVar1) {
LAB_1800de5c1:
            *plVar12 = (longlong)plVar10;
          }
LAB_1800de5c5:
          *puVar2 = plVar10;
          plVar10[1] = (longlong)puVar2;
          return plVar8;
        }
      } while( true );
    }
    *(int32_t *)plVar8[1] = 0;
    puVar2 = (int32_t *)*plVar8;
    while (puVar2 != (int32_t *)0x0) {
      puVar4 = (int32_t *)*puVar2;
      FUN_1800a6c20((longlong)(puVar2 + 3));
      if (0x1f < (ulonglong)((longlong)puVar2 + (-8 - (longlong)puVar2[-1]))) {
        FUN_18012b7b4();
        pcVar6 = (code *)swi(3);
        plVar8 = (longlong *)(*pcVar6)();
        return plVar8;
      }
      thunk_FUN_18012d5e8((LPVOID)puVar2[-1]);
      puVar2 = puVar4;
    }
    *(int32_t *)*(int32_t *)(param_1 + 8) = *(int32_t *)(param_1 + 8);
    *(longlong *)(*(longlong *)(param_1 + 8) + 8) = *(longlong *)(param_1 + 8);
    *(int32_t *)(param_1 + 0x10) = 0;
    local_res8 = *(int32_t *)(param_1 + 8);
    in_RAX = (longlong *)
             FUN_1800a9480(*(int32_t **)(param_1 + 0x18),*(int32_t **)(param_1 + 0x20),
                           &local_res8);
  }
  return in_RAX;
}
}

