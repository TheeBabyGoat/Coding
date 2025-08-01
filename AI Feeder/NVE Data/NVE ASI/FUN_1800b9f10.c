#include "FUN_1800b9f10.h"
#include <stdint.h>
#include <stddef.h>

 FUN_1800b9f10((int32_t *)local_58,(int32_t *)param_1);
    local_78 = 0;
    ppuStack_70 = (int32_t **)0x0;
    local_68 = 0;
    local_60 = 0;
    uVar5 = 1;
    FUN_1800b86e0(&local_78,(int32_t *)&DAT_1801878f0,1);
    FUN_1800b84a0((uint *)param_1,(uint *)&local_78,uVar5);
    FUN_1800ba040((longlong *)&local_78);
    if (7 < *(ulonglong *)(param_1 + 0xc)) {
param_1 = *(LPCWSTR *)param_1;
    }
}

 FUN_1800b9f10((int32_t *)local_2b8,param_2);
  local_298 = (HANDLE)0xffffffffffffffff;
  iVar6 = FUN_1800b7af0(local_2b8,0,(longlong *)&local_298,&local_290);
  local_3c = 0;
  if (iVar6 == 0) {
local_40 = '\x01';
  }
}

int32_t * FUN_1800b9f10(int32_t *param_1,int32_t *param_2) {
ulonglong uVar1;
  code *pcVar2;
  int32_t uVar3;
  void *pvVar4;
  int32_t *puVar5;
  ulonglong uVar6;
  __uint64 _Var7;
  
  puVar5 = (int32_t *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = param_2[2];
  if (7 < (ulonglong)param_2[3]) {
    param_2 = (int32_t *)*param_2;
  }
  if (0x7ffffffffffffffe < uVar1) {
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
  uVar6 = uVar1 | 7;
  if (uVar6 < 0x7fffffffffffffff) {
    if (uVar6 < 10) {
      uVar6 = 10;
    }
    if (0x7fffffffffffffff < uVar6 + 1) goto LAB_1800ba02f;
    _Var7 = (uVar6 + 1) * 2;
    if (_Var7 == 0) goto LAB_1800b9ff3;
  }
  else {
    _Var7 = 0xfffffffffffffffe;
    uVar6 = 0x7ffffffffffffffe;
  }
  if (_Var7 < 0x1000) {
    puVar5 = (int32_t *)operator_new(_Var7);
  }
  else {
    if (_Var7 + 0x27 <= _Var7) {
LAB_1800ba02f:
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
    puVar5 = (int32_t *)((longlong)pvVar4 + 0x27U & 0xffffffffffffffe0);
    puVar5[-1] = pvVar4;
  }
LAB_1800b9ff3:
  *param_1 = puVar5;
  param_1[2] = uVar1;
  param_1[3] = uVar6;
  FUN_180150fd0(puVar5,param_2,uVar1 * 2 + 2);
  return param_1;
}
}

 FUN_1800b9f10((int32_t *)param_1,&DAT_1801fc910);
    FUN_1800b84a0(param_1,param_3,puVar4);
    return param_1;
  }
  puVar7 = (uint *)&DAT_1801fc910;
  if (7 < DAT_1801fc928) {
puVar7 = DAT_1801fc910;
  }
}

