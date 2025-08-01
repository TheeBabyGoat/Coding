#include "FUN_1800cc290.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800cc290(longlong *param_1,int32_t param_2,uint param_3) {
uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  int32_t *puVar4;
  int32_t ****ppppuVar5;
  ulonglong uVar6;
  int32_t auStack_98 [32];
  uint local_78 [2];
  int32_t local_70;
  int32_t *local_68;
  int32_t uStack_60;
  ulonglong local_58;
  int32_t *local_50;
  longlong *local_48;
  int32_t local_40;
  uint local_38;
  int32_t ***local_30 [2];
  ulonglong local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_1801eb080 ^ (ulonglong)auStack_98;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(int32_t *)param_1 = 0;
  local_70 = 1;
  plVar3 = (longlong *)
           ((((((ulonglong)(param_3 >> 8 & 0xff) ^
               ((ulonglong)(param_3 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3 ^
              (ulonglong)(param_3 >> 0x10) & 0xff) * 0x100000001b3 ^ (ulonglong)(param_3 >> 0x18)) *
             0x100000001b3 & _DAT_1801fb420) * 0x10 + _DAT_1801fb408);
  lVar2 = plVar3[1];
  local_78[0] = param_3;
  local_48 = param_1;
  if (lVar2 != DAT_1801fb3f8) {
    uVar1 = *(uint *)(lVar2 + 0x10);
    while (param_3 != uVar1) {
      if (lVar2 == *plVar3) goto LAB_1800cc3aa;
      lVar2 = *(longlong *)(lVar2 + 8);
      uVar1 = *(uint *)(lVar2 + 0x10);
    }
    plVar3 = FUN_1800ce7e0((float *)&DAT_1801fb3f0,&local_58,(byte *)local_78);
    uVar6 = 0xffffffffffffffff;
    do {
      uVar6 = uVar6 + 1;
    } while (*(char *)((longlong)*(int32_t **)(*plVar3 + 0x18) + uVar6) != '\0');
    FUN_1800b9910(param_1,*(int32_t **)(*plVar3 + 0x18),uVar6);
    goto LAB_1800cc4af;
  }
LAB_1800cc3aa:
  FUN_1800b9910(param_1,(int32_t *)&DAT_1801cc314,1);
  switch(param_2) {
  case 1:
    puVar4 = (int32_t *)&DAT_1801cc318;
    break;
  case 2:
    puVar4 = (int32_t *)&DAT_1801cc31c;
    break;
  case 3:
    puVar4 = (int32_t *)&DAT_1801cc320;
    break;
  case 4:
    puVar4 = (int32_t *)&DAT_1801cc324;
    break;
  case 5:
    puVar4 = (int32_t *)&DAT_1801cc328;
    break;
  case 6:
    puVar4 = (int32_t *)&DAT_1801cc32c;
    break;
  default:
    goto switchD_1800cc3d8_default;
  }
  FUN_1800b9910(param_1,puVar4,3);
switchD_1800cc3d8_default:
  local_38 = local_78[0];
  local_40 = 0x2000000000000000;
  local_58 = 1;
  local_50 = &local_40;
  local_68 = &DAT_1801cc330;
  uStack_60 = 4;
  FUN_1800b7670((longlong *)local_30,(longlong *)&local_68,&local_58);
  local_70 = 3;
  ppppuVar5 = local_30;
  if (0xf < local_18) {
    ppppuVar5 = (int32_t ****)local_30[0];
  }
  FUN_1800b9910(param_1,ppppuVar5,local_20);
  FUN_1800a6800((longlong *)local_30);
LAB_1800cc4af:
  FUN_1801252c0(local_10 ^ (ulonglong)auStack_98);
  return;
}
}

