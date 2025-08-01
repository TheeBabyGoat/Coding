#include "FUN_1800b9b10.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800b9b10(longlong *param_1,int32_t *param_2,int32_t *param_3,int32_t *param_4) {
code *pcVar1;
  LPVOID pvVar2;
  ulonglong uVar3;
  LPVOID pvVar4;
  int32_t ****ppppuVar5;
  longlong lVar6;
  CHAR *pCVar7;
  int32_t auStack_b8 [32];
  byte local_98;
  int32_t local_94;
  int32_t *local_88;
  int32_t local_80;
  longlong *local_78;
  CHAR local_70;
  int32_t uStack_6f;
  ulonglong local_60;
  ulonglong local_58;
  int32_t ***local_50 [2];
  ulonglong local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_1801eb080 ^ (ulonglong)auStack_b8;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(int32_t *)param_1 = 0;
  local_94 = 1;
  local_78 = param_1;
  uVar3 = __std_fs_code_page();
  local_88 = param_3;
  if (7 < (ulonglong)param_3[3]) {
    local_88 = (int32_t *)*param_3;
  }
  local_80 = param_3[2];
  FUN_1800b9540((LPSTR)local_50,(UINT)uVar3,&local_88);
  local_88 = param_4;
  if (7 < (ulonglong)param_4[3]) {
    local_88 = (int32_t *)*param_4;
  }
  local_80 = param_4[2];
  FUN_1800b9540(&local_70,(UINT)uVar3,&local_88);
  lVar6 = 8;
  if (local_60 == 0) {
    lVar6 = 4;
  }
  uVar3 = lVar6 + param_2[1] + local_40 + local_60;
  if ((ulonglong)param_1[3] < uVar3) {
    lVar6 = param_1[2];
    FUN_1800b9630(param_1,uVar3 - lVar6);
    param_1[2] = lVar6;
  }
  FUN_1800b9910(param_1,(int32_t *)*param_2,param_2[1]);
  FUN_1800b9910(param_1,(int32_t *)&DAT_180187990,3);
  ppppuVar5 = local_50;
  if (0xf < local_38) {
    ppppuVar5 = (int32_t ****)local_50[0];
  }
  FUN_1800b9910(param_1,ppppuVar5,local_40);
  if (local_60 != 0) {
    FUN_1800b9910(param_1,(int32_t *)&DAT_180187994,4);
    pCVar7 = &local_70;
    if (0xf < local_58) {
      pCVar7 = (CHAR *)CONCAT71(uStack_6f,local_70);
    }
    FUN_1800b9910(param_1,(int32_t *)pCVar7,local_60);
  }
  uVar3 = param_1[2];
  if (uVar3 < (ulonglong)param_1[3]) {
    param_1[2] = uVar3 + 1;
    if (0xf < (ulonglong)param_1[3]) {
      param_1 = (longlong *)*param_1;
    }
    *(int32_t *)((longlong)param_1 + uVar3) = 0x22;
  }
  else {
    FUN_1800b99a0(param_1,1,(ulonglong)local_98,0x22);
  }
  if (0xf < local_58) {
    pvVar2 = (LPVOID)CONCAT71(uStack_6f,local_70);
    pvVar4 = pvVar2;
    if ((0xfff < local_58 + 1) &&
       (pvVar4 = *(LPVOID *)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar4)))) goto LAB_1800b9d62;
    thunk_FUN_18012d5e8(pvVar4);
  }
  local_60 = 0;
  local_58 = 0xf;
  local_70 = '\0';
  if (0xf < local_38) {
    ppppuVar5 = (int32_t ****)local_50[0];
    if ((0xfff < local_38 + 1) &&
       (ppppuVar5 = (int32_t ****)local_50[0][-1],
       0x1f < (ulonglong)((longlong)local_50[0] + (-8 - (longlong)ppppuVar5)))) {
      FUN_18012b7b4();
LAB_1800b9d62:
      FUN_18012b7b4();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    thunk_FUN_18012d5e8(ppppuVar5);
  }
  FUN_1801252c0(local_30 ^ (ulonglong)auStack_b8);
  return;
}
}

