#include "FUN_1800c70f0.h"
#include <stdint.h>
#include <stddef.h>

int32_t FUN_1800c70f0(float *param_1,int32_t param_2,int32_t param_3,int32_t param_4) {
float in_XMM0_Da;
  float in_XMM0_Db;
  float in_XMM0_Dc;
  float fVar1;
  float in_XMM0_Dd;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  float fVar2;
  float in_XMM2_Dc;
  float in_XMM2_Dd;
  float fVar4;
  int32_t in_XMM3_Qb;
  int32_t auVar3 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar2 = (float)((ulonglong)param_3 >> 0x20);
  fVar1 = (float)((ulonglong)param_2 >> 0x20);
  fVar4 = (float)((ulonglong)param_4 >> 0x20);
  fVar6 = (float)in_XMM3_Qb;
  fVar7 = (float)((ulonglong)in_XMM3_Qb >> 0x20);
  fVar8 = in_XMM2_Dd * in_XMM0_Dc - in_XMM2_Dc * in_XMM0_Dd;
  fVar9 = fVar7 * in_XMM0_Dc - fVar6 * in_XMM0_Dd;
  fVar10 = in_XMM2_Dd * in_XMM1_Dc - in_XMM2_Dc * in_XMM1_Dd;
  fVar11 = fVar7 * in_XMM1_Dc - fVar6 * in_XMM1_Dd;
  fVar5 = in_XMM1_Dd * in_XMM0_Dc - in_XMM1_Dc * in_XMM0_Dd;
  fVar7 = fVar7 * in_XMM2_Dc - fVar6 * in_XMM2_Dd;
  fVar6 = fVar10 * fVar4 + (fVar7 * fVar1 - fVar11 * fVar2);
  fVar7 = (fVar9 * fVar2 - fVar8 * fVar4) - fVar7 * in_XMM0_Db;
  fVar1 = fVar7 * (float)param_2 +
          ((fVar8 * fVar1 - fVar5 * fVar2) - fVar10 * in_XMM0_Db) * (float)param_4 +
          fVar6 * in_XMM0_Da +
          (fVar5 * fVar4 + (fVar11 * in_XMM0_Db - fVar9 * fVar1)) * (float)param_3;
  if (param_1 != (float *)0x0) {
    *param_1 = fVar1;
    param_1[1] = fVar1;
    param_1[2] = fVar1;
    param_1[3] = fVar1;
  }
  auVar3._4_4_ = fVar1;
  auVar3._0_4_ = fVar1;
  auVar3._8_4_ = fVar1;
  auVar3._12_4_ = fVar1;
  auVar3 = divps(_DAT_1801cc1a0,auVar3);
  return CONCAT44(auVar3._4_4_ * fVar7,auVar3._0_4_ * fVar6);
}
}

