#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_1800ab850 ----
int32_t * FUN_1800ab850(longlong param_1,int32_t *param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  int32_t *puVar3;
  
  if (param_3 < *(ulonglong *)(param_1 + 8)) {
    lVar1 = *(longlong *)(param_1 + 0x10);
    uVar2 = *(ulonglong *)(lVar1 + param_3 * 8);
    if ((byte)(uVar2 >> 0x3c) < 0xe) {
                    
                    
      puVar3 = (int32_t *)
               (*(code *)((ulonglong)*(uint *)(&DAT_1800ab978 + (uVar2 >> 0x3c) * 4) + 0x180000000))
                         (lVar1,param_2,(uVar2 & 0xfffffffffffffff) + lVar1);
      return puVar3;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}

// ---- Function: FUN_1800ab9b0 ----
char * FUN_1800ab9b0(char *param_1,char *param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  ulonglong uVar3;
  code *pcVar4;
  int32_t uVar5;
  char *pcVar6;
  uint uVar7;
  char local_48 [32];
  int32_t local_28 [4];
  
  cVar1 = *param_1;
  if ((cVar1 == '}') || (cVar1 == ':')) {
    plVar2 = (longlong *)*param_3;
    if (((byte)((char)plVar2[3] - 1U) < 6) || ((char)plVar2[3] == '\n')) {
LAB_1800abb1a:
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
    *(ulonglong *)(plVar2[1] + 0x18) = uVar3 + 1;
    FUN_1800ab850(plVar2[2],(int32_t *)local_48,uVar3);
joined_r0x0001800abafc:
    if (local_48[0] != '\0') {
      uVar5 = FUN_1800ab750(local_28);
      *(int32_t *)(*plVar2 + 4) = uVar5;
      return param_1;
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
  FUN_1800b7ac0(0x1801878a0);
  pcVar4 = (code *)swi(3);
  pcVar6 = (char *)(*pcVar4)();
  return pcVar6;
}

// ---- Function: FUN_1800abb50 ----
void FUN_1800abb50(longlong *param_1,char param_2)

{
  code *pcVar1;
  int iVar2;
  
  if (param_2 < '\0') {
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
  if ((*(char *)((longlong)param_1 + 0x19) != '\0') && (1 < iVar2 - 1U)) {
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
  *(char *)(*param_1 + 8) = param_2;
  return;
}

// ---- Function: FUN_1800abe10 ----
byte * FUN_1800abe10(byte *param_1,byte *param_2,longlong *param_3)

{
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

// ---- Function: FUN_1800ac210 ----
int32_t * FUN_1800ac210(longlong *param_1,int32_t *param_2,int32_t *param_3)

{
  uint uVar1;
  int32_t uVar2;
  _Locimp *p_Var3;
  longlong *plVar4;
  int32_t *puVar5;
  int iVar6;
  int32_t *puVar7;
  longlong lVar8;
  int32_t *puVar9;
  int32_t local_38 [8];
  _Locimp *local_30;
  longlong local_28;
  longlong local_20;
  
  if (*(char *)(param_1[1] + 10) == '\x01') {
    if ((ulonglong)param_3[3] < param_3[2] + 1) {
      (**(code **)*param_3)(param_3);
    }
    *(int32_t *)(param_3[1] + param_3[2]) = 0x2b;
  }
  else {
    if (*(char *)(param_1[1] + 10) != '\x03') goto LAB_1800ac28b;
    if ((ulonglong)param_3[3] < param_3[2] + 1) {
      (**(code **)*param_3)(param_3);
    }
    *(int32_t *)(param_3[1] + param_3[2]) = 0x20;
  }
  param_3[2] = param_3[2] + 1;
LAB_1800ac28b:
  puVar7 = *(int32_t **)param_1[3];
  puVar9 = puVar7 + ((int32_t *)param_1[3])[1];
  for (; puVar7 != puVar9; puVar7 = puVar7 + 1) {
    uVar2 = *puVar7;
    if ((ulonglong)param_3[3] < param_3[2] + 1) {
      (**(code **)*param_3)(param_3);
    }
    *(int32_t *)(param_3[2] + param_3[1]) = uVar2;
    param_3[2] = param_3[2] + 1;
  }
  if (*(char *)param_1[4] != '\0') {
    if ((*(int *)param_1[5] < *(int *)param_1[1]) &&
       (iVar6 = *(int *)param_1[1] - *(int *)param_1[5], lVar8 = (longlong)iVar6, 0 < iVar6)) {
      do {
        if ((ulonglong)param_3[3] < param_3[2] + 1) {
          (**(code **)*param_3)(param_3);
        }
        *(int32_t *)(param_3[2] + param_3[1]) = 0x30;
        param_3[2] = param_3[2] + 1;
        lVar8 = lVar8 + -1;
      } while (0 < lVar8);
    }
  }
  uVar1 = *(uint *)param_1[6];
  if ((int)uVar1 < 1) {
    FUN_1800b6180(param_2,*(int32_t **)param_1[7],(int32_t *)*param_1,param_3);
  }
  else {
    if (*(longlong *)param_1[9] == 0) {
      p_Var3 = FUN_180124548('\x01');
      local_30 = p_Var3;
    }
    else {
      p_Var3 = *(_Locimp **)(*(longlong *)param_1[9] + 8);
      local_30 = p_Var3;
      (**(code **)(*(longlong *)p_Var3 + 8))(p_Var3);
    }
    plVar4 = FUN_1800b5fd0((longlong)local_38);
    uVar2 = (**(code **)(*plVar4 + 0x20))(plVar4);
    plVar4 = (longlong *)param_1[8];
    local_28 = (longlong)plVar4;
    if (0xf < (ulonglong)plVar4[3]) {
      local_28 = *plVar4;
    }
    local_20 = plVar4[2];
    FUN_1800b5880(param_2,*(int32_t **)param_1[7],*param_1,&local_28,uVar2,uVar1,param_3);
    if ((p_Var3 != (_Locimp *)0x0) &&
       (puVar5 = (int32_t *)(**(code **)(*(longlong *)p_Var3 + 0x10))(p_Var3),
       puVar5 != (int32_t *)0x0)) {
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  return param_2;
}

// ---- Function: FUN_1800ac410 ----
void FUN_1800ac410(longlong *param_1,int32_t *param_2,ulonglong param_3,longlong *param_4,
                  longlong param_5)

{
  char *******pppppppcVar1;
  char *******pppppppcVar2;
  char *pcVar3;
  code *pcVar4;
  char *pcVar5;
  int iVar6;
  _Locimp *p_Var7;
  longlong *plVar8;
  int32_t *puVar9;
  char *******pppppppcVar10;
  char *pcVar11;
  char cVar12;
  uint uVar13;
  char *pcVar14;
  char *pcVar15;
  ulonglong uVar16;
  int iVar17;
  int iVar18;
  int32_t auStackY_1d8 [32];
  char local_1a8 [8];
  char local_1a0 [4];
  int local_19c;
  char *local_198;
  _Locimp *p_Stack_190;
  int32_t local_188;
  int local_178 [2];
  uint local_170 [2];
  longlong *local_168;
  char *local_160;
  char *local_158;
  _Locimp *p_Stack_150;
  longlong local_148;
  longlong lStack_140;
  int32_t local_138;
  char *local_128;
  longlong *local_120;
  uint *local_118;
  char **local_110;
  char *local_108;
  int *local_100;
  int *local_f8;
  char **local_f0;
  char ******local_e8;
  longlong *local_e0;
  char ******local_d8;
  int32_t uStack_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  int32_t local_b8;
  int32_t uStack_b7;
  int32_t uStack_b6;
  int32_t uStack_b5;
  int32_t uStack_b4;
  int32_t uStack_b3;
  int32_t uStack_b2;
  int32_t uStack_b1;
  char cStack_b0;
  int32_t uStack_af;
  int32_t uStack_ae;
  int32_t uStack_ad;
  int32_t uStack_ac;
  int32_t uStack_ab;
  int32_t uStack_aa;
  int32_t uStack_a9;
  longlong local_a8;
  ulonglong uStack_a0;
  char local_98 [65];
  int32_t local_57 [15];
  ulonglong local_48;
  
  local_48 = DAT_1801eb080 ^ (ulonglong)auStackY_1d8;
  local_170[0] = (uint)param_3;
  iVar6 = 0;
  cVar12 = (char)param_4[1];
  local_168 = param_1;
  if (cVar12 == 'c') {
    if (0x7f < local_170[0]) {
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
    else if (cStack_b0 != '?') {
      local_198 = (char *)*param_4;
      p_Stack_190 = (_Locimp *)param_4[1];
      local_188 = (int32_t)param_4[2];
      FUN_1800b3b10(param_1,param_2,param_3,(int *)&local_198,param_5);
      goto LAB_1800ac897;
    }
    local_148 = *param_4;
    lStack_140 = param_4[1];
    local_138 = (int32_t)param_4[2];
    local_198 = local_1a8;
    p_Stack_190 = (_Locimp *)0x1;
    FUN_1800b4bf0(param_1,param_2,(longlong *)&local_198,(int *)&local_148,0x27);
    goto LAB_1800ac897;
  }
  if (*(char *)((longlong)param_4 + 10) == '\0') {
    *(int32_t *)((longlong)param_4 + 10) = 2;
  }
  uVar13 = 10;
  if (cVar12 == 'B') {
LAB_1800ac56e:
    uVar13 = 2;
  }
  else if (cVar12 == 'X') {
LAB_1800ac560:
    uVar13 = 0x10;
  }
  else {
    if (cVar12 == 'b') goto LAB_1800ac56e;
    if (cVar12 == 'o') {
      uVar13 = 8;
    }
    else if (cVar12 == 'x') goto LAB_1800ac560;
  }
  FUN_1800b4050((longlong *)&local_198,(int32_t *)local_98,(longlong)local_57,
                param_3 & 0xffffffff,uVar13);
  pcVar11 = local_198;
  local_160 = local_98;
  local_19c = (int)local_198 - (int)local_160;
  if (*(char *)((longlong)param_4 + 10) != '\x02') {
    local_19c = local_19c + 1;
  }
  if ((char)param_4[1] == 'X') {
    for (pcVar14 = local_98; pcVar14 != local_198; pcVar14 = pcVar14 + 1) {
      cVar12 = *pcVar14;
      if (('`' < cVar12) && (cVar12 < '{')) {
        *pcVar14 = cVar12 + -0x20;
      }
    }
  }
  local_158 = (char *)0x0;
  p_Stack_150 = (_Locimp *)0x0;
  iVar17 = 0;
  if (*(char *)((longlong)param_4 + 0xb) != '\0') {
    cVar12 = (char)param_4[1];
    if (cVar12 == 'B') {
      local_198 = "0B";
LAB_1800ac661:
      iVar18 = 2;
      p_Stack_190 = (_Locimp *)0x2;
    }
    else {
      if (cVar12 == 'X') {
        local_198 = "0X";
        goto LAB_1800ac661;
      }
      if (cVar12 == 'b') {
        local_198 = "0b";
        goto LAB_1800ac661;
      }
      if (cVar12 == 'o') {
        if (local_170[0] == 0) goto LAB_1800ac60d;
        local_198 = "0";
        p_Stack_190 = (_Locimp *)0x1;
        iVar18 = 1;
      }
      else {
        if (cVar12 == 'x') {
          local_198 = "0x";
          goto LAB_1800ac661;
        }
LAB_1800ac60d:
        local_198 = (char *)0x0;
        p_Stack_190 = (_Locimp *)0x0;
        iVar18 = iVar6;
      }
    }
    local_158 = local_198;
    p_Stack_150 = p_Stack_190;
    local_19c = local_19c + iVar18;
  }
  local_178[0] = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0xf;
  local_d8 = (char ******)0x0;
  if (*(char *)((longlong)param_4 + 0xc) != '\0') {
    if (param_5 == 0) {
      p_Var7 = FUN_180124548('\x01');
      p_Stack_190 = p_Var7;
    }
    else {
      p_Var7 = *(_Locimp **)(param_5 + 8);
      p_Stack_190 = p_Var7;
      (**(code **)(*(longlong *)p_Var7 + 8))(p_Var7);
    }
    plVar8 = FUN_1800b5fd0((longlong)&local_198);
    (**(code **)(*plVar8 + 0x28))(plVar8,&local_b8);
    if (0xf < uStack_c0) {
      pppppppcVar10 = (char *******)local_d8;
      if ((0xfff < uStack_c0 + 1) &&
         (pppppppcVar10 = (char *******)local_d8[-1],
         (char *)0x1f < (char *)((longlong)local_d8 + (-8 - (longlong)pppppppcVar10)))) {
        FUN_18012b7b4();
        goto LAB_1800aca43;
      }
      thunk_FUN_18012d5e8(pppppppcVar10);
    }
    local_d8 = (char ******)
               CONCAT17(uStack_b1,
                        CONCAT16(uStack_b2,
                                 CONCAT15(uStack_b3,
                                          CONCAT14(uStack_b4,
                                                   CONCAT13(uStack_b5,
                                                            CONCAT12(uStack_b6,
                                                                     CONCAT11(uStack_b7,local_b8))))
                                         )));
    uStack_d0 = CONCAT17(uStack_a9,
                         CONCAT16(uStack_aa,
                                  CONCAT15(uStack_ab,
                                           CONCAT14(uStack_ac,
                                                    CONCAT13(uStack_ad,
                                                             CONCAT12(uStack_ae,
                                                                      CONCAT11(uStack_af,cStack_b0))
                                                            )))));
    local_c8 = local_a8;
    uStack_c0 = uStack_a0;
    local_a8 = _DAT_1801d8f70;
    uStack_a0 = _UNK_1801d8f78;
    local_b8 = 0;
    FUN_1800a6800((longlong *)&local_b8);
    if ((p_Var7 != (_Locimp *)0x0) &&
       (puVar9 = (int32_t *)(**(code **)(*(longlong *)p_Var7 + 0x10))(p_Var7),
       puVar9 != (int32_t *)0x0)) {
      (**(code **)*puVar9)(puVar9,1);
    }
    pppppppcVar10 = &local_d8;
    if (0xf < uStack_c0) {
      pppppppcVar10 = (char *******)local_d8;
    }
    uVar16 = (longlong)pcVar11 - (longlong)local_160;
    if ((local_c8 != 0) && ((ulonglong)(longlong)*(char *)pppppppcVar10 < uVar16)) {
      pppppppcVar2 = (char *******)((longlong)pppppppcVar10 + local_c8);
      iVar17 = iVar6;
      do {
        cVar12 = *(char *)pppppppcVar10;
        uVar16 = uVar16 - (longlong)cVar12;
        iVar17 = iVar17 + 1;
        pppppppcVar1 = (char *******)((longlong)pppppppcVar10 + 1);
        if (pppppppcVar1 != pppppppcVar2) {
          cVar12 = *(char *)pppppppcVar1;
          pppppppcVar10 = pppppppcVar1;
        }
      } while ((ulonglong)(longlong)cVar12 < uVar16);
    }
    local_19c = local_19c + iVar17;
    local_178[0] = iVar17;
  }
  if ((*(char *)((longlong)param_4 + 0xd) == '\0') || (*(char *)((longlong)param_4 + 9) != '\0')) {
    local_1a0[0] = '\0';
  }
  else {
    local_1a0[0] = '\x01';
  }
  local_128 = pcVar11;
  local_118 = local_170;
  local_110 = &local_158;
  local_108 = local_1a0;
  local_100 = &local_19c;
  local_f8 = local_178;
  local_f0 = &local_160;
  local_e0 = &param_5;
  local_120 = param_4;
  local_e8 = (char ******)&local_d8;
  if (local_1a0[0] == '\0') {
    cVar12 = *(char *)((longlong)param_4 + 9);
    if (cVar12 == '\0') {
      cVar12 = '\x02';
    }
    iVar17 = (int)*param_4;
    iVar18 = iVar6;
    if (local_19c < iVar17) {
      if (cVar12 != '\x01') {
        iVar18 = 0;
        if (cVar12 == '\x02') {
          iVar6 = iVar17 - local_19c;
        }
        else if (cVar12 == '\x03') {
          iVar6 = (iVar17 - local_19c) / 2;
          iVar18 = (iVar17 - iVar6) - local_19c;
        }
        goto LAB_1800ac90c;
      }
      iVar18 = iVar17 - local_19c;
      pcVar15 = (char *)(ulonglong)*(byte *)((longlong)param_4 + 0xe);
    }
    else {
LAB_1800ac90c:
      pcVar15 = (char *)(ulonglong)*(byte *)((longlong)param_4 + 0xe);
      pcVar14 = (char *)((longlong)param_4 + 0xf);
      local_198 = pcVar15;
      if (0 < iVar6) {
        pcVar3 = pcVar15 + (longlong)pcVar14;
        pcVar5 = pcVar14;
        do {
          for (; local_198 = pcVar15, pcVar5 != pcVar3; pcVar5 = pcVar5 + 1) {
            cVar12 = *pcVar5;
            if ((ulonglong)param_2[3] < param_2[2] + 1) {
              (**(code **)*param_2)(param_2);
            }
            *(char *)(param_2[2] + param_2[1]) = cVar12;
            param_2[2] = param_2[2] + 1;
            pcVar15 = local_198;
          }
          iVar6 = iVar6 + -1;
          pcVar5 = pcVar14;
        } while (0 < iVar6);
      }
    }
    pcVar11 = (char *)((longlong)param_4 + 0xf);
    plVar8 = FUN_1800ac210((longlong *)&local_128,&local_198,param_2);
    puVar9 = (int32_t *)*plVar8;
    if (0 < iVar18) {
      pcVar14 = pcVar11;
      do {
        for (; pcVar14 != pcVar15 + (longlong)pcVar11; pcVar14 = pcVar14 + 1) {
          cVar12 = *pcVar14;
          if ((ulonglong)puVar9[3] < puVar9[2] + 1) {
            (**(code **)*puVar9)(puVar9);
          }
          *(char *)(puVar9[2] + puVar9[1]) = cVar12;
          puVar9[2] = puVar9[2] + 1;
        }
        iVar18 = iVar18 + -1;
        pcVar14 = pcVar11;
      } while (0 < iVar18);
    }
    *local_168 = (longlong)puVar9;
    if (uStack_c0 < 0x10) goto LAB_1800ac897;
    pppppppcVar10 = (char *******)local_d8;
    if (0xfff < uStack_c0 + 1) {
      pppppppcVar10 = (char *******)local_d8[-1];
      pcVar11 = (char *)((longlong)local_d8 + (-8 - (longlong)pppppppcVar10));
      goto joined_r0x0001800aca18;
    }
  }
  else {
    FUN_1800ac210((longlong *)&local_128,local_168,param_2);
    if (uStack_c0 < 0x10) goto LAB_1800ac897;
    pppppppcVar10 = (char *******)local_d8;
    if (0xfff < uStack_c0 + 1) {
      pppppppcVar10 = (char *******)local_d8[-1];
      pcVar11 = (char *)((longlong)local_d8 + (-8 - (longlong)pppppppcVar10));
joined_r0x0001800aca18:
      if ((char *)0x1f < pcVar11) {
LAB_1800aca43:
        FUN_18012b7b4();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  thunk_FUN_18012d5e8(pppppppcVar10);
LAB_1800ac897:
  FUN_1801252c0(local_48 ^ (ulonglong)auStackY_1d8);
  return;
}

// ---- Function: FUN_1800aca60 ----
void FUN_1800aca60(longlong *param_1,int32_t *param_2,int32_t *param_3,ulonglong param_4,
                  int param_5)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int32_t *puVar4;
  byte bVar5;
  ulonglong *puVar6;
  int32_t auStack_78 [95];
  int32_t local_19;
  ulonglong local_18 [2];
  
  local_18[0] = DAT_1801eb080 ^ (ulonglong)auStack_78;
  puVar4 = param_2;
  if ((longlong)param_4 < 0) {
    if (param_2 == param_3) {
      *param_1 = (longlong)param_3;
      *(int32_t *)(param_1 + 1) = 0x84;
      goto LAB_1800acc52;
    }
    puVar4 = (int32_t *)((longlong)param_2 + 1);
    *(int32_t *)param_2 = 0x2d;
    param_4 = -param_4;
  }
  uVar3 = (ulonglong)param_5;
  puVar6 = local_18;
  switch(param_5) {
  case 2:
    do {
      bVar5 = (byte)param_4;
      puVar6 = (ulonglong *)((longlong)puVar6 + -1);
      param_4 = param_4 >> 1;
      *(byte *)puVar6 = (bVar5 & 1) + 0x30;
    } while (param_4 != 0);
    break;
  case 3:
  case 5:
  case 6:
  case 7:
  case 9:
    do {
      uVar2 = param_4 / uVar3;
      puVar6 = (ulonglong *)((longlong)puVar6 + -1);
      *(char *)puVar6 = (char)(param_4 % uVar3) + '0';
      param_4 = uVar2;
    } while (uVar2 != 0);
    break;
  case 4:
    do {
      bVar5 = (byte)param_4;
      puVar6 = (ulonglong *)((longlong)puVar6 + -1);
      param_4 = param_4 >> 2;
      *(byte *)puVar6 = (bVar5 & 3) + 0x30;
    } while (param_4 != 0);
    break;
  case 8:
    do {
      bVar5 = (byte)param_4;
      puVar6 = (ulonglong *)((longlong)puVar6 + -1);
      param_4 = param_4 >> 3;
      *(byte *)puVar6 = (bVar5 & 7) + 0x30;
    } while (param_4 != 0);
    break;
  case 10:
    do {
      puVar6 = (ulonglong *)((longlong)puVar6 + -1);
      uVar3 = param_4 / 10;
      *(char *)puVar6 = (char)param_4 + (char)uVar3 * -10 + '0';
      param_4 = uVar3;
    } while (uVar3 != 0);
    break;
  default:
    do {
      uVar2 = param_4 / uVar3;
      puVar6 = (ulonglong *)((longlong)puVar6 + -1);
      *(char *)puVar6 = "0123456789abcdefghijklmnopqrstuvwxyz0b"[param_4 % uVar3];
      param_4 = uVar2;
    } while (uVar2 != 0);
    break;
  case 0x10:
    do {
      puVar6 = (ulonglong *)((longlong)puVar6 + -1);
      uVar1 = (uint)param_4;
      param_4 = param_4 >> 4;
      *(char *)puVar6 = "0123456789abcdefghijklmnopqrstuvwxyz0b"[uVar1 & 0xf];
    } while (param_4 != 0);
    break;
  case 0x20:
    do {
      puVar6 = (ulonglong *)((longlong)puVar6 + -1);
      uVar1 = (uint)param_4;
      param_4 = param_4 >> 5;
      *(char *)puVar6 = "0123456789abcdefghijklmnopqrstuvwxyz0b"[uVar1 & 0x1f];
    } while (param_4 != 0);
  }
  uVar3 = (longlong)local_18 - (longlong)puVar6;
  if ((longlong)param_3 - (longlong)puVar4 < (longlong)uVar3) {
    *param_1 = (longlong)param_3;
    *(int32_t *)(param_1 + 1) = 0x84;
  }
  else {
    FUN_180150fd0(puVar4,puVar6,uVar3);
    *(int32_t *)(param_1 + 1) = 0;
    *param_1 = (longlong)puVar4 + uVar3;
  }
LAB_1800acc52:
  FUN_1801252c0(local_18[0] ^ (ulonglong)auStack_78);
  return;
}

// ---- Function: FUN_1800accb0 ----
int32_t * FUN_1800accb0(longlong *param_1,int32_t *param_2,int32_t *param_3)

{
  uint uVar1;
  int32_t uVar2;
  _Locimp *p_Var3;
  longlong *plVar4;
  int32_t *puVar5;
  int iVar6;
  int32_t *puVar7;
  longlong lVar8;
  int32_t *puVar9;
  int32_t local_38 [8];
  _Locimp *local_30;
  longlong local_28;
  longlong local_20;
  
  if (*(longlong *)param_1[2] < 0) {
    if ((ulonglong)param_3[3] < param_3[2] + 1) {
      (**(code **)*param_3)(param_3);
    }
    *(int32_t *)(param_3[1] + param_3[2]) = 0x2d;
  }
  else if (*(char *)(param_1[1] + 10) == '\x01') {
    if ((ulonglong)param_3[3] < param_3[2] + 1) {
      (**(code **)*param_3)(param_3);
    }
    *(int32_t *)(param_3[1] + param_3[2]) = 0x2b;
  }
  else {
    if (*(char *)(param_1[1] + 10) != '\x03') goto LAB_1800acd5e;
    if ((ulonglong)param_3[3] < param_3[2] + 1) {
      (**(code **)*param_3)(param_3);
    }
    *(int32_t *)(param_3[1] + param_3[2]) = 0x20;
  }
  param_3[2] = param_3[2] + 1;
LAB_1800acd5e:
  puVar7 = *(int32_t **)param_1[3];
  puVar9 = puVar7 + ((int32_t *)param_1[3])[1];
  for (; puVar7 != puVar9; puVar7 = puVar7 + 1) {
    uVar2 = *puVar7;
    if ((ulonglong)param_3[3] < param_3[2] + 1) {
      (**(code **)*param_3)(param_3);
    }
    *(int32_t *)(param_3[2] + param_3[1]) = uVar2;
    param_3[2] = param_3[2] + 1;
  }
  if (*(char *)param_1[4] != '\0') {
    if ((*(int *)param_1[5] < *(int *)param_1[1]) &&
       (iVar6 = *(int *)param_1[1] - *(int *)param_1[5], lVar8 = (longlong)iVar6, 0 < iVar6)) {
      do {
        if ((ulonglong)param_3[3] < param_3[2] + 1) {
          (**(code **)*param_3)(param_3);
        }
        *(int32_t *)(param_3[2] + param_3[1]) = 0x30;
        param_3[2] = param_3[2] + 1;
        lVar8 = lVar8 + -1;
      } while (0 < lVar8);
    }
  }
  uVar1 = *(uint *)param_1[6];
  if ((int)uVar1 < 1) {
    FUN_1800b6180(param_2,*(int32_t **)param_1[7],(int32_t *)*param_1,param_3);
  }
  else {
    if (*(longlong *)param_1[9] == 0) {
      p_Var3 = FUN_180124548('\x01');
      local_30 = p_Var3;
    }
    else {
      p_Var3 = *(_Locimp **)(*(longlong *)param_1[9] + 8);
      local_30 = p_Var3;
      (**(code **)(*(longlong *)p_Var3 + 8))(p_Var3);
    }
    plVar4 = FUN_1800b5fd0((longlong)local_38);
    uVar2 = (**(code **)(*plVar4 + 0x20))(plVar4);
    plVar4 = (longlong *)param_1[8];
    local_28 = (longlong)plVar4;
    if (0xf < (ulonglong)plVar4[3]) {
      local_28 = *plVar4;
    }
    local_20 = plVar4[2];
    FUN_1800b5880(param_2,*(int32_t **)param_1[7],*param_1,&local_28,uVar2,uVar1,param_3);
    if ((p_Var3 != (_Locimp *)0x0) &&
       (puVar5 = (int32_t *)(**(code **)(*(longlong *)p_Var3 + 0x10))(p_Var3),
       puVar5 != (int32_t *)0x0)) {
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  return param_2;
}

// ---- Function: FUN_1800acef0 ----
void FUN_1800acef0(longlong *param_1,int32_t *param_2,ulonglong param_3,longlong *param_4,
                  longlong param_5)

{
  char ******ppppppcVar1;
  char *pcVar2;
  char ******ppppppcVar3;
  char *pcVar4;
  code *pcVar5;
  char *pcVar6;
  int iVar7;
  _Locimp *p_Var8;
  longlong *plVar9;
  int32_t *puVar10;
  char ******ppppppcVar11;
  char *pcVar12;
  char cVar13;
  char *pcVar14;
  ulonglong uVar15;
  int iVar16;
  int iVar17;
  int32_t auStackY_1d8 [32];
  char local_1a8 [8];
  char local_1a0 [4];
  int local_19c;
  char *local_198;
  _Locimp *p_Stack_190;
  int32_t local_188;
  int local_178 [2];
  longlong *local_170;
  ulonglong local_168;
  char *local_160;
  char *local_158;
  _Locimp *p_Stack_150;
  longlong local_148;
  longlong lStack_140;
  int32_t local_138;
  char *local_128;
  longlong *local_120;
  ulonglong *local_118;
  char **local_110;
  char *local_108;
  int *local_100;
  int *local_f8;
  char **local_f0;
  char *****local_e8;
  longlong *local_e0;
  char *****local_d8;
  int32_t uStack_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  int32_t local_b8;
  char cStack_b0;
  int32_t uStack_af;
  int32_t uStack_ae;
  int32_t uStack_ad;
  int32_t uStack_ac;
  int32_t uStack_ab;
  int32_t uStack_aa;
  int32_t uStack_a9;
  longlong local_a8;
  ulonglong uStack_a0;
  char local_98;
  char local_97 [64];
  int32_t local_57;
  ulonglong local_48;
  
  local_48 = DAT_1801eb080 ^ (ulonglong)auStackY_1d8;
  iVar7 = 0;
  cVar13 = (char)param_4[1];
  local_170 = param_1;
  local_168 = param_3;
  if (cVar13 == 'c') {
    if (0xff < param_3 + 0x80) {
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
    else if (cStack_b0 != '?') {
      local_198 = (char *)*param_4;
      p_Stack_190 = (_Locimp *)param_4[1];
      local_188 = (int32_t)param_4[2];
      FUN_1800b3b10(param_1,param_2,param_3,(int *)&local_198,param_5);
      goto LAB_1800ad392;
    }
    local_148 = *param_4;
    lStack_140 = param_4[1];
    local_138 = (int32_t)param_4[2];
    local_198 = local_1a8;
    p_Stack_190 = (_Locimp *)0x1;
    FUN_1800b4bf0(param_1,param_2,(longlong *)&local_198,(int *)&local_148,0x27);
    goto LAB_1800ad392;
  }
  if (*(char *)((longlong)param_4 + 10) == '\0') {
    *(int32_t *)((longlong)param_4 + 10) = 2;
  }
  iVar16 = 10;
  if (cVar13 == 'B') {
LAB_1800ad057:
    iVar16 = 2;
  }
  else if (cVar13 == 'X') {
LAB_1800ad049:
    iVar16 = 0x10;
  }
  else {
    if (cVar13 == 'b') goto LAB_1800ad057;
    if (cVar13 == 'o') {
      iVar16 = 8;
    }
    else if (cVar13 == 'x') goto LAB_1800ad049;
  }
  FUN_1800aca60((longlong *)&local_198,(int32_t *)&local_98,&local_57,param_3,iVar16);
  pcVar12 = local_198;
  local_160 = &local_98;
  local_19c = (int)local_198 - (int)local_160;
  if ((longlong)local_168 < 0) {
    local_160 = local_97;
  }
  else if (*(char *)((longlong)param_4 + 10) != '\x02') {
    local_19c = local_19c + 1;
  }
  pcVar2 = local_160;
  if ((char)param_4[1] == 'X') {
    for (; pcVar2 != local_198; pcVar2 = pcVar2 + 1) {
      cVar13 = *pcVar2;
      if (('`' < cVar13) && (cVar13 < '{')) {
        *pcVar2 = cVar13 + -0x20;
      }
    }
  }
  local_158 = (char *)0x0;
  p_Stack_150 = (_Locimp *)0x0;
  iVar16 = 0;
  if (*(char *)((longlong)param_4 + 0xb) != '\0') {
    cVar13 = (char)param_4[1];
    if (cVar13 == 'B') {
      local_198 = "0B";
LAB_1800ad15d:
      iVar17 = 2;
      p_Stack_190 = (_Locimp *)0x2;
    }
    else {
      if (cVar13 == 'X') {
        local_198 = "0X";
        goto LAB_1800ad15d;
      }
      if (cVar13 == 'b') {
        local_198 = "0b";
        goto LAB_1800ad15d;
      }
      if (cVar13 == 'o') {
        if (local_168 == 0) goto LAB_1800ad10b;
        local_198 = "0";
        p_Stack_190 = (_Locimp *)0x1;
        iVar17 = 1;
      }
      else {
        if (cVar13 == 'x') {
          local_198 = "0x";
          goto LAB_1800ad15d;
        }
LAB_1800ad10b:
        local_198 = (char *)0x0;
        p_Stack_190 = (_Locimp *)0x0;
        iVar17 = iVar7;
      }
    }
    local_158 = local_198;
    p_Stack_150 = p_Stack_190;
    local_19c = local_19c + iVar17;
  }
  local_178[0] = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0xf;
  local_d8 = (char *****)0x0;
  if (*(char *)((longlong)param_4 + 0xc) != '\0') {
    if (param_5 == 0) {
      p_Var8 = FUN_180124548('\x01');
      p_Stack_190 = p_Var8;
    }
    else {
      p_Var8 = *(_Locimp **)(param_5 + 8);
      p_Stack_190 = p_Var8;
      (**(code **)(*(longlong *)p_Var8 + 8))(p_Var8);
    }
    plVar9 = FUN_1800b5fd0((longlong)&local_198);
    (**(code **)(*plVar9 + 0x28))(plVar9,&local_b8);
    if (0xf < uStack_c0) {
      ppppppcVar11 = (char ******)local_d8;
      if ((0xfff < uStack_c0 + 1) &&
         (ppppppcVar11 = (char ******)local_d8[-1],
         (char *)0x1f < (char *)((longlong)local_d8 + (-8 - (longlong)ppppppcVar11)))) {
        FUN_18012b7b4();
        goto LAB_1800ad543;
      }
      thunk_FUN_18012d5e8(ppppppcVar11);
    }
    local_d8 = (char *****)
               CONCAT17(local_b8._7_1_,
                        CONCAT16(local_b8._6_1_,
                                 CONCAT15(local_b8._5_1_,
                                          CONCAT14(local_b8._4_1_,
                                                   CONCAT13(local_b8._3_1_,
                                                            CONCAT12(local_b8._2_1_,
                                                                     CONCAT11(local_b8._1_1_,
                                                                              (int32_t)local_b8))
                                                           )))));
    uStack_d0 = CONCAT17(uStack_a9,
                         CONCAT16(uStack_aa,
                                  CONCAT15(uStack_ab,
                                           CONCAT14(uStack_ac,
                                                    CONCAT13(uStack_ad,
                                                             CONCAT12(uStack_ae,
                                                                      CONCAT11(uStack_af,cStack_b0))
                                                            )))));
    local_c8 = local_a8;
    uStack_c0 = uStack_a0;
    local_a8 = _DAT_1801d8f70;
    uStack_a0 = _UNK_1801d8f78;
    local_b8._0_1_ = 0;
    FUN_1800a6800(&local_b8);
    if ((p_Var8 != (_Locimp *)0x0) &&
       (puVar10 = (int32_t *)(**(code **)(*(longlong *)p_Var8 + 0x10))(p_Var8),
       puVar10 != (int32_t *)0x0)) {
      (**(code **)*puVar10)(puVar10,1);
    }
    ppppppcVar11 = &local_d8;
    if (0xf < uStack_c0) {
      ppppppcVar11 = (char ******)local_d8;
    }
    uVar15 = (longlong)pcVar12 - (longlong)local_160;
    if ((local_c8 != 0) && ((ulonglong)(longlong)*(char *)ppppppcVar11 < uVar15)) {
      ppppppcVar3 = (char ******)((longlong)ppppppcVar11 + local_c8);
      iVar16 = iVar7;
      do {
        cVar13 = *(char *)ppppppcVar11;
        uVar15 = uVar15 - (longlong)cVar13;
        iVar16 = iVar16 + 1;
        ppppppcVar1 = (char ******)((longlong)ppppppcVar11 + 1);
        if (ppppppcVar1 != ppppppcVar3) {
          cVar13 = *(char *)ppppppcVar1;
          ppppppcVar11 = ppppppcVar1;
        }
      } while ((ulonglong)(longlong)cVar13 < uVar15);
    }
    local_19c = local_19c + iVar16;
    local_178[0] = iVar16;
  }
  if ((*(char *)((longlong)param_4 + 0xd) == '\0') || (*(char *)((longlong)param_4 + 9) != '\0')) {
    local_1a0[0] = '\0';
  }
  else {
    local_1a0[0] = '\x01';
  }
  local_128 = pcVar12;
  local_118 = &local_168;
  local_110 = &local_158;
  local_108 = local_1a0;
  local_100 = &local_19c;
  local_f8 = local_178;
  local_f0 = &local_160;
  local_e0 = &param_5;
  local_120 = param_4;
  local_e8 = (char *****)&local_d8;
  if (local_1a0[0] == '\0') {
    cVar13 = *(char *)((longlong)param_4 + 9);
    if (cVar13 == '\0') {
      cVar13 = '\x02';
    }
    iVar16 = (int)*param_4;
    iVar17 = iVar7;
    if (local_19c < iVar16) {
      if (cVar13 != '\x01') {
        iVar17 = 0;
        if (cVar13 == '\x02') {
          iVar7 = iVar16 - local_19c;
        }
        else if (cVar13 == '\x03') {
          iVar7 = (iVar16 - local_19c) / 2;
          iVar17 = (iVar16 - iVar7) - local_19c;
        }
        goto LAB_1800ad407;
      }
      iVar17 = iVar16 - local_19c;
      pcVar14 = (char *)(ulonglong)*(byte *)((longlong)param_4 + 0xe);
    }
    else {
LAB_1800ad407:
      pcVar14 = (char *)(ulonglong)*(byte *)((longlong)param_4 + 0xe);
      pcVar2 = (char *)((longlong)param_4 + 0xf);
      local_198 = pcVar14;
      if (0 < iVar7) {
        pcVar4 = pcVar14 + (longlong)pcVar2;
        pcVar6 = pcVar2;
        do {
          for (; local_198 = pcVar14, pcVar6 != pcVar4; pcVar6 = pcVar6 + 1) {
            cVar13 = *pcVar6;
            if ((ulonglong)param_2[3] < param_2[2] + 1) {
              (**(code **)*param_2)(param_2);
            }
            *(char *)(param_2[2] + param_2[1]) = cVar13;
            param_2[2] = param_2[2] + 1;
            pcVar14 = local_198;
          }
          iVar7 = iVar7 + -1;
          pcVar6 = pcVar2;
        } while (0 < iVar7);
      }
    }
    pcVar12 = (char *)((longlong)param_4 + 0xf);
    plVar9 = FUN_1800accb0((longlong *)&local_128,&local_198,param_2);
    puVar10 = (int32_t *)*plVar9;
    if (0 < iVar17) {
      pcVar2 = pcVar12;
      do {
        for (; pcVar2 != pcVar14 + (longlong)pcVar12; pcVar2 = pcVar2 + 1) {
          cVar13 = *pcVar2;
          if ((ulonglong)puVar10[3] < puVar10[2] + 1) {
            (**(code **)*puVar10)(puVar10);
          }
          *(char *)(puVar10[2] + puVar10[1]) = cVar13;
          puVar10[2] = puVar10[2] + 1;
        }
        iVar17 = iVar17 + -1;
        pcVar2 = pcVar12;
      } while (0 < iVar17);
    }
    *local_170 = (longlong)puVar10;
    if (uStack_c0 < 0x10) goto LAB_1800ad392;
    ppppppcVar11 = (char ******)local_d8;
    if (0xfff < uStack_c0 + 1) {
      ppppppcVar11 = (char ******)local_d8[-1];
      pcVar12 = (char *)((longlong)local_d8 + (-8 - (longlong)ppppppcVar11));
      goto joined_r0x0001800ad518;
    }
  }
  else {
    FUN_1800accb0((longlong *)&local_128,local_170,param_2);
    if (uStack_c0 < 0x10) goto LAB_1800ad392;
    ppppppcVar11 = (char ******)local_d8;
    if (0xfff < uStack_c0 + 1) {
      ppppppcVar11 = (char ******)local_d8[-1];
      pcVar12 = (char *)((longlong)local_d8 + (-8 - (longlong)ppppppcVar11));
joined_r0x0001800ad518:
      if ((char *)0x1f < pcVar12) {
LAB_1800ad543:
        FUN_18012b7b4();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  thunk_FUN_18012d5e8(ppppppcVar11);
LAB_1800ad392:
  FUN_1801252c0(local_48 ^ (ulonglong)auStackY_1d8);
  return;
}

// ---- Function: FUN_1800ad560 ----
void FUN_1800ad560(longlong *param_1,int32_t *param_2,ulonglong param_3,longlong *param_4,
                  longlong param_5)

{
  char *******pppppppcVar1;
  char *******pppppppcVar2;
  char *pcVar3;
  code *pcVar4;
  char *pcVar5;
  int iVar6;
  _Locimp *p_Var7;
  longlong *plVar8;
  int32_t *puVar9;
  char *******pppppppcVar10;
  char *pcVar11;
  char cVar12;
  char *pcVar13;
  char *pcVar14;
  ulonglong uVar15;
  int iVar16;
  int iVar17;
  int32_t auStackY_1d8 [32];
  char local_1a8 [8];
  char local_1a0 [4];
  int local_19c;
  char *local_198;
  _Locimp *p_Stack_190;
  int32_t local_188;
  int local_178 [2];
  longlong *local_170;
  ulonglong local_168;
  char *local_160;
  char *local_158;
  _Locimp *p_Stack_150;
  longlong local_148;
  longlong lStack_140;
  int32_t local_138;
  char *local_128;
  longlong *local_120;
  ulonglong *local_118;
  char **local_110;
  char *local_108;
  int *local_100;
  int *local_f8;
  char **local_f0;
  char ******local_e8;
  longlong *local_e0;
  char ******local_d8;
  int32_t uStack_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  int32_t local_b8;
  int32_t uStack_b7;
  int32_t uStack_b6;
  int32_t uStack_b5;
  int32_t uStack_b4;
  int32_t uStack_b3;
  int32_t uStack_b2;
  int32_t uStack_b1;
  char cStack_b0;
  int32_t uStack_af;
  int32_t uStack_ae;
  int32_t uStack_ad;
  int32_t uStack_ac;
  int32_t uStack_ab;
  int32_t uStack_aa;
  int32_t uStack_a9;
  longlong local_a8;
  ulonglong uStack_a0;
  char local_98 [65];
  int32_t local_57 [15];
  ulonglong local_48;
  
  local_48 = DAT_1801eb080 ^ (ulonglong)auStackY_1d8;
  iVar6 = 0;
  cVar12 = (char)param_4[1];
  local_170 = param_1;
  local_168 = param_3;
  if (cVar12 == 'c') {
    if (0x7f < param_3) {
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
    else if (cStack_b0 != '?') {
      local_198 = (char *)*param_4;
      p_Stack_190 = (_Locimp *)param_4[1];
      local_188 = (int32_t)param_4[2];
      FUN_1800b3b10(param_1,param_2,param_3,(int *)&local_198,param_5);
      goto LAB_1800ad9e7;
    }
    local_148 = *param_4;
    lStack_140 = param_4[1];
    local_138 = (int32_t)param_4[2];
    local_198 = local_1a8;
    p_Stack_190 = (_Locimp *)0x1;
    FUN_1800b4bf0(param_1,param_2,(longlong *)&local_198,(int *)&local_148,0x27);
    goto LAB_1800ad9e7;
  }
  if (*(char *)((longlong)param_4 + 10) == '\0') {
    *(int32_t *)((longlong)param_4 + 10) = 2;
  }
  iVar16 = 10;
  if (cVar12 == 'B') {
LAB_1800ad6be:
    iVar16 = 2;
  }
  else if (cVar12 == 'X') {
LAB_1800ad6b0:
    iVar16 = 0x10;
  }
  else {
    if (cVar12 == 'b') goto LAB_1800ad6be;
    if (cVar12 == 'o') {
      iVar16 = 8;
    }
    else if (cVar12 == 'x') goto LAB_1800ad6b0;
  }
  FUN_1800b3370((longlong *)&local_198,(int32_t *)local_98,(longlong)local_57,param_3,iVar16);
  pcVar11 = local_198;
  local_160 = local_98;
  local_19c = (int)local_198 - (int)local_160;
  if (*(char *)((longlong)param_4 + 10) != '\x02') {
    local_19c = local_19c + 1;
  }
  if ((char)param_4[1] == 'X') {
    for (pcVar13 = local_98; pcVar13 != local_198; pcVar13 = pcVar13 + 1) {
      cVar12 = *pcVar13;
      if (('`' < cVar12) && (cVar12 < '{')) {
        *pcVar13 = cVar12 + -0x20;
      }
    }
  }
  local_158 = (char *)0x0;
  p_Stack_150 = (_Locimp *)0x0;
  iVar16 = 0;
  if (*(char *)((longlong)param_4 + 0xb) != '\0') {
    cVar12 = (char)param_4[1];
    if (cVar12 == 'B') {
      local_198 = "0B";
LAB_1800ad7b1:
      iVar17 = 2;
      p_Stack_190 = (_Locimp *)0x2;
    }
    else {
      if (cVar12 == 'X') {
        local_198 = "0X";
        goto LAB_1800ad7b1;
      }
      if (cVar12 == 'b') {
        local_198 = "0b";
        goto LAB_1800ad7b1;
      }
      if (cVar12 == 'o') {
        if (local_168 == 0) goto LAB_1800ad75d;
        local_198 = "0";
        p_Stack_190 = (_Locimp *)0x1;
        iVar17 = 1;
      }
      else {
        if (cVar12 == 'x') {
          local_198 = "0x";
          goto LAB_1800ad7b1;
        }
LAB_1800ad75d:
        local_198 = (char *)0x0;
        p_Stack_190 = (_Locimp *)0x0;
        iVar17 = iVar6;
      }
    }
    local_158 = local_198;
    p_Stack_150 = p_Stack_190;
    local_19c = local_19c + iVar17;
  }
  local_178[0] = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0xf;
  local_d8 = (char ******)0x0;
  if (*(char *)((longlong)param_4 + 0xc) != '\0') {
    if (param_5 == 0) {
      p_Var7 = FUN_180124548('\x01');
      p_Stack_190 = p_Var7;
    }
    else {
      p_Var7 = *(_Locimp **)(param_5 + 8);
      p_Stack_190 = p_Var7;
      (**(code **)(*(longlong *)p_Var7 + 8))(p_Var7);
    }
    plVar8 = FUN_1800b5fd0((longlong)&local_198);
    (**(code **)(*plVar8 + 0x28))(plVar8,&local_b8);
    if (0xf < uStack_c0) {
      pppppppcVar10 = (char *******)local_d8;
      if ((0xfff < uStack_c0 + 1) &&
         (pppppppcVar10 = (char *******)local_d8[-1],
         (char *)0x1f < (char *)((longlong)local_d8 + (-8 - (longlong)pppppppcVar10)))) {
        FUN_18012b7b4();
        goto LAB_1800adb93;
      }
      thunk_FUN_18012d5e8(pppppppcVar10);
    }
    local_d8 = (char ******)
               CONCAT17(uStack_b1,
                        CONCAT16(uStack_b2,
                                 CONCAT15(uStack_b3,
                                          CONCAT14(uStack_b4,
                                                   CONCAT13(uStack_b5,
                                                            CONCAT12(uStack_b6,
                                                                     CONCAT11(uStack_b7,local_b8))))
                                         )));
    uStack_d0 = CONCAT17(uStack_a9,
                         CONCAT16(uStack_aa,
                                  CONCAT15(uStack_ab,
                                           CONCAT14(uStack_ac,
                                                    CONCAT13(uStack_ad,
                                                             CONCAT12(uStack_ae,
                                                                      CONCAT11(uStack_af,cStack_b0))
                                                            )))));
    local_c8 = local_a8;
    uStack_c0 = uStack_a0;
    local_a8 = _DAT_1801d8f70;
    uStack_a0 = _UNK_1801d8f78;
    local_b8 = 0;
    FUN_1800a6800((longlong *)&local_b8);
    if ((p_Var7 != (_Locimp *)0x0) &&
       (puVar9 = (int32_t *)(**(code **)(*(longlong *)p_Var7 + 0x10))(p_Var7),
       puVar9 != (int32_t *)0x0)) {
      (**(code **)*puVar9)(puVar9,1);
    }
    pppppppcVar10 = &local_d8;
    if (0xf < uStack_c0) {
      pppppppcVar10 = (char *******)local_d8;
    }
    uVar15 = (longlong)pcVar11 - (longlong)local_160;
    if ((local_c8 != 0) && ((ulonglong)(longlong)*(char *)pppppppcVar10 < uVar15)) {
      pppppppcVar2 = (char *******)((longlong)pppppppcVar10 + local_c8);
      iVar16 = iVar6;
      do {
        cVar12 = *(char *)pppppppcVar10;
        uVar15 = uVar15 - (longlong)cVar12;
        iVar16 = iVar16 + 1;
        pppppppcVar1 = (char *******)((longlong)pppppppcVar10 + 1);
        if (pppppppcVar1 != pppppppcVar2) {
          cVar12 = *(char *)pppppppcVar1;
          pppppppcVar10 = pppppppcVar1;
        }
      } while ((ulonglong)(longlong)cVar12 < uVar15);
    }
    local_19c = local_19c + iVar16;
    local_178[0] = iVar16;
  }
  if ((*(char *)((longlong)param_4 + 0xd) == '\0') || (*(char *)((longlong)param_4 + 9) != '\0')) {
    local_1a0[0] = '\0';
  }
  else {
    local_1a0[0] = '\x01';
  }
  local_128 = pcVar11;
  local_118 = &local_168;
  local_110 = &local_158;
  local_108 = local_1a0;
  local_100 = &local_19c;
  local_f8 = local_178;
  local_f0 = &local_160;
  local_e0 = &param_5;
  local_120 = param_4;
  local_e8 = (char ******)&local_d8;
  if (local_1a0[0] == '\0') {
    cVar12 = *(char *)((longlong)param_4 + 9);
    if (cVar12 == '\0') {
      cVar12 = '\x02';
    }
    iVar16 = (int)*param_4;
    iVar17 = iVar6;
    if (local_19c < iVar16) {
      if (cVar12 != '\x01') {
        iVar17 = 0;
        if (cVar12 == '\x02') {
          iVar6 = iVar16 - local_19c;
        }
        else if (cVar12 == '\x03') {
          iVar6 = (iVar16 - local_19c) / 2;
          iVar17 = (iVar16 - iVar6) - local_19c;
        }
        goto LAB_1800ada5c;
      }
      iVar17 = iVar16 - local_19c;
      pcVar14 = (char *)(ulonglong)*(byte *)((longlong)param_4 + 0xe);
    }
    else {
LAB_1800ada5c:
      pcVar14 = (char *)(ulonglong)*(byte *)((longlong)param_4 + 0xe);
      pcVar13 = (char *)((longlong)param_4 + 0xf);
      local_198 = pcVar14;
      if (0 < iVar6) {
        pcVar3 = pcVar14 + (longlong)pcVar13;
        pcVar5 = pcVar13;
        do {
          for (; local_198 = pcVar14, pcVar5 != pcVar3; pcVar5 = pcVar5 + 1) {
            cVar12 = *pcVar5;
            if ((ulonglong)param_2[3] < param_2[2] + 1) {
              (**(code **)*param_2)(param_2);
            }
            *(char *)(param_2[2] + param_2[1]) = cVar12;
            param_2[2] = param_2[2] + 1;
            pcVar14 = local_198;
          }
          iVar6 = iVar6 + -1;
          pcVar5 = pcVar13;
        } while (0 < iVar6);
      }
    }
    pcVar11 = (char *)((longlong)param_4 + 0xf);
    plVar8 = FUN_1800ac210((longlong *)&local_128,&local_198,param_2);
    puVar9 = (int32_t *)*plVar8;
    if (0 < iVar17) {
      pcVar13 = pcVar11;
      do {
        for (; pcVar13 != pcVar14 + (longlong)pcVar11; pcVar13 = pcVar13 + 1) {
          cVar12 = *pcVar13;
          if ((ulonglong)puVar9[3] < puVar9[2] + 1) {
            (**(code **)*puVar9)(puVar9);
          }
          *(char *)(puVar9[2] + puVar9[1]) = cVar12;
          puVar9[2] = puVar9[2] + 1;
        }
        iVar17 = iVar17 + -1;
        pcVar13 = pcVar11;
      } while (0 < iVar17);
    }
    *local_170 = (longlong)puVar9;
    if (uStack_c0 < 0x10) goto LAB_1800ad9e7;
    pppppppcVar10 = (char *******)local_d8;
    if (0xfff < uStack_c0 + 1) {
      pppppppcVar10 = (char *******)local_d8[-1];
      pcVar11 = (char *)((longlong)local_d8 + (-8 - (longlong)pppppppcVar10));
      goto joined_r0x0001800adb68;
    }
  }
  else {
    FUN_1800ac210((longlong *)&local_128,local_170,param_2);
    if (uStack_c0 < 0x10) goto LAB_1800ad9e7;
    pppppppcVar10 = (char *******)local_d8;
    if (0xfff < uStack_c0 + 1) {
      pppppppcVar10 = (char *******)local_d8[-1];
      pcVar11 = (char *)((longlong)local_d8 + (-8 - (longlong)pppppppcVar10));
joined_r0x0001800adb68:
      if ((char *)0x1f < pcVar11) {
LAB_1800adb93:
        FUN_18012b7b4();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  thunk_FUN_18012d5e8(pppppppcVar10);
LAB_1800ad9e7:
  FUN_1801252c0(local_48 ^ (ulonglong)auStackY_1d8);
  return;
}

// ---- Function: FUN_1800adbb0 ----
void FUN_1800adbb0(longlong *param_1,int32_t *param_2,ulonglong param_3,longlong *param_4,
                  longlong param_5)

{
  _Locimp *p_Var1;
  longlong *plVar2;
  int32_t *puVar3;
  uint uVar4;
  int32_t auStackY_d8 [32];
  int32_t **local_a8;
  _Locimp *p_Stack_a0;
  int32_t local_98;
  uint local_88;
  int32_t **local_80 [2];
  longlong local_70;
  ulonglong local_68;
  int32_t **local_60 [2];
  longlong local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_1801eb080 ^ (ulonglong)auStackY_d8;
  local_88 = 0;
  if (((char)param_4[1] == '\0') || ((char)param_4[1] == 's')) {
    if (*(char *)((longlong)param_4 + 0xc) == '\0') {
      local_a8 = (int32_t **)0x1801874e0;
      if ((char)param_3 != '\0') {
        local_a8 = (int32_t **)&DAT_1801874e8;
      }
      p_Stack_a0 = (_Locimp *)0xffffffffffffffff;
      do {
        p_Stack_a0 = (_Locimp *)((longlong)p_Stack_a0 + 1);
      } while (*(char *)((longlong)local_a8 + (longlong)p_Stack_a0) != '\0');
      FUN_1800b5450(param_1,param_2,(longlong *)&local_a8,param_4);
    }
    else {
      *(int32_t *)((longlong)param_4 + 0xc) = 0;
      if (param_5 == 0) {
        p_Var1 = FUN_180124548('\x01');
        p_Stack_a0 = p_Var1;
      }
      else {
        p_Var1 = *(_Locimp **)(param_5 + 8);
        p_Stack_a0 = p_Var1;
        (**(code **)(*(longlong *)p_Var1 + 8))(p_Var1);
      }
      plVar2 = FUN_1800b5fd0((longlong)&local_a8);
      if ((p_Var1 != (_Locimp *)0x0) &&
         (puVar3 = (int32_t *)(**(code **)(*(longlong *)p_Var1 + 0x10))(p_Var1),
         puVar3 != (int32_t *)0x0)) {
        (**(code **)*puVar3)(puVar3,1);
      }
      if ((char)param_3 == '\0') {
        (**(code **)(*plVar2 + 0x30))(plVar2,local_80);
        uVar4 = 10;
        local_a8 = local_80;
        if (0xf < local_68) {
          local_a8 = local_80[0];
        }
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,local_60);
        uVar4 = 5;
        local_a8 = local_60;
        local_70 = local_50;
        if (0xf < local_48) {
          local_a8 = local_60[0];
        }
      }
      p_Stack_a0 = (_Locimp *)local_70;
      local_88 = uVar4;
      FUN_1800b5450(param_1,param_2,(longlong *)&local_a8,param_4);
      if ((uVar4 & 2) != 0) {
        uVar4 = uVar4 & 0xfffffffd;
        FUN_1800a6800((longlong *)local_80);
      }
      if ((uVar4 & 1) != 0) {
        FUN_1800a6800((longlong *)local_60);
      }
    }
  }
  else {
    local_a8 = (int32_t **)*param_4;
    p_Stack_a0 = (_Locimp *)param_4[1];
    local_98 = (int32_t)param_4[2];
    FUN_1800b3b10(param_1,param_2,param_3,(int *)&local_a8,param_5);
  }
  FUN_1801252c0(local_40 ^ (ulonglong)auStackY_d8);
  return;
}

// ---- Function: FUN_1800add90 ----
longlong * FUN_1800add90(longlong *param_1,char *param_2,char *param_3,uint param_4)

{
  uint uVar1;
  char *pcVar2;
  ulonglong uVar3;
  char *local_18;
  int32_t local_10;
  
  uVar1 = param_4;
  if ((int)param_4 < 0) {
    if (param_2 == param_3) {
      *(int32_t *)(param_1 + 1) = 0x84;
      *param_1 = (longlong)param_3;
      return param_1;
    }
    *param_2 = '-';
    param_2 = param_2 + 1;
    uVar1 = param_4 & 0x7fffffff;
  }
  if ((uVar1 & 0x7f800000) == 0x7f800000) {
    uVar1 = uVar1 & 0x7fffff;
    if (uVar1 == 0) {
      pcVar2 = "inf";
      uVar3 = 3;
    }
    else if (((int)param_4 < 0) && (uVar1 == 0x400000)) {
      pcVar2 = "nan(ind)";
      uVar3 = 8;
    }
    else if (uVar1 >> 0x16 == 0) {
      pcVar2 = "nan(snan)";
      uVar3 = 9;
    }
    else {
      pcVar2 = "nan";
      uVar3 = 3;
    }
    if ((longlong)param_3 - (longlong)param_2 < (longlong)uVar3) {
      *(int32_t *)(param_1 + 1) = 0x84;
      *param_1 = (longlong)param_3;
    }
    else {
      FUN_180150fd0((int32_t *)param_2,(int32_t *)pcVar2,uVar3);
      *(int32_t *)(param_1 + 1) = 0;
      *param_1 = (longlong)(param_2 + uVar3);
    }
  }
  else {
    if (uVar1 == 0) {
      if (param_2 == param_3) {
        local_10 = 0x84;
      }
      else {
        *param_2 = '0';
        param_3 = param_2 + 1;
        local_10 = 0;
      }
    }
    else {
      uVar3 = FUN_1800adf10(uVar1 & 0x7fffff,uVar1 >> 0x17);
      FUN_1800ae6e0((longlong *)&local_18,param_2,(longlong)param_3,uVar3,0,uVar1 & 0x7fffff,
                    uVar1 >> 0x17);
      param_3 = local_18;
    }
    *(int32_t *)(param_1 + 1) = local_10;
    *param_1 = (longlong)param_3;
  }
  return param_1;
}

// ---- Function: FUN_1800adf10 ----
int32_t FUN_1800adf10(uint param_1,uint param_2)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  byte bVar18;
  byte bVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  uint uVar23;
  bool bVar24;
  
  iVar14 = -0x97;
  if (param_2 != 0) {
    iVar14 = param_2 - 0x98;
  }
  uVar10 = param_1;
  if (param_2 != 0) {
    uVar10 = param_1 | 0x800000;
  }
  uVar7 = 0;
  iVar8 = 0;
  bVar19 = ~(byte)uVar10 & 1;
  uVar10 = uVar10 * 4;
  uVar20 = uVar10 + 2;
  uVar21 = 0;
  if ((param_1 != 0) || (uVar15 = uVar21, param_2 < 2)) {
    uVar15 = 1;
  }
  uVar12 = (ulonglong)uVar10;
  uVar9 = (uVar10 - uVar15) - 1;
  uVar23 = 0;
  bVar24 = false;
  bVar18 = 0;
  if (iVar14 < 0) {
    uVar5 = (uint)(iVar14 * -0xb2efb) >> 0x14;
    uVar4 = uVar5 + iVar14;
    uVar6 = *(ulonglong *)(&DAT_180182fa0 + (ulonglong)-uVar4 * 8);
    uVar16 = uVar6 >> 0x20;
    cVar1 = (char)uVar5;
    bVar3 = (cVar1 - (char)(uVar4 * -0x12934f >> 0x13)) + 0x1c;
    uVar11 = ((ulonglong)uVar20 * (uVar6 & 0xffffffff) >> 0x20) + uVar20 * uVar16 >> (bVar3 & 0x3f);
    uVar22 = uVar11 & 0xffffffff;
    uVar17 = uVar16 * uVar9 + ((uVar6 & 0xffffffff) * (ulonglong)uVar9 >> 0x20) >> (bVar3 & 0x3f);
    uVar12 = ((uVar6 & 0xffffffff) * uVar12 >> 0x20) + uVar16 * uVar12 >> (bVar3 & 0x3f);
    uVar21 = (uint)uVar11;
    if (uVar5 == 0) {
LAB_1800ae2ab:
      bVar24 = true;
      uVar23 = uVar15;
      if (bVar19 == 0) {
        uVar23 = uVar7;
        uVar21 = uVar21 - 1;
      }
      uVar22 = (ulonglong)uVar21;
      goto LAB_1800ae2cb;
    }
    if ((uVar21 - 1) / 10 <= (uint)((uVar17 & 0xffffffff) / 10)) {
      uVar6 = ((*(ulonglong *)(&DAT_180182fa0 + (ulonglong)(-uVar4 + 1) * 8) & 0xffffffff) *
               (ulonglong)uVar10 >> 0x20) +
              (*(ulonglong *)(&DAT_180182fa0 + (ulonglong)(-uVar4 + 1) * 8) >> 0x20) *
              (ulonglong)uVar10 >>
              ((cVar1 - (char)(uVar4 * -0x12934f + 0x12934f >> 0x13)) + 0x1bU & 0x3f);
      bVar18 = (char)uVar6 + (char)((uVar6 & 0xffffffff) / 10) * -10;
    }
    if (uVar5 < 2) goto LAB_1800ae2ab;
    if (0x1e < uVar5) goto LAB_1800ae2cb;
    bVar24 = (uVar10 & (1 << (cVar1 - 1U & 0x1f)) - 1U) == 0;
LAB_1800ae2d2:
    uVar10 = (uint)uVar12;
    uVar21 = (uint)uVar17;
    if (bVar24 != false) goto LAB_1800ae34d;
    uVar20 = (uint)((uVar17 & 0xffffffff) / 10);
    uVar15 = (uint)((uVar22 & 0xffffffff) / 10);
    if (uVar20 < uVar15) {
      do {
        uVar21 = uVar20;
        uVar7 = uVar7 + 1;
        uVar6 = (uVar12 & 0xffffffff) / 10;
        uVar10 = (uint)uVar6;
        bVar18 = (char)uVar12 + (char)uVar6 * -10;
        uVar15 = uVar15 / 10;
        uVar12 = uVar6;
        uVar20 = uVar21 / 10;
      } while (uVar21 / 10 < uVar15);
    }
    bVar24 = uVar10 == uVar21;
LAB_1800ae471:
    if (!bVar24) {
LAB_1800ae473:
      if (bVar18 < 5) goto LAB_1800ae47e;
    }
  }
  else {
    uVar4 = (uint)(iVar14 * 0x13441) >> 0x12;
    uVar11 = *(ulonglong *)(&DAT_180182ea0 + (ulonglong)uVar4 * 8) & 0xffffffff;
    uVar6 = *(ulonglong *)(&DAT_180182ea0 + (ulonglong)uVar4 * 8) >> 0x20;
    bVar3 = (char)uVar4 + ((char)(uVar4 * 0x12934f >> 0x13) - (char)iVar14) + '\x1b';
    uVar12 = (uVar11 * uVar12 >> 0x20) + uVar6 * uVar12 >> (bVar3 & 0x3f);
    uVar22 = (uVar20 * uVar11 >> 0x20) + uVar20 * uVar6 >> (bVar3 & 0x3f);
    uVar17 = (uVar11 * uVar9 >> 0x20) + uVar6 * uVar9 >> (bVar3 & 0x3f);
    if (uVar4 != 0) {
      if (((int)uVar22 - 1U) / 10 <= (uint)((uVar17 & 0xffffffff) / 10)) {
        uVar6 = ((*(ulonglong *)(&DAT_180182ea0 + (ulonglong)(uVar4 - 1) * 8) & 0xffffffff) *
                 (ulonglong)uVar10 >> 0x20) +
                (*(ulonglong *)(&DAT_180182ea0 + (ulonglong)(uVar4 - 1) * 8) >> 0x20) *
                (ulonglong)uVar10 >>
                ((char)uVar4 + '\x1a' + ((char)((uVar4 - 1) * 0x12934f >> 0x13) - (char)iVar14) &
                0x3fU);
        bVar18 = (char)uVar6 + (char)((uVar6 & 0xffffffff) / 10) * -10;
      }
      if (9 < uVar4) goto LAB_1800ae2cb;
    }
    uVar6 = (ulonglong)uVar10 / 5;
    uVar15 = uVar7;
    if (uVar10 == (int)uVar6 * 5) {
      do {
        uVar15 = uVar15 + 1;
        uVar11 = uVar6 / 5;
        iVar14 = (int)uVar6;
        uVar6 = uVar11;
      } while (iVar14 == (int)uVar11 * 5);
      bVar24 = uVar4 <= uVar15;
      goto LAB_1800ae2d2;
    }
    if (bVar19 == 0) {
      uVar6 = (ulonglong)uVar20 / 5;
      uVar10 = uVar7;
      if (uVar20 == (int)uVar6 * 5) {
        do {
          uVar21 = uVar10 + 1;
          uVar11 = uVar6 / 5;
          iVar14 = (int)uVar6;
          uVar6 = uVar11;
          uVar10 = uVar21;
        } while (iVar14 == (int)uVar11 * 5);
      }
      uVar22 = (ulonglong)((int)uVar22 - (uint)(uVar4 <= uVar21));
    }
    else {
      uVar6 = (ulonglong)uVar9 / 5;
      uVar10 = uVar7;
      if (uVar9 == (int)((ulonglong)uVar9 / 5) * 5) {
        do {
          uVar21 = uVar10 + 1;
          uVar11 = uVar6 / 5;
          iVar14 = (int)uVar6;
          uVar6 = uVar11;
          uVar10 = uVar21;
        } while (iVar14 == (int)uVar11 * 5);
      }
      uVar23 = (uint)(uVar4 <= uVar21);
    }
LAB_1800ae2cb:
    if ((char)uVar23 == '\0') goto LAB_1800ae2d2;
LAB_1800ae34d:
    bVar13 = SUB41(uVar23,0);
    uVar10 = (uint)((uVar17 & 0xffffffff) / 10);
    uVar21 = (uint)((uVar22 & 0xffffffff) / 10);
    uVar6 = uVar12;
    if (uVar10 < uVar21) {
      do {
        iVar14 = (int)uVar17;
        uVar17 = (ulonglong)uVar10;
        bVar13 = false;
        if (iVar14 == uVar10 * 10) {
          bVar13 = SUB41(uVar23,0);
        }
        uVar23 = (uint)bVar13;
        bVar2 = false;
        if (bVar18 == 0) {
          bVar2 = bVar24;
        }
        bVar24 = bVar2;
        uVar7 = uVar7 + 1;
        uVar12 = (uVar6 & 0xffffffff) / 10;
        bVar18 = (char)uVar6 + (char)uVar12 * -10;
        uVar10 = uVar10 / 10;
        uVar21 = uVar21 / 10;
        uVar6 = uVar12;
      } while (uVar10 < uVar21);
    }
    uVar21 = (uint)uVar17;
    if ((bVar13 != false) &&
       (uVar10 = (uint)((uVar17 & 0xffffffff) / 10), uVar6 = uVar12, uVar21 == uVar10 * 10)) {
      do {
        uVar21 = uVar10;
        uVar7 = uVar7 + 1;
        bVar24 = (bool)(bVar24 & bVar18 == 0);
        uVar12 = (uVar6 & 0xffffffff) / 10;
        bVar18 = (char)uVar6 + (char)uVar12 * -10;
        uVar6 = uVar12;
        uVar10 = uVar21 / 10;
      } while (uVar21 == (uVar21 / 10) * 10);
    }
    uVar10 = (uint)uVar12;
    if (((bVar24 != false) && (bVar18 == 5)) && ((uVar12 & 1) == 0)) {
      bVar18 = 4;
    }
    if (uVar10 != uVar21) goto LAB_1800ae473;
    if (bVar19 != 0) {
      bVar24 = bVar13 == false;
      goto LAB_1800ae471;
    }
  }
  iVar8 = 1;
LAB_1800ae47e:
  return CONCAT44(uVar7 + uVar4,iVar8 + uVar10);
}

// ---- Function: FUN_1800ae4a0 ----
void FUN_1800ae4a0(longlong *param_1,char *param_2,longlong param_3,uint param_4,uint param_5)

{
  int32_t auVar1 [16];
  sbyte sVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar8;
  char *pcVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  int32_t auStack_78 [40];
  uint local_50 [8];
  ulonglong local_30;
  ulonglong uVar7;
  
  local_30 = DAT_1801eb080 ^ (ulonglong)auStack_78;
  uVar12 = param_5 + 0x37 >> 5;
  uVar13 = uVar12 - 1;
  uVar8 = (ulonglong)uVar13;
  sVar2 = (sbyte)(param_5 & 0x1f);
  uVar4 = param_4 << sVar2;
  local_50[0] = 0;
  local_50[1] = 0;
  local_50[2] = 0;
  local_50[3] = 0;
  if (8 < (param_5 & 0x1f)) {
    local_50[uVar12 - 2] = uVar4;
    uVar4 = param_4 >> (0x20U - sVar2 & 0x1f);
  }
  iVar10 = 0;
  local_50[uVar8] = uVar4;
  if (uVar13 != 0) {
    puVar11 = local_50 + 4;
    do {
      uVar4 = local_50[uVar8];
      local_50[uVar8] = uVar4 / 1000000000;
      uVar12 = uVar4 % 1000000000;
      uVar7 = uVar8;
      do {
        uVar6 = (int)uVar7 - 1;
        uVar7 = (ulonglong)uVar6;
        uVar13 = local_50[uVar7];
        uVar3 = CONCAT44(uVar12,uVar13);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar3;
        lVar5 = SUB168(ZEXT816(0x12e0be826d694b2f) * auVar1,8);
        uVar12 = (uint)((uVar3 - lVar5 >> 1) + lVar5 >> 0x1d);
        local_50[uVar7] = uVar12;
        uVar12 = uVar13 + uVar12 * -1000000000;
      } while (uVar6 != 0);
      *puVar11 = uVar12;
      iVar10 = iVar10 + 1;
      puVar11 = puVar11 + 1;
    } while ((uVar4 / 1000000000 != 0) ||
            (uVar4 = (int)uVar8 - 1, uVar8 = (ulonglong)uVar4, uVar4 != 0));
  }
  if (local_50[0] < 1000000000) {
    if (local_50[0] < 100000000) {
      if (local_50[0] < 10000000) {
        if (local_50[0] < 1000000) {
          if (local_50[0] < 100000) {
            if (local_50[0] < 10000) {
              if (local_50[0] < 1000) {
                if (local_50[0] < 100) {
                  uVar8 = (ulonglong)(2 - (local_50[0] < 10));
                }
                else {
                  uVar8 = 3;
                }
              }
              else {
                uVar8 = 4;
              }
            }
            else {
              uVar8 = 5;
            }
          }
          else {
            uVar8 = 6;
          }
        }
        else {
          uVar8 = 7;
        }
      }
      else {
        uVar8 = 8;
      }
    }
    else {
      uVar8 = 9;
    }
  }
  else {
    uVar8 = 10;
  }
  if (param_3 - (longlong)param_2 < (longlong)(ulonglong)((uint)uVar8 + iVar10 * 9)) {
    *param_1 = param_3;
    *(int32_t *)(param_1 + 1) = 0x84;
  }
  else {
    FUN_1800b18f0((uint)uVar8,local_50[0],param_2);
    pcVar9 = param_2 + uVar8;
    lVar5 = (longlong)(iVar10 + -1);
    if (-1 < iVar10 + -1) {
      do {
        FUN_1800b20c0(local_50[lVar5 + 4],pcVar9);
        pcVar9 = pcVar9 + 9;
        lVar5 = lVar5 + -1;
      } while (-1 < lVar5);
    }
    *param_1 = (longlong)pcVar9;
    *(int32_t *)(param_1 + 1) = 0;
  }
  FUN_1801252c0(local_30 ^ (ulonglong)auStack_78);
  return;
}

// ---- Function: FUN_1800ae6e0 ----
longlong *
FUN_1800ae6e0(longlong *param_1,char *param_2,longlong param_3,ulonglong param_4,int param_5,
             uint param_6,int param_7)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  char *pcVar8;
  char cVar9;
  int iVar10;
  ulonglong uVar11;
  
  iVar10 = (int)(param_4 >> 0x20);
  uVar2 = FUN_1800b2160((uint)param_4);
  uVar6 = (ulonglong)uVar2;
  uVar7 = uVar2 + iVar10;
  iVar1 = uVar7 - 1;
  uVar5 = (uint)param_4;
  if (param_5 == 0) {
    iVar4 = -3;
    if (uVar2 != 1) {
      iVar4 = -3 - uVar2;
    }
    if ((iVar4 <= iVar10) && (iVar10 <= (int)((uVar2 != 1) + 4))) goto LAB_1800ae78c;
  }
  else if (param_5 == 3) {
    if (uVar7 + 3 < 10) {
LAB_1800ae78c:
      if (iVar10 < 0) {
        if ((int)uVar7 < 1) {
          uVar2 = 2 - iVar10;
        }
        else {
          uVar2 = uVar2 + 1;
        }
      }
      else {
        uVar2 = uVar7;
        if (uVar5 == 1) {
          uVar2 = uVar7 - (byte)(&DAT_180183118)[iVar10];
        }
      }
      uVar11 = (ulonglong)uVar2;
      if ((longlong)uVar11 <= param_3 - (longlong)param_2) {
        uVar3 = uVar11;
        if (0 < iVar10) {
          if (10 < iVar10) {
LAB_1800ae7f5:
            FUN_1800ae4a0(param_1,param_2,param_3,param_6 | 0x800000,param_7 - 0x96);
            return param_1;
          }
          iVar1 = 0;
          if (uVar5 != 0) {
            for (; (uVar5 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
            }
          }
          uVar3 = uVar6;
          if (*(uint *)(&DAT_180183140 + (longlong)iVar10 * 4) < uVar5 >> ((byte)iVar1 & 0x1f))
          goto LAB_1800ae7f5;
        }
        pcVar8 = param_2 + uVar3;
        while (uVar2 = (uint)param_4, 9999 < uVar5) {
          param_4 = (param_4 & 0xffffffff) / 10000;
          uVar5 = (uint)param_4;
          uVar2 = uVar2 + uVar5 * -10000;
          *(int32_t *)(pcVar8 + -2) =
               *(int32_t *)
                (
                "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
                + (uVar2 % 100) * 2);
          pcVar8 = pcVar8 + -4;
          *(int32_t *)pcVar8 =
               *(int32_t *)
                (
                "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
                + (uVar2 / 100) * 2);
        }
        uVar5 = uVar2;
        if (99 < uVar2) {
          uVar5 = (uint)((param_4 & 0xffffffff) / 100);
          pcVar8 = pcVar8 + -2;
          *(int32_t *)pcVar8 =
               *(int32_t *)
                (
                "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
                + (uVar2 + uVar5 * -100) * 2);
        }
        if (uVar5 < 10) {
          pcVar8[-1] = (char)uVar5 + '0';
        }
        else {
          *(int32_t *)(pcVar8 + -2) =
               *(int32_t *)
                (
                "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
                + uVar5 * 2);
        }
        if (iVar10 < 1) {
          if (iVar10 != 0) {
            if (0 < (int)uVar7) {
              FUN_180150fd0((int32_t *)param_2,(int32_t *)(param_2 + 1),(longlong)(int)uVar7);
              pcVar8 = param_2 + uVar11;
              param_2[(int)uVar7] = '.';
              goto LAB_1800aea66;
            }
            param_2[0] = '0';
            param_2[1] = '.';
            if ((int)uVar7 < 0) {
              FUN_180151670((int32_t (*) [32])(param_2 + 2),0x30,(longlong)(int)-uVar7);
            }
          }
          pcVar8 = param_2 + uVar11;
        }
        else {
          FUN_180151670((int32_t (*) [32])(param_2 + uVar6),0x30,(longlong)iVar10);
          pcVar8 = param_2 + uVar11;
        }
        goto LAB_1800aea66;
      }
      goto LAB_1800ae768;
    }
  }
  else if (param_5 == 2) goto LAB_1800ae78c;
  uVar11 = (ulonglong)((1 < uVar2) + 4 + uVar2);
  if ((longlong)uVar11 <= param_3 - (longlong)param_2) {
    uVar3 = 0;
    while (uVar7 = (uint)param_4, 9999 < uVar5) {
      param_4 = (param_4 & 0xffffffff) / 10000;
      uVar5 = (uint)param_4;
      uVar7 = uVar7 + uVar5 * -10000;
      *(int32_t *)(param_2 + uVar6 + (-1 - uVar3)) =
           *(int32_t *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
            + (uVar7 % 100) * 2);
      *(int32_t *)(param_2 + uVar6 + (-3 - uVar3)) =
           *(int32_t *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
            + (uVar7 / 100) * 2);
      uVar3 = (ulonglong)((int)uVar3 + 4);
    }
    uVar5 = uVar7;
    if (99 < uVar7) {
      uVar5 = (uint)((param_4 & 0xffffffff) / 100);
      *(int32_t *)(param_2 + (uVar6 - uVar3) + -1) =
           *(int32_t *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
            + (uVar7 + uVar5 * -100) * 2);
    }
    if (uVar5 < 10) {
      cVar9 = (char)uVar5 + '0';
    }
    else {
      param_2[2] = "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
                   [uVar5 * 2 + 1];
      cVar9 = "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
              [uVar5 * 2];
    }
    *param_2 = cVar9;
    if (uVar2 < 2) {
      uVar2 = 1;
    }
    else {
      param_2[1] = '.';
      uVar2 = uVar2 + 1;
    }
    param_2[uVar2] = 'e';
    iVar10 = iVar1;
    if (iVar1 < 0) {
      iVar10 = -iVar1;
    }
    cVar9 = '-';
    if (-1 < iVar1) {
      cVar9 = '+';
    }
    param_2[uVar2 + 1] = cVar9;
    *(int32_t *)(param_2 + (uVar2 + 2)) =
         *(int32_t *)
          (
          "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
          + iVar10 * 2);
    pcVar8 = param_2 + uVar11;
LAB_1800aea66:
    *(int32_t *)(param_1 + 1) = 0;
    *param_1 = (longlong)pcVar8;
    return param_1;
  }
LAB_1800ae768:
  *param_1 = param_3;
  *(int32_t *)(param_1 + 1) = 0x84;
  return param_1;
}

// ---- Function: FUN_1800aeaa0 ----
longlong * FUN_1800aeaa0(longlong *param_1,char *param_2,char *param_3,uint param_4,int param_5)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  char *local_28;
  int32_t local_20;
  
  if (param_4 == 0) {
    if (param_5 == 1) {
      if (4 < (longlong)param_3 - (longlong)param_2) {
        param_3 = param_2 + 5;
        *(int32_t *)param_2 = DAT_18018316c;
        param_2[4] = DAT_180183170;
        local_20 = 0;
        goto LAB_1800aeb8e;
      }
    }
    else if (param_2 != param_3) {
      *param_2 = '0';
      param_3 = param_2 + 1;
      local_20 = 0;
      goto LAB_1800aeb8e;
    }
    local_20 = 0x84;
  }
  else {
    uVar2 = param_4 & 0x7fffff;
    uVar3 = param_4 >> 0x17;
    if ((param_5 == 2) && (0 < (int)(uVar3 - 0x96))) {
      FUN_1800ae4a0((longlong *)&local_28,param_2,(longlong)param_3,uVar2 | 0x800000,uVar3 - 0x96);
      param_3 = local_28;
    }
    else {
      uVar1 = FUN_1800adf10(uVar2,uVar3);
      FUN_1800ae6e0((longlong *)&local_28,param_2,(longlong)param_3,uVar1,param_5,uVar2,uVar3);
      param_3 = local_28;
    }
  }
LAB_1800aeb8e:
  *param_1 = (longlong)param_3;
  *(int32_t *)(param_1 + 1) = local_20;
  return param_1;
}

// ---- Function: FUN_1800aebb0 ----
longlong * FUN_1800aebb0(longlong *param_1,char *param_2,char *param_3,uint param_4,int param_5)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  char *pcVar4;
  ulonglong uVar5;
  uint uVar6;
  
  uVar3 = param_4;
  if ((int)param_4 < 0) {
    if (param_2 == param_3) goto LAB_1800aebd2;
    *param_2 = '-';
    param_2 = param_2 + 1;
    uVar3 = param_4 & 0x7fffffff;
  }
  if ((uVar3 & 0x7f800000) == 0x7f800000) {
    uVar3 = uVar3 & 0x7fffff;
    if (uVar3 == 0) {
      pcVar4 = "inf";
      uVar5 = 3;
    }
    else if (((int)param_4 < 0) && (uVar3 == 0x400000)) {
      pcVar4 = "nan(ind)";
      uVar5 = 8;
    }
    else if (uVar3 >> 0x16 == 0) {
      pcVar4 = "nan(snan)";
      uVar5 = 9;
    }
    else {
      pcVar4 = "nan";
      uVar5 = 3;
    }
    if ((longlong)param_3 - (longlong)param_2 < (longlong)uVar5) {
      *param_1 = (longlong)param_3;
      *(int32_t *)(param_1 + 1) = 0x84;
      return param_1;
    }
    FUN_180150fd0((int32_t *)param_2,(int32_t *)pcVar4,uVar5);
    *(int32_t *)(param_1 + 1) = 0;
    *param_1 = (longlong)(param_2 + uVar5);
    return param_1;
  }
  if (param_5 != 4) {
    FUN_1800aeaa0(param_1,param_2,param_3,uVar3,param_5);
    return param_1;
  }
  if (uVar3 == 0) {
    if (3 < (longlong)param_3 - (longlong)param_2) {
      builtin_strncpy(param_2,"0p+0",4);
      *param_1 = (longlong)(param_2 + 4);
      *(int32_t *)(param_1 + 1) = 0;
      return param_1;
    }
  }
  else {
    uVar6 = 0xffffff82;
    if (uVar3 >> 0x17 != 0) {
      uVar6 = (uVar3 >> 0x17) - 0x7f;
    }
    if (param_2 != param_3) {
      pcVar4 = param_2 + 1;
      *param_2 = (uVar3 >> 0x17 != 0) + '0';
      if ((uVar3 & 0x7fffff) != 0) {
        if (pcVar4 == param_3) goto LAB_1800aebd2;
        *pcVar4 = '.';
        pcVar4 = param_2 + 2;
        bVar2 = 0x18;
        uVar3 = (uVar3 & 0x7fffff) * 2;
        do {
          bVar2 = bVar2 - 4;
          if (pcVar4 == param_3) goto LAB_1800aebd2;
          *pcVar4 = "0123456789abcdefghijklmnopqrstuvwxyz0b"[uVar3 >> (bVar2 & 0x3f)];
          pcVar4 = pcVar4 + 1;
          uVar3 = uVar3 & (1 << (bVar2 & 0x1f)) - 1U;
        } while (uVar3 != 0);
      }
      if (1 < (longlong)param_3 - (longlong)pcVar4) {
        *pcVar4 = 'p';
        cVar1 = '-';
        if (-1 < (int)uVar6) {
          cVar1 = '+';
        }
        pcVar4[1] = cVar1;
        uVar3 = -uVar6;
        if (0 < (int)uVar6) {
          uVar3 = uVar6;
        }
        FUN_1800b4050(param_1,(int32_t *)(pcVar4 + 2),(longlong)param_3,(ulonglong)uVar3,10);
        return param_1;
      }
    }
  }
LAB_1800aebd2:
  *param_1 = (longlong)param_3;
  *(int32_t *)(param_1 + 1) = 0x84;
  return param_1;
}

