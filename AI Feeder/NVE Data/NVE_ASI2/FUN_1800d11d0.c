#include "FUN_1800d11d0.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800d11d0(int32_t param_1,int32_t param_2) {
int32_t uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  int32_t *puVar17;
  int32_t *puVar18;
  longlong *plVar19;
  int local_res18 [2];
  int local_res20 [2];
  longlong *local_68;
  int32_t uStack_60;
  longlong *local_58;
  uint uStack_50;
  int32_t uStack_4c;
  
  plVar14 = DAT_1801fb320;
  plVar15 = (longlong *)DAT_1801fb320[1];
  puVar18 = (int32_t *)0x0;
  uStack_50 = 0;
  cVar2 = *(char *)((longlong)plVar15 + 0x19);
  local_58 = plVar15;
  plVar16 = DAT_1801fb320;
  while (plVar9 = plVar15, cVar2 == '\0') {
    bVar3 = DAT_1801f3b14 <= *(int *)((longlong)plVar9 + 0x1c);
    plVar15 = plVar9;
    plVar19 = plVar9;
    if (!bVar3) {
      plVar15 = plVar9 + 2;
      plVar19 = plVar16;
    }
    uStack_50 = (uint)bVar3;
    cVar2 = *(char *)(*plVar15 + 0x19);
    plVar15 = (longlong *)*plVar15;
    local_58 = plVar9;
    plVar16 = plVar19;
  }
  if ((*(char *)((longlong)plVar16 + 0x19) != '\0') ||
     (DAT_1801f3b14 < *(int *)((longlong)plVar16 + 0x1c))) {
    if (DAT_1801fb328 == 0x333333333333333) {
      FUN_1800d8950();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_68 = (longlong *)&DAT_1801fb320;
    uStack_60 = 0;
    plVar15 = (longlong *)operator_new(0x50);
    *(int *)((longlong)plVar15 + 0x1c) = DAT_1801f3b14;
    plVar15[4] = 0;
    plVar15[5] = 0;
    plVar15[6] = 0;
    plVar15[7] = 0;
    plVar15[8] = 0;
    plVar15[9] = 0;
    *plVar15 = (longlong)plVar14;
    plVar15[1] = (longlong)plVar14;
    plVar15[2] = (longlong)plVar14;
    *(int32_t *)(plVar15 + 3) = 0;
    uStack_60 = CONCAT44(uStack_4c,uStack_50);
    local_68 = local_58;
    puVar18 = &DAT_1801fb320;
    plVar16 = FUN_1800d86d0((longlong *)&DAT_1801fb320,(longlong *)&local_68,plVar15);
  }
  puVar17 = DAT_1801ee8f8;
  lVar10 = plVar16[4];
  uVar1 = *(int32_t *)((longlong)plVar16 + 0x24);
  lVar11 = plVar16[5];
  uVar5 = *(int32_t *)((longlong)plVar16 + 0x2c);
  lVar12 = plVar16[6];
  uVar6 = *(int32_t *)((longlong)plVar16 + 0x34);
  lVar13 = plVar16[7];
  uVar7 = *(int32_t *)((longlong)plVar16 + 0x3c);
  uVar8 = *(int32_t *)((longlong)plVar16 + 0x4c);
  DAT_1801ee8f8[10] = (int)plVar16[9];
  puVar17[0xb] = uVar8;
  *puVar17 = (int)lVar10;
  puVar17[1] = uVar1;
  puVar17[2] = (int)lVar11;
  puVar17[3] = uVar5;
  if (DAT_1801f3a17 != '\0') {
    local_res18[0] = 2;
    plVar15 = FUN_1800d83d0(puVar18,local_res18);
    uVar1 = *(int32_t *)((longlong)plVar15 + 0xc);
    local_res20[0] = 2;
    plVar15 = FUN_1800d83d0(puVar18,local_res20);
    puVar17 = DAT_1801ee8f8;
    DAT_1801ee8f8[2] = (int)plVar15[1];
    puVar17[3] = uVar1;
    local_res18[0] = 2;
    plVar15 = FUN_1800d83d0(puVar18,local_res18);
    uVar1 = *(int32_t *)((longlong)plVar15 + 0x24);
    local_res20[0] = 2;
    plVar15 = FUN_1800d83d0(puVar18,local_res20);
    puVar17 = DAT_1801ee8f8;
    DAT_1801ee8f8[8] = (int)plVar15[4];
    puVar17[9] = uVar1;
  }
  puVar17[4] = (int)lVar12;
  puVar17[5] = uVar6;
  puVar17[6] = (int)lVar13;
  puVar17[7] = uVar7;
                    
                    
  (*DAT_1801fc958)(param_1,param_2);
  return;
}
}

