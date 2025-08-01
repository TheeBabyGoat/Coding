#include "FUN_1800ba470.h"
#include <stdint.h>
#include <stddef.h>

int32_t * FUN_1800ba470(int32_t *param_1,int32_t *param_2) {
ulonglong uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = 0xffffffffffffffff;
  do {
    uVar1 = uVar1 + 1;
  } while (*(char *)((longlong)param_2 + uVar1) != '\0');
  FUN_1800ba360(param_1,param_2,uVar1);
  return param_1;
}
}

 FUN_1800ba470(&local_4b0,(int32_t *)"cannot compare iterators of different containers");
      FUN_1800f8fa0(&local_4e8,0xd4,&local_4b0);
      FUN_1801279a8((longlong *)&local_4e8,&DAT_1801e92f8);
switchD_1800e9cf0_caseD_0:
      FUN_1800ba470(&local_4b0,(int32_t *)"cannot get value");
      pppppppuVar11 = &local_4b0;
      FUN_1800f8fa0(&local_4e8,0xd6,pppppppuVar11);
      FUN_1801279a8((longlong *)&local_4e8,&DAT_1801e92f8);
LAB_1800ea876:
      FUN_18012b7b4();
LAB_1800ea87c:
      local_570 = FUN_1800f7810((int32_t *)pppppppuVar11);
      plVar9 = FUN_1800f24a0((longlong *)&local_4b0,(int32_t *)"type must be string, but is ",
                             (longlong *)&local_570);
      FUN_1800ed150(&local_4e8,0x12e,plVar9);
      FUN_1801279a8((longlong *)&local_4e8,&DAT_1801e9200);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    switch(*(int32_t *)local_558) {
default:
      bVar17 = local_540 == local_498;
      break;
    case 1:
      bVar17 = local_550 == (uint ***)local_4a8;
      break;
    case 2:
      bVar17 = local_548 == local_4a0;
    }
}

 FUN_1800ba470(&local_4b0,(int32_t *)"cannot get value");
        FUN_1800f8fa0(&local_4e8,0xd6,&local_4b0);
        FUN_1801279a8((longlong *)&local_4e8,&DAT_1801e92f8);
        goto LAB_1800ea80e;
      }
    }
    uStack_488 = 0;
    local_480 = uVar4;
    uStack_478 = uVar16;
    local_490 = (int32_t *******)0x0;
    local_590._4_4_ = (int32_t)((ulonglong)local_590 >> 0x20);
    local_590 = (uint ******)(CONCAT44(local_590._4_4_,uVar14) | 2);
    if (*(char *)pppppppuVar11 != '\x03') goto LAB_1800ea87c;
    pppppppuVar10 = (int32_t *******)pppppppuVar11[1];
    if (&local_490 != pppppppuVar10) {
pppppppuVar1 = pppppppuVar10 + 2;
      if ((int32_t ******)0xf < pppppppuVar10[3]) {
        pppppppuVar10 = (int32_t *******)*pppppppuVar10;
      }
      FUN_1800de6e0((longlong *)&local_490,pppppppuVar10,(ulonglong)*pppppppuVar1);
    }
}

 FUN_1800ba470(&local_a0,(int32_t *)"iterator does not fit current value");
    FUN_1800f8fa0(local_80,0xca,&local_a0);
    FUN_1801279a8(local_80,&DAT_1801e92f8);
