#include "FUN_1800affe0.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800affe0(longlong *param_1,char *param_2,double param_3,int *param_4,longlong param_5) {
byte ******ppppppbVar1;
  int32_t uVar2;
  char cVar3;
  code *pcVar4;
  bool bVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  bool bVar9;
  byte bVar10;
  ushort uVar11;
  int32_t extraout_var;
  _Locimp *p_Var12;
  longlong *plVar13;
  int32_t *puVar14;
  byte ******ppppppbVar15;
  uint *puVar16;
  byte *pbVar17;
  byte bVar18;
  char *pcVar19;
  longlong lVar20;
  char cVar21;
  int iVar22;
  int iVar23;
  int *piVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  char *pcVar27;
  char cVar28;
  int iVar29;
  bool bVar30;
  uint uVar31;
  uint uVar32;
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
  char *local_6c8;
  _Locimp *p_Stack_6c0;
  char *local_6b8;
  _Locimp *p_Stack_6b0;
  char *local_6a8;
  char *local_6a0;
  longlong *local_698;
  char *local_688;
  char *local_680;
  char *local_678;
  int *local_670;
  int *local_668;
  longlong *local_660;
  char **local_658;
  char **local_650;
  byte *****local_648;
  int *local_640;
  char **local_638;
  char **local_630;
  char *local_628;
  char **local_620;
  int *local_618;
  byte *****local_608;
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
  
  uVar32 = (uint)((ulonglong)param_3 >> 0x20);
  local_58 = DAT_1801eb080 ^ (ulonglong)auStackY_728;
  iVar22 = 0;
  local_6f7 = *(char *)((longlong)param_4 + 10);
  if (local_6f7 == '\0') {
    local_6f7 = '\x02';
  }
  bVar9 = false;
  bVar5 = false;
  iVar29 = 3;
  cVar28 = 'e';
  uVar31 = param_4[1];
  bVar30 = false;
  switch((char)param_4[2]) {
  case 'A':
    bVar9 = true;
  case 'a':
    bVar5 = bVar9;
    iVar29 = 4;
    cVar28 = 'p';
    break;
  default:
    bVar30 = true;
    break;
  case 'E':
    bVar9 = true;
  case 'e':
    bVar5 = bVar9;
    if (uVar31 == 0xffffffff) {
      uVar31 = 6;
    }
    iVar29 = 1;
    break;
  case 'F':
    bVar9 = true;
  case 'f':
    bVar5 = bVar9;
    if (uVar31 == 0xffffffff) {
      uVar31 = 6;
    }
    iVar29 = 2;
    break;
  case 'G':
    bVar9 = true;
  case 'g':
    bVar5 = bVar9;
    if (uVar31 == 0xffffffff) {
      uVar31 = 6;
    }
  }
  local_6e0 = uVar31;
  if (0x432 < (int)uVar31) {
    local_6e0 = 0x432;
  }
  local_6e8 = uVar31 - 0x432;
  if ((int)uVar31 < 0x433) {
    local_6e8 = 0;
  }
  piVar24 = param_4;
  local_698 = param_1;
  uVar11 = FUN_18012d654(param_3);
  iVar23 = (int)CONCAT62(extraout_var,uVar11);
  local_6f5 = iVar23 != 0;
  if (NAN(param_3) || NAN(param_3)) {
    local_6b8 = acStack_5c7;
    if (iVar23 == 0) {
      local_6b8 = &local_5c8;
    }
    *(short *)local_6b8 = (short)DAT_18018338c;
    local_6b8[2] = (char)((uint)DAT_18018338c >> 0x10);
    local_6b8 = local_6b8 + 3;
  }
  else {
    if (local_6e0 == 0xffffffff) {
      if (bVar30) {
        FUN_1800b0670((longlong *)&local_6b8,(int32_t (*) [32])&local_5c8,
                      (int32_t (*) [32])local_5f);
      }
      else {
        in_stack_fffffffffffff8f8 = iVar29;
        FUN_1800b1670((longlong *)&local_6b8,(int32_t (*) [32])&local_5c8,
                      (int32_t (*) [32])local_5f,piVar24,iVar29);
      }
    }
    else {
      in_stack_fffffffffffff8f8 = iVar29;
      FUN_1800b3170((longlong *)&local_6b8,(int32_t (*) [32])&local_5c8,
                    (int32_t (*) [32])local_5f,piVar24,iVar29,local_6e0);
    }
    p_Stack_6c0 = p_Stack_6b0;
  }
  local_6d8 = &local_5c8;
  local_6f0 = (int)local_6b8 - (int)local_6d8;
  cVar21 = '\0';
  if (local_6f5 == '\0') {
    if (local_6f7 != '\x02') {
      local_6f0 = local_6f0 + 1;
    }
  }
  else {
    local_6d8 = acStack_5c7;
  }
  pcVar19 = local_6d8;
  if (bVar5) {
    for (; pcVar19 != local_6b8; pcVar19 = pcVar19 + 1) {
      cVar3 = *pcVar19;
      if (('`' < cVar3) && (cVar3 < '{')) {
        *pcVar19 = cVar3 + -0x20;
      }
    }
    cVar28 = cVar28 + -0x20;
  }
  bVar30 = (uVar32 >> 0x14 & 0x7ff) == 0x7ff;
  local_6f6 = '\0';
  local_6ec = 0;
  local_6e4 = 0;
  uStack_600 = 0;
  local_5f8 = 0;
  uStack_5f0 = 0xf;
  local_608 = (byte *****)0x0;
  iVar23 = 0;
  local_6d0 = local_6b8;
  local_6c8 = local_6b8;
  local_6a8 = local_6b8;
  local_6a0 = local_6b8;
  if (bVar30) goto LAB_1800b04fc;
  pcVar19 = local_6b8;
  pcVar6 = local_6b8;
  pcVar7 = local_6d8;
  if ((*(char *)((longlong)param_4 + 0xb) != '\0') || ((char)param_4[3] != '\0')) {
    for (; pcVar7 < local_6b8; pcVar7 = pcVar7 + 1) {
      pcVar27 = pcVar7;
      pcVar8 = pcVar7;
      if ((*pcVar7 != '.') && (pcVar27 = pcVar6, pcVar8 = local_6a0, *pcVar7 == cVar28)) {
        pcVar19 = pcVar7;
        local_6d0 = pcVar7;
      }
      local_6a0 = pcVar8;
      pcVar6 = pcVar27;
    }
    local_6a8 = pcVar6;
    if (pcVar19 < pcVar6) {
      local_6a8 = pcVar19;
    }
    if ((*(char *)((longlong)param_4 + 0xb) != '\0') && (pcVar6 == local_6b8)) {
      local_6f0 = local_6f0 + 1;
      cVar21 = '\x01';
      local_6f6 = '\x01';
    }
    if ((char)param_4[3] != '\0') {
      if (param_5 == 0) {
        p_Var12 = FUN_180124548('\x01');
        p_Stack_6b0 = p_Var12;
      }
      else {
        p_Var12 = *(_Locimp **)(param_5 + 8);
        p_Stack_6b0 = p_Var12;
        (**(code **)(*(longlong *)p_Var12 + 8))(p_Var12);
      }
      plVar13 = FUN_1800b5fd0((longlong)&local_6b8);
      (**(code **)(*plVar13 + 0x28))(plVar13,&local_5e8);
      if (0xf < uStack_5f0) {
        ppppppbVar15 = (byte ******)local_608;
        if (0xfff < uStack_5f0 + 1) {
          lVar20 = uStack_5f0 + 0x28;
          ppppppbVar15 = (byte ******)local_608[-1];
          if ((byte *)0x1f < (byte *)((longlong)local_608 + (-8 - (longlong)ppppppbVar15))) {
            puVar16 = (uint *)FUN_18012b7b4();
            uVar32 = (uint)puVar16 | *puVar16;
            LOCK();
            uVar2 = *(int32_t *)(ulonglong)uVar32;
            *(int32_t *)(ulonglong)uVar32 = (char)uVar32;
            uVar32 = CONCAT31((int3)(uVar32 >> 8),uVar2);
            UNLOCK();
            uVar32 = uVar32 | *(uint *)(ulonglong)uVar32;
            pbVar17 = (byte *)(ulonglong)uVar32;
            bVar18 = (byte)ppppppbVar15;
            *param_2 = *param_2 + bVar18;
            *(char *)(lVar20 + 0x7b000b00) =
                 *(char *)(lVar20 + 0x7b000b00) + (char)((ulonglong)lVar20 >> 8);
            *param_2 = *param_2 + bVar18;
            *(byte *)(ppppppbVar15 + -0xc1ffea0) = *(byte *)(ppppppbVar15 + -0xc1ffea0) + bVar18;
            *param_2 = *param_2 + bVar18;
            *param_2 = *param_2 + bVar18;
            bVar10 = (byte)uVar32;
            *pbVar17 = *pbVar17 + bVar10;
            *pbVar17 = *pbVar17 | bVar18;
            *(byte *)ppppppbVar15 = *(byte *)ppppppbVar15 | bVar10;
            cVar28 = *param_2;
            pbVar17 = (byte *)(ulonglong)CONCAT31((int3)(uVar32 >> 8),bVar10 + cVar28);
            *pbVar17 = *pbVar17 | bVar18;
            *pbVar17 = *pbVar17 | bVar18;
            *pbVar17 = *pbVar17 | bVar18;
            *pbVar17 = *pbVar17 | bVar18;
            *pbVar17 = *pbVar17 | bVar18;
            *pbVar17 = *pbVar17 | bVar18;
            *pbVar17 = *pbVar17 | bVar18;
            *pbVar17 = *pbVar17 | bVar18;
            *pbVar17 = *pbVar17 | bVar18;
            *pbVar17 = *pbVar17 | bVar18;
            *pbVar17 = *pbVar17 | bVar18;
            *pbVar17 = *pbVar17 | bVar18;
            pbVar17[(longlong)ppppppbVar15] = pbVar17[(longlong)ppppppbVar15] | bVar10 + cVar28;
            *pbVar17 = *pbVar17 | bVar18;
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        thunk_FUN_18012d5e8(ppppppbVar15);
      }
      local_608 = (byte *****)CONCAT71(local_5e8._1_7_,(int32_t)local_5e8);
      uStack_600 = uStack_5e0;
      local_5f8 = local_5d8;
      uStack_5f0 = uStack_5d0;
      local_5d8 = 0;
      uStack_5d0 = 0xf;
      local_5e8._0_1_ = 0;
      FUN_1800a6800(&local_5e8);
      if ((p_Var12 != (_Locimp *)0x0) &&
         (puVar14 = (int32_t *)(**(code **)(*(longlong *)p_Var12 + 0x10))(p_Var12),
         puVar14 != (int32_t *)0x0)) {
        (**(code **)*puVar14)(puVar14,1);
      }
      ppppppbVar15 = &local_608;
      if (0xf < uStack_5f0) {
        ppppppbVar15 = (byte ******)local_608;
      }
      uVar25 = (longlong)local_6a8 - (longlong)local_6d8;
      if ((local_5f8 != 0) && (uVar26 = (ulonglong)(char)*(byte *)ppppppbVar15, uVar26 < uVar25)) {
        ppppppbVar1 = (byte ******)((longlong)ppppppbVar15 + local_5f8);
        do {
          uVar25 = uVar25 - (longlong)(char)uVar26;
          iVar22 = iVar22 + 1;
          if ((byte ******)((longlong)ppppppbVar15 + 1) != ppppppbVar1) {
            ppppppbVar15 = (byte ******)((longlong)ppppppbVar15 + 1);
          }
          uVar26 = (ulonglong)(char)*(byte *)ppppppbVar15;
        } while (uVar26 < uVar25);
      }
      local_6f0 = local_6f0 + iVar22;
      pcVar19 = local_6d0;
      cVar21 = local_6f6;
      local_6e4 = iVar22;
    }
  }
  if (iVar29 == 1) {
LAB_1800b04be:
    if (((local_6e8 != 0) && (*(char *)((longlong)param_4 + 0xb) == '\0')) &&
       ((char)param_4[3] == '\0')) {
      do {
        pcVar19 = pcVar19 + -1;
        local_6d0 = pcVar19;
      } while (*pcVar19 != cVar28);
    }
  }
  else if (iVar29 != 2) {
    if (iVar29 == 3) {
      iVar23 = local_6ec;
      if ((*(char *)((longlong)param_4 + 0xb) != '\0') &&
         (((char)param_4[2] == 'g' || ((char)param_4[2] == 'G')))) {
        iVar22 = (int)pcVar19 - (int)local_6d8;
        if (cVar21 == '\0') {
          iVar22 = iVar22 + -1;
        }
        iVar23 = (local_6e8 - iVar22) + local_6e0;
        local_6ec = iVar23;
        if (((pcVar19 == local_6c8) &&
            (uVar31 = SUB84(param_3,0) & _DAT_1801d9d40, uVar32 = uVar32 & _UNK_1801d9d44,
            (double)CONCAT44(uVar32,uVar31) <= DAT_1801d8e58 &&
            DAT_1801d8e58 != (double)CONCAT44(uVar32,uVar31))) &&
           (pcVar19 = local_6d8, param_3 != 0.0)) {
          for (; pcVar19 < local_6c8; pcVar19 = pcVar19 + 1) {
            if (*pcVar19 == '0') {
              iVar23 = iVar23 + 1;
              local_6ec = iVar23;
            }
            else if (*pcVar19 != '.') break;
          }
        }
      }
      goto LAB_1800b04fc;
    }
    goto LAB_1800b04be;
  }
  local_6ec = local_6e8;
  iVar23 = local_6e8;
LAB_1800b04fc:
  local_6f0 = local_6f0 + iVar23;
  if (((*(char *)((longlong)param_4 + 0xd) == '\0') || (*(char *)((longlong)param_4 + 9) != '\0'))
     || (bVar30)) {
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
  local_650 = &local_6a8;
  local_648 = (byte *****)&local_608;
  local_640 = &local_6e4;
  local_638 = &local_6a0;
  local_630 = &local_6c8;
  local_628 = &local_6f6;
  local_620 = &local_6d0;
  local_618 = &local_6ec;
  local_668 = param_4;
  if (local_6f4[0] == '\0') {
    FUN_1800af800(local_698,(int32_t *)param_2,local_6f0,param_4,
                  CONCAT44(in_stack_fffffffffffff8fc,in_stack_fffffffffffff8f8),&local_688);
  }
  else {
    FUN_1800af480(&local_688,local_698,(int32_t *)param_2);
  }
  FUN_1800a6800((longlong *)&local_608);
  FUN_1801252c0(local_58 ^ (ulonglong)auStackY_728);
  return;
}
}

