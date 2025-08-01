#include "FUN_1800b99a0.h"
#include <stdint.h>
#include <stddef.h>

int32_t * FUN_1800b99a0(int32_t *param_1,ulonglong param_2,int32_t param_3,int32_t param_4) {
ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int32_t *puVar4;
  code *pcVar5;
  void *pvVar6;
  int32_t *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int32_t *puVar10;
  
  uVar2 = param_1[2];
  uVar9 = 0x7fffffffffffffff;
  if (0x7fffffffffffffff - uVar2 < param_2) {
    FUN_1800ba540();
    pcVar5 = (code *)swi(3);
    puVar7 = (int32_t *)(*pcVar5)();
    return puVar7;
  }
  uVar3 = param_1[3];
  uVar8 = uVar2 + param_2 | 0xf;
  if ((uVar8 < 0x8000000000000000) && (uVar3 <= 0x7fffffffffffffff - (uVar3 >> 1))) {
    uVar1 = uVar3 + (uVar3 >> 1);
    uVar9 = uVar8;
    if (uVar8 < uVar1) {
      uVar9 = uVar1;
    }
    uVar1 = uVar9 + 1;
    if (uVar1 == 0) {
      puVar7 = (int32_t *)0x0;
    }
    else {
      if (0xfff < uVar1) {
        uVar8 = uVar9 + 0x28;
        if (uVar8 <= uVar1) {
          FUN_1800ba8a0();
          pcVar5 = (code *)swi(3);
          puVar7 = (int32_t *)(*pcVar5)();
          return puVar7;
        }
        goto LAB_1800b9a46;
      }
      puVar7 = (int32_t *)operator_new(uVar1);
    }
  }
  else {
    uVar8 = 0x8000000000000027;
LAB_1800b9a46:
    pvVar6 = operator_new(uVar8);
    if (pvVar6 == (void *)0x0) goto LAB_1800b9afa;
    puVar7 = (int32_t *)((longlong)pvVar6 + 0x27U & 0xffffffffffffffe0);
    puVar7[-1] = pvVar6;
  }
  param_1[2] = uVar2 + param_2;
  param_1[3] = uVar9;
  if (uVar3 < 0x10) {
    FUN_180150fd0(puVar7,param_1,uVar2);
    *(int32_t *)(uVar2 + (longlong)puVar7) = param_4;
    *(int32_t *)(uVar2 + 1 + (longlong)puVar7) = 0;
  }
  else {
    puVar4 = (int32_t *)*param_1;
    FUN_180150fd0(puVar7,puVar4,uVar2);
    *(int32_t *)(uVar2 + (longlong)puVar7) = param_4;
    *(int32_t *)(uVar2 + 1 + (longlong)puVar7) = 0;
    puVar10 = puVar4;
    if ((0xfff < uVar3 + 1) &&
       (puVar10 = (int32_t *)puVar4[-1],
       0x1f < (ulonglong)((longlong)puVar4 + (-8 - (longlong)puVar10)))) {
LAB_1800b9afa:
      FUN_18012b7b4();
      pcVar5 = (code *)swi(3);
      puVar7 = (int32_t *)(*pcVar5)();
      return puVar7;
    }
    thunk_FUN_18012d5e8(puVar10);
  }
  *param_1 = puVar7;
  return param_1;
}
}

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
}

 FUN_1800b99a0(&local_40,1,(ulonglong)local_57[0],(char)uVar3);
        }
        pppppppuVar4 = &local_40;
        if (0xf < local_28) {
pppppppuVar4 = local_40;
        }
}

 FUN_1800b99a0(&local_88,1,(ulonglong)local_98,0x20);
    }
    ppppuVar7 = &local_88;
    if (0xf < local_70) {
ppppuVar7 = (int32_t ****)local_88;
    }
}

 FUN_1800b99a0(&local_88,1,(ulonglong)local_98,0x27);
  }
  ppppuVar7 = &local_88;
  if (0xf < local_70) {
ppppuVar7 = (int32_t ****)local_88;
  }
}

 FUN_1800b99a0(puVar8,1,(ulonglong)local_res8[0],(char)uVar3);
    }
    uVar3 = *(uint *)((longlong)param_1 + 0xc);
    break;
  case 0x30:
    goto switchD_1800eecad_caseD_30;
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
    goto switchD_1800eecad_caseD_31;
  }
  iVar14 = 6;
  param_1[3] = param_1[3] + 1;
  param_1[4] = param_1[4] + 1;
  if (*(char *)(param_1 + 2) == '\0') {
uVar5 = FUN_18012e8b0((int32_t *)*param_1);
    uVar3 = (uint)uVar5;
    *(uint *)((longlong)param_1 + 0xc) = uVar3;
  }
}

 FUN_1800b99a0(puVar8,1,(ulonglong)local_res8[0],(char)uVar3);
      }
      param_1[3] = param_1[3] + 1;
      param_1[4] = param_1[4] + 1;
      if (*(char *)(param_1 + 2) == '\0') {
uVar5 = FUN_18012e8b0((int32_t *)*param_1);
        *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
      }
}

 FUN_1800b99a0(puVar8,1,(ulonglong)local_res8[0],uVar10);
        }
        iVar14 = 7;
        param_1[3] = param_1[3] + 1;
        param_1[4] = param_1[4] + 1;
        if (*(char *)(param_1 + 2) == '\0') {
uVar5 = FUN_18012e8b0((int32_t *)*param_1);
          *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
        }
}

 FUN_1800b99a0(puVar8,1,(ulonglong)local_res8[0],(char)uVar3);
              bVar2 = local_res8[0];
            }
