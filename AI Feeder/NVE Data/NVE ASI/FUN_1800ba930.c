#include "FUN_1800ba930.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800ba930(int32_t param_1,LPVOID param_2,longlong param_3) {
code *pcVar1;
  LPVOID pvVar2;
  
  pvVar2 = param_2;
  if ((0xfff < param_3 + 1U) &&
     (pvVar2 = *(LPVOID *)((longlong)param_2 + -8),
     0x1f < (ulonglong)((longlong)param_2 + (-8 - (longlong)pvVar2)))) {
    FUN_18012b7b4();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  thunk_FUN_18012d5e8(pvVar2);
  return;
}
}

 FUN_1800ba930(&local_c8,local_c8,uStack_b0);
    }
LAB_1800f1599:
    FUN_1800ba2f0(local_1f8);
    FUN_1801252c0(local_30 ^ (ulonglong)auStack_238);
    return;
  case 1:
    local_208[0] = 1;
    FUN_1800f47c0(param_2,local_e8,local_208,cVar5);
    break;
  case 2:
    local_208[0] = 0;
    FUN_1800f47c0(param_2,local_108,local_208,cVar5);
    break;
  case 3:
    FUN_1800f4480(param_2,local_f8,param_3,cVar5);
    break;
  case 4:
    FUN_1800f3e40(param_2,(int32_t *)local_68,(int32_t *)(param_1 + 0x90),cVar5);
    break;
  case 5:
    local_200 = *(longlong *)(param_1 + 0xc0);
    FUN_1800f3b30(param_2,(int32_t *)local_88,&local_200,cVar5);
    break;
  case 6:
    local_200 = *(longlong *)(param_1 + 0xb8);
    FUN_1800f4170(param_2,local_d8,&local_200,cVar5);
    break;
  case 7:
    lVar9 = *(longlong *)(param_1 + 200);
    sVar6 = _dclass(lVar9);
    if (sVar6 < 1) {
local_200 = lVar9;
      FUN_1800f4ad0(param_2,local_118,&local_200,(char)param_4);
      break;
    }
}

 FUN_1800ba930(&local_d8,local_d8,uStack_c0);
    }
LAB_1800f2258:
    FUN_1800ba2f0(local_198);
    FUN_1801252c0(local_38 ^ (ulonglong)auStack_1d8);
    return;
  case 1:
    local_1a8[0] = '\x01';
    FUN_1800f3380(param_2,local_1a8);
    break;
  case 2:
    local_1a8[0] = '\0';
    FUN_1800f3380(param_2,local_1a8);
    break;
  case 3:
    if (param_2[1] == param_2[2]) {
local_178 = '\0';
      FUN_1800f8a10(&local_170,'\0');
      pcVar4 = (char *)*param_2;
      cVar3 = *pcVar4;
      *pcVar4 = local_178;
      lVar11 = *(longlong *)(pcVar4 + 8);
      *(longlong *)(pcVar4 + 8) = local_170;
      local_178 = cVar3;
      local_170 = lVar11;
      FUN_1800f9a90(&local_170,cVar3);
    }
}

