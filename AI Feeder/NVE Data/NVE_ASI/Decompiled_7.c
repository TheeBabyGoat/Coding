#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_1800aedf0 ----
void FUN_1800aedf0(longlong *param_1,int32_t *param_2,int32_t *param_3,float param_4,
                  int param_5)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  int32_t *extraout_RAX;
  int32_t (*pauVar6) [32];
  float *pfVar7;
  ulonglong uVar8;
  uint uVar9;
  int32_t *puVar10;
  int32_t (*pauVar11) [32];
  int32_t (*pauVar12) [32];
  int32_t auStackY_118 [32];
  int32_t (*local_e8) [32];
  int32_t uStack_e0;
  int32_t local_d8 [14];
  int32_t local_63 [11];
  ulonglong local_58;
  
  local_58 = DAT_1801eb080 ^ (ulonglong)auStackY_118;
  if (param_4 == 0.0) {
    if (param_2 == param_3) {
      *param_1 = (longlong)param_3;
      *(int32_t *)(param_1 + 1) = 0x84;
    }
    else {
      *(int32_t *)param_2 = 0x30;
      *param_1 = (longlong)param_2 + 1;
      *(int32_t *)(param_1 + 1) = 0;
    }
    goto LAB_1800af0b6;
  }
  if (param_5 < 0) {
    param_5 = 6;
LAB_1800aee8a:
    pfVar7 = (float *)(&DAT_180177d00 + (longlong)(((param_5 + 10) * (param_5 + -1)) / 2) * 4);
    iVar3 = param_5;
  }
  else {
    if (param_5 == 0) {
      param_5 = 1;
      goto LAB_1800aee8a;
    }
    if ((param_5 < 1000000) && (param_5 < 8)) goto LAB_1800aee8a;
    iVar3 = 1000000;
    if (param_5 < 1000000) {
      iVar3 = param_5;
    }
    param_5 = iVar3;
    pfVar7 = (float *)&DAT_180177e00;
    iVar3 = param_5;
    if (0x27 < param_5) {
      iVar3 = 0x27;
    }
  }
  for (pfVar5 = pfVar7; (pfVar5 != pfVar7 + (longlong)iVar3 + 5 && ((uint)*pfVar5 < (uint)param_4));
      pfVar5 = pfVar5 + 1) {
  }
  iVar3 = (int)((longlong)pfVar5 - (longlong)pfVar7 >> 2) + -5;
  if ((iVar3 < param_5) && (-5 < iVar3)) {
    bVar2 = true;
    uVar9 = (param_5 - iVar3) - 1;
    if (0x25 < (int)uVar9) {
      uVar9 = 0x25;
    }
    if ((int)uVar9 < 0) {
      uVar4 = 6;
    }
    else {
      uVar4 = uVar9;
      if (999999999 < (int)uVar9) {
        pauVar6 = (int32_t (*) [32])local_63;
        pauVar12 = (int32_t (*) [32])0x0;
        pauVar11 = (int32_t (*) [32])0x0;
        goto LAB_1800af00f;
      }
    }
    FUN_1800b1a00(&local_e8,(int32_t (*) [32])local_d8,(int32_t (*) [32])local_63,
                  (ulonglong)(double)param_4,uVar4);
    pauVar12 = (int32_t (*) [32])0x0;
    pauVar6 = (int32_t (*) [32])*extraout_RAX;
    pauVar11 = (int32_t (*) [32])0x0;
  }
  else {
    bVar2 = false;
    uVar9 = param_5 - 1;
    if (0x6f < (int)uVar9) {
      uVar9 = 0x6f;
    }
    if ((int)uVar9 < 0) {
      uVar4 = 6;
LAB_1800aefaf:
      FUN_1800b2380((longlong *)&local_e8,(int32_t (*) [32])local_d8,
                    (int32_t (*) [32])local_63,(ulonglong)(double)param_4,uVar4);
    }
    else {
      uVar4 = uVar9;
      if ((int)uVar9 < 1000000000) goto LAB_1800aefaf;
      local_e8 = (int32_t (*) [32])local_63;
      uStack_e0 = 0x84;
    }
    pauVar12 = local_e8;
    pauVar6 = thunk_FUN_180123d80((int32_t (*) [32])local_d8,local_e8,0x65);
    pauVar11 = pauVar6;
  }
LAB_1800af00f:
  if (0 < (int)uVar9) {
    cVar1 = pauVar6[-1][0x1f];
    while (cVar1 == '0') {
      cVar1 = pauVar6[-1][0x1e];
      pauVar6 = (int32_t (*) [32])(pauVar6[-1] + 0x1f);
    }
    if (pauVar6[-1][0x1f] == '.') {
      pauVar6 = (int32_t (*) [32])(pauVar6[-1] + 0x1f);
    }
  }
  uVar8 = (longlong)pauVar6 - (longlong)local_d8;
  if ((longlong)param_3 - (longlong)param_2 < (longlong)uVar8) {
LAB_1800af049:
    *param_1 = (longlong)param_3;
    *(int32_t *)(param_1 + 1) = 0x84;
  }
  else {
    FUN_180150fd0(param_2,local_d8,uVar8);
    puVar10 = (int32_t *)((longlong)param_2 + uVar8);
    if (!bVar2) {
      uVar8 = (longlong)pauVar12 - (longlong)pauVar11;
      if ((longlong)param_3 - (longlong)puVar10 < (longlong)uVar8) goto LAB_1800af049;
      FUN_180150fd0(puVar10,(int32_t *)pauVar11,uVar8);
      puVar10 = (int32_t *)((longlong)puVar10 + uVar8);
    }
    *param_1 = (longlong)puVar10;
    *(int32_t *)(param_1 + 1) = 0;
  }
LAB_1800af0b6:
  FUN_1801252c0(local_58 ^ (ulonglong)auStackY_118);
  return;
}

