#include "FUN_1800b6df0.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800b6df0(longlong param_1,byte *param_2,longlong *param_3) {
longlong *plVar1;
  byte bVar2;
  int32_t *puVar3;
  code *pcVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  byte *pbVar8;
  int32_t auStack_108 [32];
  longlong local_e8;
  byte local_e0;
  int32_t uStack_df;
  int32_t uStack_d8;
  code *local_d0;
  int32_t *local_c8;
  longlong *local_c0;
  longlong *plStack_b8;
  longlong local_b0;
  longlong *local_a8;
  longlong *local_a0;
  int32_t *local_98;
  int32_t local_88 [8];
  int32_t uStack_80;
  code *local_78;
  int32_t local_68;
  int32_t uStack_60;
  int32_t uStack_5c;
  int32_t uStack_5a;
  int32_t uStack_58;
  int32_t uStack_56;
  int32_t uStack_55;
  ulonglong local_48;
  
  local_48 = DAT_1801eb080 ^ (ulonglong)auStack_108;
  pbVar8 = (byte *)(param_1 + 1);
  if (pbVar8 == param_2) goto LAB_1800b714c;
  bVar2 = *pbVar8;
  if (bVar2 == 0x7d) {
    uVar7 = param_3[3];
    if ((longlong)uVar7 < 0) {
LAB_1800b7173:
      FUN_1800b7ac0(0x180187868);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    param_3[3] = uVar7 + 1;
    FUN_1800ab850((longlong)(param_3 + 4),(int32_t *)&local_e0,uVar7);
    if (local_e0 == 0) {
LAB_1800b7180:
      FUN_1800b7ac0(0x180182e88);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (local_e0 == 0xd) {
      lVar6 = *param_3 - (longlong)pbVar8;
      *param_3 = (longlong)pbVar8;
LAB_1800b6fc0:
      param_3[1] = param_3[1] + lVar6;
    }
  }
  else {
    if (bVar2 == 0x7b) {
      puVar3 = (int32_t *)param_3[4];
      for (; pbVar8 != (byte *)(param_1 + 2); pbVar8 = pbVar8 + 1) {
        bVar2 = *pbVar8;
        if ((ulonglong)puVar3[3] < puVar3[2] + 1) {
          (**(code **)*puVar3)(puVar3);
        }
        *(byte *)(puVar3[2] + puVar3[1]) = bVar2;
        puVar3[2] = puVar3[2] + 1;
      }
      param_3[4] = (longlong)puVar3;
      goto LAB_1800b7114;
    }
    if (bVar2 == 0x3a) {
      uVar7 = param_3[3];
      if ((longlong)uVar7 < 0) goto LAB_1800b7173;
      lVar6 = uVar7 + 1;
    }
    else {
      if (9 < (byte)(bVar2 - 0x30)) {
LAB_1800b714c:
        FUN_1800b7ac0(0x1801878a0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar5 = 0;
      if (bVar2 == 0x30) {
        pbVar8 = (byte *)(param_1 + 2);
      }
      else {
        do {
          if (0xccccccc < uVar5) goto LAB_1800b7166;
          bVar2 = *pbVar8;
          pbVar8 = pbVar8 + 1;
          uVar5 = ((int)(char)bVar2 + uVar5 * 10) - 0x30;
        } while (((pbVar8 != param_2) && ('/' < (char)*pbVar8)) && ((char)*pbVar8 < ':'));
        if (0x7fffffff < uVar5) {
LAB_1800b7166:
          FUN_1800b7ac0(0x180187818);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if ((pbVar8 == param_2) || ((*pbVar8 != 0x7d && (*pbVar8 != 0x3a)))) goto LAB_1800b714c;
      if (0 < param_3[3]) {
        FUN_1800b7ac0(0x180187830);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar7 = (ulonglong)uVar5;
      lVar6 = -1;
    }
    param_3[3] = lVar6;
    if (*pbVar8 != 0x7d) {
      if (*pbVar8 != 0x3a) {
        FUN_1800b7ac0(0x1801877d8);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar6 = *param_3;
      plVar1 = param_3 + 4;
      pbVar8 = pbVar8 + 1;
      *param_3 = (longlong)pbVar8;
      param_3[1] = param_3[1] + (lVar6 - (longlong)pbVar8);
      FUN_1800ab850((longlong)plVar1,(int32_t *)&local_e0,uVar7);
      if (local_e0 == 0) {
        FUN_1800b7ac0(0x180182e88);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (local_e0 == 0xd) {
        (*local_d0)(param_3,plVar1,uStack_d8);
        pbVar8 = (byte *)*param_3;
        if (pbVar8 == param_2) goto LAB_1800b713f;
      }
      else {
        uStack_56 = 0;
        local_c8 = &local_68;
        local_68 = 0xffffffff00000000;
        uStack_60 = 0;
        uStack_5c = 0;
        uStack_5a = 0x2001;
        uStack_58 = 0;
        local_b0._0_3_ = (uint3)local_e0;
        local_c0 = param_3;
        plStack_b8 = plVar1;
        pbVar8 = FUN_1800abe10(pbVar8,param_2,(longlong *)&local_c8);
        if ((pbVar8 == param_2) || (*pbVar8 != 0x7d)) {
          FUN_1800b7ac0(0x1801877d8);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_98 = &local_68;
        uStack_80 = uStack_d8;
        local_78 = local_d0;
        local_a0 = plVar1;
        FUN_1800b6ac0(local_88,&local_e8,(longlong *)&local_a0);
        *plVar1 = local_e8;
      }
      if (*pbVar8 != 0x7d) {
LAB_1800b713f:
        FUN_1800b7ac0(0x1801877f8);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_1800b7114;
    }
    FUN_1800ab850((longlong)(param_3 + 4),(int32_t *)&local_e0,uVar7);
    if (local_e0 == 0) goto LAB_1800b7180;
    if (local_e0 == 0xd) {
      lVar6 = *param_3 - (longlong)pbVar8;
      *param_3 = (longlong)pbVar8;
      goto LAB_1800b6fc0;
    }
  }
  local_c0 = (longlong *)param_3[5];
  plStack_b8 = (longlong *)param_3[6];
  local_c8 = (int32_t *)param_3[4];
  local_68 = CONCAT71(uStack_df,local_e0);
  local_b0 = param_3[7];
  uStack_60 = (int32_t)uStack_d8;
  uStack_5c = (int32_t)((ulonglong)uStack_d8 >> 0x20);
  uStack_5a = (int32_t)((ulonglong)uStack_d8 >> 0x30);
  uStack_58 = SUB82(local_d0,0);
  uStack_56 = (int32_t)((ulonglong)local_d0 >> 0x10);
  uStack_55 = (int32_t)((ulonglong)local_d0 >> 0x18);
  local_a8 = param_3;
  FUN_1800aad80((int32_t *)&local_68,&local_e8,(longlong *)&local_c8);
  param_3[4] = local_e8;
LAB_1800b7114:
  FUN_1801252c0(local_48 ^ (ulonglong)auStack_108);
  return;
}
}

