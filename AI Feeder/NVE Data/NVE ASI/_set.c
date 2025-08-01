#include "_set.h"
#include <stdint.h>
#include <stddef.h>

 _set_statfp(0x20);
        goto LAB_18014d659;
      }
    }
    else {
LAB_18014d659:
      if (iVar6 < 0x1b) {
if ((iVar6 < -0xd) && (-1 < (longlong)dVar11)) {
          if (iVar6 < -0x96) {
            fVar10 = DAT_1801da580;
            if (-1 < (longlong)dVar1) {
              fVar10 = 0.0;
            }
          }
          else {
            if (-0x7f < iVar6) {
              dVar1 = dVar1 / dVar11;
LAB_18014d79c:
              return (float)dVar1;
            }
            dVar11 = (dVar1 * 1.2676506002282294e+30) / dVar11;
            uVar4 = (ulonglong)ABS(dVar11) >> 0x34;
            uVar3 = (uint)((ulonglong)ABS(dVar11) >> 0x34);
            if (uVar3 < 0x65) {
              if ((int)(0x65 - uVar3) < 0x37) {
                uVar5 = ((ulonglong)dVar11 & 0x1fffffffffffff | 0x10000000000000) >>
                        (100U - (char)uVar4 & 0x3f);
                uVar5 = (uVar5 >> 1) + (ulonglong)((uint)uVar5 & 1);
              }
            }
            else {
              uVar5 = uVar4 - 100 << 0x34 | (ulonglong)dVar11 & 0xfffffffffffff;
            }
            fVar10 = (float)(double)(uVar5 | (ulonglong)dVar11 & 0x8000000000000000);
            if ((uVar5 & 0x7ff0000000000000) != 0) {
              return fVar10;
            }
          }
          uVar7 = 0x30;
          goto LAB_18014d678;
        }
        if ((-0x1b < iVar6) || (-1 < (longlong)dVar11)) {
          if ((dVar8 == INFINITY) && (dVar9 == INFINITY)) {
            if ((longlong)dVar11 < 0) {
              fVar10 = DAT_1801da570;
              if ((longlong)dVar1 < 0) {
                fVar10 = DAT_1801da588;
              }
            }
            else {
              fVar10 = DAT_1801d8e2c;
              if ((longlong)dVar1 < 0) {
                fVar10 = DAT_1801da584;
              }
            }
            goto LAB_18014d678;
          }
          uVar7 = (uint)DAT_1801d9d50;
          uVar14 = (uint)((ulonglong)DAT_1801d9d50 >> 0x20);
          dVar8 = dVar11;
          if ((longlong)dVar11 < 0) {
            dVar8 = (double)CONCAT44(uVar15 ^ uVar14,SUB84(dVar11,0) ^ uVar7);
          }
          dVar9 = dVar1;
          if ((longlong)dVar1 < 0) {
            dVar9 = (double)CONCAT44(uVar3 ^ uVar14,SUB84(dVar1,0) ^ uVar7);
          }
          dVar12 = dVar8;
          dVar2 = dVar9;
          if (dVar8 < dVar9) {
            dVar12 = dVar9;
            dVar2 = dVar8;
          }
          dVar13 = dVar2 / dVar12;
          if (dVar13 <= _DAT_1801da530) {
            if (dVar13 < DAT_1801da528) goto LAB_18014d8ff;
            dVar12 = dVar13 * dVar13;
            dVar12 = (DAT_1801da550 - (DAT_1801da540 - dVar12 * _DAT_1801da538) * dVar12) *
                     dVar12 * dVar13;
          }
          else {
            uVar3 = (uint)(dVar13 * DAT_1801da578 + _DAT_1801da558);
            dVar13 = (double)uVar3;
            dVar12 = (dVar2 * DAT_1801da578 - dVar13 * dVar12) /
                     (dVar13 * dVar2 + dVar12 * DAT_1801da578);
            dVar13 = dVar12 + *(double *)(&DAT_1801d9da0 + (ulonglong)(uVar3 - 0x10) * 8);
            dVar12 = dVar12 * dVar12 * dVar12 * _DAT_1801da548;
          }
          dVar13 = dVar13 - dVar12;
LAB_18014d8ff:
          if (dVar8 < dVar9) {
            dVar13 = DAT_1801da560 - dVar13;
          }
          if ((longlong)dVar11 < 0) {
            dVar13 = DAT_1801da568 - dVar13;
          }
          if ((longlong)dVar1 < 0) {
            dVar13 = (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) ^ uVar14,
                                      SUB84(dVar13,0) ^ uVar7);
          }
          return (float)dVar13;
        }
        goto LAB_18014d62a;
      }
}

 _set_statfp(0x10);
          }
          uVar1 = param_1 & 0x1d;
        }
      }
      else {
        _set_statfp(8);
        uVar1 = param_1 & 0x1e;
      }
    }
    else {
      _set_statfp(4);
      uVar1 = param_1 & 0x1b;
    }
  }
  else {
    _set_statfp(1);
    uVar1 = param_1 & 0x17;
  }
  if (((param_1 & 0x10) != 0) && ((param_2 >> 0xc & 1) != 0)) {
_set_statfp(0x20);
    uVar1 = uVar1 & 0xffffffef;
  }
}

void _set_statfp(uint param_1) {
uint uVar1;
  
  uVar1 = _get_fpsr();
  FUN_18014ab90(uVar1 | param_1 & 0x3f);
  return;
}
}

