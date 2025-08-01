#include "FUN_1800b7ac0.h"
#include <stdint.h>
#include <stddef.h>

 FUN_1800b7ac0(0x180184f48);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    cVar3 = *pcVar13;
    while (cVar3 != '\0') {
cVar3 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      if ((ulonglong)puVar12[3] < puVar12[2] + 1) {
        (**(code **)*puVar12)(puVar12);
      }
      *(char *)(puVar12[2] + puVar12[1]) = cVar3;
      puVar12[2] = puVar12[2] + 1;
      cVar3 = *pcVar13;
    }
}

 FUN_1800b7ac0(0x180182e28);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar2 = (ulonglong)(int)uVar2;
    break;
  case 2:
    uVar2 = uVar2 & 0xffffffff;
    break;
  case 3:
    if ((longlong)uVar2 < 0) goto LAB_1800ab530;
    break;
  case 4:
    break;
  case 5:
    FUN_1800ab4a0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  case 6:
    FUN_1800ab4a0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  case 7:
    FUN_1800ab4a0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  case 8:
    FUN_1800ab4a0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  case 9:
    FUN_1800ab4a0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  case 10:
    FUN_1800ab4a0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  case 0xb:
    FUN_1800ab4a0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  case 0xc:
    FUN_1800ab4a0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  case 0xd:
    FUN_1800ab4a0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  default:
    FUN_18012b7b4();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (0x7fffffff < uVar2) {
FUN_1800b7ac0(0x180182e70);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
}

 FUN_1800b7ac0(0x180187868);
      pcVar4 = (code *)swi(3);
      pcVar7 = (char *)(*pcVar4)();
      return pcVar7;
    }
    *(ulonglong *)(puVar2[1] + 0x18) = uVar3 + 1;
    FUN_1800ab850(puVar2[2],(int32_t *)local_48,uVar3);
joined_r0x0001800ab6e1:
    if (local_48[0] != '\0') {
uVar6 = FUN_1800ab4c0(local_28);
      *(int32_t *)*puVar2 = uVar6;
      return param_1;
    }
}

 FUN_1800b7ac0(0x180182e88);
    pcVar4 = (code *)swi(3);
    pcVar7 = (char *)(*pcVar4)();
    return pcVar7;
  }
  if ((byte)(cVar1 - 0x30U) < 10) {
uVar5 = 0;
    if (cVar1 == '0') {
      param_1 = param_1 + 1;
    }
    else {
      do {
        if (0xccccccc < uVar5) goto LAB_1800ab70c;
        cVar1 = *param_1;
        param_1 = param_1 + 1;
        uVar5 = ((int)cVar1 + uVar5 * 10) - 0x30;
      } while (((param_1 != param_2) && ('/' < *param_1)) && (*param_1 < ':'));
      if (0x7fffffff < uVar5) {
LAB_1800ab70c:
        FUN_1800b7ac0(0x180187818);
        pcVar4 = (code *)swi(3);
        pcVar7 = (char *)(*pcVar4)();
        return pcVar7;
      }
    }
    if ((param_1 != param_2) && ((*param_1 == '}
}

 FUN_1800b7ac0(0x180187818);
        pcVar4 = (code *)swi(3);
        pcVar7 = (char *)(*pcVar4)();
        return pcVar7;
      }
    }
    if ((param_1 != param_2) && ((*param_1 == '}' || (*param_1 == ':')))) {
puVar2 = (int32_t *)*param_3;
      if (0 < *(longlong *)(puVar2[1] + 0x18)) {
        FUN_1800b7ac0(0x180187830);
        pcVar4 = (code *)swi(3);
        pcVar7 = (char *)(*pcVar4)();
        return pcVar7;
      }
      *(int32_t *)(puVar2[1] + 0x18) = 0xffffffffffffffff;
      FUN_1800ab850(puVar2[2],(int32_t *)local_48,(ulonglong)uVar5);
      goto joined_r0x0001800ab6e1;
    }
}

 FUN_1800b7ac0(0x180182e58);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar2 = (ulonglong)(int)uVar2;
    break;
  case 2:
    uVar2 = uVar2 & 0xffffffff;
    break;
  case 3:
    if ((longlong)uVar2 < 0) goto LAB_1800ab7c0;
    break;
  case 4:
    break;
  case 5:
    FUN_1800ab730();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  case 6:
    FUN_1800ab730();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  case 7:
    FUN_1800ab730();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  case 8:
    FUN_1800ab730();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  case 9:
    FUN_1800ab730();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  case 10:
    FUN_1800ab730();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  case 0xb:
    FUN_1800ab730();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  case 0xc:
    FUN_1800ab730();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  case 0xd:
    FUN_1800ab730();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  default:
    FUN_18012b7b4();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (0x7fffffff < uVar2) {
FUN_1800b7ac0(0x180182e70);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
}

 FUN_1800b7ac0(0x180187590);
      pcVar4 = (code *)swi(3);
      pcVar6 = (char *)(*pcVar4)();
      return pcVar6;
    }
    uVar3 = *(ulonglong *)(plVar2[1] + 0x18);
    if ((longlong)uVar3 < 0) {
FUN_1800b7ac0(0x180187868);
      pcVar4 = (code *)swi(3);
      pcVar6 = (char *)(*pcVar4)();
      return pcVar6;
    }
}

 FUN_1800b7ac0(0x180187868);
      pcVar4 = (code *)swi(3);
      pcVar6 = (char *)(*pcVar4)();
      return pcVar6;
    }
    *(ulonglong *)(plVar2[1] + 0x18) = uVar3 + 1;
    FUN_1800ab850(plVar2[2],(int32_t *)local_48,uVar3);
