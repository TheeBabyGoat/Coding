#include "FUN_1800ce6c0.h"
#include <stdint.h>
#include <stddef.h>

longlong * FUN_1800ce6c0(longlong param_1) {
code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *local_res8;
  _Lockit local_res10 [8];
  longlong *local_res18 [2];
  
  std::_Lockit::_Lockit(local_res10,0);
  plVar5 = DAT_1801f3b00;
  local_res18[0] = DAT_1801f3b00;
  if (DAT_1801fc938 == 0) {
    std::_Lockit::_Lockit((_Lockit *)&local_res8,0);
    if (DAT_1801fc938 == 0) {
      DAT_1801ed228 = DAT_1801ed228 + 1;
      DAT_1801fc938 = (ulonglong)DAT_1801ed228;
    }
    std::_Lockit::~_Lockit((_Lockit *)&local_res8);
  }
  uVar2 = DAT_1801fc938;
  lVar3 = *(longlong *)(param_1 + 8);
  lVar4 = DAT_1801fc938 * 8;
  if (DAT_1801fc938 < *(ulonglong *)(lVar3 + 0x18)) {
    plVar6 = *(longlong **)(lVar4 + *(longlong *)(lVar3 + 0x10));
    if (plVar6 != (longlong *)0x0) goto LAB_1800ce7b3;
  }
  else {
    plVar6 = (longlong *)0x0;
  }
  if (*(char *)(lVar3 + 0x24) == '\0') {
LAB_1800ce76c:
    if (plVar6 != (longlong *)0x0) goto LAB_1800ce7b3;
  }
  else {
    lVar3 = FUN_180124540();
    if (uVar2 < *(ulonglong *)(lVar3 + 0x18)) {
      plVar6 = *(longlong **)(lVar4 + *(longlong *)(lVar3 + 0x10));
      goto LAB_1800ce76c;
    }
  }
  plVar6 = plVar5;
  if (plVar5 == (longlong *)0x0) {
    lVar4 = FUN_1800cea00((longlong *)local_res18,param_1);
    plVar6 = local_res18[0];
    if (lVar4 == -1) {
      FUN_1800b5f90();
      pcVar1 = (code *)swi(3);
      plVar5 = (longlong *)(*pcVar1)();
      return plVar5;
    }
    local_res8 = local_res18[0];
    FUN_180124504(local_res18[0]);
    (**(code **)(*plVar6 + 8))(plVar6);
    DAT_1801f3b00 = plVar6;
  }
LAB_1800ce7b3:
  std::_Lockit::~_Lockit(local_res10);
  return plVar6;
}
}

