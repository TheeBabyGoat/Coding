#include "FUN_1800aa140.h"
#include <stdint.h>
#include <stddef.h>

 FUN_1800aa140(param_4,puVar5,puVar1);
    }
    else {
      FUN_1800b9f10(puVar5,puVar1);
      param_4[1] = param_4[1] + 0x20;
    }
    puVar1 = (int32_t *)*param_2;
    do {
      pvVar10 = (HANDLE)puVar1[8];
      DVar9 = FUN_1801235d8(pvVar10,&local_298);
      if (DVar9 == 0x12) {
*param_2 = 0;
        plVar6 = (longlong *)param_2[1];
        param_2[1] = 0;
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar6 + 1;
          lVar8 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar3 = (int *)((longlong)plVar6 + 0xc);
            iVar4 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar6 + 8))(plVar6);
            }
          }
        }
        goto LAB_1800a9552;
      }
}

int32_t * FUN_1800aa140(longlong *param_1,int32_t *param_2,int32_t *param_3) {
ulonglong uVar1;
  int32_t *puVar2;
  longlong lVar3;
  int32_t *puVar4;
  longlong *plVar5;
  LPVOID pvVar6;
  code *pcVar7;
  int32_t uVar8;
  longlong lVar9;
  void *pvVar10;
  int32_t *puVar11;
  int32_t *puVar12;
  ulonglong uVar13;
  LPVOID pvVar14;
  longlong *plVar15;
  ulonglong uVar16;
  int32_t *puVar17;
  
  lVar3 = *param_1;
  lVar9 = param_1[1] - lVar3 >> 5;
  if (lVar9 == 0x7ffffffffffffff) {
    FUN_1800aa480();
    pcVar7 = (code *)swi(3);
    puVar12 = (int32_t *)(*pcVar7)();
    return puVar12;
  }
  uVar1 = lVar9 + 1;
  uVar13 = param_1[2] - lVar3 >> 5;
  if (uVar13 <= 0x7ffffffffffffff - (uVar13 >> 1)) {
    uVar13 = (uVar13 >> 1) + uVar13;
    uVar16 = uVar1;
    if (uVar1 <= uVar13) {
      uVar16 = uVar13;
    }
    if (uVar16 < 0x800000000000000) {
      uVar13 = uVar16 * 0x20;
      if (uVar13 == 0) {
        puVar12 = (int32_t *)0x0;
      }
      else if (uVar13 < 0x1000) {
        puVar12 = (int32_t *)operator_new(uVar13);
      }
      else {
        if (uVar13 + 0x27 <= uVar13) goto LAB_1800aa3d7;
        pvVar10 = operator_new(uVar13 + 0x27);
        if (pvVar10 == (void *)0x0) {
          FUN_18012b7b4();
          pcVar7 = (code *)swi(3);
          puVar12 = (int32_t *)(*pcVar7)();
          return puVar12;
        }
        puVar12 = (int32_t *)((longlong)pvVar10 + 0x27U & 0xffffffffffffffe0);
        puVar12[-1] = pvVar10;
      }
      puVar2 = (int32_t *)(((longlong)param_2 - lVar3 & 0xffffffffffffffe0U) + (longlong)puVar12)
      ;
      FUN_1800b9f10(puVar2,param_3);
      puVar4 = (int32_t *)param_1[1];
      puVar11 = (int32_t *)*param_1;
      puVar17 = puVar12;
      if (param_2 == puVar4) {
        for (; puVar11 != puVar4; puVar11 = puVar11 + 4) {
          *puVar17 = 0;
          puVar17[1] = 0;
          puVar17[2] = 0;
          puVar17[3] = 0;
          uVar8 = puVar11[1];
          *puVar17 = *puVar11;
          puVar17[1] = uVar8;
          uVar8 = puVar11[3];
          puVar17[2] = puVar11[2];
          puVar17[3] = uVar8;
          *(int32_t *)puVar11 = 0;
          puVar11[2] = 0;
          puVar11[3] = 7;
          puVar17 = puVar17 + 4;
        }
      }
      else {
        for (; puVar11 != param_2; puVar11 = puVar11 + 4) {
          *puVar17 = 0;
          puVar17[1] = 0;
          puVar17[2] = 0;
          puVar17[3] = 0;
          uVar8 = puVar11[1];
          *puVar17 = *puVar11;
          puVar17[1] = uVar8;
          uVar8 = puVar11[3];
          puVar17[2] = puVar11[2];
          puVar17[3] = uVar8;
          *(int32_t *)puVar11 = 0;
          puVar11[2] = 0;
          puVar11[3] = 7;
          puVar17 = puVar17 + 4;
        }
        puVar4 = (int32_t *)param_1[1];
        puVar11 = puVar2;
        if (param_2 != puVar4) {
          do {
            puVar17 = puVar11 + 4;
            *puVar17 = 0;
            puVar11[5] = 0;
            puVar11[6] = 0;
            puVar11[7] = 0;
            uVar8 = param_2[1];
            *puVar17 = *param_2;
            puVar11[5] = uVar8;
            uVar8 = param_2[3];
            puVar11[6] = param_2[2];
            puVar11[7] = uVar8;
            *(int32_t *)param_2 = 0;
            param_2[2] = 0;
            param_2[3] = 7;
            param_2 = param_2 + 4;
            puVar11 = puVar17;
          } while (param_2 != puVar4);
        }
      }
      plVar15 = (longlong *)*param_1;
      if (plVar15 != (longlong *)0x0) {
        plVar5 = (longlong *)param_1[1];
        for (; plVar15 != plVar5; plVar15 = plVar15 + 4) {
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
        thunk_FUN_18012d5e8(pvVar14);
      }
      *param_1 = (longlong)puVar12;
      param_1[1] = (longlong)(puVar12 + uVar1 * 4);
      param_1[2] = (longlong)(puVar12 + uVar16 * 4);
      return puVar2;
    }
  }
LAB_1800aa3d7:
  FUN_1800ba8a0();
  pcVar7 = (code *)swi(3);
  puVar12 = (int32_t *)(*pcVar7)();
  return puVar12;
}
}