// ---- Function: FUN_1800af0e0 ----
longlong * FUN_1800af0e0(longlong *param_1,char *param_2,longlong param_3,uint param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int32_t (*pauVar5) [32];
  int iVar6;
  uint uVar7;
  char cVar8;
  
  iVar6 = 6;
  if (-1 < param_5) {
    iVar6 = param_5;
  }
  uVar3 = param_4 >> 0x17;
  uVar7 = (param_4 & 0x7fffff) * 2;
  if (uVar3 == 0) {
    uVar1 = -(uint)((param_4 & 0x7fffff) != 0) & 0xffffff82;
  }
  else {
    uVar1 = uVar3 - 0x7f;
  }
  if (uVar3 != 0) {
    uVar7 = uVar7 | 0x1000000;
  }
  uVar3 = -uVar1;
  if (0 < (int)uVar1) {
    uVar3 = uVar1;
  }
  cVar8 = '-';
  if (-1 < (int)uVar1) {
    cVar8 = '+';
  }
  if (uVar3 < 10) {
    lVar4 = 4;
  }
  else {
    lVar4 = 6 - (ulonglong)(uVar3 < 100);
  }
  if ((param_3 - (longlong)param_2 < (longlong)iVar6) ||
     ((param_3 - (longlong)param_2) - (longlong)iVar6 < (longlong)((ulonglong)(0 < iVar6) + lVar4)))
  {
    *param_1 = param_3;
    *(int32_t *)(param_1 + 1) = 0x84;
  }
  else {
    if (iVar6 < 6) {
      uVar7 = uVar7 + (1 << (('\x06' - (char)iVar6) * '\x04' & 0x1fU) & (uVar7 * 2 - 1 | uVar7) &
                      uVar7 * 2);
    }
    uVar1 = uVar7 & 0xffffff;
    *param_2 = (char)(uVar7 >> 0x18) + '0';
    pauVar5 = (int32_t (*) [32])(param_2 + 1);
    if (0 < iVar6) {
      (*pauVar5)[0] = '.';
      iVar6 = iVar6 + -1;
      iVar2 = 0x14;
      param_2[2] = "0123456789abcdefghijklmnopqrstuvwxyz0b"[uVar1 >> 0x14];
      pauVar5 = (int32_t (*) [32])(param_2 + 3);
      if (iVar6 != 0) {
        uVar7 = 0x100000;
        do {
          if (iVar2 == 0) {
            FUN_180151670(pauVar5,0x30,(longlong)iVar6);
            pauVar5 = (int32_t (*) [32])(*pauVar5 + iVar6);
            break;
          }
          iVar2 = iVar2 + -4;
          uVar1 = uVar1 & uVar7 - 1;
          uVar7 = uVar7 >> 4 | uVar7 << 0x1c;
          (*pauVar5)[0] = "0123456789abcdefghijklmnopqrstuvwxyz0b"[uVar1 >> ((byte)iVar2 & 0x3f)];
          pauVar5 = (int32_t (*) [32])(*pauVar5 + 1);
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
    (*pauVar5)[0] = 'p';
    (*pauVar5)[1] = cVar8;
    FUN_1800b4050(param_1,(int32_t *)(*pauVar5 + 2),param_3,(ulonglong)uVar3,10);
  }
  return param_1;
}

// ---- Function: FUN_1800af290 ----
longlong *
FUN_1800af290(longlong *param_1,int32_t (*param_2) [32],int32_t (*param_3) [32],
             int32_t param_4,int param_5,uint param_6)

{
  longlong *extraout_RAX;
  float fVar1;
  uint uVar2;
  char *pcVar3;
  ulonglong uVar4;
  int32_t in_XMM3 [16];
  int32_t local_18 [2];
  
  fVar1 = in_XMM3._0_4_;
  if (in_XMM3[3] < '\0') {
    if (param_2 == param_3) {
      *param_1 = (longlong)param_3;
      *(int32_t *)(param_1 + 1) = 0x84;
      return param_1;
    }
    (*param_2)[0] = 0x2d;
    param_2 = (int32_t (*) [32])(*param_2 + 1);
    fVar1 = ABS(fVar1);
  }
  if (((uint)fVar1 & 0x7f800000) == 0x7f800000) {
    uVar2 = (uint)fVar1 & 0x7fffff;
    if (uVar2 == 0) {
      pcVar3 = "inf";
      uVar4 = 3;
    }
    else if ((in_XMM3[3] < '\0') && (uVar2 == 0x400000)) {
      pcVar3 = "nan(ind)";
      uVar4 = 8;
    }
    else if (uVar2 >> 0x16 == 0) {
      pcVar3 = "nan(snan)";
      uVar4 = 9;
    }
    else {
      pcVar3 = "nan";
      uVar4 = 3;
    }
    if ((longlong)param_3 - (longlong)param_2 < (longlong)uVar4) {
      *param_1 = (longlong)param_3;
      *(int32_t *)(param_1 + 1) = 0x84;
      return param_1;
    }
    FUN_180150fd0((int32_t *)param_2,(int32_t *)pcVar3,uVar4);
    *(int32_t *)(param_1 + 1) = 0;
    *param_1 = (longlong)(*param_2 + uVar4);
    return param_1;
  }
  if (param_5 == 1) {
    if ((int)param_6 < 1000000000) {
      uVar2 = 6;
      if (-1 < (int)param_6) {
        uVar2 = param_6;
      }
      FUN_1800b2380(param_1,param_2,param_3,(ulonglong)(double)fVar1,uVar2);
      return param_1;
    }
  }
  else {
    if (param_5 != 2) {
      if (param_5 != 3) {
        FUN_1800af0e0(param_1,(char *)param_2,(longlong)param_3,(uint)fVar1,param_6);
        return param_1;
      }
      FUN_1800aedf0(param_1,(int32_t *)param_2,(int32_t *)param_3,fVar1,param_6);
      return param_1;
    }
    if ((int)param_6 < 1000000000) {
      uVar2 = 6;
      if (-1 < (int)param_6) {
        uVar2 = param_6;
      }
      FUN_1800b1a00(local_18,param_2,param_3,(ulonglong)(double)fVar1,uVar2);
      *param_1 = *extraout_RAX;
      *(int *)(param_1 + 1) = (int)extraout_RAX[1];
      return param_1;
    }
  }
  *(int32_t *)(param_1 + 1) = 0x84;
  *param_1 = (longlong)param_3;
  return param_1;
}

// ---- Function: FUN_1800af480 ----
int32_t * FUN_1800af480(int32_t *param_1,int32_t *param_2,int32_t *param_3)

{
  uint uVar1;
  longlong *plVar2;
  int32_t *puVar3;
  int32_t uVar4;
  _Locimp *p_Var5;
  longlong *plVar6;
  int32_t *puVar7;
  longlong *extraout_RAX;
  int iVar8;
  longlong lVar9;
  int32_t *puVar10;
  int32_t local_res8;
  longlong local_28;
  _Locimp *local_20;
  
  if (*(char *)param_1[1] == '\0') {
    if (*(char *)*param_1 == '\x01') {
      if ((ulonglong)param_3[3] < param_3[2] + 1) {
        (**(code **)*param_3)(param_3);
      }
      *(int32_t *)(param_3[1] + param_3[2]) = 0x2b;
    }
    else {
      if (*(char *)*param_1 != '\x03') goto LAB_1800af525;
      if ((ulonglong)param_3[3] < param_3[2] + 1) {
        (**(code **)*param_3)(param_3);
      }
      *(int32_t *)(param_3[1] + param_3[2]) = 0x20;
    }
  }
  else {
    if ((ulonglong)param_3[3] < param_3[2] + 1) {
      (**(code **)*param_3)(param_3);
    }
    *(int32_t *)(param_3[1] + param_3[2]) = 0x2d;
  }
  param_3[2] = param_3[2] + 1;
LAB_1800af525:
  if (*(char *)param_1[2] != '\0') {
    if ((*(int *)param_1[3] < *(int *)param_1[4]) &&
       (iVar8 = *(int *)param_1[4] - *(int *)param_1[3], lVar9 = (longlong)iVar8, 0 < iVar8)) {
      do {
        if ((ulonglong)param_3[3] < param_3[2] + 1) {
          (**(code **)*param_3)(param_3);
        }
        *(int32_t *)(param_3[1] + param_3[2]) = 0x30;
        param_3[2] = param_3[2] + 1;
        lVar9 = lVar9 + -1;
      } while (0 < lVar9);
    }
  }
  if (*(char *)(param_1[4] + 0xc) != '\0') {
    if (*(longlong *)param_1[5] == 0) {
      p_Var5 = FUN_180124548('\x01');
      local_20 = p_Var5;
    }
    else {
      p_Var5 = *(_Locimp **)(*(longlong *)param_1[5] + 8);
      local_20 = p_Var5;
      (**(code **)(*(longlong *)p_Var5 + 8))(p_Var5);
    }
    plVar6 = FUN_1800b5fd0((longlong)&local_28);
    if ((p_Var5 != (_Locimp *)0x0) &&
       (puVar7 = (int32_t *)(**(code **)(*(longlong *)p_Var5 + 0x10))(p_Var5),
       puVar7 != (int32_t *)0x0)) {
      (**(code **)*puVar7)(puVar7,1);
    }
    uVar1 = *(uint *)param_1[9];
    uVar4 = (**(code **)(*plVar6 + 0x20))(plVar6);
    plVar2 = (longlong *)param_1[8];
    local_28 = (longlong)plVar2;
    if (0xf < (ulonglong)plVar2[3]) {
      local_28 = *plVar2;
    }
    local_20 = (_Locimp *)plVar2[2];
    FUN_1800b5880(&local_res8,*(int32_t **)param_1[6],*(longlong *)param_1[7],&local_28,uVar4,
                  uVar1,param_3);
    param_3 = (int32_t *)*extraout_RAX;
    if ((*(longlong *)param_1[10] != *(longlong *)param_1[0xb]) || (*(char *)param_1[0xc] != '\0'))
    {
      uVar4 = (**(code **)(*plVar6 + 0x18))(plVar6);
      if ((ulonglong)param_3[3] < param_3[2] + 1) {
        (**(code **)*param_3)(param_3,param_3[2] + 1);
      }
      *(int32_t *)(param_3[1] + param_3[2]) = uVar4;
      param_3[2] = param_3[2] + 1;
      *(int32_t *)param_1[0xc] = 0;
    }
    *(int32_t *)param_1[6] = *(int32_t *)param_1[7];
    if (*(longlong *)param_1[10] != *(longlong *)param_1[0xb]) {
      plVar6 = (longlong *)param_1[6];
      *plVar6 = *plVar6 + 1;
    }
  }
  puVar3 = *(int32_t **)param_1[0xd];
  for (puVar10 = *(int32_t **)param_1[6]; puVar10 != puVar3; puVar10 = puVar10 + 1) {
    uVar4 = *puVar10;
    if ((ulonglong)param_3[3] < param_3[2] + 1) {
      (**(code **)*param_3)(param_3);
    }
    *(int32_t *)(param_3[1] + param_3[2]) = uVar4;
    param_3[2] = param_3[2] + 1;
  }
  if ((*(char *)(param_1[4] + 0xb) != '\0') && (*(char *)param_1[0xc] != '\0')) {
    if ((ulonglong)param_3[3] < param_3[2] + 1) {
      (**(code **)*param_3)(param_3);
    }
    *(int32_t *)(param_3[1] + param_3[2]) = 0x2e;
    param_3[2] = param_3[2] + 1;
  }
  iVar8 = *(int *)param_1[0xe];
  while (0 < iVar8) {
    if ((ulonglong)param_3[3] < param_3[2] + 1) {
      (**(code **)*param_3)(param_3);
    }
    *(int32_t *)(param_3[1] + param_3[2]) = 0x30;
    param_3[2] = param_3[2] + 1;
    *(int *)param_1[0xe] = *(int *)param_1[0xe] + -1;
    iVar8 = *(int *)param_1[0xe];
  }
  puVar3 = *(int32_t **)param_1[0xb];
  for (puVar10 = *(int32_t **)param_1[0xd]; puVar10 != puVar3; puVar10 = puVar10 + 1) {
    uVar4 = *puVar10;
    if ((ulonglong)param_3[3] < param_3[2] + 1) {
      (**(code **)*param_3)(param_3);
    }
    *(int32_t *)(param_3[1] + param_3[2]) = uVar4;
    param_3[2] = param_3[2] + 1;
  }
  *param_2 = param_3;
  return param_2;
}

// ---- Function: FUN_1800af800 ----
longlong *
FUN_1800af800(longlong *param_1,int32_t *param_2,int param_3,int *param_4,int32_t param_5,
             int32_t *param_6)

{
  int32_t *puVar1;
  int32_t uVar2;
  int iVar3;
  int32_t *puVar4;
  int32_t *puVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  char cVar9;
  int32_t *puVar10;
  int iVar11;
  int32_t local_res8;
  
  iVar3 = *param_4;
  iVar11 = 0;
  cVar9 = *(char *)((longlong)param_4 + 9);
  if (*(char *)((longlong)param_4 + 9) == '\0') {
    cVar9 = '\x02';
  }
  iVar6 = 0;
  if (param_3 < iVar3) {
    if (cVar9 != '\x01') {
      if (cVar9 == '\x02') {
        iVar6 = iVar3 - param_3;
      }
      else {
        iVar6 = 0;
        if (cVar9 == '\x03') {
          iVar6 = (iVar3 - param_3) / 2;
          iVar11 = (iVar3 - iVar6) - param_3;
        }
      }
      goto LAB_1800af86d;
    }
    uVar7 = (ulonglong)*(byte *)((longlong)param_4 + 0xe);
    iVar11 = iVar3 - param_3;
  }
  else {
LAB_1800af86d:
    uVar7 = (ulonglong)*(byte *)((longlong)param_4 + 0xe);
    puVar1 = (int32_t *)((longlong)param_4 + 0xf);
    if (0 < iVar6) {
      puVar10 = puVar1 + uVar7;
      puVar5 = puVar1;
      do {
        for (; puVar5 != puVar10; puVar5 = puVar5 + 1) {
          uVar2 = *puVar5;
          if ((ulonglong)param_2[3] < param_2[2] + 1) {
            (**(code **)*param_2)(param_2);
          }
          *(int32_t *)(param_2[1] + param_2[2]) = uVar2;
          param_2[2] = param_2[2] + 1;
        }
        iVar6 = iVar6 + -1;
        puVar5 = puVar1;
      } while (0 < iVar6);
      goto LAB_1800af8e8;
    }
  }
  puVar10 = (int32_t *)((longlong)param_4 + uVar7 + 0xf);
LAB_1800af8e8:
  plVar8 = FUN_1800af480(param_6,&local_res8,param_2);
  puVar4 = (int32_t *)*plVar8;
  for (; puVar1 = (int32_t *)((longlong)param_4 + 0xf), 0 < iVar11; iVar11 = iVar11 + -1) {
    for (; puVar1 != puVar10; puVar1 = puVar1 + 1) {
      uVar2 = *puVar1;
      if ((ulonglong)puVar4[3] < puVar4[2] + 1) {
        (**(code **)*puVar4)(puVar4);
      }
      *(int32_t *)(puVar4[1] + puVar4[2]) = uVar2;
      puVar4[2] = puVar4[2] + 1;
    }
  }
  *param_1 = (longlong)puVar4;
  return param_1;
}

// ---- Function: FUN_1800af970 ----
void FUN_1800af970(longlong *param_1,int32_t *param_2,float param_3,int *param_4,longlong param_5
                  )

{
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

// ---- Function: FUN_1800affe0 ----
void FUN_1800affe0(longlong *param_1,char *param_2,double param_3,int *param_4,longlong param_5)

{
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

// ---- Function: FUN_1800b0670 ----
longlong * FUN_1800b0670(longlong *param_1,int32_t (*param_2) [32],int32_t (*param_3) [32])

{
  longlong *plVar1;
  ulonglong uVar2;
  char *pcVar3;
  int32_t in_XMM3 [16];
  longlong local_18 [2];
  
  uVar2 = in_XMM3._0_8_;
  if (in_XMM3[7] < '\0') {
    if (param_2 == param_3) {
      *param_1 = (longlong)param_3;
      *(int32_t *)(param_1 + 1) = 0x84;
      return param_1;
    }
    (*param_2)[0] = 0x2d;
    param_2 = (int32_t (*) [32])(*param_2 + 1);
    uVar2 = uVar2 & 0x7fffffffffffffff;
  }
  if ((uVar2 & 0x7ff0000000000000) == 0x7ff0000000000000) {
    if ((uVar2 & 0xfffffffffffff) == 0) {
      pcVar3 = "inf";
      uVar2 = 3;
    }
    else if ((in_XMM3[7] < '\0') && ((uVar2 & 0xfffffffffffff) == 0x8000000000000)) {
      pcVar3 = "nan(ind)";
      uVar2 = 8;
    }
    else if ((uVar2 & 0x8000000000000) == 0) {
      pcVar3 = "nan(snan)";
      uVar2 = 9;
    }
    else {
      pcVar3 = "nan";
      uVar2 = 3;
    }
    if ((longlong)param_3 - (longlong)param_2 < (longlong)uVar2) {
      *param_1 = (longlong)param_3;
      *(int32_t *)(param_1 + 1) = 0x84;
      return param_1;
    }
    FUN_180150fd0((int32_t *)param_2,(int32_t *)pcVar3,uVar2);
    *(int32_t *)(param_1 + 1) = 0;
    *param_1 = (longlong)(*param_2 + uVar2);
    return param_1;
  }
  plVar1 = FUN_1800b1490(local_18,param_2,param_3,uVar2,0);
  *param_1 = *plVar1;
  *(int *)(param_1 + 1) = (int)plVar1[1];
  return param_1;
}

// ---- Function: FUN_1800b07d0 ----
longlong * FUN_1800b07d0(longlong *param_1,ulonglong param_2,uint param_3)

{
  int32_t auVar1 [16];
  int32_t auVar2 [16];
  int32_t auVar3 [16];
  int32_t auVar4 [16];
  int32_t auVar5 [16];
  int32_t auVar6 [16];
  int32_t auVar7 [16];
  int32_t auVar8 [16];
  int32_t auVar9 [16];
  int32_t auVar10 [16];
  int32_t auVar11 [16];
  int32_t auVar12 [16];
  int32_t auVar13 [16];
  int32_t auVar14 [16];
  int32_t auVar15 [16];
  int32_t auVar16 [16];
  int32_t auVar17 [16];
  int32_t auVar18 [16];
  int32_t auVar19 [16];
  int32_t auVar20 [16];
  int32_t auVar21 [16];
  int32_t auVar22 [16];
  int32_t auVar23 [16];
  int32_t auVar24 [16];
  int32_t auVar25 [16];
  int32_t auVar26 [16];
  int32_t auVar27 [16];
  bool bVar28;
  longlong lVar29;
  byte bVar30;
  uint uVar31;
  longlong lVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  bool bVar40;
  uint uVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  int iVar44;
  ulonglong uVar45;
  byte bVar46;
  byte bVar47;
  bool bVar48;
  
  iVar44 = -0x434;
  if (param_3 != 0) {
    iVar44 = param_3 - 0x435;
  }
  uVar36 = param_2;
  if (param_3 != 0) {
    uVar36 = param_2 | 0x10000000000000;
  }
  uVar39 = 0;
  bVar46 = ~(byte)uVar36 & 1;
  uVar36 = uVar36 * 4;
  if ((param_2 == 0) && (1 < param_3)) {
    bVar30 = 0;
    uVar34 = uVar39;
  }
  else {
    uVar34 = 1;
    bVar30 = 1;
  }
  uVar43 = 0;
  bVar48 = false;
  if (iVar44 < 0) {
    uVar41 = ((uint)(iVar44 * -0xb2efb) >> 0x14) - (uint)(iVar44 < -1);
    uVar31 = uVar41 + iVar44;
    uVar35 = *(ulonglong *)(&DAT_18015c038 + (longlong)(int)-uVar31 * 0x10);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar35;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar36 + 2;
    lVar29 = SUB168(auVar7 * auVar19,8);
    uVar45 = *(ulonglong *)(&DAT_18015c030 + (longlong)(int)-uVar31 * 0x10);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar45;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar36 + 2;
    uVar33 = SUB168(auVar8 * auVar20,8);
    uVar38 = SUB168(auVar7 * auVar19,0) + uVar33;
    if (uVar38 < uVar33) {
      lVar29 = lVar29 + 1;
    }
    bVar47 = ((char)uVar41 - (char)(uVar31 * -0x12934f >> 0x13)) + 0x38;
    uVar33 = uVar38 >> (bVar47 & 0x3f) | lVar29 << 0x40 - (bVar47 & 0x3f);
    uVar34 = (uVar36 - uVar34) - 1;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar35;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar34;
    lVar29 = SUB168(auVar9 * auVar21,8);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar45;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar34;
    uVar34 = SUB168(auVar10 * auVar22,8);
    uVar38 = SUB168(auVar9 * auVar21,0) + uVar34;
    if (uVar38 < uVar34) {
      lVar29 = lVar29 + 1;
    }
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar35;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar36;
    lVar32 = SUB168(auVar11 * auVar23,8);
    uVar34 = uVar38 >> (bVar47 & 0x3f) | lVar29 << 0x40 - (bVar47 & 0x3f);
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar45;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar36;
    uVar35 = SUB168(auVar12 * auVar24,8);
    uVar45 = SUB168(auVar11 * auVar23,0) + uVar35;
    if (uVar45 < uVar35) {
      lVar32 = lVar32 + 1;
    }
    uVar35 = uVar45 >> (bVar47 & 0x3f) | lVar32 << 0x40 - (bVar47 & 0x3f);
    if (uVar41 < 2) {
      bVar48 = true;
      if (bVar46 == 0) {
        uVar33 = uVar33 - 1;
      }
      uVar43 = (ulonglong)bVar30;
      if (bVar46 == 0) {
        uVar43 = uVar39;
      }
    }
    else if (uVar41 < 0x3f) {
      bVar48 = (uVar36 & (1L << ((char)uVar41 - 1U & 0x3f)) - 1U) == 0;
      goto LAB_1800b0b2c;
    }
LAB_1800b0b1e:
    uVar36 = uVar35;
    if ((char)uVar43 == '\0') goto LAB_1800b0b2c;
LAB_1800b0c5a:
    iVar44 = 0;
    bVar30 = 0;
    bVar40 = SUB81(uVar43,0);
    uVar33 = uVar33 / 10;
    uVar35 = uVar34 / 10;
    uVar45 = uVar36;
    uVar38 = uVar34;
    if (uVar34 / 10 < uVar33) {
      do {
        uVar34 = uVar35;
        uVar36 = uVar45 / 10;
        bVar40 = false;
        if ((int)uVar38 == (int)uVar34 * 10) {
          bVar40 = SUB81(uVar43,0);
        }
        uVar43 = (ulonglong)bVar40;
        bVar28 = false;
        if (bVar30 == 0) {
          bVar28 = bVar48;
        }
        bVar48 = bVar28;
        iVar44 = iVar44 + 1;
        bVar30 = (char)uVar45 + (char)uVar36 * -10;
        uVar33 = uVar33 / 10;
        uVar35 = uVar34 / 10;
        uVar45 = uVar36;
        uVar38 = uVar34;
      } while (uVar34 / 10 < uVar33);
    }
    if ((bVar40 != false) &&
       (uVar43 = uVar34 / 10, uVar35 = uVar36, (int)uVar34 == (int)(uVar34 / 10) * 10)) {
      do {
        uVar34 = uVar43;
        uVar36 = uVar35 / 10;
        iVar44 = iVar44 + 1;
        bVar48 = (bool)(bVar48 & bVar30 == 0);
        bVar30 = (char)uVar35 + (char)uVar36 * -10;
        uVar43 = uVar34 / 10;
        uVar35 = uVar36;
      } while ((int)uVar34 == (int)(uVar34 / 10) * 10);
    }
    if (((bVar48 != false) && (bVar30 == 5)) && ((uVar36 & 1) == 0)) {
      bVar30 = 4;
    }
    if (((uVar36 != uVar34) || ((bVar46 != 0 && (bVar40 != false)))) && (bVar30 < 5))
    goto LAB_1800b0d9b;
  }
  else {
    uVar45 = uVar36 + 2;
    uVar31 = ((uint)(iVar44 * 0x13441) >> 0x12) - (uint)(3 < iVar44);
    lVar29 = (ulonglong)uVar31 * 0x10;
    bVar30 = ((char)(uVar31 * 0x12934f >> 0x13) - (char)iVar44) + ':' + (char)uVar31;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = *(ulonglong *)(&DAT_18015adf8 + lVar29);
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar45;
    lVar32 = SUB168(auVar1 * auVar13,8);
    uVar35 = *(ulonglong *)(&DAT_18015adf0 + lVar29);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar35;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar45;
    uVar33 = SUB168(auVar2 * auVar14,8);
    uVar38 = SUB168(auVar1 * auVar13,0) + uVar33;
    if (uVar38 < uVar33) {
      lVar32 = lVar32 + 1;
    }
    uVar37 = (uVar36 - uVar34) - 1;
    uVar33 = uVar38 >> (bVar30 & 0x3f) | lVar32 << 0x40 - (bVar30 & 0x3f);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = *(ulonglong *)(&DAT_18015adf8 + lVar29);
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar37;
    lVar32 = SUB168(auVar3 * auVar15,8);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar35;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar37;
    uVar34 = SUB168(auVar4 * auVar16,8);
    uVar38 = SUB168(auVar3 * auVar15,0) + uVar34;
    if (uVar38 < uVar34) {
      lVar32 = lVar32 + 1;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = *(ulonglong *)(&DAT_18015adf8 + lVar29);
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar36;
    lVar29 = SUB168(auVar5 * auVar17,8);
    uVar34 = uVar38 >> (bVar30 & 0x3f) | lVar32 << 0x40 - (bVar30 & 0x3f);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar35;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar36;
    uVar35 = SUB168(auVar6 * auVar18,8);
    uVar38 = SUB168(auVar5 * auVar17,0) + uVar35;
    if (uVar38 < uVar35) {
      lVar29 = lVar29 + 1;
    }
    uVar35 = uVar38 >> (bVar30 & 0x3f) | lVar29 << 0x40 - (bVar30 & 0x3f);
    if (0x15 < uVar31) goto LAB_1800b0b1e;
    uVar38 = uVar36 / 5;
    uVar42 = uVar39;
    if ((int)uVar36 != (int)uVar38 * 5) {
      uVar41 = 0;
      if (bVar46 == 0) {
        uVar36 = uVar45 / 5;
        uVar38 = uVar39;
        if ((int)uVar45 == (int)(uVar45 / 5) * 5) {
          do {
            uVar41 = (int)uVar38 + 1;
            uVar38 = (ulonglong)uVar41;
            uVar45 = uVar36 / 5;
            iVar44 = (int)uVar36;
            uVar36 = uVar45;
          } while (iVar44 == (int)uVar45 * 5);
        }
        uVar33 = uVar33 - (uVar31 <= uVar41);
      }
      else {
        uVar36 = uVar37 / 5;
        uVar43 = uVar39;
        if ((int)uVar37 == (int)uVar36 * 5) {
          do {
            uVar41 = (int)uVar43 + 1;
            uVar45 = uVar36 / 5;
            iVar44 = (int)uVar36;
            uVar36 = uVar45;
            uVar43 = (ulonglong)uVar41;
          } while (iVar44 == (int)uVar45 * 5);
        }
        uVar43 = (ulonglong)(uVar31 <= uVar41);
      }
      goto LAB_1800b0b1e;
    }
    do {
      uVar41 = (int)uVar42 + 1;
      uVar36 = uVar38 / 5;
      iVar44 = (int)uVar38;
      uVar38 = uVar36;
      uVar42 = (ulonglong)uVar41;
    } while (iVar44 == (int)uVar36 * 5);
    bVar48 = uVar31 <= uVar41;
LAB_1800b0b2c:
    iVar44 = 0;
    uVar36 = uVar35;
    if (bVar48 != false) goto LAB_1800b0c5a;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar33;
    lVar29 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar25,8);
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar34;
    lVar32 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar26,8);
    uVar43 = (uVar33 - lVar29 >> 1) + lVar29 >> 6;
    uVar45 = (uVar34 - lVar32 >> 1) + lVar32 >> 6;
    bVar48 = false;
    if (uVar45 < uVar43) {
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar35;
      lVar29 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar27,8);
      iVar44 = 2;
      uVar36 = (uVar35 - lVar29 >> 1) + lVar29 >> 6;
      bVar48 = 0x31 < (uint)((int)uVar35 + (int)uVar36 * -100);
      uVar33 = uVar43;
      uVar34 = uVar45;
    }
    uVar33 = uVar33 / 10;
    uVar43 = uVar34 / 10;
    uVar35 = uVar36;
    if (uVar34 / 10 < uVar33) {
      do {
        uVar34 = uVar43;
        uVar36 = uVar35 / 10;
        bVar48 = 4 < (uint)((int)uVar35 + (int)uVar36 * -10);
        iVar44 = iVar44 + 1;
        uVar33 = uVar33 / 10;
        uVar43 = uVar34 / 10;
        uVar35 = uVar36;
      } while (uVar34 / 10 < uVar33);
    }
    if ((uVar36 != uVar34) && (!bVar48)) goto LAB_1800b0d9b;
  }
  uVar39 = 1;
LAB_1800b0d9b:
  *(uint *)(param_1 + 1) = uVar31 + iVar44;
  *param_1 = uVar39 + uVar36;
  return param_1;
}

// ---- Function: FUN_1800b0dd0 ----
longlong *
FUN_1800b0dd0(longlong *param_1,int32_t (*param_2) [32],int32_t (*param_3) [32],
             ulonglong *param_4,int param_5,ulonglong param_6)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int32_t uVar4;
  ulonglong uVar5;
  int32_t *puVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  int32_t *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  char cVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  
  uVar8 = *param_4;
  iVar9 = (int)param_4[1];
  uVar11 = (ulonglong)iVar9;
  if (uVar8 < 10000000000000000) {
    if (uVar8 < 1000000000000000) {
      if (uVar8 < 100000000000000) {
        if (uVar8 < 10000000000000) {
          if (uVar8 < 1000000000000) {
            if (uVar8 < 100000000000) {
              if (uVar8 < 10000000000) {
                if (uVar8 < 1000000000) {
                  if (uVar8 < 100000000) {
                    if (uVar8 < 10000000) {
                      if (uVar8 < 1000000) {
                        if (uVar8 < 100000) {
                          if (uVar8 < 10000) {
                            if (uVar8 < 1000) {
                              if (uVar8 < 100) {
                                uVar16 = 2 - (uVar8 < 10);
                              }
                              else {
                                uVar16 = 3;
                              }
                            }
                            else {
                              uVar16 = 4;
                            }
                          }
                          else {
                            uVar16 = 5;
                          }
                        }
                        else {
                          uVar16 = 6;
                        }
                      }
                      else {
                        uVar16 = 7;
                      }
                    }
                    else {
                      uVar16 = 8;
                    }
                  }
                  else {
                    uVar16 = 9;
                  }
                }
                else {
                  uVar16 = 10;
                }
              }
              else {
                uVar16 = 0xb;
              }
            }
            else {
              uVar16 = 0xc;
            }
          }
          else {
            uVar16 = 0xd;
          }
        }
        else {
          uVar16 = 0xe;
        }
      }
      else {
        uVar16 = 0xf;
      }
    }
    else {
      uVar16 = 0x10;
    }
  }
  else {
    uVar16 = 0x11;
  }
  uVar17 = uVar16 + iVar9;
  iVar1 = uVar17 - 1;
  iVar14 = (int)uVar8;
  if (param_5 == 0) {
    iVar3 = -3;
    if (uVar16 != 1) {
      iVar3 = -3 - uVar16;
    }
    if ((iVar3 <= iVar9) && (iVar9 <= (int)((uVar16 != 1) + 4))) goto LAB_1800b0fcf;
  }
  else if (param_5 == 3) {
    if (uVar17 + 3 < 10) {
LAB_1800b0fcf:
      if (iVar9 < 0) {
        if ((int)uVar17 < 1) {
          uVar7 = 2 - iVar9;
        }
        else {
          uVar7 = uVar16 + 1;
        }
      }
      else {
        uVar7 = uVar17;
        if (uVar8 == 1) {
          uVar7 = uVar17 - (byte)(&DAT_180183180)[uVar11];
        }
      }
      uVar12 = (ulonglong)uVar7;
      if ((longlong)uVar12 <= (longlong)param_3 - (longlong)param_2) {
        uVar5 = uVar12;
        if (0 < iVar9) {
          if (0x16 < iVar9) {
LAB_1800b1031:
            FUN_1800b1a00(param_1,param_2,param_3,param_6,0);
            return param_1;
          }
          lVar2 = 0;
          if (uVar8 != 0) {
            for (; (uVar8 >> lVar2 & 1) == 0; lVar2 = lVar2 + 1) {
            }
          }
          if (*(ulonglong *)(&DAT_1801832c0 + uVar11 * 8) < uVar8 >> ((byte)lVar2 & 0x3f))
          goto LAB_1800b1031;
          uVar5 = (ulonglong)uVar16;
        }
        puVar10 = (int32_t *)(*param_2 + uVar5);
        if ((uVar8 & 0xffffffff00000000) != 0) {
          uVar8 = uVar8 / 100000000;
          uVar15 = iVar14 + (int)uVar8 * -100000000;
          uVar7 = uVar15 % 10000;
          uVar15 = (uVar15 / 10000) % 10000;
          puVar10[-1] = *(int32_t *)
                         (
                         "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
                         + (uVar7 % 100) * 2);
          puVar10[-2] = *(int32_t *)
                         (
                         "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
                         + (uVar7 / 100) * 2);
          puVar10[-3] = *(int32_t *)
                         (
                         "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
                         + (uVar15 % 100) * 2);
          puVar10 = puVar10 + -4;
          *puVar10 = *(int32_t *)
                      (
                      "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
                      + (uVar15 / 100) * 2);
        }
        uVar7 = (uint)uVar8;
        while (uVar15 = (uint)uVar8, 9999 < uVar7) {
          uVar8 = (uVar8 & 0xffffffff) / 10000;
          uVar7 = (uint)uVar8;
          uVar15 = uVar15 + uVar7 * -10000;
          puVar10[-1] = *(int32_t *)
                         (
                         "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
                         + (uVar15 % 100) * 2);
          puVar10 = puVar10 + -2;
          *puVar10 = *(int32_t *)
                      (
                      "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
                      + (uVar15 / 100) * 2);
        }
        uVar7 = uVar15;
        if (99 < uVar15) {
          uVar7 = (uint)((uVar8 & 0xffffffff) / 100);
          puVar10 = puVar10 + -1;
          *puVar10 = *(int32_t *)
                      (
                      "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
                      + (uVar15 + uVar7 * -100) * 2);
        }
        if (uVar7 < 10) {
          *(char *)((longlong)puVar10 + -1) = (char)uVar7 + '0';
        }
        else {
          puVar10[-1] = *(int32_t *)
                         (
                         "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
                         + uVar7 * 2);
        }
        if (iVar9 < 1) {
          if (iVar9 != 0) {
            if (0 < (int)uVar17) {
              FUN_180150fd0((int32_t *)param_2,(int32_t *)(*param_2 + 1),(longlong)(int)uVar17
                           );
              puVar6 = *param_2 + uVar12;
              (*param_2)[(int)uVar17] = 0x2e;
              goto LAB_1800b1463;
            }
            *(int32_t *)*param_2 = 0x2e30;
            if ((int)uVar17 < 0) {
              FUN_180151670((int32_t (*) [32])(*param_2 + 2),0x30,(longlong)(int)-uVar17);
            }
          }
          puVar6 = *param_2 + uVar12;
        }
        else {
          FUN_180151670((int32_t (*) [32])(*param_2 + uVar16),0x30,uVar11);
          puVar6 = *param_2 + uVar12;
        }
        goto LAB_1800b1463;
      }
      goto LAB_1800b0fab;
    }
  }
  else if (param_5 == 2) goto LAB_1800b0fcf;
  uVar17 = (0xc6 < uVar17 + 0x62) + 4 + uVar16 + (uint)(1 < uVar16);
  if ((longlong)(ulonglong)uVar17 <= (longlong)param_3 - (longlong)param_2) {
    uVar11 = 0;
    if ((uVar8 & 0xffffffff00000000) != 0) {
      uVar8 = uVar8 / 100000000;
      uVar15 = iVar14 + (int)uVar8 * -100000000;
      uVar7 = uVar15 % 10000;
      uVar15 = (uVar15 / 10000) % 10000;
      *(int32_t *)(param_2[-1] + (ulonglong)uVar16 + 0x1f) =
           *(int32_t *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
            + (uVar7 % 100) * 2);
      *(int32_t *)(param_2[-1] + (ulonglong)uVar16 + 0x1d) =
           *(int32_t *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
            + (uVar7 / 100) * 2);
      uVar11 = 8;
      *(int32_t *)(param_2[-1] + (ulonglong)uVar16 + 0x1b) =
           *(int32_t *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
            + (uVar15 % 100) * 2);
      *(int32_t *)(param_2[-1] + (ulonglong)uVar16 + 0x19) =
           *(int32_t *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
            + (uVar15 / 100) * 2);
    }
    if (9999 < (uint)uVar8) {
      uVar12 = uVar11;
      uVar5 = uVar8;
      do {
        uVar8 = (uVar5 & 0xffffffff) / 10000;
        uVar7 = (int)uVar5 + (uint)uVar8 * -10000;
        uVar11 = (ulonglong)((int)uVar12 + 4);
        *(int32_t *)((uVar16 - uVar12) + -1 + (longlong)param_2) =
             *(int32_t *)
              (
              "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
              + (uVar7 % 100) * 2);
        *(int32_t *)((uVar16 - uVar12) + -3 + (longlong)param_2) =
             *(int32_t *)
              (
              "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
              + (uVar7 / 100) * 2);
        uVar12 = uVar11;
        uVar5 = uVar8;
      } while (9999 < (uint)uVar8);
    }
    uVar15 = (uint)uVar8;
    uVar7 = uVar15;
    if (99 < uVar15) {
      uVar7 = (uint)((uVar8 & 0xffffffff) / 100);
      *(int32_t *)((uVar16 - uVar11) + -1 + (longlong)param_2) =
           *(int32_t *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
            + (uVar15 + uVar7 * -100) * 2);
    }
    if (uVar7 < 10) {
      cVar13 = (char)uVar7 + '0';
    }
    else {
      (*param_2)[2] =
           "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
           [uVar7 * 2 + 1];
      cVar13 = "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
               [uVar7 * 2];
    }
    (*param_2)[0] = cVar13;
    if (uVar16 < 2) {
      uVar16 = 1;
    }
    else {
      (*param_2)[1] = 0x2e;
      uVar16 = uVar16 + 1;
    }
    (*param_2)[uVar16] = 0x65;
    iVar9 = iVar1;
    if (iVar1 < 0) {
      iVar9 = -iVar1;
    }
    uVar4 = 0x2d;
    if (-1 < iVar1) {
      uVar4 = 0x2b;
    }
    (*param_2)[uVar16 + 1] = uVar4;
    if (iVar9 < 100) {
      *(int32_t *)(*param_2 + (uVar16 + 2)) =
           *(int32_t *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
            + iVar9 * 2);
    }
    else {
      *(int32_t *)(*param_2 + (uVar16 + 2)) =
           *(int32_t *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
            + (iVar9 / 10) * 2);
      (*param_2)[uVar16 + 4] = (char)iVar9 + (char)(iVar9 / 10) * -10 + '0';
    }
    puVar6 = *param_2 + uVar17;
LAB_1800b1463:
    *(int32_t *)(param_1 + 1) = 0;
    *param_1 = (longlong)puVar6;
    return param_1;
  }
LAB_1800b0fab:
  *param_1 = (longlong)param_3;
  *(int32_t *)(param_1 + 1) = 0x84;
  return param_1;
}

// ---- Function: FUN_1800b1490 ----
longlong *
FUN_1800b1490(longlong *param_1,int32_t (*param_2) [32],int32_t (*param_3) [32],
             ulonglong param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  byte bVar5;
  int iVar6;
  int32_t local_18;
  int iStack_10;
  int32_t uStack_c;
  
  if (param_4 != 0) {
    uVar2 = (uint)(param_4 >> 0x20);
    uVar1 = uVar2 >> 0x14;
    iVar6 = uVar1 - 0x433;
    if ((param_5 == 2) && (0 < iVar6)) {
      FUN_1800b1a00(param_1,param_2,param_3,param_4,0);
    }
    else {
      local_18 = param_4 & 0xfffffffffffff | 0x10000000000000;
      if ((uVar1 - 0x3ff < 0x35) &&
         (bVar5 = -(char)iVar6, (local_18 & (1L << (bVar5 & 0x3f)) - 1U) == 0)) {
        local_18 = local_18 >> (bVar5 & 0x3f);
        iVar6 = 0;
        iStack_10 = 0;
        uVar3 = local_18 / 10;
        if ((int)local_18 == (int)(local_18 / 10) * 10) {
          do {
            local_18 = uVar3;
            iVar6 = iVar6 + 1;
            uVar3 = local_18 / 10;
            iStack_10 = iVar6;
          } while ((int)local_18 == (int)(local_18 / 10) * 10);
        }
      }
      else {
        plVar4 = FUN_1800b07d0(&local_18,param_4 & 0xfffffffffffff,uVar2 >> 0x14);
        local_18._0_4_ = (int32_t)*plVar4;
        local_18._4_4_ = *(int32_t *)((longlong)plVar4 + 4);
        iStack_10 = (int)plVar4[1];
        uStack_c = *(int32_t *)((longlong)plVar4 + 0xc);
      }
      FUN_1800b0dd0(param_1,param_2,param_3,&local_18,param_5,param_4);
    }
    return param_1;
  }
  if (param_5 == 1) {
    if (4 < (longlong)param_3 - (longlong)param_2) {
      *(int32_t *)*param_2 = DAT_18018316c;
      (*param_2)[4] = DAT_180183170;
      *param_1 = (longlong)(*param_2 + 5);
      *(int32_t *)(param_1 + 1) = 0;
      return param_1;
    }
  }
  else if (param_2 != param_3) {
    (*param_2)[0] = 0x30;
    *param_1 = (longlong)(*param_2 + 1);
    *(int32_t *)(param_1 + 1) = 0;
    return param_1;
  }
  *param_1 = (longlong)param_3;
  *(int32_t *)(param_1 + 1) = 0x84;
  return param_1;
}

// ---- Function: FUN_1800b1670 ----
longlong *
FUN_1800b1670(longlong *param_1,int32_t (*param_2) [32],int32_t (*param_3) [32],
             int32_t param_4,int param_5)

{
  uint uVar1;
  int32_t uVar2;
  longlong *plVar3;
  byte bVar4;
  ulonglong uVar5;
  char *pcVar6;
  int32_t (*pauVar7) [32];
  int32_t (*pauVar8) [32];
  ulonglong uVar9;
  uint uVar10;
  int32_t in_XMM3 [16];
  longlong local_18 [2];
  
  uVar5 = in_XMM3._0_8_;
  pauVar8 = param_2;
  if (in_XMM3[7] < '\0') {
    if (param_2 == param_3) goto LAB_1800b1696;
    pauVar8 = (int32_t (*) [32])(*param_2 + 1);
    (*param_2)[0] = 0x2d;
    uVar5 = uVar5 & 0x7fffffffffffffff;
  }
  if ((uVar5 & 0x7ff0000000000000) == 0x7ff0000000000000) {
    if ((uVar5 & 0xfffffffffffff) == 0) {
      pcVar6 = "inf";
      uVar5 = 3;
    }
    else if ((in_XMM3[7] < '\0') && ((uVar5 & 0xfffffffffffff) == 0x8000000000000)) {
      pcVar6 = "nan(ind)";
      uVar5 = 8;
    }
    else if ((uVar5 & 0x8000000000000) == 0) {
      pcVar6 = "nan(snan)";
      uVar5 = 9;
    }
    else {
      pcVar6 = "nan";
      uVar5 = 3;
    }
    if ((longlong)param_3 - (longlong)pauVar8 < (longlong)uVar5) {
      *param_1 = (longlong)param_3;
      *(int32_t *)(param_1 + 1) = 0x84;
      return param_1;
    }
    FUN_180150fd0((int32_t *)pauVar8,(int32_t *)pcVar6,uVar5);
    *(int32_t *)(param_1 + 1) = 0;
    *param_1 = (longlong)(*pauVar8 + uVar5);
    return param_1;
  }
  if (param_5 != 4) {
    plVar3 = FUN_1800b1490(local_18,pauVar8,param_3,uVar5,param_5);
    *param_1 = *plVar3;
    *(int *)(param_1 + 1) = (int)plVar3[1];
    return param_1;
  }
  if (uVar5 == 0) {
    if (3 < (longlong)param_3 - (longlong)pauVar8) {
      *(int32_t *)*pauVar8 = 0x302b7030;
      *param_1 = (longlong)(*pauVar8 + 4);
      *(int32_t *)(param_1 + 1) = 0;
      return param_1;
    }
  }
  else {
    uVar9 = uVar5 & 0xfffffffffffff;
    uVar10 = 0xfffffc02;
    uVar1 = (uint)(uVar5 >> 0x20);
    if (uVar1 >> 0x14 != 0) {
      uVar10 = (uVar1 >> 0x14) - 0x3ff;
    }
    if (pauVar8 != param_3) {
      pauVar7 = (int32_t (*) [32])(*pauVar8 + 1);
      (*pauVar8)[0] = (uVar1 >> 0x14 != 0) + '0';
      if (uVar9 != 0) {
        if (pauVar7 == param_3) goto LAB_1800b1696;
        (*pauVar7)[0] = 0x2e;
        pauVar7 = (int32_t (*) [32])(*pauVar8 + 2);
        bVar4 = 0x34;
        do {
          bVar4 = bVar4 - 4;
          if (pauVar7 == param_3) goto LAB_1800b1696;
          (*pauVar7)[0] =
               "0123456789abcdefghijklmnopqrstuvwxyz0b"[uVar9 >> (bVar4 & 0x3f) & 0xffffffff];
          pauVar7 = (int32_t (*) [32])(*pauVar7 + 1);
          uVar9 = uVar9 & (1L << (bVar4 & 0x3f)) - 1U;
        } while (uVar9 != 0);
      }
      if (1 < (longlong)param_3 - (longlong)pauVar7) {
        (*pauVar7)[0] = 0x70;
        uVar2 = 0x2d;
        if (-1 < (int)uVar10) {
          uVar2 = 0x2b;
        }
        (*pauVar7)[1] = uVar2;
        uVar1 = -uVar10;
        if (0 < (int)uVar10) {
          uVar1 = uVar10;
        }
        FUN_1800b4050(param_1,(int32_t *)(*pauVar7 + 2),(longlong)param_3,(ulonglong)uVar1,10);
        return param_1;
      }
    }
  }
LAB_1800b1696:
  *param_1 = (longlong)param_3;
  *(int32_t *)(param_1 + 1) = 0x84;
  return param_1;
}

// ---- Function: FUN_1800b18f0 ----
void FUN_1800b18f0(uint param_1,uint param_2,char *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = 0;
  uVar2 = (ulonglong)param_1;
  uVar5 = uVar4;
  uVar3 = param_2;
  if (9999 < param_2) {
    do {
      param_2 = uVar3 / 10000;
      uVar4 = (ulonglong)((int)uVar5 + 4);
      *(int32_t *)(param_3 + (uVar2 - uVar5) + -2) =
           *(int32_t *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
            + ((uVar3 % 10000) % 100) * 2);
      *(int32_t *)(param_3 + (uVar2 - uVar5) + -4) =
           *(int32_t *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
            + ((uVar3 % 10000) / 100) * 2);
      uVar5 = uVar4;
      uVar3 = param_2;
    } while (9999 < param_2);
  }
  uVar3 = param_2;
  if (99 < param_2) {
    uVar3 = param_2 / 100;
    lVar1 = uVar2 - uVar4;
    uVar4 = (ulonglong)((int)uVar4 + 2);
    *(int32_t *)(param_3 + lVar1 + -2) =
         *(int32_t *)
          (
          "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
          + (param_2 % 100) * 2);
  }
  if (9 < uVar3) {
    *(int32_t *)(param_3 + (uVar2 - uVar4) + -2) =
         *(int32_t *)
          (
          "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
          + uVar3 * 2);
    return;
  }
  *param_3 = (char)uVar3 + '0';
  return;
}

// ---- Function: FUN_1800b1a00 ----
int32_t *
FUN_1800b1a00(int32_t *param_1,int32_t (*param_2) [32],int32_t (*param_3) [32],
             ulonglong param_4,uint param_5)

{
  ushort uVar1;
  int32_t auVar2 [16];
  int32_t auVar3 [16];
  int32_t auVar4 [16];
  int32_t auVar5 [16];
  int32_t auVar6 [16];
  int32_t auVar7 [16];
  int32_t auVar8 [16];
  int32_t auVar9 [16];
  int32_t auVar10 [16];
  int32_t auVar11 [16];
  int32_t auVar12 [16];
  int32_t auVar13 [16];
  int32_t auVar14 [16];
  int32_t auVar15 [16];
  int32_t auVar16 [16];
  int32_t auVar17 [16];
  int32_t auVar18 [16];
  int32_t auVar19 [16];
  int32_t auVar20 [16];
  int32_t auVar21 [16];
  int32_t (*pauVar22) [32];
  int32_t (*pauVar23) [32];
  int iVar24;
  int iVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  int32_t (*pauVar28) [32];
  byte bVar29;
  byte bVar30;
  uint uVar31;
  int32_t (*pauVar32) [32];
  uint uVar33;
  uint uVar34;
  ulonglong uVar35;
  int32_t *puVar36;
  int32_t (*pauVar37) [32];
  ulonglong uVar38;
  longlong lVar39;
  char cVar40;
  uint uVar41;
  bool bVar42;
  uint local_res20;
  ulonglong local_50;
  
  if (param_4 == 0) {
    pauVar32 = (int32_t (*) [32])(longlong)(int)((param_5 != 0) + 1 + param_5);
    if ((longlong)pauVar32 <= (longlong)param_3 - (longlong)param_2) {
      (*param_2)[0] = 0x30;
      puVar36 = *param_2 + 1;
      if (param_5 != 0) {
        *puVar36 = 0x2e;
        pauVar37 = (int32_t (*) [32])(*param_2 + 2);
        pauVar32 = pauVar37;
        FUN_180151670(pauVar37,0x30,(ulonglong)param_5);
        puVar36 = *pauVar37 + param_5;
      }
      *param_1 = puVar36;
      *(int32_t *)(param_1 + 1) = 0;
      return (int32_t *)pauVar32;
    }
LAB_1800b2087:
    *param_1 = param_3;
    *(int32_t *)(param_1 + 1) = 0x84;
  }
  else {
    pauVar32 = (int32_t (*) [32])0xfffffffffffff;
    local_50 = param_4 & 0xfffffffffffff;
    uVar31 = (uint)(param_4 >> 0x34);
    pauVar37 = param_2;
    if (uVar31 == 0) {
      local_res20 = 0xfffffbce;
LAB_1800b1cd9:
      if (pauVar37 == param_3) goto LAB_1800b2087;
      (*pauVar37)[0] = 0x30;
      pauVar37 = (int32_t (*) [32])(*pauVar37 + 1);
    }
    else {
      local_res20 = uVar31 - 0x433;
      bVar42 = false;
      pauVar32 = (int32_t (*) [32])0x10000000000000;
      local_50 = local_50 | 0x10000000000000;
      if ((int)local_res20 < -0x34) goto LAB_1800b1cd9;
      if ((int)local_res20 < 0) {
        uVar27 = 0;
        cVar40 = 'x';
        iVar24 = 1;
      }
      else {
        uVar31 = uVar31 - 0x424 >> 4;
        uVar27 = (ulonglong)uVar31;
        cVar40 = (char)uVar31 * '\x10' + 'x';
        uVar31 = (uVar31 * 0x134410 >> 0x12) + 0x19;
        pauVar32 = (int32_t (*) [32])(ulonglong)uVar31;
        iVar24 = uVar31 / 9 - 1;
        if (iVar24 < 0) goto LAB_1800b1cd9;
      }
      uVar26 = local_50 << 8;
      bVar29 = (cVar40 - (char)local_res20) + 0x88;
      iVar25 = (uint)(ushort)(&DAT_1801833a0)[uVar27] + iVar24;
      do {
        lVar39 = (longlong)iVar25;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = *(ulonglong *)(&DAT_18015d490 + lVar39 * 0x18);
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar26;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = *(ulonglong *)(&DAT_18015d498 + lVar39 * 0x18);
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar26;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = *(ulonglong *)(&DAT_18015d4a0 + lVar39 * 0x18);
        auVar10._8_8_ = 0;
        auVar10._0_8_ = uVar26;
        uVar27 = SUB168(auVar4 * auVar10,0);
        auVar21._8_8_ = uVar27;
        auVar21._0_8_ = SUB168(auVar2 * auVar8,8);
        uVar35 = SUB168(auVar3 * auVar9 + auVar21,8);
        uVar38 = SUB168(auVar4 * auVar10,8) + (ulonglong)(uVar35 < uVar27);
        bVar30 = bVar29 & 0x3f;
        uVar35 = uVar35 >> bVar30 | uVar38 << 0x40 - bVar30;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar35;
        uVar38 = uVar38 >> (bVar29 & 0x3f);
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uVar35;
        uVar27 = SUB168(ZEXT816(0x89705f4136b4a597) * auVar12,0);
        auVar13._8_8_ = 0;
        auVar13._0_8_ = uVar38;
        pauVar28 = SUB168(ZEXT816(0x31680a88f8953031) * auVar13,0);
        pauVar32 = (int32_t (*) [32])
                   ((longlong)*pauVar28 + SUB168(ZEXT816(0x31680a88f8953031) * auVar11,8));
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar38;
        uVar31 = (int)uVar35 +
                 (int)(SUB168(ZEXT816(0x89705f4136b4a597) * auVar14,0) +
                       (ulonglong)((longlong)*pauVar32 + uVar27 < uVar27) +
                       SUB168(ZEXT816(0x31680a88f8953031) * auVar13,8) +
                       (ulonglong)(pauVar32 < pauVar28) +
                       SUB168(ZEXT816(0x89705f4136b4a597) * auVar12,8) >> 0x1d) * -1000000000;
        if (bVar42) {
          if ((longlong)param_3 - (longlong)pauVar37 < 9) goto LAB_1800b2087;
          pauVar32 = (int32_t (*) [32])(ulonglong)uVar31;
          FUN_1800b20c0(uVar31,(char *)pauVar37);
          pauVar37 = (int32_t (*) [32])(*pauVar37 + 9);
        }
        else if (uVar31 != 0) {
          pauVar32 = (int32_t (*) [32])(ulonglong)uVar31;
          uVar33 = FUN_1800b2160(uVar31);
          pauVar28 = (int32_t (*) [32])(ulonglong)uVar33;
          if ((longlong)param_3 - (longlong)pauVar37 < (longlong)pauVar28) goto LAB_1800b2087;
          pauVar32 = pauVar28;
          FUN_1800b18f0(uVar33,uVar31,(char *)pauVar37);
          bVar42 = true;
          pauVar37 = (int32_t (*) [32])((longlong)*pauVar28 + (longlong)*pauVar37);
        }
        iVar25 = iVar25 + -1;
        iVar24 = iVar24 + -1;
      } while (-1 < iVar24);
      if (!bVar42) goto LAB_1800b1cd9;
    }
    uVar27 = (ulonglong)param_5;
    if (param_5 != 0) {
      if (pauVar37 == param_3) goto LAB_1800b2087;
      (*pauVar37)[0] = 0x2e;
      pauVar37 = (int32_t (*) [32])(*pauVar37 + 1);
    }
    if ((int)local_res20 < 0) {
      iVar24 = (int)(local_res20 + ((int)local_res20 >> 0x1f & 0xfU)) >> 4;
      iVar25 = -iVar24;
      bVar29 = (&DAT_180183420)[iVar25];
      uVar31 = param_5 / 9 + 1;
      pauVar32 = (int32_t (*) [32])(ulonglong)uVar31;
      if (uVar31 <= bVar29) goto LAB_1800b204d;
      uVar33 = 0;
      if (bVar29 != 0) {
        uVar33 = (uint)bVar29 + (uint)bVar29 * 8;
        if ((longlong)param_3 - (longlong)pauVar37 < (longlong)(ulonglong)uVar33)
        goto LAB_1800b2087;
        if (uVar33 != 0) {
          FUN_180151670(pauVar37,0x30,(ulonglong)uVar33);
        }
        pauVar37 = (int32_t (*) [32])(*pauVar37 + uVar33);
        uVar33 = (uint)bVar29;
      }
      pauVar32 = (int32_t (*) [32])(ulonglong)uVar31;
      if (uVar33 < uVar31) {
        uVar41 = ((uint)*(ushort *)(&DAT_180183470 + (longlong)iVar25 * 2) - (uint)bVar29) + uVar33;
        lVar39 = (longlong)param_3 - (longlong)pauVar37;
        uVar1 = *(ushort *)(&DAT_180183472 + (longlong)iVar25 * 2);
LAB_1800b1dd0:
        uVar27 = (ulonglong)uVar41;
        if (uVar1 <= uVar41) {
          param_5 = param_5 + uVar33 * -9;
          uVar27 = (ulonglong)param_5;
          bVar42 = SBORROW8((longlong)param_3 - (longlong)pauVar37,uVar27);
          lVar39 = ((longlong)param_3 - (longlong)pauVar37) - uVar27;
          goto LAB_1800b2059;
        }
        uVar38 = local_50 << 8;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = *(ulonglong *)(&UNK_180164750 + uVar27 * 0x18);
        auVar15._8_8_ = 0;
        auVar15._0_8_ = uVar38;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = *(ulonglong *)(&UNK_180164758 + uVar27 * 0x18);
        auVar16._8_8_ = 0;
        auVar16._0_8_ = uVar38;
        uVar26 = SUB168(auVar6 * auVar16,0);
        auVar7._8_8_ = 0;
        auVar7._0_8_ = *(ulonglong *)(&UNK_180164760 + uVar27 * 0x18);
        auVar17._8_8_ = 0;
        auVar17._0_8_ = uVar38;
        uVar27 = SUB168(auVar7 * auVar17,0);
        uVar26 = uVar27 + (SUB168(auVar5 * auVar15,8) + uVar26 < uVar26) +
                 SUB168(auVar6 * auVar16,8);
        uVar38 = SUB168(auVar7 * auVar17,8) + (ulonglong)(uVar26 < uVar27);
        bVar30 = (char)iVar24 * '\x10' - (char)local_res20;
        bVar29 = bVar30 & 0x3f;
        uVar35 = uVar26 >> bVar29 | uVar38 << 0x40 - bVar29;
        uVar38 = uVar38 >> (bVar30 & 0x3f);
        auVar18._8_8_ = 0;
        auVar18._0_8_ = uVar35;
        auVar19._8_8_ = 0;
        auVar19._0_8_ = uVar35;
        pauVar28 = SUB168(ZEXT816(0x89705f4136b4a597) * auVar19,0);
        auVar20._8_8_ = 0;
        auVar20._0_8_ = uVar38;
        uVar26 = SUB168(ZEXT816(0x31680a88f8953031) * auVar20,0);
        uVar27 = uVar26 + SUB168(ZEXT816(0x31680a88f8953031) * auVar18,8);
        pauVar32 = (int32_t (*) [32])((longlong)*pauVar28 + uVar27);
        uVar34 = (int)uVar35 +
                 (int)(uVar38 * -0x768fa0bec94b5a69 + (ulonglong)(pauVar32 < pauVar28) +
                       SUB168(ZEXT816(0x31680a88f8953031) * auVar20,8) +
                       (ulonglong)(uVar27 < uVar26) +
                       SUB168(ZEXT816(0x89705f4136b4a597) * auVar19,8) >> 0x1d) * -1000000000;
        if (uVar33 < param_5 / 9) {
          if (8 < lVar39) goto code_r0x0001800b1eba;
          goto LAB_1800b2087;
        }
        uVar31 = param_5 + uVar33 * -9;
        pauVar32 = (int32_t (*) [32])0x0;
        if (9 - uVar31 == 0) goto LAB_1800b1f77;
        uVar27 = (ulonglong)(9 - uVar31);
        uVar33 = uVar34;
        do {
          uVar34 = uVar33 / 10;
          uVar41 = uVar33 % 10;
          pauVar32 = (int32_t (*) [32])(ulonglong)uVar41;
          uVar27 = uVar27 - 1;
          uVar33 = uVar34;
        } while (uVar27 != 0);
        if (uVar41 == 5) {
          uVar33 = ~local_res20 - param_5;
          if (((int)uVar33 < 1) ||
             (((int)uVar33 < 0x3c &&
              (pauVar32 = (int32_t (*) [32])(ulonglong)uVar33,
              (local_50 & (1L << ((byte)uVar33 & 0x3f)) - 1U) == 0)))) {
            cVar40 = '\x02';
          }
          else {
            cVar40 = '\x01';
          }
        }
        else {
LAB_1800b1f77:
          cVar40 = 5 < (uint)pauVar32;
        }
        if (uVar31 == 0) {
LAB_1800b1fa6:
          pauVar23 = param_3;
          pauVar28 = pauVar37;
          if (cVar40 != '\0') {
            while( true ) {
              do {
                pauVar22 = pauVar23;
                if (pauVar28 == param_2) {
                  (*pauVar28)[0] = 0x31;
                  if (pauVar22 != param_3) {
                    *(int32_t *)*pauVar22 = 0x2e30;
                  }
                  if (pauVar37 != param_3) {
                    (*pauVar37)[0] = 0x30;
                    *param_1 = *pauVar37 + 1;
                    *(int32_t *)(param_1 + 1) = 0;
                    return (int32_t *)pauVar32;
                  }
                  goto LAB_1800b2087;
                }
                bVar29 = pauVar28[-1][0x1f];
                pauVar32 = (int32_t (*) [32])(ulonglong)bVar29;
                pauVar28 = (int32_t (*) [32])(pauVar28[-1] + 0x1f);
                pauVar23 = pauVar28;
              } while (bVar29 == 0x2e);
              if (bVar29 != 0x39) break;
              (*pauVar28)[0] = 0x30;
              cVar40 = '\x01';
              pauVar23 = pauVar22;
            }
            if ((cVar40 == '\x01') || ((bVar29 & 1) != 0)) {
              (*pauVar28)[0] = bVar29 + 1;
              *param_1 = pauVar37;
              *(int32_t *)(param_1 + 1) = 0;
              return (int32_t *)(ulonglong)(byte)(bVar29 + 1);
            }
          }
          goto LAB_1800b2073;
        }
        if ((longlong)(ulonglong)uVar31 <= (longlong)param_3 - (longlong)pauVar37) {
          pauVar32 = (int32_t (*) [32])(ulonglong)uVar31;
          FUN_1800b21d0(uVar31,uVar34,(longlong)pauVar37);
          pauVar37 = (int32_t (*) [32])(*pauVar37 + uVar31);
          goto LAB_1800b1fa6;
        }
        goto LAB_1800b2087;
      }
    }
    else {
LAB_1800b204d:
      bVar42 = SBORROW8((longlong)param_3 - (longlong)pauVar37,uVar27);
      lVar39 = ((longlong)param_3 - (longlong)pauVar37) - uVar27;
LAB_1800b2059:
      if (bVar42 != lVar39 < 0) goto LAB_1800b2087;
      if (param_5 != 0) {
        pauVar32 = pauVar37;
        FUN_180151670(pauVar37,0x30,uVar27);
      }
      pauVar37 = (int32_t (*) [32])(*pauVar37 + uVar27);
    }
LAB_1800b2073:
    *param_1 = pauVar37;
    *(int32_t *)(param_1 + 1) = 0;
  }
  return (int32_t *)pauVar32;
code_r0x0001800b1eba:
  pauVar32 = (int32_t (*) [32])(ulonglong)uVar34;
  FUN_1800b20c0(uVar34,(char *)pauVar37);
  pauVar37 = (int32_t (*) [32])(*pauVar37 + 9);
  lVar39 = lVar39 + -9;
  uVar33 = uVar33 + 1;
  uVar41 = uVar41 + 1;
  if (uVar31 <= uVar33) {
    *param_1 = pauVar37;
    *(int32_t *)(param_1 + 1) = 0;
    return (int32_t *)pauVar32;
  }
  goto LAB_1800b1dd0;
}

// ---- Function: FUN_1800b20c0 ----
void FUN_1800b20c0(uint param_1,char *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  longlong lVar5;
  
  if (param_1 == 0) {
    builtin_strncpy(param_2,"000000000",9);
    return;
  }
  lVar5 = 2;
  pcVar4 = param_2 + 5;
  do {
    uVar1 = (ulonglong)param_1;
    uVar3 = (uint)(uVar1 / 10000);
    uVar2 = param_1 + uVar3 * -10000;
    *(int32_t *)(pcVar4 + 2) =
         *(int32_t *)
          (
          "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
          + (uVar2 % 100) * 2);
    *(int32_t *)pcVar4 =
         *(int32_t *)
          (
          "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
          + (uVar2 / 100) * 2);
    lVar5 = lVar5 + -1;
    pcVar4 = pcVar4 + -4;
    param_1 = uVar3;
  } while (lVar5 != 0);
  *param_2 = (char)(uVar1 / 10000) + '0';
  return;
}

// ---- Function: FUN_1800b2160 ----
int FUN_1800b2160(uint param_1)

{
  if (99999999 < param_1) {
    return 9;
  }
  if (9999999 < param_1) {
    return 8;
  }
  if (999999 < param_1) {
    return 7;
  }
  if (99999 < param_1) {
    return 6;
  }
  if (9999 < param_1) {
    return 5;
  }
  if (999 < param_1) {
    return 4;
  }
  if (99 < param_1) {
    return 3;
  }
  return 2 - (uint)(param_1 < 10);
}

// ---- Function: FUN_1800b21d0 ----
void FUN_1800b21d0(uint param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  uVar3 = 0;
  uVar2 = param_2;
  if (param_1 != 1) {
    do {
      param_2 = uVar2 / 100;
      lVar1 = param_1 - uVar4;
      uVar3 = (int)uVar4 + 2;
      uVar4 = (ulonglong)uVar3;
      *(int32_t *)(lVar1 + -2 + param_3) =
           *(int32_t *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
            + (uVar2 % 100) * 2);
      uVar2 = param_2;
    } while (uVar3 < param_1 - 1);
  }
  if (uVar3 < param_1) {
    *(char *)((ulonglong)((param_1 - uVar3) - 1) + param_3) =
         (char)param_2 + (char)((ulonglong)param_2 / 10) * -10 + '0';
  }
  return;
}

