#include "FUN_1800af970.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800af970(longlong *param_1,int32_t *param_2,float param_3,int *param_4,longlong param_5) {
char ******ppppppcVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  uint uVar8;
  _Locimp *p_Var9;
  longlong *plVar10;
  int32_t *puVar11;
  char ******ppppppcVar12;
  char *pcVar13;
  char cVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  char *pcVar20;
  char cVar21;
  int iVar22;
  bool bVar23;
  int32_t auStackY_728 [32];
  int in_stack_fffffffffffff8f8;
  int32_t in_stack_fffffffffffff8fc;
  char local_6f7;
  char local_6f6;
  char local_6f5;
  char local_6f4 [4];
  int local_6f0;
  int local_6ec;
  int local_6e8;
  int local_6e4;
  uint local_6e0;
  char *local_6d8;
  char *local_6d0;
  int32_t local_6c8;
  int32_t uStack_6c0;
  int32_t uStack_6bc;
  char *local_6b8 [2];
  int32_t local_6a8;
  int32_t uStack_6a0;
  char *local_698;
  longlong *local_690;
  char *local_688;
  char *local_680;
  char *local_678;
  int *local_670;
  int *local_668;
  longlong *local_660;
  char **local_658;
  char **local_650;
  char *****local_648;
  int *local_640;
  char **local_638;
  int32_t *local_630;
  char *local_628;
  char **local_620;
  int *local_618;
  char *****local_608;
  int32_t uStack_600;
  longlong local_5f8;
  ulonglong uStack_5f0;
  longlong local_5e8;
  int32_t uStack_5e0;
  longlong local_5d8;
  ulonglong uStack_5d0;
  char local_5c8;
  char acStack_5c7 [1384];
  int32_t local_5f [7];
  ulonglong local_58;
  
  local_58 = DAT_1801eb080 ^ (ulonglong)auStackY_728;
  iVar15 = 0;
  local_6f7 = *(char *)((longlong)param_4 + 10);
  if (local_6f7 == '\0') {
    local_6f7 = '\x02';
  }
  bVar7 = false;
  bVar3 = false;
  iVar22 = 3;
  cVar21 = 'e';
  uVar8 = param_4[1];
  bVar23 = false;
  switch((char)param_4[2]) {
  case 'A':
    bVar7 = true;
  case 'a':
    bVar3 = bVar7;
    iVar22 = 4;
    cVar21 = 'p';
    break;
  default:
    bVar23 = true;
    break;
  case 'E':
    bVar7 = true;
  case 'e':
    bVar3 = bVar7;
    if (uVar8 == 0xffffffff) {
      uVar8 = 6;
    }
    iVar22 = 1;
    break;
  case 'F':
    bVar7 = true;
  case 'f':
    bVar3 = bVar7;
    if (uVar8 == 0xffffffff) {
      uVar8 = 6;
    }
    iVar22 = 2;
    break;
  case 'G':
    bVar7 = true;
  case 'g':
    bVar3 = bVar7;
    if (uVar8 == 0xffffffff) {
      uVar8 = 6;
    }
  }
  local_6e0 = uVar8;
  if (0x432 < (int)uVar8) {
    local_6e0 = 0x432;
  }
  local_6e8 = uVar8 - 0x432;
  if ((int)uVar8 < 0x433) {
    local_6e8 = 0;
  }
  piVar17 = param_4;
  local_690 = param_1;
  uVar8 = FUN_18012d6a4((uint)param_3);
  local_6f5 = uVar8 != 0;
  if (NAN(param_3)) {
    local_6c8 = acStack_5c7;
    if (uVar8 == 0) {
      local_6c8 = &local_5c8;
    }
    *(short *)local_6c8 = (short)DAT_18018338c;
    local_6c8[2] = (char)((uint)DAT_18018338c >> 0x10);
    local_6c8 = local_6c8 + 3;
  }
  else {
    if (local_6e0 == 0xffffffff) {
      if (!bVar23) {
        in_stack_fffffffffffff8f8 = iVar22;
        FUN_1800aebb0(&local_6a8,&local_5c8,(char *)local_5f,(uint)param_3,iVar22);
        goto LAB_1800afb07;
      }
      plVar10 = FUN_1800add90(&local_6a8,&local_5c8,(char *)local_5f,(uint)param_3);
      local_6a8._0_4_ = (int32_t)*plVar10;
      local_6a8._4_4_ = *(int32_t *)((longlong)plVar10 + 4);
      uStack_6c0 = (int)plVar10[1];
      uStack_6bc = *(int32_t *)((longlong)plVar10 + 0xc);
    }
    else {
      in_stack_fffffffffffff8f8 = iVar22;
      FUN_1800af290(&local_6a8,(int32_t (*) [32])&local_5c8,(int32_t (*) [32])local_5f,piVar17
                    ,iVar22,local_6e0);
LAB_1800afb07:
      uStack_6c0 = (int32_t)uStack_6a0;
      uStack_6bc = uStack_6a0._4_4_;
    }
    local_6c8 = (char *)CONCAT44(local_6a8._4_4_,(int32_t)local_6a8);
  }
  local_6d8 = &local_5c8;
  local_6f0 = (int)local_6c8 - (int)local_6d8;
  cVar14 = '\0';
  if (local_6f5 == '\0') {
    if (local_6f7 != '\x02') {
      local_6f0 = local_6f0 + 1;
    }
  }
  else {
    local_6d8 = acStack_5c7;
  }
  pcVar4 = local_6d8;
  if (bVar3) {
    for (; pcVar4 != local_6c8; pcVar4 = pcVar4 + 1) {
      cVar2 = *pcVar4;
      if (('`' < cVar2) && (cVar2 < '{')) {
        *pcVar4 = cVar2 + -0x20;
      }
    }
    cVar21 = cVar21 + -0x20;
  }
  bVar23 = ((uint)param_3 & 0x7f800000) == 0x7f800000;
  local_6f6 = '\0';
  local_6ec = 0;
  local_6e4 = 0;
  uStack_600 = 0;
  local_5f8 = 0;
  uStack_5f0 = 0xf;
  local_608 = (char *****)0x0;
  iVar16 = 0;
  local_6d0 = local_6c8;
  local_6b8[0] = local_6c8;
  local_698 = local_6c8;
  if (bVar23) goto LAB_1800afe6c;
  pcVar4 = local_6d8;
  pcVar13 = local_6c8;
  pcVar5 = local_6c8;
  if ((*(char *)((longlong)param_4 + 0xb) != '\0') || ((char)param_4[3] != '\0')) {
    for (; pcVar4 < local_6c8; pcVar4 = pcVar4 + 1) {
      pcVar20 = pcVar4;
      pcVar6 = pcVar4;
      if ((*pcVar4 != '.') && (pcVar20 = pcVar5, pcVar6 = local_698, *pcVar4 == cVar21)) {
        pcVar13 = pcVar4;
        local_6d0 = pcVar4;
      }
      local_698 = pcVar6;
      pcVar5 = pcVar20;
    }
    local_6b8[0] = pcVar5;
    if (pcVar13 < pcVar5) {
      local_6b8[0] = pcVar13;
    }
    if ((*(char *)((longlong)param_4 + 0xb) != '\0') && (pcVar5 == local_6c8)) {
      local_6f0 = local_6f0 + 1;
      cVar14 = '\x01';
      local_6f6 = '\x01';
    }
    if ((char)param_4[3] != '\0') {
      if (param_5 == 0) {
        p_Var9 = FUN_180124548('\x01');
        uStack_6a0 = p_Var9;
      }
      else {
        p_Var9 = *(_Locimp **)(param_5 + 8);
        uStack_6a0 = p_Var9;
        (**(code **)(*(longlong *)p_Var9 + 8))(p_Var9);
      }
      plVar10 = FUN_1800b5fd0((longlong)&local_6a8);
      (**(code **)(*plVar10 + 0x28))(plVar10,&local_5e8);
      if (0xf < uStack_5f0) {
        ppppppcVar12 = (char ******)local_608;
        if ((0xfff < uStack_5f0 + 1) &&
           (ppppppcVar12 = (char ******)local_608[-1],
           (char *)0x1f < (char *)((longlong)local_608 + (-8 - (longlong)ppppppcVar12)))) {
          FUN_18012b7b4();
                    
          halt_baddata();
        }
        thunk_FUN_18012d5e8(ppppppcVar12);
      }
      local_608 = (char *****)CONCAT71(local_5e8._1_7_,(int32_t)local_5e8);
      uStack_600 = uStack_5e0;
      local_5f8 = local_5d8;
      uStack_5f0 = uStack_5d0;
      local_5d8 = 0;
      uStack_5d0 = 0xf;
      local_5e8._0_1_ = 0;
      FUN_1800a6800(&local_5e8);
      if ((p_Var9 != (_Locimp *)0x0) &&
         (puVar11 = (int32_t *)(**(code **)(*(longlong *)p_Var9 + 0x10))(p_Var9),
         puVar11 != (int32_t *)0x0)) {
        (**(code **)*puVar11)(puVar11,1);
      }
      ppppppcVar12 = &local_608;
      if (0xf < uStack_5f0) {
        ppppppcVar12 = (char ******)local_608;
      }
      uVar18 = (longlong)local_6b8[0] - (longlong)local_6d8;
      if ((local_5f8 != 0) && (uVar19 = (ulonglong)*(char *)ppppppcVar12, uVar19 < uVar18)) {
        ppppppcVar1 = (char ******)((longlong)ppppppcVar12 + local_5f8);
        do {
          uVar18 = uVar18 - (longlong)(char)uVar19;
          iVar15 = iVar15 + 1;
          if ((char ******)((longlong)ppppppcVar12 + 1) != ppppppcVar1) {
            ppppppcVar12 = (char ******)((longlong)ppppppcVar12 + 1);
          }
          uVar19 = (ulonglong)*(char *)ppppppcVar12;
        } while (uVar19 < uVar18);
      }
      local_6f0 = local_6f0 + iVar15;
      pcVar13 = local_6d0;
      cVar14 = local_6f6;
      local_6e4 = iVar15;
    }
  }
  if (iVar22 == 1) {
LAB_1800afe35:
    if (((local_6e8 != 0) && (*(char *)((longlong)param_4 + 0xb) == '\0')) &&
       ((char)param_4[3] == '\0')) {
      do {
        pcVar13 = pcVar13 + -1;
        local_6d0 = pcVar13;
      } while (*pcVar13 != cVar21);
    }
  }
  else if (iVar22 != 2) {
    if (iVar22 == 3) {
      iVar16 = local_6ec;
      if ((*(char *)((longlong)param_4 + 0xb) != '\0') &&
         (((char)param_4[2] == 'g' || ((char)param_4[2] == 'G')))) {
        iVar15 = (int)pcVar13 - (int)local_6d8;
        if (cVar14 == '\0') {
          iVar15 = iVar15 + -1;
        }
        iVar16 = (local_6e8 - iVar15) + local_6e0;
        local_6ec = iVar16;
        if (((pcVar13 == local_6c8) && ((float)((uint)param_3 & _DAT_1801d9d30) < DAT_1801d8e38)) &&
           (pcVar4 = local_6d8, param_3 != 0.0)) {
          for (; pcVar4 < local_6c8; pcVar4 = pcVar4 + 1) {
            if (*pcVar4 == '0') {
              iVar16 = iVar16 + 1;
              local_6ec = iVar16;
            }
            else if (*pcVar4 != '.') break;
          }
        }
      }
      goto LAB_1800afe6c;
    }
    goto LAB_1800afe35;
  }
  local_6ec = local_6e8;
  iVar16 = local_6e8;
