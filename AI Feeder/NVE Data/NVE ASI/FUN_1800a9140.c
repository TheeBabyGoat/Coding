#include "FUN_1800a9140.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800a9140(ulonglong *param_1,ulonglong param_2,int32_t param_3) {
int32_t *puVar1;
  LPVOID pvVar2;
  code *pcVar3;
  void *pvVar4;
  longlong lVar5;
  LPVOID pvVar6;
  ulonglong uVar7;
  int32_t *puVar8;
  
  puVar8 = (int32_t *)*param_1;
  lVar5 = (longlong)param_1[1] - (longlong)puVar8;
  if ((ulonglong)(lVar5 >> 3) < param_2) {
    if (0x1fffffffffffffff < param_2) {
LAB_1800a9282:
      FUN_1800ba8a0();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar7 = param_2 * 8;
    if (uVar7 == 0) {
      puVar8 = (int32_t *)0x0;
    }
    else if (uVar7 < 0x1000) {
      puVar8 = (int32_t *)operator_new(uVar7);
    }
    else {
      if (uVar7 + 0x27 <= uVar7) goto LAB_1800a9282;
      pvVar4 = operator_new(uVar7 + 0x27);
      if (pvVar4 == (void *)0x0) goto LAB_1800a9288;
      puVar8 = (int32_t *)((longlong)pvVar4 + 0x27U & 0xffffffffffffffe0);
      puVar8[-1] = pvVar4;
    }
    pvVar2 = (LPVOID)*param_1;
    lVar5 = (longlong)(param_1[2] - (longlong)pvVar2) >> 3;
    if (lVar5 != 0) {
      pvVar6 = pvVar2;
      if ((0xfff < (ulonglong)(lVar5 * 8)) &&
         (pvVar6 = *(LPVOID *)((longlong)pvVar2 - 8),
         0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar6)))) {
LAB_1800a9288:
        FUN_18012b7b4();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      thunk_FUN_18012d5e8(pvVar6);
    }
    puVar1 = puVar8 + param_2;
    *param_1 = (ulonglong)puVar8;
    param_1[1] = (ulonglong)puVar1;
    param_1[2] = (ulonglong)puVar1;
    for (; puVar8 != puVar1; puVar8 = puVar8 + 1) {
      *puVar8 = param_3;
    }
  }
  else {
    uVar7 = lVar5 + 7U >> 3;
    if ((int32_t *)param_1[1] < puVar8) {
      uVar7 = 0;
    }
    if (uVar7 != 0) {
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar8 = param_3;
        puVar8 = puVar8 + 1;
      }
      return;
    }
  }
  return;
}
}

 FUN_1800a9140((ulonglong *)(param_1 + 0x18),lVar10 * 2,plVar1);
  *(longlong *)(param_1 + 0x38) = lVar10;
  *(longlong *)(param_1 + 0x30) = lVar10 + -1;
  plVar8 = (longlong *)**(int32_t **)(param_1 + 8);