LAB_1800ef080:
            param_1[3] = param_1[3] + 1;
            param_1[4] = param_1[4] + 1;
            if (*(char *)(param_1 + 2) == '\0') {
uVar7 = FUN_18012e8b0((int32_t *)*param_1);
              *(int *)((longlong)param_1 + 0xc) = (int)uVar7;
            }
}

 FUN_1800b99a0(param_1 + 9,1,(ulonglong)bVar2,(char)uVar11);
              }
              goto LAB_1800ef080;
            case 0x45:
            case 0x65:
              goto switchD_1800ef0f7_caseD_45;
            }
            goto switchD_1800eef2e_caseD_2f;
          }
        }
        pcVar6 = "invalid number; expected digit after \'.\'";
        goto LAB_1800eed58;
      }
      if ((uVar11 != 0x45) && (uVar11 != 0x65)) goto switchD_1800eef2e_caseD_2f;
switchD_1800ef0f7_caseD_45:
      puVar8 = param_1 + 9;
      uVar5 = param_1[0xb];
      uVar10 = (int32_t)uVar11;
      if (uVar5 < (ulonglong)param_1[0xc]) {
param_1[0xb] = uVar5 + 1;
        if (0xf < (ulonglong)param_1[0xc]) {
          puVar8 = (int32_t *)*puVar8;
        }
        *(int32_t *)((longlong)puVar8 + uVar5) = uVar10;
        *(int32_t *)((longlong)puVar8 + uVar5 + 1) = 0;
      }
}

 FUN_1800b99a0(param_1 + 9,1,(ulonglong)local_res8[0],uVar10);
      }
LAB_1800ef184:
      iVar14 = 7;
      param_1[3] = param_1[3] + 1;
      param_1[4] = param_1[4] + 1;
      if (*(char *)(param_1 + 2) == '\0') {
uVar5 = FUN_18012e8b0((int32_t *)*param_1);
        *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
      }
}

 FUN_1800b99a0(puVar8,1,(ulonglong)local_res8[0],(char)iVar13);
          }
          param_1[3] = param_1[3] + 1;
          param_1[4] = param_1[4] + 1;
          if (*(char *)(param_1 + 2) == '\0') {
uVar5 = FUN_18012e8b0((int32_t *)*param_1);
            *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
          }
}

 FUN_1800b99a0(puVar8,1,(ulonglong)local_res8[0],(char)iVar13);
            bVar2 = local_res8[0];
          }
LAB_1800ef310:
          param_1[3] = param_1[3] + 1;
          param_1[4] = param_1[4] + 1;
          if (*(char *)(param_1 + 2) == '\0') {
uVar5 = FUN_18012e8b0((int32_t *)*param_1);
            *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
          }
}

 FUN_1800b99a0(param_1 + 9,1,(ulonglong)bVar2,(char)uVar11);
            }
            goto LAB_1800ef310;
          }
switchD_1800eef2e_caseD_2f:
          *(int32_t *)(param_1 + 2) = 1;
          param_1[3] = param_1[3] + -1;
          if (param_1[4] == 0) {
if (param_1[5] != 0) {
              param_1[5] = param_1[5] + -1;
            }
          }
}

 FUN_1800b99a0(param_1 + 9,1,(ulonglong)local_res8[0],(char)uVar11);
        }
        goto LAB_1800eeeb0;
      case 0x45:
      case 0x65:
        puVar8 = param_1 + 9;
        uVar5 = param_1[0xb];
        if ((ulonglong)param_1[0xc] <= uVar5) goto LAB_1800ef175;
        param_1[0xb] = uVar5 + 1;
        if (0xf < (ulonglong)param_1[0xc]) {
puVar8 = (int32_t *)*puVar8;
        }
}

 FUN_1800b99a0(param_1,1,(ulonglong)local_68,0x2e);
  }
  ppppuVar4 = local_58;
  if (0xf < local_40) {
ppppuVar4 = (int32_t ****)local_58[0];
  }
}

