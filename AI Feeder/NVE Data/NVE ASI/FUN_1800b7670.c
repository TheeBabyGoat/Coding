#include "FUN_1800b7670.h"
#include <stdint.h>
#include <stddef.h>

 FUN_1800b7670((longlong *)local_1d8,(longlong *)&local_1b8,(ulonglong *)&local_1e8);
      pFVar19 = (FILE *)local_1d8;
      if (0xf < local_1c0) {
pFVar19 = (FILE *)local_1d8._0_8_;
      }
}

 FUN_1800b7670((longlong *)&stack0x00000030,(longlong *)&stack0x00000050,
                    (ulonglong *)&stack0x00000020);
      pCVar6 = (LPCSTR)&stack0x00000030;
      if (0xf < in_stack_00000048) {
pCVar6 = in_stack_00000030;
      }
}

void FUN_1800b7670(longlong *param_1,longlong *param_2,ulonglong *param_3) {
ulonglong uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  byte bVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int32_t auStack_1e8 [32];
  int32_t local_1c8;
  longlong *local_1c0;
  longlong local_1b8;
  longlong lStack_1b0;
  longlong local_1a8;
  longlong lStack_1a0;
  int32_t local_198;
  int32_t uStack_190;
  int32_t ***local_188;
  ulonglong local_180;
  ulonglong uStack_178;
  int32_t local_170;
  int32_t **local_168;
  int32_t *local_160;
  ulonglong local_158;
  int32_t local_150;
  longlong *local_148;
  int32_t local_140 [33];
  ulonglong local_38;
  
  local_38 = DAT_1801eb080 ^ (ulonglong)auStack_1e8;
  uVar5 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(int32_t *)param_1 = 0;
  local_1c8 = 1;
  uVar1 = *param_3;
  if (uVar1 != 0) {
    uVar7 = uVar5;
    do {
      uVar2 = *(ulonglong *)(param_3[1] + uVar7 * 8);
      bVar4 = (byte)(uVar2 >> 0x3c);
      if (bVar4 == 0xc) {
        uVar5 = uVar5 + *(longlong *)(param_3[1] + (uVar2 & 0xfffffffffffffff) + 8 + uVar1 * 8);
      }
      else if (bVar4 == 0xb) {
        uVar5 = uVar5 + 0x20;
      }
      else {
        uVar5 = uVar5 + 8;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar1);
  }
  local_1c0 = param_1;
  if ((ulonglong)param_1[3] < uVar5 + param_2[1]) {
    FUN_1800b9630(param_1,uVar5 + param_2[1]);
    param_1[2] = 0;
  }
  local_160 = local_140;
  local_158 = 0;
  local_150 = 0x100;
  local_168 = &PTR_FUN_1801835f0;
  local_1a8 = *param_2;
  lStack_1a0 = param_2[1];
  local_198 = 0;
  uStack_190 = 0;
  local_188 = &local_168;
  local_180 = *param_3;
  uStack_178 = param_3[1];
  local_170 = 0;
  local_1b8 = *param_2;
  lStack_1b0 = param_2[1];
  local_148 = param_1;
  FUN_1800b71b0(&local_1b8,&local_1a8);
  FUN_1800b7600((longlong)&local_168);
  uVar1 = local_158;
  local_168 = &PTR_FUN_1801835f0;
  if (local_158 != 0) {
    local_158 = 0;
    if ((ulonglong)local_148[3] < 0x10) {
      lVar6 = local_148[2] + (longlong)local_148;
      plVar3 = local_148;
    }
    else {
      lVar6 = *local_148 + local_148[2];
      plVar3 = (longlong *)*local_148;
    }
    FUN_1800b7500(local_148,lVar6 - (longlong)plVar3,local_140,uVar1);
  }
  FUN_1801252c0(local_38 ^ (ulonglong)auStack_1e8);
  return;
}
}

 FUN_1800b7670((longlong *)local_78,(longlong *)&local_b8,&local_98);
  ppppuVar9 = local_78;
  if (0xf < local_60) {
ppppuVar9 = (int32_t ****)local_78[0];
  }
}

 FUN_1800b7670((longlong *)local_78,(longlong *)&local_b8,&local_98);
  ppppuVar9 = local_78;
  if (0xf < local_60) {
ppppuVar9 = (int32_t ****)local_78[0];
  }
}

 FUN_1800b7670((longlong *)local_78,(longlong *)&local_b8,&local_98);
  ppppuVar9 = local_78;
  if (0xf < local_60) {
ppppuVar9 = (int32_t ****)local_78[0];
  }
}

 FUN_1800b7670((longlong *)local_78,(longlong *)&local_b8,&local_98);
  ppppuVar9 = local_78;
  if (0xf < local_60) {
ppppuVar9 = (int32_t ****)local_78[0];
  }
}

 FUN_1800b7670((longlong *)local_98,(longlong *)&local_e8,&local_a8);
  ppppuVar10 = local_98;
  if (0xf < local_80) {
ppppuVar10 = (int32_t ****)local_98[0];
  }
}

 FUN_1800b7670((longlong *)local_98,(longlong *)&local_f8,&local_c8);
  ppppuVar10 = local_98;
  if (0xf < local_80) {
ppppuVar10 = (int32_t ****)local_98[0];
  }
}

 FUN_1800b7670((longlong *)local_98,(longlong *)&local_f8,&local_c8);
  ppppuVar10 = local_98;
  if (0xf < local_80) {
ppppuVar10 = (int32_t ****)local_98[0];
  }
}

 FUN_1800b7670((longlong *)local_38,(longlong *)&local_48,local_58);
    lpOutputString = local_38;
    if (0xf < local_20) {
lpOutputString = (LPCSTR **)local_38[0];
    }
}

 FUN_1800b7670((longlong *)local_68,(longlong *)&local_a8,&local_78);
    ppppuVar10 = local_68;
    if (0xf < local_50) {
ppppuVar10 = (int32_t ****)local_68[0];
    }
}

 FUN_1800b7670((longlong *)local_68,(longlong *)&local_98,(ulonglong *)&local_a8);
      ppppuVar10 = local_68;
      if (0xf < local_50) {
ppppuVar10 = (int32_t ****)local_68[0];
      }
}

 FUN_1800b7670((longlong *)local_40,(longlong *)&local_68,&local_78);
        pppuVar3 = local_40;
        if (0xf < local_28) {
pppuVar3 = (int32_t ***)local_40[0];
        }
}

 FUN_1800b7670((longlong *)local_38,(longlong *)&local_48,local_58);
  lpOutputString = local_38;
  if (0xf < local_20) {
lpOutputString = (LPCSTR **)local_38[0];
  }
}

 FUN_1800b7670((longlong *)local_58,(longlong *)&local_a8,&local_98);
  lpOutputString = local_58;
  if (0xf < local_40) {
lpOutputString = (LPCSTR **)local_58[0];
  }
}

 FUN_1800b7670((longlong *)local_38,(longlong *)&local_68,&local_58);
  lpOutputString = local_38;
  if (0xf < local_20) {
lpOutputString = (LPCSTR **)local_38[0];
  }
}

