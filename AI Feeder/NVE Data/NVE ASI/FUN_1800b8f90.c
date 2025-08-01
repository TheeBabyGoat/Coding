#include "FUN_1800b8f90.h"
#include <stdint.h>
#include <stddef.h>

 FUN_1800b8f90(0x16);
      pcVar2 = (code *)swi(3);
      pWVar5 = (LPWSTR)(*pcVar2)();
      return pWVar5;
    }
    uVar4 = __std_fs_convert_narrow_to_wide(param_2,(LPCSTR)*param_3,(int)uVar1,(LPWSTR)0x0,0);
    iVar3 = (int)((ulonglong)uVar4 >> 0x20);
    if (iVar3 != 0) {
FUN_1800b9500(iVar3);
      pcVar2 = (code *)swi(3);
      pWVar5 = (LPWSTR)(*pcVar2)();
      return pWVar5;
    }
}

void FUN_1800b8f90(int32_t param_1) {
code *pcVar1;
  int32_t *puVar2;
  int32_t local_58;
  int32_t uStack_50;
  int32_t local_48 [4];
  int32_t *local_38 [7];
  
  puVar2 = (int32_t *)FUN_1800b8f70(local_48,param_1);
  local_58 = *puVar2;
  uStack_50 = puVar2[1];
  FUN_1800b9200(local_38,&local_58);
  FUN_1801279a8((longlong *)local_38,&DAT_1801e8ea8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}
}

 FUN_1800b8f90(0x16);
      pcVar3 = (code *)swi(3);
      pCVar6 = (LPSTR)(*pcVar3)();
      return pCVar6;
    }
    pWVar2 = (LPCWSTR)*param_3;
    uVar5 = FUN_180123494(param_2,pWVar2,(int)uVar1,(LPSTR)0x0,0);
    iVar4 = (int)((ulonglong)uVar5 >> 0x20);
    if (iVar4 != 0) {
FUN_1800b9500(iVar4);
      pcVar3 = (code *)swi(3);
      pCVar6 = (LPSTR)(*pcVar3)();
      return pCVar6;
    }
}

