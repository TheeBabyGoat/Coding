#include "FUN_1800cac80.h"
#include <stdint.h>
#include <stddef.h>

int32_t * FUN_1800cac80(longlong *param_1,int32_t *param_2,int32_t *param_3) {
ulonglong uVar1;
  int32_t *puVar2;
  longlong lVar3;
  int32_t *puVar4;
  LPVOID pvVar5;
  code *pcVar6;
  longlong lVar7;
  void *pvVar8;
  int32_t *puVar9;
  ulonglong uVar10;
  int32_t *puVar11;
  LPVOID pvVar12;
  ulonglong uVar13;
  
  lVar3 = *param_1;
  lVar7 = param_1[1] - lVar3 >> 3;
  if (lVar7 == 0x1fffffffffffffff) {
    FUN_1800aa480();
    pcVar6 = (code *)swi(3);
    puVar9 = (int32_t *)(*pcVar6)();
    return puVar9;
  }
  uVar10 = param_1[2] - lVar3 >> 3;
  uVar1 = lVar7 + 1;
  if (0x1fffffffffffffff - (uVar10 >> 1) < uVar10) {
LAB_1800cae13:
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
  if (0x1fffffffffffffff < uVar13) goto LAB_1800cae13;
  uVar10 = uVar13 * 8;
  if (uVar10 == 0) {
    puVar9 = (int32_t *)0x0;
  }
  else if (uVar10 < 0x1000) {
    puVar9 = (int32_t *)operator_new(uVar10);
  }
  else {
    if (uVar10 + 0x27 <= uVar10) goto LAB_1800cae13;
    pvVar8 = operator_new(uVar10 + 0x27);
    if (pvVar8 == (void *)0x0) goto LAB_1800cae0d;
    puVar9 = (int32_t *)((longlong)pvVar8 + 0x27U & 0xffffffffffffffe0);
    puVar9[-1] = pvVar8;
  }
  puVar2 = puVar9 + ((longlong)param_2 - lVar3 >> 3);
  *puVar2 = *param_3;
  puVar4 = (int32_t *)*param_1;
  if (param_2 == (int32_t *)param_1[1]) {
    uVar10 = param_1[1] - (longlong)puVar4;
    puVar11 = puVar9;
    param_2 = puVar4;
  }
  else {
    FUN_180150fd0(puVar9,puVar4,(longlong)param_2 - (longlong)puVar4);
    puVar11 = puVar2 + 1;
    uVar10 = param_1[1] - (longlong)param_2;
  }
  FUN_180150fd0(puVar11,param_2,uVar10);
  pvVar5 = (LPVOID)*param_1;
  if (pvVar5 != (LPVOID)0x0) {
    pvVar12 = pvVar5;
    if ((0xfff < (param_1[2] - (longlong)pvVar5 & 0xfffffffffffffff8U)) &&
       (pvVar12 = *(LPVOID *)((longlong)pvVar5 + -8),
       0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)pvVar12)))) {
LAB_1800cae0d:
      FUN_18012b7b4();
      pcVar6 = (code *)swi(3);
      puVar9 = (int32_t *)(*pcVar6)();
      return puVar9;
    }
    thunk_FUN_18012d5e8(pvVar12);
  }
  *param_1 = (longlong)puVar9;
  param_1[1] = (longlong)(puVar9 + uVar1);
  param_1[2] = (longlong)(puVar9 + uVar13);
  return puVar2;
}
}

 FUN_1800cac80(param_2 + 1,puVar11,(int32_t *)param_3);
    }
    else {
      *puVar11 = local_140;
      param_2[2] = param_2[2] + 8;
    }
    iVar7 = FUN_1800ee520(param_1);
    if (iVar7 != 10) {
local_208[0] = 1;
      FUN_1800f8400(local_1f8,(char *)local_208);
      goto LAB_1800f09b0;
    }
}

 FUN_1800cac80(param_2 + 1,puVar11,(int32_t *)param_3);
    }
    else {
      *puVar11 = local_150;
      param_2[2] = param_2[2] + 8;
    }
    iVar7 = FUN_1800ee520(param_1);
    if (iVar7 == 0xb) {
cVar5 = FUN_1800f6360((longlong)param_2);
      if (cVar5 != '\0') break;
      goto LAB_1800f1599;
    }
}

 FUN_1800cac80(param_2 + 1,plVar9,&local_1a0);
    }
    else {
      *plVar9 = local_1a0;
      param_2[2] = param_2[2] + 8;
    }
    iVar8 = FUN_1800ee520(param_1);
    if (iVar8 != 10) {
local_1a8[0] = '\x01';
      FUN_1800f8400(local_198,local_1a8);
      goto LAB_1800f1790;
    }
}

 FUN_1800cac80(param_2 + 1,plVar9,&local_1a0);
    }
    else {
      *plVar9 = local_1a0;
      param_2[2] = param_2[2] + 8;
    }
    iVar8 = FUN_1800ee520(param_1);
    if (iVar8 == 0xb) {
param_2[2] = param_2[2] + -8;
      break;
    }
}

 FUN_1800cac80(param_1 + 9,plVar5,&local_res8);
        }
        else {
          *plVar5 = local_res8;
          param_1[10] = param_1[10] + 8;
        }
        plVar5 = (longlong *)plVar4[2];
        if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
cVar1 = *(char *)(*plVar5 + 0x19);
          plVar4 = plVar5;
          plVar5 = (longlong *)*plVar5;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*plVar5 + 0x19);
            plVar4 = plVar5;
            plVar5 = (longlong *)*plVar5;
          }
        }
}

 FUN_1800cac80(param_1 + 9,puVar3,&local_890);
      }
      else {
        *puVar3 = pHVar10;
        param_1[10] = param_1[10] + 8;
      }
      plVar7 = (longlong *)FUN_1801171d0();
      local_898 = pHVar10;
      if (((HMODULE)(DAT_1801ee910 + 0x140000000) <= pHVar10) &&
         (pHVar10 <= (HMODULE)(DAT_1801ee910 + 0x146000000U))) {
local_898 = (HMODULE)((longlong)pHVar10 - DAT_1801ee910);
      }
}

