#include "FUN_1800ccb90.h"
#include <stdint.h>
#include <stddef.h>

longlong * FUN_1800ccb90(longlong *param_1,longlong *param_2,longlong *param_3) {
longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong local_res8;
  
  local_res8 = param_3[1] + *param_3;
  if (param_1[0x10] != 0) {
    cVar3 = FUN_1800cde50(param_1);
    if (cVar3 != '\0') {
      iVar4 = fsetpos((FILE *)param_1[0x10],&local_res8);
      if (iVar4 == 0) {
        *(longlong *)((longlong)param_1 + 0x74) = param_3[2];
        if (*(longlong **)param_1[3] == param_1 + 0xe) {
          lVar1 = param_1[0x11];
          lVar2 = param_1[0x12];
          *(longlong *)param_1[3] = lVar1;
          *(longlong *)param_1[7] = lVar1;
          *(int *)param_1[10] = (int)lVar2 - (int)lVar1;
        }
        lVar1 = *(longlong *)((longlong)param_1 + 0x74);
        *param_2 = local_res8;
        param_2[1] = 0;
        param_2[2] = lVar1;
        return param_2;
      }
    }
  }
  *param_2 = -1;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}
}

