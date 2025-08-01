#include "FUN_1800b1490.h"
#include <stdint.h>
#include <stddef.h>

longlong * FUN_1800b1490(longlong *param_1,int32_t (*param_2) [32],int32_t (*param_3) [32],
             ulonglong param_4,int param_5) {
uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  byte bVar5;
  int iVar6;
  int32_t local_18;
  int iStack_10;
  int32_t uStack_c;
  
  if (param_4 != 0) {
    uVar2 = (uint)(param_4 >> 0x20);
    uVar1 = uVar2 >> 0x14;
    iVar6 = uVar1 - 0x433;
    if ((param_5 == 2) && (0 < iVar6)) {
      FUN_1800b1a00(param_1,param_2,param_3,param_4,0);
    }
    else {
      local_18 = param_4 & 0xfffffffffffff | 0x10000000000000;
      if ((uVar1 - 0x3ff < 0x35) &&
         (bVar5 = -(char)iVar6, (local_18 & (1L << (bVar5 & 0x3f)) - 1U) == 0)) {
        local_18 = local_18 >> (bVar5 & 0x3f);
        iVar6 = 0;
        iStack_10 = 0;
        uVar3 = local_18 / 10;
        if ((int)local_18 == (int)(local_18 / 10) * 10) {
          do {
            local_18 = uVar3;
            iVar6 = iVar6 + 1;
            uVar3 = local_18 / 10;
            iStack_10 = iVar6;
          } while ((int)local_18 == (int)(local_18 / 10) * 10);
        }
      }
      else {
        plVar4 = FUN_1800b07d0(&local_18,param_4 & 0xfffffffffffff,uVar2 >> 0x14);
        local_18._0_4_ = (int32_t)*plVar4;
        local_18._4_4_ = *(int32_t *)((longlong)plVar4 + 4);
        iStack_10 = (int)plVar4[1];
        uStack_c = *(int32_t *)((longlong)plVar4 + 0xc);
      }
      FUN_1800b0dd0(param_1,param_2,param_3,&local_18,param_5,param_4);
    }
    return param_1;
  }
  if (param_5 == 1) {
    if (4 < (longlong)param_3 - (longlong)param_2) {
      *(int32_t *)*param_2 = DAT_18018316c;
      (*param_2)[4] = DAT_180183170;
      *param_1 = (longlong)(*param_2 + 5);
      *(int32_t *)(param_1 + 1) = 0;
      return param_1;
    }
  }
  else if (param_2 != param_3) {
    (*param_2)[0] = 0x30;
    *param_1 = (longlong)(*param_2 + 1);
    *(int32_t *)(param_1 + 1) = 0;
    return param_1;
  }
  *param_1 = (longlong)param_3;
  *(int32_t *)(param_1 + 1) = 0x84;
  return param_1;
}
}

