#include "FUN_1800ced50.h"
#include <stdint.h>
#include <stddef.h>

 FUN_1800ced50(param_4,plVar5,(longlong *)&local_1f8);
      pauVar15 = local_1e8;
      pauVar14 = local_1f8;
    }
    else {
      *plVar5 = (longlong)pauVar14;
      plVar5[1] = (longlong)ppuVar2;
      plVar5[2] = (longlong)pauVar17;
      param_4[1] = param_4[1] + 0x18;
      pauVar14 = pauVar15;
    }
    *param_3 = *(int32_t *)(param_4[1] + -0x18);
    pWVar6 = (LPCWSTR)param_4[1];
    param_3[1] = *(longlong *)(pWVar6 + -8) - *(longlong *)(pWVar6 + -0xc);
    if (pauVar14 != (int32_t (*) [32])0x0) {
pauVar17 = pauVar14;
      if ((0xfff < (ulonglong)((longlong)pauVar15 - (longlong)pauVar14)) &&
         (pauVar17 = *(int32_t (**) [32])(pauVar14[-1] + 0x18),
         0x1f < (ulonglong)((longlong)pauVar14 + (-8 - (longlong)pauVar17)))) {
        FUN_18012b7b4();
        goto LAB_1800cc8f6;
      }
      thunk_FUN_18012d5e8(pauVar17);
    }
}

longlong * FUN_1800ced50(longlong *param_1,longlong *param_2,longlong *param_3) {
ulonglong uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  LPVOID pvVar7;
  code *pcVar8;
  void *pvVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  ulonglong uVar14;
  LPVOID pvVar15;
  longlong *plVar16;
  
  lVar4 = *param_1;
  lVar13 = ((longlong)param_2 - lVar4) / 6 + ((longlong)param_2 - lVar4 >> 0x3f);
  lVar5 = (param_1[1] - lVar4) / 0x18;
  if (lVar5 == 0xaaaaaaaaaaaaaaa) {
    FUN_1800aa480();
    pcVar8 = (code *)swi(3);
    plVar10 = (longlong *)(*pcVar8)();
    return plVar10;
  }
  uVar1 = lVar5 + 1;
  uVar14 = (param_1[2] - lVar4) / 0x18;
  if (0xaaaaaaaaaaaaaaa - (uVar14 >> 1) < uVar14) {
LAB_1800cf03a:
    FUN_1800ba8a0();
    pcVar8 = (code *)swi(3);
    plVar10 = (longlong *)(*pcVar8)();
    return plVar10;
  }
  uVar14 = (uVar14 >> 1) + uVar14;
  uVar11 = uVar1;
  if (uVar1 <= uVar14) {
    uVar11 = uVar14;
  }
  if (0xaaaaaaaaaaaaaaa < uVar11) goto LAB_1800cf03a;
  plVar10 = (longlong *)0x0;
  uVar14 = uVar11 * 0x18;
  if (uVar14 != 0) {
    if (uVar14 < 0x1000) {
      plVar10 = (longlong *)operator_new(uVar14);
    }
    else {
      if (uVar14 + 0x27 <= uVar14) goto LAB_1800cf03a;
      pvVar9 = operator_new(uVar14 + 0x27);
      if (pvVar9 == (void *)0x0) goto LAB_1800cf034;
      plVar10 = (longlong *)((longlong)pvVar9 + 0x27U & 0xffffffffffffffe0);
      plVar10[-1] = (longlong)pvVar9;
    }
  }
  lVar4 = param_3[1];
  lVar5 = param_3[2];
  plVar3 = plVar10 + ((lVar13 >> 2) - (lVar13 >> 0x3f)) * 3;
  lVar13 = *param_3;
  plVar12 = plVar3 + 3;
  *param_3 = 0;
  param_3[2] = 0;
  param_3[1] = 0;
  plVar3[1] = lVar4;
  *plVar3 = lVar13;
  plVar3[2] = lVar5;
  plVar6 = (longlong *)param_1[1];
  plVar16 = (longlong *)*param_1;
  plVar2 = plVar10;
  if (param_2 == plVar6) {
    for (; plVar12 = plVar2, plVar16 != plVar6; plVar16 = plVar16 + 3) {
      lVar4 = plVar16[2];
      lVar5 = plVar16[1];
      lVar13 = *plVar16;
      plVar16[2] = 0;
      plVar16[1] = 0;
      *plVar16 = 0;
      *plVar12 = lVar13;
      plVar12[1] = lVar5;
      plVar12[2] = lVar4;
      plVar2 = plVar12 + 3;
    }
  }
  else {
    for (; plVar16 != param_2; plVar16 = plVar16 + 3) {
      lVar4 = plVar16[2];
      lVar5 = plVar16[1];
      lVar13 = *plVar16;
      plVar16[2] = 0;
      plVar16[1] = 0;
      *plVar16 = 0;
      *plVar2 = lVar13;
      plVar2[1] = lVar5;
      plVar2[2] = lVar4;
      plVar2 = plVar2 + 3;
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
  *param_1 = (longlong)plVar10;
  param_1[1] = (longlong)(plVar10 + uVar1 * 3);
  param_1[2] = (longlong)(plVar10 + uVar11 * 3);
  return plVar3;
}
}

