#include "FUN_1800ba540.h"
#include <stdint.h>
#include <stddef.h>

 FUN_1800ba540();
    pcVar5 = (code *)swi(3);
    puVar7 = (int32_t *)(*pcVar5)();
    return puVar7;
  }
  uVar10 = lVar2 + param_2 | 7;
  uVar3 = param_1[3];
  puVar7 = (int32_t *)0x0;
  if ((uVar10 < 0x7fffffffffffffff) && (uVar3 <= 0x7ffffffffffffffe - (uVar3 >> 1))) {
uVar1 = uVar3 + (uVar3 >> 1);
    uVar12 = uVar10;
    if (uVar10 < uVar1) {
      uVar12 = uVar1;
    }
    if (0x7fffffffffffffff < uVar12 + 1) goto LAB_1800aab00;
    _Var8 = (uVar12 + 1) * 2;
    if (_Var8 != 0) goto LAB_1800aaa07;
  }
}

 FUN_1800ba540();
    pcVar5 = (code *)swi(3);
    puVar7 = (int32_t *)(*pcVar5)();
    return puVar7;
  }
  uVar8 = lVar2 + param_2 | 0xf;
  uVar3 = param_1[3];
  if ((uVar8 < 0x8000000000000000) && (uVar3 <= 0x7fffffffffffffff - (uVar3 >> 1))) {
uVar1 = (uVar3 >> 1) + uVar3;
    uVar9 = uVar8;
    if (uVar8 < uVar1) {
      uVar9 = uVar1;
    }
    uVar1 = uVar9 + 1;
    if (uVar1 == 0) {
      puVar7 = (int32_t *)0x0;
    }
    else {
      if (0xfff < uVar1) {
        uVar8 = uVar9 + 0x28;
        if (uVar8 <= uVar1) {
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
}

 FUN_1800ba540();
    pcVar4 = (code *)swi(3);
    plVar6 = (longlong *)(*pcVar4)();
    return plVar6;
  }
  uVar9 = param_2 | 7;
  puVar11 = (int32_t *)0x0;
  uVar2 = param_1[3];
  if ((uVar9 < 0x7fffffffffffffff) && (uVar2 <= 0x7ffffffffffffffe - (uVar2 >> 1))) {
uVar1 = uVar2 + (uVar2 >> 1);
    uVar10 = uVar9;
    if (uVar9 < uVar1) {
      uVar10 = uVar1;
    }
    if (0x7fffffffffffffff < uVar10 + 1) goto LAB_1800b8032;
    _Var7 = (uVar10 + 1) * 2;
    if (_Var7 != 0) goto LAB_1800b7f76;
  }
}

 FUN_1800ba540();
    pcVar5 = (code *)swi(3);
    puVar7 = (int32_t *)(*pcVar5)();
    return puVar7;
  }
  uVar9 = lVar2 + param_2 | 7;
  uVar3 = param_1[3];
  puVar7 = (int32_t *)0x0;
  if ((uVar9 < 0x7fffffffffffffff) && (uVar3 <= 0x7ffffffffffffffe - (uVar3 >> 1))) {
uVar1 = uVar3 + (uVar3 >> 1);
    uVar10 = uVar9;
    if (uVar9 < uVar1) {
      uVar10 = uVar1;
    }
    if (0x7fffffffffffffff < uVar10 + 1) goto LAB_1800b8241;
    _Var8 = (uVar10 + 1) * 2;
    if (_Var8 != 0) goto LAB_1800b8167;
  }
}

 FUN_1800ba540();
    pcVar6 = (code *)swi(3);
    puVar8 = (int32_t *)(*pcVar6)();
    return puVar8;
  }
  puVar8 = (int32_t *)0x0;
  uVar4 = param_1[3];
  uVar10 = lVar3 + param_2 | 7;
  if ((uVar10 < 0x7fffffffffffffff) && (uVar4 <= 0x7ffffffffffffffe - (uVar4 >> 1))) {
uVar1 = uVar4 + (uVar4 >> 1);
    uVar11 = uVar10;
    if (uVar10 < uVar1) {
      uVar11 = uVar1;
    }
    if (0x7fffffffffffffff < uVar11 + 1) goto LAB_1800b8402;
    _Var9 = (uVar11 + 1) * 2;
    if (_Var9 != 0) goto LAB_1800b82fd;
  }
}

 FUN_1800ba540();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_3 < 8) {
param_1[2] = param_3;
    param_1[3] = 7;
    FUN_180150fd0(param_1,param_2,param_3 * 2);
    *(int32_t *)(param_3 * 2 + (longlong)param_1) = 0;
    return;
  }
}

 FUN_1800ba540();
    pcVar6 = (code *)swi(3);
    puVar8 = (int32_t *)(*pcVar6)();
    return puVar8;
  }
  uVar9 = uVar3 + param_2 | 0xf;
  uVar4 = param_1[3];
  if ((uVar9 < 0x8000000000000000) && (uVar4 <= 0x7fffffffffffffff - (uVar4 >> 1))) {
uVar1 = uVar4 + (uVar4 >> 1);
    uVar10 = uVar9;
    if (uVar9 < uVar1) {
      uVar10 = uVar1;
    }
    uVar1 = uVar10 + 1;
    if (uVar1 == 0) {
      puVar8 = (int32_t *)0x0;
    }
    else {
      if (0xfff < uVar1) {
        uVar9 = uVar10 + 0x28;
        if (uVar9 <= uVar1) {
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
}

 FUN_1800ba540();
    pcVar5 = (code *)swi(3);
    puVar7 = (int32_t *)(*pcVar5)();
    return puVar7;
  }
  uVar8 = lVar2 + param_2 | 0xf;
  uVar3 = param_1[3];
  if ((uVar8 < 0x8000000000000000) && (uVar3 <= 0x7fffffffffffffff - (uVar3 >> 1))) {
uVar1 = uVar3 + (uVar3 >> 1);
    uVar9 = uVar8;
    if (uVar8 < uVar1) {
      uVar9 = uVar1;
    }
    uVar1 = uVar9 + 1;
    if (uVar1 == 0) {
      puVar7 = (int32_t *)0x0;
    }
    else {
      if (0xfff < uVar1) {
        uVar8 = uVar9 + 0x28;
        if (uVar8 <= uVar1) {
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
}

 FUN_1800ba540();
    pcVar5 = (code *)swi(3);
    puVar7 = (int32_t *)(*pcVar5)();
    return puVar7;
  }
  uVar3 = param_1[3];
  uVar8 = uVar2 + param_2 | 0xf;
  if ((uVar8 < 0x8000000000000000) && (uVar3 <= 0x7fffffffffffffff - (uVar3 >> 1))) {
uVar1 = (uVar3 >> 1) + uVar3;
    uVar9 = uVar8;
    if (uVar8 < uVar1) {
      uVar9 = uVar1;
    }
    uVar1 = uVar9 + 1;
    if (uVar1 == 0) {
      puVar7 = (int32_t *)0x0;
    }
    else {
      if (0xfff < uVar1) {
        uVar8 = uVar9 + 0x28;
        if (uVar8 <= uVar1) {
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
}

 FUN_1800ba540();
    pcVar5 = (code *)swi(3);
    puVar7 = (int32_t *)(*pcVar5)();
    return puVar7;
  }
  uVar3 = param_1[3];
  uVar8 = uVar2 + param_2 | 0xf;
  if ((uVar8 < 0x8000000000000000) && (uVar3 <= 0x7fffffffffffffff - (uVar3 >> 1))) {
uVar1 = uVar3 + (uVar3 >> 1);
    uVar9 = uVar8;
    if (uVar8 < uVar1) {
      uVar9 = uVar1;
    }
    uVar1 = uVar9 + 1;
    if (uVar1 == 0) {
      puVar7 = (int32_t *)0x0;
    }
    else {
      if (0xfff < uVar1) {
        uVar8 = uVar9 + 0x28;
        if (uVar8 <= uVar1) {
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
}

 FUN_1800ba540();
    pcVar2 = (code *)swi(3);
    puVar5 = (int32_t *)(*pcVar2)();
    return puVar5;
  }
  if (uVar1 < 8) {
param_1[2] = uVar1;
    param_1[3] = 7;
    uVar3 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar3;
    return param_1;
  }
}

 FUN_1800ba540();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_3 < 0x10) {
param_1[2] = param_3;
    param_1[3] = 0xf;
    FUN_180150fd0(param_1,param_2,param_3);
    *(int32_t *)(param_3 + (longlong)param_1) = 0;
    return;
  }
}

void FUN_1800ba540(void) {
code *pcVar1;
  
  FUN_180123338(0x1801879b8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}
}

 FUN_1800ba540();
    pcVar3 = (code *)swi(3);
    puVar7 = (int32_t *)(*pcVar3)();
    return puVar7;
  }
  if (uVar2 < 0x10) {
param_1[2] = uVar2;
    param_1[3] = 0xf;
    uVar4 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar4;
    return param_1;
  }
}

 FUN_1800ba540();
LAB_1800cc8fc:
    FUN_1800ba290(pWVar6,&local_1f8,(int32_t *)local_88);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pppppuVar18 = local_a8;
  if (0xf < local_90) {
pppppuVar18 = (int32_t *****)local_a8[0];
  }
}

 FUN_1800ba540();
    pcVar5 = (code *)swi(3);
    puVar7 = (int32_t *)(*pcVar5)();
    return puVar7;
  }
  uVar9 = lVar2 + param_2 | 7;
  uVar3 = param_1[3];
  if ((uVar9 < 0x7fffffffffffffff) && (uVar3 <= 0x7ffffffffffffffe - (uVar3 >> 1))) {
uVar1 = uVar3 + (uVar3 >> 1);
    uVar10 = uVar9;
    if (uVar9 < uVar1) {
      uVar10 = uVar1;
    }
    if (0x7fffffffffffffff < uVar10 + 1) goto LAB_1800cfcc9;
    _Var8 = (uVar10 + 1) * 2;
    if (_Var8 != 0) goto LAB_1800cfc09;
    puVar7 = (int32_t *)0x0;
  }
}

 FUN_1800ba540();
    pcVar4 = (code *)swi(3);
    plVar6 = (longlong *)(*pcVar4)();
    return plVar6;
  }
  uVar7 = param_3 | 0xf;
  if ((uVar7 < 0x8000000000000000) && (uVar2 <= 0x7fffffffffffffff - (uVar2 >> 1))) {
uVar1 = uVar2 + (uVar2 >> 1);
    uVar9 = uVar7;
    if (uVar7 < uVar1) {
      uVar9 = uVar1;
    }
    uVar1 = uVar9 + 1;
    if (uVar1 == 0) {
      puVar10 = (int32_t *)0x0;
    }
    else {
      if (0xfff < uVar1) {
        uVar7 = uVar9 + 0x28;
        if (uVar7 <= uVar1) {
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
}

 FUN_1800ba540();
    pcVar2 = (code *)swi(3);
    puVar6 = (int32_t *)(*pcVar2)();
    return puVar6;
  }
  if (uVar7 < 0x10) {
param_1[2] = uVar7;
    param_1[3] = 0xf;
    FUN_180150fd0(param_1,param_2,uVar7);
    *(int32_t *)(uVar7 + (longlong)param_1) = 0;
    return param_1;
  }
}

 FUN_1800ba540();
    pcVar5 = (code *)swi(3);
    puVar7 = (int32_t *)(*pcVar5)();
    return puVar7;
  }
  uVar3 = param_1[3];
  uVar8 = uVar2 + 1 | 0xf;
  if ((uVar8 < 0x8000000000000000) && (uVar3 <= 0x7fffffffffffffff - (uVar3 >> 1))) {
uVar1 = uVar3 + (uVar3 >> 1);
    uVar9 = uVar8;
    if (uVar8 < uVar1) {
      uVar9 = uVar1;
    }
    uVar1 = uVar9 + 1;
    if (uVar1 == 0) {
      puVar7 = (int32_t *)0x0;
    }
    else {
      if (0xfff < uVar1) {
        uVar8 = uVar9 + 0x28;
        if (uVar8 <= uVar1) {
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
}

 FUN_1800ba540();
    pcVar1 = (code *)swi(3);
    puVar6 = (ulonglong *)(*pcVar1)();
    return puVar6;
  }
  if (uVar10 < 8) goto LAB_18011caa3;
  uVar8 = uVar10 | 7;
  if (uVar8 < 0x7fffffffffffffff) {
if (uVar8 < 10) {
      uVar8 = 10;
    }
    if (0x7fffffffffffffff < uVar8 + 1) goto LAB_18011cb01;
    _Var7 = (uVar8 + 1) * 2;
    if (_Var7 != 0) goto LAB_18011ca36;
  }
}