joined_r0x0001800c66d5:
  do {
    while( true) {
while( true ) {
        if (plVar8 == plVar1) {
          return;
        }
        plVar2 = (longlong *)*plVar8;
        puVar11 = (int32_t *)
                  (((((((ulonglong)*(byte *)(plVar8 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar8 + 0x11)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar8 + 0x12)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar8 + 0x13)) * 0x100000001b3 &
                   *(ulonglong *)(param_1 + 0x30)) * 0x10 + *(longlong *)(param_1 + 0x18));
        if ((longlong *)*puVar11 != plVar1) break;
        *puVar11 = plVar8;
        puVar11[1] = plVar8;
        plVar8 = plVar2;
      }
      plVar3 = (longlong *)puVar11[1];
      if ((int)plVar8[2] != (int)plVar3[2]) break;
      plVar3 = (longlong *)*plVar3;
      if (plVar3 != plVar8) {
        plVar4 = (longlong *)plVar8[1];
        *plVar4 = (longlong)plVar2;
        puVar5 = (int32_t *)plVar2[1];
        *puVar5 = plVar3;
        puVar6 = (int32_t *)plVar3[1];
        *puVar6 = plVar8;
        plVar3[1] = (longlong)puVar5;
        plVar2[1] = (longlong)plVar4;
        plVar8[1] = (longlong)puVar6;
      }
      puVar11[1] = plVar8;
      plVar8 = plVar2;
    }
}

 FUN_1800a9140((ulonglong *)(param_1 + 0x18),lVar10 * 2,plVar1);
  *(longlong *)(param_1 + 0x38) = lVar10;
  *(longlong *)(param_1 + 0x30) = lVar10 + -1;
  plVar8 = (longlong *)**(int32_t **)(param_1 + 8);
joined_r0x0001800c9cb5:
  do {
    while( true) {
while( true ) {
        if (plVar8 == plVar1) {
          return;
        }
        uVar9 = plVar8[2];
        plVar2 = (longlong *)*plVar8;
        puVar11 = (int32_t *)
                  ((uVar9 >> 4 & *(ulonglong *)(param_1 + 0x30)) * 0x10 +
                  *(longlong *)(param_1 + 0x18));
        if ((longlong *)*puVar11 != plVar1) break;
        *puVar11 = plVar8;
        puVar11[1] = plVar8;
        plVar8 = plVar2;
      }
      plVar3 = (longlong *)puVar11[1];
      if (uVar9 != plVar3[2]) break;
      plVar3 = (longlong *)*plVar3;
      if (plVar3 != plVar8) {
        plVar4 = (longlong *)plVar8[1];
        *plVar4 = (longlong)plVar2;
        puVar5 = (int32_t *)plVar2[1];
        *puVar5 = plVar3;
        puVar6 = (int32_t *)plVar3[1];
        *puVar6 = plVar8;
        plVar3[1] = (longlong)puVar5;
        plVar2[1] = (longlong)plVar4;
        plVar8[1] = (longlong)puVar6;
      }
      puVar11[1] = plVar8;
      plVar8 = plVar2;
    }
}

 FUN_1800a9140((ulonglong *)&DAT_1801ec418,lVar10 * 2,DAT_1801ec408);
  DAT_1801ec430 = lVar10 - 1;
  DAT_1801ec438 = lVar10;
  plVar7 = (longlong *)*DAT_1801ec408;
joined_r0x0001800de288:
  do {
    while( true) {
while( true ) {
        if (plVar7 == plVar8) {
          return;
        }
        plVar1 = (longlong *)*plVar7;
        puVar11 = (int32_t *)
                  (((((((ulonglong)*(byte *)(plVar7 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar7 + 0x11)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar7 + 0x12)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar7 + 0x13)) * 0x100000001b3 & DAT_1801ec430)
                   * 0x10 + DAT_1801ec418);
        if ((longlong *)*puVar11 != plVar8) break;
        *puVar11 = plVar7;
        puVar11[1] = plVar7;
        plVar7 = plVar1;
      }
      plVar2 = (longlong *)puVar11[1];
      if ((int)plVar7[2] != (int)plVar2[2]) break;
      plVar2 = (longlong *)*plVar2;
      if (plVar2 != plVar7) {
        puVar3 = (int32_t *)plVar7[1];
        *puVar3 = plVar1;
        puVar4 = (int32_t *)plVar1[1];
        *puVar4 = plVar2;
        puVar5 = (int32_t *)plVar2[1];
        *puVar5 = plVar7;
        plVar2[1] = (longlong)puVar4;
        plVar1[1] = (longlong)puVar3;
        plVar7[1] = (longlong)puVar5;
      }
      puVar11[1] = plVar7;
      plVar7 = plVar1;
    }
}

 FUN_1800a9140((ulonglong *)&DAT_1801fcab8,lVar10 * 2,DAT_1801fcaa8);
  DAT_1801fcad0 = lVar10 - 1;
  DAT_1801fcad8 = lVar10;
  plVar7 = (longlong *)*DAT_1801fcaa8;
joined_r0x0001800e2098:
  do {
    while( true) {
while( true ) {
        if (plVar7 == plVar8) {
          return;
        }
        plVar1 = (longlong *)*plVar7;
        puVar11 = (int32_t *)
                  (((((((((((ulonglong)*(byte *)(plVar7 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                          (ulonglong)*(byte *)((longlong)plVar7 + 0x11)) * 0x100000001b3 ^
                         (ulonglong)*(byte *)((longlong)plVar7 + 0x12)) * 0x100000001b3 ^
                        (ulonglong)*(byte *)((longlong)plVar7 + 0x13)) * 0x100000001b3 ^
                       (ulonglong)*(byte *)((longlong)plVar7 + 0x14)) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar7 + 0x15)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar7 + 0x16)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar7 + 0x17)) * 0x100000001b3 & DAT_1801fcad0)
                   * 0x10 + DAT_1801fcab8);
        if ((longlong *)*puVar11 != plVar8) break;
        *puVar11 = plVar7;
        puVar11[1] = plVar7;
        plVar7 = plVar1;
      }
      plVar2 = (longlong *)puVar11[1];
      if (plVar7[2] != plVar2[2]) break;
      plVar2 = (longlong *)*plVar2;
      if (plVar2 != plVar7) {
        puVar3 = (int32_t *)plVar7[1];
        *puVar3 = plVar1;
        puVar4 = (int32_t *)plVar1[1];
        *puVar4 = plVar2;
        puVar5 = (int32_t *)plVar2[1];
        *puVar5 = plVar7;
        plVar2[1] = (longlong)puVar4;
        plVar1[1] = (longlong)puVar3;
        plVar7[1] = (longlong)puVar5;
      }
      puVar11[1] = plVar7;
      plVar7 = plVar1;
    }
}

