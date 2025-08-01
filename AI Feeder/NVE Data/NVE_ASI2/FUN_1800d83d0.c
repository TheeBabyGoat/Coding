#include "FUN_1800d83d0.h"
#include <stdint.h>
#include <stddef.h>

longlong * FUN_1800d83d0(int32_t param_1,int *param_2) {
bool bVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *local_38;
  int32_t uStack_30;
  longlong *local_28;
  uint uStack_20;
  int32_t uStack_1c;
  
  plVar6 = DAT_1801fb320;
  local_28 = (longlong *)DAT_1801fb320[1];
  uStack_20 = 0;
  plVar5 = DAT_1801fb320;
  if (*(char *)((longlong)local_28 + 0x19) == '\0') {
    plVar3 = local_28;
    plVar7 = DAT_1801fb320;
    do {
      local_28 = plVar3;
      bVar1 = *param_2 <= *(int *)((longlong)local_28 + 0x1c);
      plVar4 = local_28;
      plVar5 = local_28;
      if (!bVar1) {
        plVar4 = local_28 + 2;
        plVar5 = plVar7;
      }
      uStack_20 = (uint)bVar1;
      plVar3 = (longlong *)*plVar4;
      plVar7 = plVar5;
    } while (*(char *)(*plVar4 + 0x19) == '\0');
  }
  if ((*(char *)((longlong)plVar5 + 0x19) != '\0') || (*param_2 < *(int *)((longlong)plVar5 + 0x1c))
     ) {
    if (DAT_1801fb328 == 0x333333333333333) {
      FUN_1800d8950();
      pcVar2 = (code *)swi(3);
      plVar6 = (longlong *)(*pcVar2)();
      return plVar6;
    }
    local_38 = (longlong *)&DAT_1801fb320;
    uStack_30 = 0;
    plVar5 = (longlong *)operator_new(0x50);
    *(int *)((longlong)plVar5 + 0x1c) = *param_2;
    plVar5[4] = 0;
    plVar5[5] = 0;
    plVar5[6] = 0;
    plVar5[7] = 0;
    plVar5[8] = 0;
    plVar5[9] = 0;
    *plVar5 = (longlong)plVar6;
    plVar5[1] = (longlong)plVar6;
    plVar5[2] = (longlong)plVar6;
    *(int32_t *)(plVar5 + 3) = 0;
    uStack_30 = CONCAT44(uStack_1c,uStack_20);
    local_38 = local_28;
    plVar5 = FUN_1800d86d0((longlong *)&DAT_1801fb320,(longlong *)&local_38,plVar5);
  }
  return plVar5 + 4;
}
}