joined_r0x0001800abafc:
    if (local_48[0] != '\0') {
uVar5 = FUN_1800ab750(local_28);
      *(int32_t *)(*plVar2 + 4) = uVar5;
      return param_1;
    }
}

 FUN_1800b7ac0(0x180182e88);
    pcVar4 = (code *)swi(3);
    pcVar6 = (char *)(*pcVar4)();
    return pcVar6;
  }
  if ((byte)(cVar1 - 0x30U) < 10) {
uVar7 = 0;
    if (cVar1 == '0') {
      param_1 = param_1 + 1;
    }
    else {
      do {
        if (0xccccccc < uVar7) goto LAB_1800abb34;
        cVar1 = *param_1;
        param_1 = param_1 + 1;
        uVar7 = (int)cVar1 + (uVar7 * 5 + -0x18) * 2;
      } while (((param_1 != param_2) && ('/' < *param_1)) && (*param_1 < ':'));
      if (0x7fffffff < uVar7) {
LAB_1800abb34:
        FUN_1800b7ac0(0x180187818);
        pcVar4 = (code *)swi(3);
        pcVar6 = (char *)(*pcVar4)();
        return pcVar6;
      }
    }
    if ((param_1 != param_2) && ((*param_1 == '}
}

 FUN_1800b7ac0(0x180187818);
        pcVar4 = (code *)swi(3);
        pcVar6 = (char *)(*pcVar4)();
        return pcVar6;
      }
    }
    if ((param_1 != param_2) && ((*param_1 == '}' || (*param_1 == ':')))) {
plVar2 = (longlong *)*param_3;
      if (((byte)((char)plVar2[3] - 1U) < 6) || ((char)plVar2[3] == '\n')) goto LAB_1800abb1a;
      if (0 < *(longlong *)(plVar2[1] + 0x18)) {
        FUN_1800b7ac0(0x180187830);
        pcVar4 = (code *)swi(3);
        pcVar6 = (char *)(*pcVar4)();
        return pcVar6;
      }
      *(int32_t *)(plVar2[1] + 0x18) = 0xffffffffffffffff;
      FUN_1800ab850(plVar2[2],(int32_t *)local_48,(ulonglong)uVar7);
      goto joined_r0x0001800abafc;
    }
}

 FUN_1800b7ac0(0x180187610);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar2 = 0;
  switch(param_2) {
case '\0':
    break;
  default:
    FUN_1800b7ac0(0x180187630);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  case '?':
    iVar2 = 6;
    break;
  case 'A':
  case 'E':
  case 'F':
  case 'G':
  case 'a':
  case 'e':
  case 'f':
  case 'g':
    iVar2 = 2;
    break;
  case 'B':
  case 'X':
  case 'b':
  case 'd':
  case 'o':
  case 'x':
    iVar2 = 1;
    break;
  case 'P':
  case 'p':
    iVar2 = 4;
    break;
  case 'c':
    iVar2 = 5;
    break;
  case 's':
    iVar2 = 3;
  }
}

 FUN_1800b7ac0(0x180187630);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  case '?':
    iVar2 = 6;
    break;
  case 'A':
  case 'E':
  case 'F':
  case 'G':
  case 'a':
  case 'e':
  case 'f':
  case 'g':
    iVar2 = 2;
    break;
  case 'B':
  case 'X':
  case 'b':
  case 'd':
  case 'o':
  case 'x':
    iVar2 = 1;
    break;
  case 'P':
  case 'p':
    iVar2 = 4;
    break;
  case 'c':
    iVar2 = 5;
    break;
  case 's':
    iVar2 = 3;
  }
  switch((char)param_1[3]) {
case '\x01':
  case '\x02':
  case '\x03':
  case '\x04':
    if (iVar2 == 0) {
      iVar2 = 1;
    }
    else if ((iVar2 - 1U & 0xfffffffb) != 0) {
      FUN_1800b7ac0(0x1801876a8);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    break;
  case '\x05':
    if (iVar2 != 0) {
      if ((iVar2 - 1U & 0xfffffffd) != 0) {
        FUN_1800b7ac0(0x180187658);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      break;
    }
    goto LAB_1800abc88;
  case '\x06':
    if (iVar2 == 0) {
      iVar2 = 5;
    }
    else if (((iVar2 - 1U & 0xfffffffa) != 0) || (iVar2 == 2)) {
      FUN_1800b7ac0(0x180187680);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    break;
  case '\a':
  case '\b':
  case '\t':
    if (iVar2 == 0) {
      iVar2 = 2;
    }
    else if (iVar2 != 2) {
      FUN_1800b7ac0(0x1801876d0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    break;
  case '\n':
    if (iVar2 == 0) {
      iVar2 = 4;
    }
    else if (iVar2 != 4) {
      FUN_1800b7ac0(0x180187728);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    break;
  case '\v':
  case '\f':
    if (iVar2 != 0) {
      if ((iVar2 != 3) && (iVar2 != 6)) {
        FUN_1800b7ac0(0x180187700);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      break;
    }
LAB_1800abc88:
    iVar2 = 3;
  }
}

 FUN_1800b7ac0(0x1801876a8);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    break;
  case '\x05':
    if (iVar2 != 0) {
if ((iVar2 - 1U & 0xfffffffd) != 0) {
        FUN_1800b7ac0(0x180187658);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      break;
    }
}

 FUN_1800b7ac0(0x180187658);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      break;
    }
    goto LAB_1800abc88;
  case '\x06':
    if (iVar2 == 0) {
iVar2 = 5;
    }
}

 FUN_1800b7ac0(0x180187680);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    break;
  case '\a':
  case '\b':
  case '\t':
    if (iVar2 == 0) {
iVar2 = 2;
    }
}

 FUN_1800b7ac0(0x1801876d0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    break;
  case '\n':
    if (iVar2 == 0) {
iVar2 = 4;
    }
}

 FUN_1800b7ac0(0x180187728);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    break;
  case '\v':
  case '\f':
    if (iVar2 != 0) {
if ((iVar2 != 3) && (iVar2 != 6)) {
        FUN_1800b7ac0(0x180187700);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      break;
    }
}

 FUN_1800b7ac0(0x180187700);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      break;
    }
LAB_1800abc88:
    iVar2 = 3;
  }
  if ((*(char *)((longlong)param_1 + 0x19) != '\0') && (1 < iVar2 - 1U)) {
FUN_1800b7ac0(0x180187750);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
}

 FUN_1800b7ac0(0x180187750);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((*(char *)((longlong)param_1 + 0x1a) != '\0') &&
     (((iVar2 - 1U & 0xfffffffc) != 0 || (iVar2 == 3)))) {
FUN_1800b7ac0(0x180187790);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
}

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
}

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
}

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
}

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
}

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
}

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

 FUN_1800b7ac0(0x1801835c8);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(int32_t *)((longlong)param_4 + 0xb) = 0;
    local_b8 = (int32_t)*param_4;
    uStack_b7 = *(int32_t *)((longlong)param_4 + 1);
    uStack_b6 = *(int32_t *)((longlong)param_4 + 2);
    uStack_b5 = *(int32_t *)((longlong)param_4 + 3);
    uStack_b4 = *(int32_t *)((longlong)param_4 + 4);
    uStack_b3 = *(int32_t *)((longlong)param_4 + 5);
    uStack_b2 = *(int32_t *)((longlong)param_4 + 6);
    uStack_b1 = *(int32_t *)((longlong)param_4 + 7);
    cStack_b0 = (char)param_4[1];
    uStack_af = *(int32_t *)((longlong)param_4 + 9);
    uStack_ae = *(int32_t *)((longlong)param_4 + 10);
    uStack_ad = *(int32_t *)((longlong)param_4 + 0xb);
    uStack_ac = *(int32_t *)((longlong)param_4 + 0xc);
    uStack_ab = *(int32_t *)((longlong)param_4 + 0xd);
    uStack_aa = *(int32_t *)((longlong)param_4 + 0xe);
    uStack_a9 = *(int32_t *)((longlong)param_4 + 0xf);
    local_a8 = CONCAT44(local_a8._4_4_,(int)param_4[2]);
    local_1a8[0] = (char)param_3;
    if ((cStack_b0 == '\0') || (cStack_b0 == 'c')) {
if (cStack_b0 != '?') {
        local_198 = local_1a8;
        p_Stack_190 = (_Locimp *)0x1;
        FUN_1800b5450(param_1,param_2,(longlong *)&local_198,(longlong *)&local_b8);
        goto LAB_1800ac897;
      }
    }
}

 FUN_1800b7ac0(0x1801835c8);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(int32_t *)((longlong)param_4 + 0xb) = 0;
    local_b8._0_1_ = (int32_t)*param_4;
    local_b8._1_1_ = *(int32_t *)((longlong)param_4 + 1);
    local_b8._2_1_ = *(int32_t *)((longlong)param_4 + 2);
    local_b8._3_1_ = *(int32_t *)((longlong)param_4 + 3);
    local_b8._4_1_ = *(int32_t *)((longlong)param_4 + 4);
    local_b8._5_1_ = *(int32_t *)((longlong)param_4 + 5);
    local_b8._6_1_ = *(int32_t *)((longlong)param_4 + 6);
    local_b8._7_1_ = *(int32_t *)((longlong)param_4 + 7);
    cStack_b0 = (char)param_4[1];
    uStack_af = *(int32_t *)((longlong)param_4 + 9);
    uStack_ae = *(int32_t *)((longlong)param_4 + 10);
    uStack_ad = *(int32_t *)((longlong)param_4 + 0xb);
    uStack_ac = *(int32_t *)((longlong)param_4 + 0xc);
    uStack_ab = *(int32_t *)((longlong)param_4 + 0xd);
    uStack_aa = *(int32_t *)((longlong)param_4 + 0xe);
    uStack_a9 = *(int32_t *)((longlong)param_4 + 0xf);
    local_a8 = CONCAT44(local_a8._4_4_,(int)param_4[2]);
    local_1a8[0] = (char)param_3;
    if ((cStack_b0 == '\0') || (cStack_b0 == 'c')) {
if (cStack_b0 != '?') {
        local_198 = local_1a8;
        p_Stack_190 = (_Locimp *)0x1;
        FUN_1800b5450(param_1,param_2,(longlong *)&local_198,&local_b8);
        goto LAB_1800ad392;
      }
    }
}

 FUN_1800b7ac0(0x1801835c8);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(int32_t *)((longlong)param_4 + 0xb) = 0;
    local_b8 = (int32_t)*param_4;
    uStack_b7 = *(int32_t *)((longlong)param_4 + 1);
    uStack_b6 = *(int32_t *)((longlong)param_4 + 2);
    uStack_b5 = *(int32_t *)((longlong)param_4 + 3);
    uStack_b4 = *(int32_t *)((longlong)param_4 + 4);
    uStack_b3 = *(int32_t *)((longlong)param_4 + 5);
    uStack_b2 = *(int32_t *)((longlong)param_4 + 6);
    uStack_b1 = *(int32_t *)((longlong)param_4 + 7);
    cStack_b0 = (char)param_4[1];
    uStack_af = *(int32_t *)((longlong)param_4 + 9);
    uStack_ae = *(int32_t *)((longlong)param_4 + 10);
    uStack_ad = *(int32_t *)((longlong)param_4 + 0xb);
    uStack_ac = *(int32_t *)((longlong)param_4 + 0xc);
    uStack_ab = *(int32_t *)((longlong)param_4 + 0xd);
    uStack_aa = *(int32_t *)((longlong)param_4 + 0xe);
    uStack_a9 = *(int32_t *)((longlong)param_4 + 0xf);
    local_a8 = CONCAT44(local_a8._4_4_,(int)param_4[2]);
    local_1a8[0] = (char)param_3;
    if ((cStack_b0 == '\0') || (cStack_b0 == 'c')) {
if (cStack_b0 != '?') {
        local_198 = local_1a8;
        p_Stack_190 = (_Locimp *)0x1;
        FUN_1800b5450(param_1,param_2,(longlong *)&local_198,(longlong *)&local_b8);
        goto LAB_1800ad9e7;
      }
    }
}

 FUN_1800b7ac0(0x1801835c8);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(int32_t *)((longlong)param_4 + 0xb) = 0;
    local_158 = *(char **)param_4;
    p_Stack_150 = *(_Locimp **)(param_4 + 2);
    local_148 = param_4[4];
    FUN_1800b5580(param_1,param_2,param_3,(longlong *)&local_158,param_5);
    goto LAB_1800b3ed6;
  }
  if (*(char *)((longlong)param_4 + 10) == '\0') {
*(int32_t *)((longlong)param_4 + 10) = 2;
  }
}

 FUN_1800b7ac0(0x1801835c8);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(int32_t *)((longlong)param_4 + 0xb) = 0;
    local_b8._0_1_ = (int32_t)*param_4;
    local_b8._1_1_ = *(int32_t *)((longlong)param_4 + 1);
    local_b8._2_1_ = *(int32_t *)((longlong)param_4 + 2);
    local_b8._3_1_ = *(int32_t *)((longlong)param_4 + 3);
    local_b8._4_1_ = *(int32_t *)((longlong)param_4 + 4);
    local_b8._5_1_ = *(int32_t *)((longlong)param_4 + 5);
    local_b8._6_1_ = *(int32_t *)((longlong)param_4 + 6);
    local_b8._7_1_ = *(int32_t *)((longlong)param_4 + 7);
    cStack_b0 = (char)param_4[1];
    uStack_af = *(int32_t *)((longlong)param_4 + 9);
    uStack_ae = *(int32_t *)((longlong)param_4 + 10);
    uStack_ad = *(int32_t *)((longlong)param_4 + 0xb);
    uStack_ac = *(int32_t *)((longlong)param_4 + 0xc);
    uStack_ab = *(int32_t *)((longlong)param_4 + 0xd);
    uStack_aa = *(int32_t *)((longlong)param_4 + 0xe);
    uStack_a9 = *(int32_t *)((longlong)param_4 + 0xf);
    local_a8 = CONCAT44(local_a8._4_4_,(int)param_4[2]);
    local_1a8[0] = (char)param_3;
    if ((cStack_b0 == '\0') || (cStack_b0 == 'c')) {
if (cStack_b0 != '?') {
        local_198 = local_1a8;
        p_Stack_190 = (_Locimp *)0x1;
        FUN_1800b5450(param_1,param_2,(longlong *)&local_198,&local_b8);
        goto LAB_1800b68f2;
      }
    }
}

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
}

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

 FUN_1800b7ac0(0x1801878a0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar5 = 0;
      if (bVar2 == 0x30) {
pbVar8 = (byte *)(param_1 + 2);
      }
}

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
}

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
}

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
}

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
}

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
}

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

 FUN_1800b7ac0(0x1801878b8);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        puVar3 = (int32_t *)param_2[4];
        for (; pauVar7 != pauVar1; pauVar7 = (int32_t (*) [32])(*pauVar7 + 1)) {
uVar2 = (*pauVar7)[0];
          if ((ulonglong)puVar3[3] < puVar3[2] + 1) {
            (**(code **)*puVar3)(puVar3);
          }
          *(int32_t *)(puVar3[1] + puVar3[2]) = uVar2;
          puVar3[2] = puVar3[2] + 1;
        }
}

void FUN_1800b7ac0(longlong param_1) {
code *pcVar1;
  longlong local_28 [5];
  
  FUN_1800b7a30(local_28,param_1);
  FUN_1801279a8(local_28,&DAT_1801e8e60);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}
}

