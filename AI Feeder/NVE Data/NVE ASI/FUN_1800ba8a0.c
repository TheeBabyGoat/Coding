#include "FUN_1800ba8a0.h"
#include <stdint.h>
#include <stddef.h>

 FUN_1800ba8a0();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar7 = param_2 * 8;
    if (uVar7 == 0) {
puVar8 = (int32_t *)0x0;
    }
}

 FUN_1800ba8a0();
        pcVar5 = (code *)swi(3);
        puVar7 = (int32_t *)(*pcVar5)();
        return puVar7;
      }
      pvVar6 = operator_new(_Var8 + 0x27);
      if (pvVar6 == (void *)0x0) goto LAB_1800aaafa;
      puVar7 = (int32_t *)((longlong)pvVar6 + 0x27U & 0xffffffffffffffe0);
      puVar7[-1] = pvVar6;
    }
  }
  param_1[3] = uVar12;
  uVar12 = lVar2 * 2;
  param_1[2] = lVar2 + param_2;
  puVar13 = (int32_t *)(uVar12 + (longlong)puVar7);
  if (uVar3 < 8) {
FUN_180150fd0(puVar7,param_1,uVar12);
    lVar9 = param_4;
    if (param_4 != 0) {
      for (; lVar9 != 0; lVar9 = lVar9 + -1) {
        *puVar13 = param_5;
        puVar13 = puVar13 + 1;
      }
    }
    *(int32_t *)((longlong)puVar7 + (lVar2 + param_4) * 2) = 0;
  }
}

 FUN_1800ba8a0();
          pcVar5 = (code *)swi(3);
          puVar7 = (int32_t *)(*pcVar5)();
          return puVar7;
        }
        goto LAB_1800b73f8;
      }
      puVar7 = (int32_t *)operator_new(uVar1);
    }
  }
  else {
    uVar8 = 0x8000000000000027;
LAB_1800b73f8:
    pvVar6 = operator_new(uVar8);
    if (pvVar6 == (void *)0x0) goto LAB_1800b74ec;
    puVar7 = (int32_t *)((longlong)pvVar6 + 0x27U & 0xffffffffffffffe0);
    puVar7[-1] = pvVar6;
  }
  param_1[3] = uVar9;
  puVar10 = (int32_t *)(param_4 + (longlong)puVar7);
  param_1[2] = lVar2 + param_2;
  if (uVar3 < 0x10) {
FUN_180150fd0(puVar7,param_1,param_4);
    FUN_180150fd0(puVar10,param_5,param_6);
    FUN_180150fd0((int32_t *)((longlong)puVar10 + param_6),
                  (int32_t *)(param_4 + (longlong)param_1),(lVar2 - param_4) + 1);
  }
}

 FUN_1800ba8a0();
        pcVar4 = (code *)swi(3);
        plVar6 = (longlong *)(*pcVar4)();
        return plVar6;
      }
      pvVar5 = operator_new(_Var7 + 0x27);
      if (pvVar5 == (void *)0x0) goto LAB_1800b802c;
      puVar11 = (int32_t *)((longlong)pvVar5 + 0x27U & 0xffffffffffffffe0);
      puVar11[-1] = pvVar5;
    }
  }
  param_1[3] = uVar10;
  param_1[2] = param_2;
  FUN_180150fd0(puVar11,param_4,param_2 * 2);
  *(int32_t *)(param_2 * 2 + (longlong)puVar11) = 0;
  if (7 < uVar2) {
pvVar3 = (LPVOID)*param_1;
    pvVar8 = pvVar3;
    if ((0xfff < uVar2 * 2 + 2) &&
       (pvVar8 = *(LPVOID *)((longlong)pvVar3 + -8),
       0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar8)))) {
LAB_1800b802c:
      FUN_18012b7b4();
      pcVar4 = (code *)swi(3);
      plVar6 = (longlong *)(*pcVar4)();
      return plVar6;
    }
    thunk_FUN_18012d5e8(pvVar8);
  }
}

 FUN_1800ba8a0();
        pcVar5 = (code *)swi(3);
        puVar7 = (int32_t *)(*pcVar5)();
        return puVar7;
      }
      pvVar6 = operator_new(_Var8 + 0x27);
      if (pvVar6 == (void *)0x0) goto LAB_1800b823b;
      puVar7 = (int32_t *)((longlong)pvVar6 + 0x27U & 0xffffffffffffffe0);
      puVar7[-1] = pvVar6;
    }
  }
  uVar9 = lVar2 * 2;
  param_1[2] = lVar2 + param_2;
  param_1[3] = uVar10;
  if (uVar3 < 8) {
FUN_180150fd0(puVar7,param_1,uVar9);
    *(int32_t *)(uVar9 + (longlong)puVar7) = param_4;
    *(int32_t *)(uVar9 + 2 + (longlong)puVar7) = 0;
  }
}

 FUN_1800ba8a0();
        pcVar6 = (code *)swi(3);
        puVar8 = (int32_t *)(*pcVar6)();
        return puVar8;
      }
      pvVar7 = operator_new(_Var9 + 0x27);
      if (pvVar7 == (void *)0x0) goto LAB_1800b83fc;
      puVar8 = (int32_t *)((longlong)pvVar7 + 0x27U & 0xffffffffffffffe0);
      puVar8[-1] = pvVar7;
    }
  }
  param_1[2] = lVar3 + param_2;
  uVar10 = lVar3 * 2;
  param_1[3] = uVar11;
  puVar2 = (int32_t *)((longlong)puVar8 + (lVar3 + param_5) * 2);
  if (uVar4 < 8) {
FUN_180150fd0(puVar8,param_1,uVar10);
    FUN_180150fd0((int32_t *)(uVar10 + (longlong)puVar8),param_4,param_5 * 2);
    *puVar2 = 0;
  }
}

 FUN_1800ba8a0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pvVar3 = operator_new(_Var4 + 0x27);
    if (pvVar3 == (void *)0x0) {
FUN_18012b7b4();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
}

 FUN_1800ba8a0();
          pcVar6 = (code *)swi(3);
          puVar8 = (int32_t *)(*pcVar6)();
          return puVar8;
        }
        goto LAB_1800b9078;
      }
      puVar8 = (int32_t *)operator_new(uVar1);
    }
  }
  else {
    uVar9 = 0x8000000000000027;
LAB_1800b9078:
    pvVar7 = operator_new(uVar9);
    if (pvVar7 == (void *)0x0) goto LAB_1800b914d;
    puVar8 = (int32_t *)((longlong)pvVar7 + 0x27U & 0xffffffffffffffe0);
    puVar8[-1] = pvVar7;
  }
  param_1[2] = uVar3 + param_2;
  pauVar2 = (int32_t (*) [32])(uVar3 + (longlong)puVar8);
  param_1[3] = uVar10;
  if (uVar4 < 0x10) {
FUN_180150fd0(puVar8,param_1,uVar3);
    FUN_180151670(pauVar2,param_5,param_4);
    (*pauVar2)[param_4] = 0;
  }
}

 FUN_1800ba8a0();
          pcVar5 = (code *)swi(3);
          puVar7 = (int32_t *)(*pcVar5)();
          return puVar7;
        }
        goto LAB_1800b96ce;
      }
      puVar7 = (int32_t *)operator_new(uVar1);
    }
  }
  else {
    uVar8 = 0x8000000000000027;
LAB_1800b96ce:
    pvVar6 = operator_new(uVar8);
    if (pvVar6 == (void *)0x0) goto LAB_1800b976a;
    puVar7 = (int32_t *)((longlong)pvVar6 + 0x27U & 0xffffffffffffffe0);
    puVar7[-1] = pvVar6;
  }
  param_1[2] = lVar2 + param_2;
  param_1[3] = uVar9;
  if (uVar3 < 0x10) {
FUN_180150fd0(puVar7,param_1,lVar2 + 1U);
  }
}

 FUN_1800ba8a0();
          pcVar5 = (code *)swi(3);
          puVar7 = (int32_t *)(*pcVar5)();
          return puVar7;
        }
        goto LAB_1800b982a;
      }
      puVar7 = (int32_t *)operator_new(uVar1);
    }
  }
  else {
    uVar8 = 0x8000000000000027;
LAB_1800b982a:
    pvVar6 = operator_new(uVar8);
    if (pvVar6 == (void *)0x0) goto LAB_1800b98f3;
    puVar7 = (int32_t *)((longlong)pvVar6 + 0x27U & 0xffffffffffffffe0);
    puVar7[-1] = pvVar6;
  }
  param_1[2] = uVar2 + param_2;
  puVar10 = (int32_t *)(uVar2 + (longlong)puVar7);
  param_1[3] = uVar9;
  if (uVar3 < 0x10) {
FUN_180150fd0(puVar7,param_1,uVar2);
    FUN_180150fd0(puVar10,param_4,param_5);
    *(int32_t *)((longlong)puVar10 + param_5) = 0;
  }
}

 FUN_1800ba8a0();
          pcVar5 = (code *)swi(3);
          puVar7 = (int32_t *)(*pcVar5)();
          return puVar7;
        }
        goto LAB_1800b9a46;
      }
      puVar7 = (int32_t *)operator_new(uVar1);
    }
  }
  else {
    uVar8 = 0x8000000000000027;
LAB_1800b9a46:
    pvVar6 = operator_new(uVar8);
    if (pvVar6 == (void *)0x0) goto LAB_1800b9afa;
    puVar7 = (int32_t *)((longlong)pvVar6 + 0x27U & 0xffffffffffffffe0);
    puVar7[-1] = pvVar6;
  }
  param_1[2] = uVar2 + param_2;
  param_1[3] = uVar9;
  if (uVar3 < 0x10) {
FUN_180150fd0(puVar7,param_1,uVar2);
    *(int32_t *)(uVar2 + (longlong)puVar7) = param_4;
    *(int32_t *)(uVar2 + 1 + (longlong)puVar7) = 0;
  }
}

 FUN_1800ba8a0();
      pcVar2 = (code *)swi(3);
      puVar5 = (int32_t *)(*pcVar2)();
      return puVar5;
    }
    pvVar4 = operator_new(_Var7 + 0x27);
    if (pvVar4 == (void *)0x0) {
FUN_18012b7b4();
      pcVar2 = (code *)swi(3);
      puVar5 = (int32_t *)(*pcVar2)();
      return puVar5;
    }
}

 FUN_1800ba8a0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    uVar4 = 0x8000000000000027;
    uVar3 = 0x7fffffffffffffff;
  }
  pvVar5 = operator_new(uVar4);
  if (pvVar5 == (void *)0x0) {
FUN_18012b7b4();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
}

 FUN_1800ba8a0();
    pcVar2 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar2)();
    return pvVar3;
  }
  pvVar3 = operator_new(_Var1);
  if (pvVar3 != (void *)0x0) {
pvVar4 = (void *)((longlong)pvVar3 + 0x27U & 0xffffffffffffffe0);
    *(void **)((longlong)pvVar4 + -8) = pvVar3;
    *param_2 = *param_2 - 1;
    return pvVar4;
  }
}

 FUN_1800ba8a0();
      pcVar3 = (code *)swi(3);
      puVar7 = (int32_t *)(*pcVar3)();
      return puVar7;
    }
  }
  else {
    uVar5 = 0x8000000000000027;
    uVar8 = 0x7fffffffffffffff;
  }
  pvVar6 = operator_new(uVar5);
  if (pvVar6 == (void *)0x0) {
FUN_18012b7b4();
    pcVar3 = (code *)swi(3);
    puVar7 = (int32_t *)(*pcVar3)();
    return puVar7;
  }
}

