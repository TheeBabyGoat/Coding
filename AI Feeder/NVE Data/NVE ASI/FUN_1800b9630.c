#include "FUN_1800b9630.h"
#include <stdint.h>
#include <stddef.h>

 FUN_1800b9630(param_1,uVar5 + param_2[1]);
    param_1[2] = 0;
  }
  local_160 = local_140;
  local_158 = 0;
  local_150 = 0x100;
  local_168 = &PTR_FUN_1801835f0;
  local_1a8 = *param_2;
  lStack_1a0 = param_2[1];
  local_198 = 0;
  uStack_190 = 0;
  local_188 = &local_168;
  local_180 = *param_3;
  uStack_178 = param_3[1];
  local_170 = 0;
  local_1b8 = *param_2;
  lStack_1b0 = param_2[1];
  local_148 = param_1;
  FUN_1800b71b0(&local_1b8,&local_1a8);
  FUN_1800b7600((longlong)&local_168);
  uVar1 = local_158;
  local_168 = &PTR_FUN_1801835f0;
  if (local_158 != 0) {
local_158 = 0;
    if ((ulonglong)local_148[3] < 0x10) {
      lVar6 = local_148[2] + (longlong)local_148;
      plVar3 = local_148;
    }
    else {
      lVar6 = *local_148 + local_148[2];
      plVar3 = (longlong *)*local_148;
    }
    FUN_1800b7500(local_148,lVar6 - (longlong)plVar3,local_140,uVar1);
  }
}

int32_t * FUN_1800b9630(int32_t *param_1,ulonglong param_2) {
ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int32_t *puVar4;
  code *pcVar5;
  void *pvVar6;
  int32_t *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int32_t *puVar10;
  
  lVar2 = param_1[2];
  uVar9 = 0x7fffffffffffffff;
  if (0x7fffffffffffffffU - lVar2 < param_2) {
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
  else {
    puVar4 = (int32_t *)*param_1;
    FUN_180150fd0(puVar7,puVar4,lVar2 + 1U);
    puVar10 = puVar4;
    if ((0xfff < uVar3 + 1) &&
       (puVar10 = (int32_t *)puVar4[-1],
       0x1f < (ulonglong)((longlong)puVar4 + (-8 - (longlong)puVar10)))) {
LAB_1800b976a:
      FUN_18012b7b4();
      pcVar5 = (code *)swi(3);
      puVar7 = (int32_t *)(*pcVar5)();
      return puVar7;
    }
    thunk_FUN_18012d5e8(puVar10);
  }
  *param_1 = puVar7;
  return param_1;
}
}

 FUN_1800b9630(param_1,uVar3 - lVar6);
    param_1[2] = lVar6;
  }
  FUN_1800b9910(param_1,(int32_t *)*param_2,param_2[1]);
  FUN_1800b9910(param_1,(int32_t *)&DAT_180187990,3);
  ppppuVar5 = local_50;
  if (0xf < local_38) {
ppppuVar5 = (int32_t ****)local_50[0];
  }
}

 FUN_1800b9630(param_1,uVar2);
    param_1[2] = 0;
  }
  FUN_1800b9910(param_1,(int32_t *)"invalid UTF-8 byte at index ",0x1c);
  puVar1 = param_3 + 2;
  if (0xf < (ulonglong)param_3[3]) {
param_3 = (int32_t *)*param_3;
  }
}

 FUN_1800b9630(param_1,param_3[2] + 0x26);
    param_1[2] = 0;
  }
  FUN_1800b9910(param_1,(int32_t *)"incomplete UTF-8 string; last byte: 0x",0x26);
  puVar1 = param_3 + 2;
  if (0xf < (ulonglong)param_3[3]) {
param_3 = (int32_t *)*param_3;
  }
}

 FUN_1800b9630(&local_88,uVar11);
    }
    local_78 = 0;
    FUN_1800b9910((longlong *)&local_88,(int32_t *)"while parsing ",0xe);
    puVar1 = param_4 + 2;
    if (0xf < (ulonglong)param_4[3]) {
param_4 = (int32_t *)*param_4;
    }
}

 FUN_1800b9630(&local_88,uVar11);
    }
    local_78 = 0;
    FUN_1800b9910((longlong *)&local_88,(int32_t *)"unexpected ",0xb);
    uVar11 = 0xffffffffffffffff;
    do {
      uVar11 = uVar11 + 1;
    } while (pcVar8[uVar11] != '\0');
    FUN_1800b9910((longlong *)&local_88,(int32_t *)pcVar8,uVar11);
    ppppuVar7 = &local_88;
    if (0xf < local_70) {
ppppuVar7 = (int32_t ****)local_88;
    }
}

 FUN_1800b9630(&local_88,uVar11);
  }
  local_78 = 0;
  uVar11 = 0xffffffffffffffff;
  do {
    uVar11 = uVar11 + 1;
  } while (*(char *)((longlong)puVar4 + uVar11) != '\0');
  FUN_1800b9910((longlong *)&local_88,puVar4,uVar11);
  FUN_1800b9910((longlong *)&local_88,(int32_t *)"; last read: \'",0xe);
  puVar1 = puVar6 + 2;
  if (0xf < (ulonglong)puVar6[3]) {
puVar6 = (int32_t *)*puVar6;
  }
}

 FUN_1800b9630(&local_88,uVar2);
    }
    local_78 = 0;
    FUN_1800b9910((longlong *)&local_88,(int32_t *)"; expected ",0xb);
    do {
      uVar11 = uVar11 + 1;
    } while (pcVar8[uVar11] != '\0');
    FUN_1800b9910((longlong *)&local_88,(int32_t *)pcVar8,uVar11);
    ppppuVar7 = &local_88;
    if (0xf < local_70) {
ppppuVar7 = (int32_t ****)local_88;
    }
}

 FUN_1800b9630(param_1,param_3[2] + 0x1a);
    param_1[2] = 0;
  }
  FUN_1800b9910(param_1,(int32_t *)"number overflow parsing \'",0x19);
  puVar1 = param_3 + 2;
  if (0xf < (ulonglong)param_3[3]) {
param_3 = (int32_t *)*param_3;
  }
}

 FUN_1800b9630(param_1,uVar2);
    param_1[2] = 0;
  }
  puVar1 = param_2 + 2;
  if (0xf < (ulonglong)param_2[3]) {
param_2 = (int32_t *)*param_2;
  }
}

 FUN_1800b9630(param_1,uVar2);
    param_1[2] = 0;
  }
  FUN_1800b9910(param_1,(int32_t *)" at line ",9);
  pppppppuVar3 = local_68;
  if (0xf < local_50) {
pppppppuVar3 = local_68[0];
  }
}

 FUN_1800b9630(param_1,uVar2);
    param_1[2] = 0;
  }
  puVar1 = param_2 + 2;
  if (0xf < (ulonglong)param_2[3]) {
param_2 = (int32_t *)*param_2;
  }
}

 FUN_1800b9630(param_1,uVar3);
    param_1[2] = 0;
  }
  FUN_1800b9910(param_1,(int32_t *)"[json.exception.",0x10);
  puVar1 = param_2 + 2;
  if (0xf < (ulonglong)param_2[3]) {
param_2 = (int32_t *)*param_2;
  }
}

 FUN_1800b9630(param_1,param_3[2] + 0x10);
    param_1[2] = 0;
  }
  FUN_1800b9910(param_1,(int32_t *)"key \'",5);
  puVar1 = param_3 + 2;
  if (0xf < (ulonglong)param_3[3]) {
param_3 = (int32_t *)*param_3;
  }
}

