#include "FUN_1800c7b50.h"
#include <stdint.h>
#include <stddef.h>

ulonglong FUN_1800c7b50(longlong *param_1,int *param_2) {
int iVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar3 = *param_2;
  uVar4 = (ulonglong)uVar3;
  if ((((uVar3 != 5) && (uVar3 != 3)) ||
      ((1 < *(ushort *)(param_2 + 6) &&
       (uVar4 = (**(code **)(*param_1 + 0x20))(param_1,0x19), (char)uVar4 == '\0')))) ||
     (((*(byte *)(param_2 + 9) & 0x30) == 0 || (param_2[5] == 0x30303853)))) {
LAB_1800c7ec9:
    return uVar4 & 0xffffffffffffff00;
  }
  uVar4 = (**(code **)(*param_1 + 0x18))(param_1);
  iVar1 = (int)uVar4;
  if (iVar1 < 0xc001) {
    if (iVar1 != 0xc000) {
      if (iVar1 != 0x9000) {
        uVar4 = (ulonglong)(iVar1 - 0xa000U);
        if ((iVar1 - 0xa000U & 0xffffefff) != 0) goto LAB_1800c7ec5;
        uVar3 = param_2[5];
        if (uVar3 < 0x3030384d) {
          if (uVar3 != 0x3030384c) {
            uVar4 = 0;
            switch(uVar3 - 1) {
            case 0:
            case 1:
            case 2:
            case 3:
              param_2[9] = param_2[9] | 0xc0;
              param_2[5] = 1;
              return 1;
            case 4:
            case 5:
            case 6:
            case 7:
              param_2[9] = param_2[9] | 0xc0;
              param_2[5] = 5;
              return 1;
            case 8:
            case 9:
            case 10:
            case 0xb:
            case 0xc:
            case 0xd:
              param_2[9] = param_2[9] | 0xc0;
              param_2[5] = 9;
              return 1;
            case 0xe:
            case 0xf:
            case 0x10:
            case 0x11:
              param_2[9] = param_2[9] | 0xc0;
              param_2[5] = 0xf;
              return 1;
            case 0x12:
            case 0x13:
            case 0x14:
            case 0x15:
              param_2[9] = param_2[9] | 0xc0;
              param_2[5] = 0x13;
              return 1;
            case 0x16:
            case 0x17:
            case 0x18:
            case 0x58:
              param_2[9] = param_2[9] | 0xc0;
              param_2[5] = 0x17;
              return 1;
            default:
              goto switchD_1800c7c25_caseD_19;
            case 0x1a:
            case 0x1b:
            case 0x1c:
            case 0x1d:
            case 0x1e:
            case 0x1f:
switchD_1800c7c25_caseD_1a:
              param_2[9] = param_2[9] | 0xc0;
              param_2[5] = 0x1b;
              return CONCAT71((int7)(uVar4 >> 8),1);
            case 0x20:
            case 0x21:
            case 0x22:
            case 0x23:
            case 0x24:
            case 0x25:
switchD_1800c7c25_caseD_20:
              param_2[9] = param_2[9] | 0xc0;
              param_2[5] = 0x21;
              return CONCAT71((int7)(uVar4 >> 8),1);
            case 0x26:
            case 0x27:
            case 0x28:
            case 0x29:
            case 0x2a:
              param_2[9] = param_2[9] | 0xc0;
              param_2[5] = 0x27;
              return 1;
            case 0x2b:
            case 0x2c:
            case 0x2d:
            case 0x2e:
              param_2[9] = param_2[9] | 0xc0;
              param_2[5] = 0x2c;
              return 1;
            case 0x2f:
            case 0x30:
            case 0x31:
            case 0x32:
            case 0x33:
switchD_1800c7c25_caseD_2f:
              param_2[9] = param_2[9] | 0xc0;
              param_2[5] = 0x30;
              return CONCAT71((int7)(uVar4 >> 8),1);
            case 0x34:
            case 0x35:
            case 0x36:
            case 0x37:
            case 0x38:
            case 0x39:
            case 0x3a:
switchD_1800c7c25_caseD_34:
              param_2[9] = param_2[9] | 0xc0;
              param_2[5] = 0x35;
              return CONCAT71((int7)(uVar4 >> 8),1);
            case 0x3b:
            case 0x3c:
            case 0x3d:
            case 0x3e:
            case 0x3f:
              break;
            case 0x45:
            case 0x46:
            case 0x47:
              param_2[9] = param_2[9] | 0xc0;
              param_2[5] = 0x46;
              return 1;
            case 0x48:
            case 0x49:
            case 0x4a:
            case 0x4b:
            case 0x4c:
            case 0x4d:
              param_2[9] = param_2[9] | 0xc0;
              param_2[5] = 0x49;
              return 1;
            case 0x4e:
            case 0x4f:
            case 0x50:
              param_2[9] = param_2[9] | 0xc0;
              param_2[5] = 0x4f;
              return 1;
            case 0x51:
            case 0x52:
            case 0x53:
              param_2[9] = param_2[9] | 0xc0;
              param_2[5] = 0x52;
              return 1;
            case 0x56:
            case 0x59:
            case 0x5a:
              param_2[9] = param_2[9] | 0xc0;
              param_2[5] = 0x5a;
              return 1;
            case 0x57:
            case 0x5b:
            case 0x5c:
              param_2[9] = param_2[9] | 0xc0;
              param_2[5] = 0x5c;
              return 1;
            case 0x5d:
            case 0x5e:
            case 0x5f:
              param_2[9] = param_2[9] | 0xc0;
              param_2[5] = 0x5e;
              return 1;
            case 0x60:
            case 0x61:
            case 0x62:
              param_2[9] = param_2[9] | 0xc0;
              param_2[5] = 0x61;
              return 1;
            }
          }
          param_2[9] = param_2[9] | 0xc0;
          param_2[5] = 0x3c;
          return CONCAT71((int7)(uVar4 >> 8),1);
        }
        if (uVar3 < 0x42475332) {
          if (uVar3 != 0x42475331) {
            if (uVar3 == 0x3036314c) goto switchD_1800c7c25_caseD_34;
            if (uVar3 == 0x3038414c) goto switchD_1800c7c25_caseD_2f;
            if (uVar3 == 0x3631414c) goto switchD_1800c7c25_caseD_20;
            if (uVar3 != 0x42475330) goto switchD_1800c7c25_caseD_19;
          }
        }
        else {
          uVar4 = (ulonglong)(uVar3 + 0xbdb8acce);
          if (uVar3 + 0xbdb8acce != 0) {
            uVar2 = uVar3 + 0xbdb8a847;
            uVar4 = (ulonglong)uVar2;
            if ((uVar2 == 0) || (uVar2 == 1)) goto switchD_1800c7c25_caseD_1a;
            goto switchD_1800c7c25_caseD_19;
          }
        }
        uVar3 = 0x42475330;
switchD_1800c7c25_caseD_19:
        param_2[9] = param_2[9] | 0xc0;
        param_2[5] = uVar3;
        return CONCAT71((int7)(uVar4 >> 8),1);
      }
      if ((DAT_1801ee908 == '\0') && (*(ushort *)(param_2 + 6) < 2)) {
        if (*param_2 == 3) {
          uVar3 = param_2[5];
          uVar4 = (ulonglong)uVar3;
          if (((uVar3 == 0x37) || (uVar3 == 0x38343244)) || (uVar3 == 0x2d)) goto LAB_1800c7ec9;
        }
        if (0x200 < (uint)param_2[2]) {
          iVar1 = param_2[5];
          if ((iVar1 == 0x28) || (iVar1 == 0x14)) {
            param_2[5] = 0x5a544e49;
          }
          param_2[9] = param_2[9] | 0xc0;
          return CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
        }
      }
      goto LAB_1800c7ec9;
    }
  }
  else {
    if (iVar1 == 0x10000) goto LAB_1800c7ec9;
    if (iVar1 != 0x20000) goto LAB_1800c7ec5;
  }
  if (1 < *(ushort *)(param_2 + 6)) {
    uVar3 = param_2[9] | 0x2000;
    param_2[9] = uVar3;
    return CONCAT71((uint7)(uint3)(uVar3 >> 8),1);
  }
  uVar3 = param_2[9] | 0x800;
  uVar4 = (ulonglong)uVar3;
  param_2[9] = uVar3;
LAB_1800c7ec5:
  return CONCAT71((int7)(uVar4 >> 8),1);
}
}

