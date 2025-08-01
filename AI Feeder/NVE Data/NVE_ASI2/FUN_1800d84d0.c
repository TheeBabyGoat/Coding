#include "FUN_1800d84d0.h"
#include <stdint.h>
#include <stddef.h>

 FUN_1800d84d0(param_1,&local_158,(int *)&local_138,&local_128);
    local_128 = _DAT_1801d9c50;
    uStack_120 = _UNK_1801d9c58;
    local_138._0_4_ = 1;
    local_108 = _DAT_1801d9bd0;
    uStack_100 = _UNK_1801d9bd8;
    local_118 = _DAT_1801d9cd0;
    uStack_110 = _UNK_1801d9cd8;
    FUN_1800d84d0(param_1,&local_158,(int *)&local_138,&local_128);
    local_128 = _DAT_1801d9c70;
    uStack_120 = _UNK_1801d9c78;
    local_138 = (char *)CONCAT44(local_138._4_4_,2);
    local_108 = _DAT_1801d9bd0;
    uStack_100 = _UNK_1801d9bd8;
    local_118 = _DAT_1801d9d10;
    uStack_110 = _UNK_1801d9d18;
    FUN_1800d84d0(param_1,&local_158,(int *)&local_138,&local_128);
    local_118 = CONCAT44(0x42,(int32_t)local_118);
    local_128 = 0;
    uStack_120 = 0;
    local_108 = _DAT_1801d9730;
    uStack_100 = _UNK_1801d9738;
    local_e8 = _DAT_1801d9850;
    uStack_e0 = _UNK_1801d9858;
    local_118 = local_118 & 0xffffffffffff0000;
    uStack_110 = 0x5100000055;
    local_f8 = _DAT_1801d9a40;
    uStack_f0 = _UNK_1801d9a48;
    local_d8 = 0x3400000076;
    local_138 = FUN_1800d7af0((char *)&local_128);
    lVar6 = -1;
    local_130 = -1;
    do {
      local_130 = local_130 + 1;
    } while (local_138[local_130] != '\0');
    puVar4 = (int32_t *)FUN_1800a68d0(&local_138);
    local_138 = (char *)CONCAT26(local_138._6_2_,0x157413087883);
    local_158 = (char *)operator_new(6);
    pcVar1 = local_158 + 6;
    local_148 = pcVar1;
    FUN_180150fd0((int32_t *)local_158,&local_138,6);
    local_150 = pcVar1;
    FUN_1800d8620(puVar4,(longlong *)&local_158);
    FUN_1800d0c10();
    local_f8 = _DAT_1801d95e0;
    uStack_f0 = _UNK_1801d95e8;
    local_128 = 0;
    uStack_120 = 0;
    local_108 = _DAT_1801d9420;
    uStack_100 = _UNK_1801d9428;
    local_e8 = _DAT_1801d95f0;
    uStack_e0 = _UNK_1801d95f8;
    local_118 = local_118 & 0xffffff0000000000;
    uStack_110 = 0x5a00000068;
    local_d8 = _DAT_1801d9410;
    uStack_d0 = _UNK_1801d9418;
    local_c8 = 0x100000035;
    local_158 = FUN_1800d1820((char *)&local_128);
    local_150 = (char *)0xffffffffffffffff;
    do {
      local_150 = (char *)((longlong)local_150 + 1);
    } while (local_158[(longlong)local_150] != '\0');
    puVar5 = (int32_t *)FUN_1800a68d0(&local_158);
    VirtualProtect(puVar5,0x10,0x40,(PDWORD)&local_138);
    *puVar5 = 0x9f;
    VirtualProtect(puVar5,0x10,(DWORD)local_138,(PDWORD)&local_138);
    if (DAT_1801f3a17 != '\0') {
FUN_1800d1410();
    }
}

int32_t * FUN_1800d84d0(int32_t param_1,int32_t *param_2,int *param_3,longlong *param_4) {
code *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  int32_t uVar5;
  longlong *plVar6;
  longlong *plVar7;
  int32_t *puVar8;
  longlong *plVar9;
  longlong *local_38;
  int32_t uStack_30;
  longlong *local_28;
  uint uStack_20;
  int32_t uStack_1c;
  
  plVar3 = DAT_1801fb320;
  local_28 = (longlong *)DAT_1801fb320[1];
  uStack_20 = 0;
  plVar7 = DAT_1801fb320;
  if (*(char *)((longlong)local_28 + 0x19) == '\0') {
    plVar4 = local_28;
    plVar9 = DAT_1801fb320;
    do {
      local_28 = plVar4;
      plVar6 = local_28;
      plVar7 = local_28;
      if (*(int *)((longlong)local_28 + 0x1c) < *param_3) {
        plVar6 = local_28 + 2;
        plVar7 = plVar9;
      }
      uStack_20 = (uint)(*param_3 <= *(int *)((longlong)local_28 + 0x1c));
      plVar4 = (longlong *)*plVar6;
      plVar9 = plVar7;
    } while (*(char *)(*plVar6 + 0x19) == '\0');
  }
  if ((*(char *)((longlong)plVar7 + 0x19) == '\0') &&
     (*(int *)((longlong)plVar7 + 0x1c) <= *param_3)) {
    uVar5 = 0;
  }
  else {
    if (DAT_1801fb328 == 0x333333333333333) {
      FUN_1800d8950();
      pcVar1 = (code *)swi(3);
      puVar8 = (int32_t *)(*pcVar1)();
      return puVar8;
    }
    local_38 = (longlong *)&DAT_1801fb320;
    uStack_30 = 0;
    plVar7 = (longlong *)operator_new(0x50);
    *(int *)((longlong)plVar7 + 0x1c) = *param_3;
    lVar2 = param_4[1];
    plVar7[4] = *param_4;
    plVar7[5] = lVar2;
    lVar2 = param_4[3];
    plVar7[6] = param_4[2];
    plVar7[7] = lVar2;
    lVar2 = param_4[5];
    plVar7[8] = param_4[4];
    plVar7[9] = lVar2;
    *plVar7 = (longlong)plVar3;
    plVar7[1] = (longlong)plVar3;
    plVar7[2] = (longlong)plVar3;
    *(int32_t *)(plVar7 + 3) = 0;
    uStack_30 = CONCAT44(uStack_1c,uStack_20);
    local_38 = local_28;
    plVar7 = FUN_1800d86d0((longlong *)&DAT_1801fb320,(longlong *)&local_38,plVar7);
    uVar5 = 1;
  }
  *param_2 = plVar7;
  *(int32_t *)(param_2 + 1) = uVar5;
  return param_2;
}
}

