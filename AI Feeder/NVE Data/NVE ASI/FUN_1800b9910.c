#include "FUN_1800b9910.h"
#include <stdint.h>
#include <stddef.h>

 FUN_1800b9910((longlong *)ppppuVar5,(int32_t *)&DAT_18018796c,2);
  }
  (**(code **)(*plVar3 + 0x10))(plVar3,local_58,uVar2 & 0xffffffff);
  ppppuVar7 = local_58;
  if (0xf < local_40) {
ppppuVar7 = (int32_t ****)local_58[0];
  }
}

 FUN_1800b9910((longlong *)ppppuVar5,ppppuVar7,local_48);
  FUN_1800a6800((longlong *)local_58);
  local_78 = (int32_t ****)*ppppuVar5;
  ppuStack_70 = ppppuVar5[1];
  local_68 = ppppuVar5[2];
  ppuStack_60 = ppppuVar5[3];
  *(int32_t *)ppppuVar5 = 0;
  ppppuVar5[2] = (int32_t ***)0x0;
  ppppuVar5[3] = (int32_t ***)0xf;
  FUN_1800a6800((longlong *)ppppuVar5);
  local_a8 = &local_78;
  if ((int32_t ***)0xf < ppuStack_60) {
local_a8 = local_78;
  }
}

longlong * FUN_1800b9910(longlong *param_1,int32_t *param_2,ulonglong param_3) {
longlong lVar1;
  longlong *plVar2;
  byte local_res8;
  
  lVar1 = param_1[2];
  if (param_3 <= (ulonglong)(param_1[3] - lVar1)) {
    param_1[2] = lVar1 + param_3;
    plVar2 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      plVar2 = (longlong *)*param_1;
    }
    FUN_180150fd0((int32_t *)((longlong)plVar2 + lVar1),param_2,param_3);
    *(int32_t *)((longlong)plVar2 + lVar1 + param_3) = 0;
    return param_1;
  }
  plVar2 = FUN_1800b9780(param_1,param_3,(ulonglong)local_res8,param_2,param_3);
  return plVar2;
}
}

 FUN_1800b9910(param_1,ppppuVar5,local_40);
  if (local_60 != 0) {
FUN_1800b9910(param_1,(int32_t *)&DAT_180187994,4);
    pCVar7 = &local_70;
    if (0xf < local_58) {
      pCVar7 = (CHAR *)CONCAT71(uStack_6f,local_70);
    }
    FUN_1800b9910(param_1,(int32_t *)pCVar7,local_60);
  }
}

 FUN_1800b9910(param_1,(int32_t *)&DAT_180187994,4);
    pCVar7 = &local_70;
    if (0xf < local_58) {
pCVar7 = (CHAR *)CONCAT71(uStack_6f,local_70);
    }
}

 FUN_1800b9910(param_1,(int32_t *)pCVar7,local_60);
  }
  uVar3 = param_1[2];
  if (uVar3 < (ulonglong)param_1[3]) {
param_1[2] = uVar3 + 1;
    if (0xf < (ulonglong)param_1[3]) {
      param_1 = (longlong *)*param_1;
    }
    *(int32_t *)((longlong)param_1 + uVar3) = 0x22;
  }
}

 FUN_1800b9910(param_1,puVar4,3);
