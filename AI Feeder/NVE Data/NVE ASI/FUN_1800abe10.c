#include "FUN_1800abe10.h"
#include <stdint.h>
#include <stddef.h>

byte * FUN_1800abe10(byte *param_1,byte *param_2,longlong *param_3) {
int32_t (*pauVar1) [32];
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  byte bVar7;
  byte *pbVar8;
  int32_t uVar9;
  ulonglong uVar10;
  bool bVar11;
  longlong *local_res8;
  longlong local_38 [2];
  
  if ((param_1 == param_2) || (*param_1 == 0x7d)) {
    return param_1;
  }
  plVar5 = FUN_1800b7820(local_38,param_1,param_2,(uint *)&local_res8);
  if (((char)(int)plVar5[1] == '\0') || (iVar4 = (int)*plVar5 - (int)param_1, iVar4 < 0))
  goto LAB_1800ac1a1;
  pbVar8 = param_1;
  if (param_1 + iVar4 != param_2) {
    pbVar8 = param_1 + iVar4;
  }
  do {
    bVar7 = *pbVar8;
    if (bVar7 == 0x3c) {
      uVar9 = 1;
LAB_1800abeae:
      if (pbVar8 != param_1) {
        if (*param_1 == 0x7b) {
          FUN_1800b7ac0(0x180187518);
          pcVar3 = (code *)swi(3);
          pbVar8 = (byte *)(*pcVar3)();
          return pbVar8;
        }
        uVar10 = (longlong)pbVar8 - (longlong)param_1;
        if (4 < uVar10) {
          FUN_1800b7ac0(0x180187538);
          pcVar3 = (code *)swi(3);
          pbVar8 = (byte *)(*pcVar3)();
          return pbVar8;
        }
        lVar2 = *param_3;
        FUN_180150fd0((int32_t *)(lVar2 + 0xf),(int32_t *)param_1,uVar10);
        pauVar1 = (int32_t (*) [32])(lVar2 + 0xf + uVar10);
        FUN_180151670(pauVar1,0,(*param_3 - (longlong)pauVar1) + 0x13);
        *(char *)(*param_3 + 0xe) = (char)uVar10;
        param_1 = pbVar8;
      }
      param_1 = param_1 + 1;
      *(int32_t *)(*param_3 + 9) = uVar9;
      break;
    }
    if (bVar7 == 0x3e) {
      uVar9 = 2;
      goto LAB_1800abeae;
    }
    if (bVar7 == 0x5e) {
      uVar9 = 3;
      goto LAB_1800abeae;
    }
    bVar11 = pbVar8 != param_1;
    pbVar8 = param_1;
  } while (bVar11);
  if (param_1 == param_2) {
    return param_1;
  }
  bVar7 = *param_1;
  if (bVar7 == 0x20) {
    *(int32_t *)((longlong)param_3 + 0x19) = 1;
    if (8 < (byte)((char)param_3[3] - 1U)) goto LAB_1800ac1fc;
    *(int32_t *)(*param_3 + 10) = 3;
LAB_1800abf74:
    param_1 = param_1 + 1;
  }
  else {
    if (bVar7 == 0x2b) {
      *(int32_t *)((longlong)param_3 + 0x19) = 1;
      if (8 < (byte)((char)param_3[3] - 1U)) goto LAB_1800ac1fc;
      *(int32_t *)(*param_3 + 10) = 1;
      goto LAB_1800abf74;
    }
    if (bVar7 == 0x2d) {
      *(int32_t *)((longlong)param_3 + 0x19) = 1;
      if (8 < (byte)((char)param_3[3] - 1U)) goto LAB_1800ac1fc;
      *(int32_t *)(*param_3 + 10) = 2;
      goto LAB_1800abf74;
    }
  }
  if (param_1 != param_2) {
    if (*param_1 == 0x23) {
      *(int32_t *)((longlong)param_3 + 0x19) = 1;
      if (8 < (byte)((char)param_3[3] - 1U)) goto LAB_1800ac1fc;
      param_1 = param_1 + 1;
      *(int32_t *)(*param_3 + 0xb) = 1;
      if (param_1 == param_2) {
        return param_1;
      }
    }
    if (*param_1 == 0x30) {
      *(int32_t *)((longlong)param_3 + 0x1a) = 1;
      if ((8 < (byte)((char)param_3[3] - 1U)) && ((char)param_3[3] != '\n')) {
        FUN_1800b7ac0(0x180187558);
        pcVar3 = (code *)swi(3);
        pbVar8 = (byte *)(*pcVar3)();
        return pbVar8;
      }
      param_1 = param_1 + 1;
      *(int32_t *)(*param_3 + 0xd) = 1;
      if (param_1 == param_2) {
        return param_1;
      }
    }
    if ((byte)(*param_1 - 0x31) < 9) {
      uVar6 = 0;
      do {
        if (0xccccccc < uVar6) goto LAB_1800ac1e2;
        bVar7 = *param_1;
        param_1 = param_1 + 1;
        uVar6 = (int)(char)bVar7 + (uVar6 * 5 + -0x18) * 2;
      } while (((param_1 != param_2) && ('/' < (char)*param_1)) && ((char)*param_1 < ':'));
      if (0x7fffffff < uVar6) goto LAB_1800ac1e2;
      *(uint *)*param_3 = uVar6;
    }
    else if (*param_1 == 0x7b) {
      if (((param_1 + 1 == param_2) ||
          (local_res8 = param_3,
          pbVar8 = (byte *)FUN_1800ab5c0((char *)(param_1 + 1),(char *)param_2,
                                         (longlong *)&local_res8), pbVar8 == param_2)) ||
         (*pbVar8 != 0x7d)) goto LAB_1800ac1a1;
      param_1 = pbVar8 + 1;
    }
    if (param_1 != param_2) {
      pbVar8 = param_1;
      if (*param_1 == 0x2e) {
        pbVar8 = param_1 + 1;
        if (pbVar8 == param_2) {
LAB_1800ac1ef:
          FUN_1800b7ac0(0x1801875c0);
          pcVar3 = (code *)swi(3);
          pbVar8 = (byte *)(*pcVar3)();
          return pbVar8;
        }
        if ((byte)(*pbVar8 - 0x30) < 10) {
          uVar6 = 0;
          do {
            if (0xccccccc < uVar6) goto LAB_1800ac1e2;
            bVar7 = *pbVar8;
            pbVar8 = pbVar8 + 1;
            uVar6 = (int)(char)bVar7 + (uVar6 * 5 + -0x18) * 2;
          } while (((pbVar8 != param_2) && ('/' < (char)*pbVar8)) && ((char)*pbVar8 < ':'));
          if (0x7fffffff < uVar6) {
LAB_1800ac1e2:
            FUN_1800b7ac0(0x180187818);
            pcVar3 = (code *)swi(3);
            pbVar8 = (byte *)(*pcVar3)();
            return pbVar8;
          }
          if (((byte)((char)param_3[3] - 1U) < 6) || ((char)param_3[3] == '\n')) {
            FUN_1800b7ac0(0x180187590);
            pcVar3 = (code *)swi(3);
            pbVar8 = (byte *)(*pcVar3)();
            return pbVar8;
          }
          *(uint *)(*param_3 + 4) = uVar6;
        }
        else {
          if (*pbVar8 != 0x7b) goto LAB_1800ac1ef;
          if (((param_1 + 2 == param_2) ||
              (local_res8 = param_3,
              pbVar8 = (byte *)FUN_1800ab9b0((char *)(param_1 + 2),(char *)param_2,
                                             (longlong *)&local_res8), pbVar8 == param_2)) ||
             (*pbVar8 != 0x7d)) {
LAB_1800ac1a1:
            FUN_1800b7ac0(0x1801878a0);
            pcVar3 = (code *)swi(3);
            pbVar8 = (byte *)(*pcVar3)();
            return pbVar8;
          }
          pbVar8 = pbVar8 + 1;
        }
        if (pbVar8 == param_2) {
          return pbVar8;
        }
      }
      if (*pbVar8 == 0x4c) {
        if (8 < (byte)((char)param_3[3] - 1U)) {
LAB_1800ac1fc:
          FUN_1800b7ac0(0x1801875e0);
          pcVar3 = (code *)swi(3);
          pbVar8 = (byte *)(*pcVar3)();
          return pbVar8;
        }
        pbVar8 = pbVar8 + 1;
        *(int32_t *)(*param_3 + 0xc) = 1;
        if (pbVar8 == param_2) {
          return pbVar8;
        }
      }
      bVar7 = *pbVar8;
      param_1 = pbVar8 + 1;
      if (bVar7 == 0x7d) {
        bVar7 = 0;
        param_1 = pbVar8;
      }
      FUN_1800abb50(param_3,bVar7);
    }
  }
  return param_1;
}
}