void FUN_1800ba8a0(void) {
code *pcVar1;
  longlong local_28 [5];
  
  FUN_1800ba790(local_28);
  FUN_1801279a8(local_28,&DAT_1801e9050);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}
}

 FUN_1800ba8a0();
    pcVar3 = (code *)swi(3);
    puVar6 = (int32_t *)(*pcVar3)();
    return puVar6;
  }
  uVar7 = (uVar7 >> 1) + uVar7;
  uVar10 = uVar1;
  if (uVar1 <= uVar7) {
uVar10 = uVar7;
  }
}

 FUN_1800ba8a0();
    pcVar3 = (code *)swi(3);
    puVar6 = (int32_t *)(*pcVar3)();
    return puVar6;
  }
  uVar7 = (uVar7 >> 1) + uVar7;
  uVar10 = uVar1;
  if (uVar1 <= uVar7) {
uVar10 = uVar7;
  }
}

 FUN_1800ba8a0();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar13 = (uVar13 >> 1) + uVar13;
    uVar7 = uVar10;
    if (uVar10 <= uVar13) {
uVar7 = uVar13;
    }
}

 FUN_1800ba8a0();
    pcVar6 = (code *)swi(3);
    puVar9 = (int32_t *)(*pcVar6)();
    return puVar9;
  }
  uVar10 = (uVar10 >> 1) + uVar10;
  uVar13 = uVar1;
  if (uVar1 <= uVar10) {
uVar13 = uVar10;
  }
}

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
}

 FUN_1800ba8a0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pvVar2 = operator_new(param_2 + 0x27);
    if (pvVar2 == (void *)0x0) {
FUN_18012b7b4();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
}

 FUN_1800ba8a0();
          pcVar3 = (code *)swi(3);
          puVar6 = (int32_t *)(*pcVar3)();
          return puVar6;
        }
        goto LAB_1800cfab2;
      }
      puVar7 = (int32_t *)operator_new(uVar1);
    }
  }
  else {
    uVar4 = 0x8000000000000027;
    uVar8 = 0x7fffffffffffffff;
LAB_1800cfab2:
    pvVar5 = operator_new(uVar4);
    if (pvVar5 == (void *)0x0) {
FUN_18012b7b4();
      pcVar3 = (code *)swi(3);
      puVar6 = (int32_t *)(*pcVar3)();
      return puVar6;
    }
}

 FUN_1800ba8a0();
        pcVar5 = (code *)swi(3);
        puVar7 = (int32_t *)(*pcVar5)();
        return puVar7;
      }
      pvVar6 = operator_new(_Var8 + 0x27);
      if (pvVar6 == (void *)0x0) goto LAB_1800cfcc3;
      puVar7 = (int32_t *)((longlong)pvVar6 + 0x27U & 0xffffffffffffffe0);
      puVar7[-1] = pvVar6;
    }
  }
  param_1[2] = lVar2 + param_2;
  uVar9 = lVar2 * 2 + 2;
  param_1[3] = uVar10;
  if (uVar3 < 8) {
FUN_180150fd0(puVar7,param_1,uVar9);
  }
}

 FUN_1800ba8a0();
          pcVar4 = (code *)swi(3);
          plVar6 = (longlong *)(*pcVar4)();
          return plVar6;
        }
        goto LAB_1800de79c;
      }
      puVar10 = (int32_t *)operator_new(uVar1);
    }
  }
  else {
    uVar7 = 0x8000000000000027;
LAB_1800de79c:
    pvVar5 = operator_new(uVar7);
    if (pvVar5 == (void *)0x0) goto LAB_1800de83b;
    puVar10 = (int32_t *)((longlong)pvVar5 + 0x27U & 0xffffffffffffffe0);
    puVar10[-1] = pvVar5;
  }
  param_1[2] = param_3;
  param_1[3] = uVar9;
  FUN_180150fd0(puVar10,param_2,param_3);
  *(int32_t *)((longlong)puVar10 + param_3) = 0;
  if (0xf < uVar2) {
pvVar3 = (LPVOID)*param_1;
    pvVar8 = pvVar3;
    if ((0xfff < uVar2 + 1) &&
       (pvVar8 = *(LPVOID *)((longlong)pvVar3 + -8),
       0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar8)))) {
LAB_1800de83b:
      FUN_18012b7b4();
      pcVar4 = (code *)swi(3);
      plVar6 = (longlong *)(*pcVar4)();
      return plVar6;
    }
    thunk_FUN_18012d5e8(pvVar8);
  }
}

 FUN_1800ba8a0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pvVar2 = operator_new(uVar4 + 0x27);
    if (pvVar2 == (void *)0x0) {
FUN_18012b7b4();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
}

 FUN_1800ba8a0();
          pcVar7 = (code *)swi(3);
          puVar12 = (int32_t *)(*pcVar7)();
          return puVar12;
        }
        pvVar11 = operator_new(uVar13 + 0x27);
        if (pvVar11 == (void *)0x0) {
FUN_18012b7b4();
          goto LAB_1800f5aab;
        }
}

 FUN_1800ba8a0();
          pcVar5 = (code *)swi(3);
          puVar7 = (int32_t *)(*pcVar5)();
          return puVar7;
        }
        goto LAB_1800f7609;
      }
      puVar12 = (int32_t *)operator_new(uVar11);
    }
  }
  puVar7 = (int32_t *)(((longlong)puVar12 - lVar2) + (longlong)param_2);
  *puVar7 = *param_3;
  puVar3 = (int32_t *)*param_1;
  if (param_2 == (int32_t *)param_1[1]) {
uVar8 = param_1[1] - (longlong)puVar3;
    puVar9 = puVar12;
    param_2 = puVar3;
  }
}

 FUN_1800ba8a0();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar4 = uVar4 * 4;
  if (uVar4 == 0) {
puVar8 = (int32_t *)0x0;
  }
}

 FUN_1800ba8a0();
      pcVar2 = (code *)swi(3);
      puVar6 = (int32_t *)(*pcVar2)();
      return puVar6;
    }
  }
  else {
    uVar4 = 0x8000000000000027;
    uVar3 = 0x7fffffffffffffff;
  }
  pvVar5 = operator_new(uVar4);
  if (pvVar5 == (void *)0x0) {
FUN_18012b7b4();
    pcVar2 = (code *)swi(3);
    puVar6 = (int32_t *)(*pcVar2)();
    return puVar6;
  }
}

 FUN_1800ba8a0();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pvVar6 = operator_new(_Var8 + 0x27);
        if (pvVar6 == (void *)0x0) {
FUN_18012b7b4();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
}

 FUN_1800ba8a0();
    pcVar2 = (code *)swi(3);
    puVar5 = (int32_t *)(*pcVar2)();
    return puVar5;
  }
  uVar6 = (uVar6 >> 1) + uVar6;
  uVar10 = uVar9;
  if (uVar9 <= uVar6) {
uVar10 = uVar6;
  }
}

 FUN_1800ba8a0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar4 = uVar5 * 8;
    if (uVar4 != 0) {
if (uVar4 < 0x1000) {
        puVar7 = (int32_t *)operator_new(uVar4);
      }
      else {
        if (uVar4 + 0x27 <= uVar4) goto LAB_1800fce75;
        pvVar3 = operator_new(uVar4 + 0x27);
        if (pvVar3 == (void *)0x0) {
LAB_1800fce81:
          FUN_18012b7b4();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        puVar7 = (int32_t *)((longlong)pvVar3 + 0x27U & 0xffffffffffffffe0);
        puVar7[-1] = pvVar3;
      }
    }
}

 FUN_1800ba8a0();
          pcVar5 = (code *)swi(3);
          puVar7 = (int32_t *)(*pcVar5)();
          return puVar7;
        }
        goto LAB_180117bf7;
      }
      puVar7 = (int32_t *)operator_new(uVar1);
    }
  }
  else {
    uVar8 = 0x8000000000000027;
LAB_180117bf7:
    pvVar6 = operator_new(uVar8);
    if (pvVar6 == (void *)0x0) goto LAB_180117cab;
    puVar7 = (int32_t *)((longlong)pvVar6 + 0x27U & 0xffffffffffffffe0);
    puVar7[-1] = pvVar6;
  }
  param_1[2] = uVar2 + 1;
  param_1[3] = uVar9;
  if (uVar3 < 0x10) {
FUN_180150fd0(puVar7,param_1,uVar2);
    *(int32_t *)(uVar2 + (longlong)puVar7) = param_4;
    *(int32_t *)(uVar2 + 1 + (longlong)puVar7) = 0;
  }
}

 FUN_1800ba8a0();
        pcVar1 = (code *)swi(3);
        puVar6 = (ulonglong *)(*pcVar1)();
        return puVar6;
      }
      pvVar4 = operator_new(_Var7 + 0x27);
      if (pvVar4 == (void *)0x0) {
FUN_18012b7b4();
        pcVar1 = (code *)swi(3);
        puVar6 = (ulonglong *)(*pcVar1)();
        return puVar6;
      }
}