switchD_1800cc3d8_default:
  local_38 = local_78[0];
  local_40 = 0x2000000000000000;
  local_58 = 1;
  local_50 = &local_40;
  local_68 = &DAT_1801cc330;
  uStack_60 = 4;
  FUN_1800b7670((longlong *)local_30,(longlong *)&local_68,&local_58);
  local_70 = 3;
  ppppuVar5 = local_30;
  if (0xf < local_18) {
ppppuVar5 = (int32_t ****)local_30[0];
  }
}

 FUN_1800b9910(param_1,param_3,*puVar1);
  FUN_1800b9910(param_1,(int32_t *)&DAT_1801d6844,4);
  puVar1 = param_5 + 2;
  if (0xf < (ulonglong)param_5[3]) {
param_5 = (int32_t *)*param_5;
  }
}

 FUN_1800b9910((longlong *)&local_88,param_4,*puVar1);
    if (local_78 < local_70) {
ppppuVar7 = &local_88;
      if (0xf < local_70) {
        ppppuVar7 = (int32_t ****)local_88;
      }
      puVar3 = (int32_t *)((longlong)ppppuVar7 + local_78);
      local_78 = local_78 + 1;
      *puVar3 = 0x20;
    }
}

 FUN_1800b9910(param_2,ppppuVar7,local_78);
    local_94 = 1;
    if (local_70 < 0x10) goto LAB_1800ee188;
    ppppuVar7 = (int32_t ****)local_88;
    if ((local_70 + 1 < 0x1000) ||
       (ppppuVar7 = (int32_t ****)local_88[-1],
       (ulonglong)((longlong)local_88 + (-8 - (longlong)ppppuVar7)) < 0x20)) {
thunk_FUN_18012d5e8(ppppuVar7);
      goto LAB_1800ee188;
    }
}

 FUN_1800b9910(param_2,ppppuVar7,local_78);
    if (0xf < local_70) {
ppppuVar7 = (int32_t ****)local_88;
      if ((local_70 + 1 < 0x1000) ||
         (ppppuVar7 = (int32_t ****)local_88[-1],
         (ulonglong)((longlong)local_88 + (-8 - (longlong)ppppuVar7)) < 0x20)) {
        thunk_FUN_18012d5e8(ppppuVar7);
        goto LAB_1800ee3fc;
      }
      goto LAB_1800ee50d;
    }
}

 FUN_1800b9910((longlong *)&local_88,puVar6,*puVar1);
  if (local_78 < local_70) {
ppppuVar7 = &local_88;
    if (0xf < local_70) {
      ppppuVar7 = (int32_t ****)local_88;
    }
    puVar3 = (int32_t *)((longlong)ppppuVar7 + local_78);
    local_78 = local_78 + 1;
    *puVar3 = 0x27;
  }
}

 FUN_1800b9910(param_2,ppppuVar7,local_78);
  if (0xf < local_70) {
ppppuVar7 = (int32_t ****)local_88;
    if ((0xfff < local_70 + 1) &&
       (ppppuVar7 = (int32_t ****)local_88[-1],
       0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)ppppuVar7)))) goto LAB_1800ee507;
    thunk_FUN_18012d5e8(ppppuVar7);
  }
}

 FUN_1800b9910(param_2,ppppuVar7,local_78);
    if (0xf < local_70) {
ppppuVar7 = (int32_t ****)local_88;
      if ((0xfff < local_70 + 1) &&
         (ppppuVar7 = (int32_t ****)local_88[-1],
         0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)ppppuVar7)))) {
        FUN_18012b7b4();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      thunk_FUN_18012d5e8(ppppuVar7);
    }
}

 FUN_1800b9910(param_1,param_3,*puVar1);
  uVar2 = *param_4;
  uVar3 = param_1[2];
  if (uVar3 < (ulonglong)param_1[3]) {
param_1[2] = uVar3 + 1;
    plVar4 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      plVar4 = (longlong *)*param_1;
    }
    *(int32_t *)((longlong)plVar4 + uVar3) = uVar2;
    *(int32_t *)((longlong)plVar4 + uVar3 + 1) = 0;
    return param_1;
  }
}

 FUN_1800b9910(param_1,param_2,*puVar1);
  FUN_1800b9910(param_1,(int32_t *)"parse error",0xb);
  puVar1 = param_4 + 2;
  if (0xf < (ulonglong)param_4[3]) {
param_4 = (int32_t *)*param_4;
  }
}

 FUN_1800b9910(param_1,param_4,*puVar1);
  FUN_1800b9910(param_1,(int32_t *)&DAT_18018796c,2);
  puVar1 = param_6 + 2;
  if (0xf < (ulonglong)param_6[3]) {
param_6 = (int32_t *)*param_6;
  }
}

 FUN_1800b9910(param_1,param_6,*puVar1);
  puVar1 = param_7 + 2;
  if (0xf < (ulonglong)param_7[3]) {
param_7 = (int32_t *)*param_7;
  }
}

 FUN_1800b9910(param_1,pppppppuVar3,local_58);
  FUN_1800b9910(param_1,(int32_t *)", column ",9);
  pppppppuVar3 = local_48;
  if (0xf < local_30) {
pppppppuVar3 = local_48[0];
  }
}

 FUN_1800b9910(param_1,param_2,*puVar1);
  puVar1 = param_3 + 2;
  if (0xf < (ulonglong)param_3[3]) {
param_3 = (int32_t *)*param_3;
  }
}

 FUN_1800b9910(param_1,param_3,*puVar1);
  puVar1 = param_4 + 2;
  if (0xf < (ulonglong)param_4[3]) {
param_4 = (int32_t *)*param_4;
  }
}

 FUN_1800b9910(param_1,param_2,*puVar1);
  uVar3 = param_1[2];
  if (uVar3 < (ulonglong)param_1[3]) {
param_1[2] = uVar3 + 1;
    plVar2 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      plVar2 = (longlong *)*param_1;
    }
    *(int32_t *)((longlong)plVar2 + uVar3) = 0x2e;
  }
}

