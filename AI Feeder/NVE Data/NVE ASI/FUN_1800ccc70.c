#include "FUN_1800ccc70.h"
#include <stdint.h>
#include <stddef.h>

fpos_t * FUN_1800ccc70(longlong *param_1,fpos_t *param_2,LARGE_INTEGER param_3,uint param_4) {
longlong lVar1;
  longlong lVar2;
  fpos_t fVar3;
  char cVar4;
  int iVar5;
  fpos_t local_res8;
  
  if (((*(longlong **)param_1[7] == param_1 + 0xe) && (param_4 == 1)) && (param_1[0xd] == 0)) {
    param_3.QuadPart = param_3.QuadPart + -1;
  }
  if ((((param_1[0x10] != 0) && (cVar4 = FUN_1800cde50(param_1), cVar4 != '\0')) &&
      (((param_3.QuadPart == 0 && (param_4 == 1)) ||
       (iVar5 = FUN_18012dfb0((longlong *)param_1[0x10],param_3,param_4), iVar5 == 0)))) &&
     (iVar5 = fgetpos((FILE *)param_1[0x10],&local_res8), iVar5 == 0)) {
    if (*(longlong **)param_1[3] == param_1 + 0xe) {
      lVar1 = param_1[0x11];
      lVar2 = param_1[0x12];
      *(longlong *)param_1[3] = lVar1;
      *(longlong *)param_1[7] = lVar1;
      *(int *)param_1[10] = (int)lVar2 - (int)lVar1;
    }
    fVar3 = *(fpos_t *)((longlong)param_1 + 0x74);
    *param_2 = local_res8;
    param_2[2] = fVar3;
    param_2[1] = 0;
    return param_2;
  }
  *param_2 = -1;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}
}

