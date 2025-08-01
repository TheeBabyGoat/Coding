#include "FUN_1800aebb0.h"
#include <stdint.h>
#include <stddef.h>

longlong * FUN_1800aebb0(longlong *param_1,char *param_2,char *param_3,uint param_4,int param_5) {
char cVar1;
  byte bVar2;
  uint uVar3;
  char *pcVar4;
  ulonglong uVar5;
  uint uVar6;
  
  uVar3 = param_4;
  if ((int)param_4 < 0) {
    if (param_2 == param_3) goto LAB_1800aebd2;
    *param_2 = '-';
    param_2 = param_2 + 1;
    uVar3 = param_4 & 0x7fffffff;
  }
  if ((uVar3 & 0x7f800000) == 0x7f800000) {
    uVar3 = uVar3 & 0x7fffff;
    if (uVar3 == 0) {
      pcVar4 = "inf";
      uVar5 = 3;
    }
    else if (((int)param_4 < 0) && (uVar3 == 0x400000)) {
      pcVar4 = "nan(ind)";
      uVar5 = 8;
    }
    else if (uVar3 >> 0x16 == 0) {
      pcVar4 = "nan(snan)";
      uVar5 = 9;
    }
    else {
      pcVar4 = "nan";
      uVar5 = 3;
    }
    if ((longlong)param_3 - (longlong)param_2 < (longlong)uVar5) {
      *param_1 = (longlong)param_3;
      *(int32_t *)(param_1 + 1) = 0x84;
      return param_1;
    }
    FUN_180150fd0((int32_t *)param_2,(int32_t *)pcVar4,uVar5);
    *(int32_t *)(param_1 + 1) = 0;
    *param_1 = (longlong)(param_2 + uVar5);
    return param_1;
  }
  if (param_5 != 4) {
    FUN_1800aeaa0(param_1,param_2,param_3,uVar3,param_5);
    return param_1;
  }
  if (uVar3 == 0) {
    if (3 < (longlong)param_3 - (longlong)param_2) {
      builtin_strncpy(param_2,"0p+0",4);
      *param_1 = (longlong)(param_2 + 4);
      *(int32_t *)(param_1 + 1) = 0;
      return param_1;
    }
  }
  else {
    uVar6 = 0xffffff82;
    if (uVar3 >> 0x17 != 0) {
      uVar6 = (uVar3 >> 0x17) - 0x7f;
    }
    if (param_2 != param_3) {
      pcVar4 = param_2 + 1;
      *param_2 = (uVar3 >> 0x17 != 0) + '0';
      if ((uVar3 & 0x7fffff) != 0) {
        if (pcVar4 == param_3) goto LAB_1800aebd2;
        *pcVar4 = '.';
        pcVar4 = param_2 + 2;
        bVar2 = 0x18;
        uVar3 = (uVar3 & 0x7fffff) * 2;
        do {
          bVar2 = bVar2 - 4;
          if (pcVar4 == param_3) goto LAB_1800aebd2;
          *pcVar4 = "0123456789abcdefghijklmnopqrstuvwxyz0b"[uVar3 >> (bVar2 & 0x3f)];
          pcVar4 = pcVar4 + 1;
          uVar3 = uVar3 & (1 << (bVar2 & 0x1f)) - 1U;
        } while (uVar3 != 0);
      }
      if (1 < (longlong)param_3 - (longlong)pcVar4) {
        *pcVar4 = 'p';
        cVar1 = '-';
        if (-1 < (int)uVar6) {
          cVar1 = '+';
        }
        pcVar4[1] = cVar1;
        uVar3 = -uVar6;
        if (0 < (int)uVar6) {
          uVar3 = uVar6;
        }
        FUN_1800b4050(param_1,(int32_t *)(pcVar4 + 2),(longlong)param_3,(ulonglong)uVar3,10);
        return param_1;
      }
    }
  }
LAB_1800aebd2:
  *param_1 = (longlong)param_3;
  *(int32_t *)(param_1 + 1) = 0x84;
  return param_1;
}
}

 FUN_1800aebb0(&local_6a8,&local_5c8,(char *)local_5f,(uint)param_3,iVar22);
        goto LAB_1800afb07;
      }
      plVar10 = FUN_1800add90(&local_6a8,&local_5c8,(char *)local_5f,(uint)param_3);
      local_6a8._0_4_ = (int32_t)*plVar10;
      local_6a8._4_4_ = *(int32_t *)((longlong)plVar10 + 4);
      uStack_6c0 = (int)plVar10[1];
      uStack_6bc = *(int32_t *)((longlong)plVar10 + 0xc);
    }
    else {
      in_stack_fffffffffffff8f8 = iVar22;
      FUN_1800af290(&local_6a8,(int32_t (*) [32])&local_5c8,(int32_t (*) [32])local_5f,piVar17
                    ,iVar22,local_6e0);
LAB_1800afb07:
      uStack_6c0 = (int32_t)uStack_6a0;
      uStack_6bc = uStack_6a0._4_4_;
    }
    local_6c8 = (char *)CONCAT44(local_6a8._4_4_,(int32_t)local_6a8);
  }
  local_6d8 = &local_5c8;
  local_6f0 = (int)local_6c8 - (int)local_6d8;
  cVar14 = '\0';
  if (local_6f5 == '\0') {
if (local_6f7 != '\x02') {
      local_6f0 = local_6f0 + 1;
    }
  }
}