LAB_1800afe6c:
  local_6f0 = local_6f0 + iVar16;
  if (((*(char *)((longlong)param_4 + 0xd) == '\0') || (*(char *)((longlong)param_4 + 9) != '\0'))
     || (bVar23)) {
    local_6f4[0] = '\0';
  }
  else {
    local_6f4[0] = '\x01';
  }
  local_688 = &local_6f7;
  local_680 = &local_6f5;
  local_678 = local_6f4;
  local_670 = &local_6f0;
  local_660 = &param_5;
  local_658 = &local_6d8;
  local_650 = local_6b8;
  local_648 = (char *****)&local_608;
  local_640 = &local_6e4;
  local_638 = &local_698;
  local_630 = &local_6c8;
  local_628 = &local_6f6;
  local_620 = &local_6d0;
  local_618 = &local_6ec;
  local_668 = param_4;
  if (local_6f4[0] == '\0') {
    FUN_1800af800(local_690,param_2,local_6f0,param_4,
                  CONCAT44(in_stack_fffffffffffff8fc,in_stack_fffffffffffff8f8),&local_688);
  }
  else {
    FUN_1800af480(&local_688,local_690,param_2);
  }
  FUN_1800a6800((longlong *)&local_608);
  FUN_1801252c0(local_58 ^ (ulonglong)auStackY_728);
  return;
}
}

