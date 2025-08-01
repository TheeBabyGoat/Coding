#include "FUN_1800a90d0.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800a90d0(void) {
char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar4 = DAT_1801fb118;
  cVar1 = *(char *)((longlong)*(longlong **)(DAT_1801fb118 + 8) + 0x19);
  plVar3 = *(longlong **)(DAT_1801fb118 + 8);
  while (cVar1 == '\0') {
    FUN_1800a9420(&DAT_1801fb118,&DAT_1801fb118,(longlong *)plVar3[2]);
    plVar2 = (longlong *)*plVar3;
    thunk_FUN_18012d5e8(plVar3);
    plVar3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  *(longlong *)(lVar4 + 8) = lVar4;
  *(longlong *)lVar4 = lVar4;
  *(longlong *)(lVar4 + 0x10) = lVar4;
  DAT_1801fb120 = 0;
  return;
}
}

