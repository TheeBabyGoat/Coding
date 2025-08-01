#include "FUN_1800c6d30.h"
#include <stdint.h>
#include <stddef.h>

 FUN_1800c6d30((longlong *)&DAT_1801fbcc8,DAT_1801fbcd0,plVar2);
        }
        else {
          FUN_1800ba630(DAT_1801fbcd0,plVar2);
          DAT_1801fbcd0 = DAT_1801fbcd0 + 4;
        }
        plVar6 = DAT_1801fbcd0;
        plVar3 = plStack_100;
      }
      _DAT_1801fbcc0 = "FirstPerson";
      plVar7 = local_108;
      if (local_108 != (longlong *)0x0) {
for (; plVar7 != plVar3; plVar7 = plVar7 + 4) {
          FUN_1800a6800(plVar7);
        }
        plVar7 = local_108;
        if ((0xfff < ((longlong)local_f8 - (longlong)local_108 & 0xffffffffffffffe0U)) &&
           (plVar7 = (longlong *)local_108[-1],
           0x1f < (ulonglong)((longlong)local_108 + (-8 - (longlong)plVar7)))) {
          FUN_18012b7b4();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        thunk_FUN_18012d5e8(plVar7);
        local_108 = (longlong *)0x0;
        plStack_100 = (longlong *)0x0;
        local_f8 = (longlong *)0x0;
      }
}

 FUN_1800c6d30((longlong *)&DAT_1801fbdc8,DAT_1801fbdd0,puVar2);
        }
        else {
          FUN_1800ba630(DAT_1801fbdd0,puVar2);
          DAT_1801fbdd0 = DAT_1801fbdd0 + 4;
        }
        plVar5 = DAT_1801fbdd0;
      }
      DAT_1801fbdc0 = "SkyPlaneColor";
      atexit((_func_5014 *)&LAB_180156020);
      puVar6 = &DAT_1801fbf54;
      _Init_thread_footer(&DAT_1801fbf54);
    }
  }
  if (*piVar8 < DAT_1801fbf58) {
puVar6 = &DAT_1801fbf58;
    FUN_180125398(&DAT_1801fbf58);
    if (DAT_1801fbf58 == -1) {
      FUN_1800c5680(0x1801fbde0,&DAT_1801fbf28,"SunColor");
      atexit((_func_5014 *)&LAB_180156010);
      puVar6 = &DAT_1801fbf58;
      _Init_thread_footer(&DAT_1801fbf58);
    }
  }
}

int32_t * FUN_1800c6d30(longlong *param_1,int32_t *param_2,int32_t *param_3) {
ulonglong uVar1;
  longlong lVar2;
  int32_t *puVar3;
  code *pcVar4;
  int32_t uVar5;
  longlong lVar6;
  int32_t *puVar7;
  int32_t *puVar8;
  int32_t *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int32_t *puVar12;
  
  lVar2 = *param_1;
  lVar6 = param_1[1] - lVar2 >> 5;
  if (lVar6 != 0x7ffffffffffffff) {
    uVar1 = lVar6 + 1;
    uVar10 = param_1[2] - lVar2 >> 5;
    uVar11 = 0x7ffffffffffffff;
    if ((uVar10 <= 0x7ffffffffffffff - (uVar10 >> 1)) &&
       (uVar11 = (uVar10 >> 1) + uVar10, uVar11 < uVar1)) {
      uVar11 = uVar1;
    }
    puVar7 = (int32_t *)FUN_1800ba8c0(uVar10,uVar11);
    puVar9 = (int32_t *)(((longlong)param_2 - lVar2 & 0xffffffffffffffe0U) + (longlong)puVar7);
    FUN_1800ba630(puVar9,param_3);
    puVar3 = (int32_t *)param_1[1];
    puVar8 = (int32_t *)*param_1;
    puVar12 = puVar7;
    if (param_2 == puVar3) {
      for (; puVar8 != puVar3; puVar8 = puVar8 + 4) {
        *puVar12 = 0;
        puVar12[1] = 0;
        puVar12[2] = 0;
        puVar12[3] = 0;
        uVar5 = puVar8[1];
        *puVar12 = *puVar8;
        puVar12[1] = uVar5;
        uVar5 = puVar8[3];
        puVar12[2] = puVar8[2];
        puVar12[3] = uVar5;
        *(int32_t *)puVar8 = 0;
        puVar8[2] = 0;
        puVar8[3] = 0xf;
        puVar12 = puVar12 + 4;
      }
    }
    else {
      for (; puVar8 != param_2; puVar8 = puVar8 + 4) {
        *puVar12 = 0;
        puVar12[1] = 0;
        puVar12[2] = 0;
        puVar12[3] = 0;
        uVar5 = puVar8[1];
        *puVar12 = *puVar8;
        puVar12[1] = uVar5;
        uVar5 = puVar8[3];
        puVar12[2] = puVar8[2];
        puVar12[3] = uVar5;
        *(int32_t *)puVar8 = 0;
        puVar8[2] = 0;
        puVar8[3] = 0xf;
        puVar12 = puVar12 + 4;
      }
      puVar3 = (int32_t *)param_1[1];
      puVar8 = puVar9;
      if (param_2 != puVar3) {
        do {
          puVar12 = puVar8 + 4;
          *puVar12 = 0;
          puVar8[5] = 0;
          puVar8[6] = 0;
          puVar8[7] = 0;
          uVar5 = param_2[1];
          *puVar12 = *param_2;
          puVar8[5] = uVar5;
          uVar5 = param_2[3];
          puVar8[6] = param_2[2];
          puVar8[7] = uVar5;
          *(int32_t *)param_2 = 0;
          param_2[2] = 0;
          param_2[3] = 0xf;
          param_2 = param_2 + 4;
          puVar8 = puVar12;
        } while (param_2 != puVar3);
      }
    }
    FUN_1800c6c70(param_1,(longlong)puVar7,uVar1,uVar11);
    return puVar9;
  }
  FUN_1800aa480();
  pcVar4 = (code *)swi(3);
  puVar9 = (int32_t *)(*pcVar4)();
  return puVar9;
}
}

