#include "FUN_1800b9500.h"
#include <stdint.h>
#include <stddef.h>

 FUN_1800b9500(iVar3);
      pcVar2 = (code *)swi(3);
      pWVar5 = (LPWSTR)(*pcVar2)();
      return pWVar5;
    }
    uVar1 = *(ulonglong *)(param_1 + 8);
    uVar7 = (ulonglong)(int)uVar4;
    if (uVar1 < uVar7) {
uVar6 = uVar7 - uVar1;
      if (*(ulonglong *)(param_1 + 0xc) - uVar1 < uVar6) {
        FUN_1800aa960((int32_t *)param_1,uVar6,(ulonglong)param_1 & 0xff,uVar6,0);
      }
      else {
        *(ulonglong *)(param_1 + 8) = uVar7;
        pWVar5 = param_1;
        if (7 < *(ulonglong *)(param_1 + 0xc)) {
          pWVar5 = *(LPWSTR *)param_1;
        }
        pWVar8 = pWVar5 + uVar1;
        if (uVar6 != 0) {
          for (; uVar6 != 0; uVar6 = uVar6 - 1) {
            *pWVar8 = L'\0';
            pWVar8 = pWVar8 + 1;
          }
        }
        pWVar5[uVar7] = L'\0';
      }
    }
}

void FUN_1800b9500(int32_t param_1) {
code *pcVar1;
  int32_t *puVar2;
  int32_t local_58;
  int32_t uStack_50;
  int32_t local_48 [4];
  int32_t *local_38 [7];
  
  puVar2 = (int32_t *)FUN_1800b94e0(local_48,param_1);
  local_58 = *puVar2;
  uStack_50 = puVar2[1];
  FUN_1800b9200(local_38,&local_58);
  FUN_1801279a8((longlong *)local_38,&DAT_1801e8ea8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}
}

 FUN_1800b9500(iVar4);
      pcVar3 = (code *)swi(3);
      pCVar6 = (LPSTR)(*pcVar3)();
      return pCVar6;
    }
    FUN_1800b9160((int32_t *)param_1,(longlong)(int)uVar5,0);
    pCVar6 = param_1;
    if (0xf < *(ulonglong *)(param_1 + 0x18)) {
pCVar6 = *(LPSTR *)param_1;
    }
}

