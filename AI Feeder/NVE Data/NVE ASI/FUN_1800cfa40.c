#include "FUN_1800cfa40.h"
#include <stdint.h>
#include <stddef.h>

 FUN_1800cfa40(local_c8,uVar4,uVar9,pppppuVar18,(ulonglong)local_98,(int32_t *)".nve_bin",8);
  local_1f8 = (int32_t (*) [32])local_c8;
  if (0xf < local_b0) {
local_1f8 = local_c8[0];
  }
}

int32_t * FUN_1800cfa40(int32_t *param_1,int32_t param_2,int32_t param_3,int32_t *param_4,
             ulonglong param_5,int32_t *param_6,ulonglong param_7) {
ulonglong uVar1;
  ulonglong uVar2;
  code *pcVar3;
  ulonglong uVar4;
  void *pvVar5;
  int32_t *puVar6;
  int32_t *puVar7;
  ulonglong uVar8;
  
  puVar7 = (int32_t *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  uVar8 = 0xf;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar2 = param_5 + param_7;
  puVar6 = param_1;
  if (uVar2 < 0x10) goto LAB_1800cfb0d;
  uVar8 = uVar2 | 0xf;
  if (uVar8 < 0x8000000000000000) {
    if (uVar8 < 0x16) {
      uVar8 = 0x16;
    }
    uVar1 = uVar8 + 1;
    if (uVar1 != 0) {
      if (0xfff < uVar1) {
        uVar4 = uVar8 + 0x28;
        if (uVar4 <= uVar1) {
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
    puVar7 = (int32_t *)((longlong)pvVar5 + 0x27U & 0xffffffffffffffe0);
    puVar7[-1] = pvVar5;
  }
  *param_1 = puVar7;
  puVar6 = puVar7;
LAB_1800cfb0d:
  param_1[2] = uVar2;
  param_1[3] = uVar8;
  FUN_180150fd0(puVar6,param_4,param_5);
  FUN_180150fd0((int32_t *)((longlong)puVar6 + param_5),param_6,param_7);
  *(int32_t *)((longlong)puVar6 + uVar2) = 0;
  return param_1;
}
}

 FUN_1800cfa40(local_48,lVar1,param_3,puVar7,uVar4,param_1,lVar1);
    pppuVar5 = local_48;
    if (0xf < local_30) {
pppuVar5 = (int32_t ***)local_48[0];
    }
}

 FUN_1800cfa40(local_198,pcVar8,uVar12,(int32_t *)&DAT_180187500,0,&local_1b8,0xb);
    pppppuVar5 = local_198;
    if (0xf < local_180) {
pppppuVar5 = (int32_t *****)local_198[0];
    }
}