LAB_1800f62f6:
    FUN_1800ba470(&local_a0,(int32_t *)"iterator out of range");
    FUN_1800f8fa0(local_80,0xcd,&local_a0);
    FUN_1801279a8(local_80,&DAT_1801e92f8);
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  FUN_1800f93b0(param_1,param_2);
  bVar2 = *param_1;
  uVar15 = (ulonglong)bVar2;
  switch(uVar15) {
default:
    local_a0 = FUN_1800f7810(param_1);
    plVar13 = FUN_1800f5fa0(local_80,uVar15,(longlong *)&local_a0);
    FUN_1800ed150(local_d8,0x133,plVar13);
    FUN_1801279a8(local_d8,&DAT_1801e9200);
    goto LAB_1800f62be;
  case 1:
    plVar13 = (longlong *)param_3[1];
    plVar16 = (longlong *)plVar13[2];
    if (*(char *)((longlong)plVar16 + 0x19) == '\0') {
      cVar3 = *(char *)(*plVar16 + 0x19);
      plVar12 = (longlong *)*plVar16;
      while (cVar3 == '\0') {
        cVar3 = *(char *)(*plVar12 + 0x19);
        plVar16 = plVar12;
        plVar12 = (longlong *)*plVar12;
      }
    }
    else {
      cVar3 = *(char *)(plVar13[1] + 0x19);
      plVar12 = plVar13;
      plVar16 = (longlong *)plVar13[1];
      while ((cVar3 == '\0' && (plVar12 == (longlong *)plVar16[2]))) {
        cVar3 = *(char *)(plVar16[1] + 0x19);
        plVar12 = plVar16;
        plVar16 = (longlong *)plVar16[1];
      }
    }
    plVar13 = FUN_1800f5ae0(*(longlong **)(param_1 + 8),plVar13);
    FUN_1800f9ec0((int32_t *)(plVar13 + 8));
    FUN_1800a6800(plVar13 + 4);
    thunk_FUN_18012d5e8(plVar13);
    param_2[1] = plVar16;
    break;
  case 2:
    pcVar6 = (char *)param_3[2];
    lVar7 = *(longlong *)(param_1 + 8);
    pcVar8 = *(char **)(lVar7 + 8);
    pcVar1 = pcVar6;
    pcVar11 = pcVar6;
    while (pcVar11 = pcVar11 + 0x10, pcVar11 != pcVar8) {
      cVar3 = *pcVar11;
      uVar9 = *(int32_t *)(pcVar11 + 8);
      *pcVar11 = '\0';
      pcVar11[8] = '\0';
      pcVar11[9] = '\0';
      pcVar11[10] = '\0';
      pcVar11[0xb] = '\0';
      pcVar11[0xc] = '\0';
      pcVar11[0xd] = '\0';
      pcVar11[0xe] = '\0';
      pcVar11[0xf] = '\0';
      cVar4 = *pcVar1;
      *pcVar1 = cVar3;
      uVar15 = (ulonglong)local_a0 >> 8;
      local_a0 = (char *)CONCAT71((int7)uVar15,cVar4);
      local_98[0] = *(longlong *)(pcVar1 + 8);
      *(int32_t *)(pcVar1 + 8) = uVar9;
      FUN_1800f9a90(local_98,cVar4);
      pcVar1 = pcVar1 + 0x10;
    }
    FUN_1800f9ec0((int32_t *)(*(longlong *)(lVar7 + 8) + -0x10));
    *(longlong *)(lVar7 + 8) = *(longlong *)(lVar7 + 8) + -0x10;
    param_2[2] = pcVar6;
    break;
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    if (param_3[3] == 0) {
      if (bVar2 == 3) {
        FUN_1800a6800(*(longlong **)(param_1 + 8));
        thunk_FUN_18012d5e8(*(LPVOID *)(param_1 + 8));
        param_1[8] = 0;
        param_1[9] = 0;
        param_1[10] = 0;
        param_1[0xb] = 0;
        param_1[0xc] = 0;
        param_1[0xd] = 0;
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        *param_1 = 0;
      }
      else {
        if (bVar2 == 8) {
          plVar13 = *(longlong **)(param_1 + 8);
          pvVar5 = (LPVOID)*plVar13;
          if (pvVar5 != (LPVOID)0x0) {
            pvVar14 = pvVar5;
            if ((0xfff < (ulonglong)(plVar13[2] - (longlong)pvVar5)) &&
               (pvVar14 = *(LPVOID *)((longlong)pvVar5 + -8),
               0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)pvVar14)))) {
              FUN_18012b7b4();
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            thunk_FUN_18012d5e8(pvVar14);
            *plVar13 = 0;
            plVar13[1] = 0;
            plVar13[2] = 0;
          }
          thunk_FUN_18012d5e8(*(LPVOID *)(param_1 + 8));
          param_1[8] = 0;
          param_1[9] = 0;
          param_1[10] = 0;
          param_1[0xb] = 0;
          param_1[0xc] = 0;
          param_1[0xd] = 0;
          param_1[0xe] = 0;
          param_1[0xf] = 0;
        }
        *param_1 = 0;
      }
      break;
    }
    goto LAB_1800f62f6;
  }
}

 FUN_1800ba470(local_38,(int32_t *)"cannot get value");
          FUN_1800f8fa0(&local_70,0xd6,local_38);
          FUN_1801279a8(&local_70,&DAT_1801e92f8);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        break;
      case '\x01':
        pcVar5 = (char *)(local_68 + 0x40);
        break;
      case '\x02':
        pcVar5 = pcStack_60;
      }
      if (*pcVar5 == '\t') {
FUN_1800f6060(*(byte **)(*(longlong *)(param_1 + 0x10) + -8),&local_70,local_38);
        break;
      }
}

