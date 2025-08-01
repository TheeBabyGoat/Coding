#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_1800b5c80 ----
int32_t FUN_1800b5c80(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  code *pcVar2;
  int32_t *puVar3;
  int32_t *puVar4;
  char *pcVar5;
  int32_t *puVar6;
  int32_t uVar7;
  _Lockit local_c8 [8];
  LPVOID local_c0;
  int32_t local_b8;
  LPVOID local_b0;
  int32_t local_a8;
  LPVOID local_a0;
  int32_t local_98;
  LPVOID local_90;
  int32_t local_88;
  LPVOID local_80;
  int32_t local_78;
  LPVOID local_70;
  int32_t local_68;
  UINT local_60 [14];
  
  if ((param_1 == (longlong *)0x0) || (*param_1 != 0)) {
    return 4;
  }
  puVar3 = (int32_t *)operator_new(0x30);
  lVar1 = *(longlong *)(param_2 + 8);
  if (lVar1 == 0) {
    pcVar5 = "";
  }
  else {
    pcVar5 = *(char **)(lVar1 + 0x28);
    if (pcVar5 == (char *)0x0) {
      pcVar5 = (char *)(lVar1 + 0x30);
    }
  }
  std::_Lockit::_Lockit(local_c8,0);
  local_c0 = (LPVOID)0x0;
  local_b8 = 0;
  local_b0 = (LPVOID)0x0;
  local_a8 = 0;
  local_a0 = (LPVOID)0x0;
  local_98 = 0;
  local_90 = (LPVOID)0x0;
  local_88 = 0;
  local_80 = (LPVOID)0x0;
  local_78 = 0;
  local_70 = (LPVOID)0x0;
  local_68 = 0;
  if (pcVar5 != (char *)0x0) {
    std::_Locinfo::_Locinfo_ctor((_Locinfo *)local_c8,pcVar5);
    *(int32_t *)(puVar3 + 1) = 0;
    *puVar3 = std::numpunct<char>::vftable;
    FUN_18012d604();
    FUN_180124904(local_60);
    puVar3[2] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar4 = (int32_t *)_calloc_base(1,1);
    if (puVar4 == (int32_t *)0x0) goto LAB_1800b5e96;
    *puVar4 = 0;
    puVar3[2] = puVar4;
    pcVar5 = (char *)_calloc_base(6,1);
    if (pcVar5 == (char *)0x0) {
      FUN_1801232f8();
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return uVar7;
    }
    *(int32_t *)pcVar5 = s_false_1801874e0._0_4_;
    *(int32_t *)(pcVar5 + 4) = s_false_1801874e0._4_2_;
    puVar3[4] = pcVar5;
    puVar6 = (int32_t *)_calloc_base(5,1);
    if (puVar6 != (int32_t *)0x0) {
      *puVar6 = _DAT_1801874e8;
      *(int32_t *)(puVar6 + 1) = DAT_1801874ec;
      puVar3[5] = puVar6;
      *(int32_t *)(puVar3 + 3) = 0x2c2e;
      *param_1 = (longlong)puVar3;
      std::_Locinfo::_Locinfo_dtor((_Locinfo *)local_c8);
      if (local_70 != (LPVOID)0x0) {
        FUN_18012d5e8(local_70);
      }
      local_70 = (LPVOID)0x0;
      if (local_80 != (LPVOID)0x0) {
        FUN_18012d5e8(local_80);
      }
      local_80 = (LPVOID)0x0;
      if (local_90 != (LPVOID)0x0) {
        FUN_18012d5e8(local_90);
      }
      local_90 = (LPVOID)0x0;
      if (local_a0 != (LPVOID)0x0) {
        FUN_18012d5e8(local_a0);
      }
      local_a0 = (LPVOID)0x0;
      if (local_b0 != (LPVOID)0x0) {
        FUN_18012d5e8(local_b0);
      }
      local_b0 = (LPVOID)0x0;
      if (local_c0 != (LPVOID)0x0) {
        FUN_18012d5e8(local_c0);
      }
      local_c0 = (LPVOID)0x0;
      std::_Lockit::~_Lockit(local_c8);
      return 4;
    }
    FUN_1801232f8();
  }
  FUN_180123380(0x1801874f0);
LAB_1800b5e96:
  FUN_1801232f8();
  pcVar2 = (code *)swi(3);
  uVar7 = (*pcVar2)();
  return uVar7;
}

// ---- Function: FUN_1800b5eb0 ----
int32_t * FUN_1800b5eb0(int32_t *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad cast";
  *param_1 = std::bad_cast::vftable;
  return param_1;
}

// ---- Function: FUN_1800b5f00 ----
int32_t * FUN_1800b5f00(int32_t *param_1,uint param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_18012d5e8(param_1);
  }
  return param_1;
}

// ---- Function: FUN_1800b5f50 ----
int32_t * FUN_1800b5f50(int32_t *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy((longlong *)(param_2 + 8),param_1 + 1);
  *param_1 = std::bad_cast::vftable;
  return param_1;
}

// ---- Function: FUN_1800b5f90 ----
void FUN_1800b5f90(void)

{
  code *pcVar1;
  longlong local_28 [5];
  
  FUN_1800b5eb0(local_28);
  FUN_1801279a8(local_28,&DAT_1801e8df8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// ---- Function: FUN_1800b5fd0 ----
longlong * FUN_1800b5fd0(longlong param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *local_res8;
  _Lockit local_res10 [8];
  longlong *local_res18 [2];
  
  std::_Lockit::_Lockit(local_res10,0);
  plVar5 = DAT_1801f39c0;
  local_res18[0] = DAT_1801f39c0;
  if (DAT_1801fb338 == 0) {
    std::_Lockit::_Lockit((_Lockit *)&local_res8,0);
    if (DAT_1801fb338 == 0) {
      DAT_1801ed228 = DAT_1801ed228 + 1;
      DAT_1801fb338 = (ulonglong)DAT_1801ed228;
    }
    std::_Lockit::~_Lockit((_Lockit *)&local_res8);
  }
  uVar2 = DAT_1801fb338;
  lVar3 = *(longlong *)(param_1 + 8);
  lVar4 = DAT_1801fb338 * 8;
  if (DAT_1801fb338 < *(ulonglong *)(lVar3 + 0x18)) {
    plVar6 = *(longlong **)(lVar4 + *(longlong *)(lVar3 + 0x10));
    if (plVar6 != (longlong *)0x0) goto LAB_1800b60c3;
  }
  else {
    plVar6 = (longlong *)0x0;
  }
  if (*(char *)(lVar3 + 0x24) == '\0') {
LAB_1800b607c:
    if (plVar6 != (longlong *)0x0) goto LAB_1800b60c3;
  }
  else {
    lVar3 = FUN_180124540();
    if (uVar2 < *(ulonglong *)(lVar3 + 0x18)) {
      plVar6 = *(longlong **)(lVar4 + *(longlong *)(lVar3 + 0x10));
      goto LAB_1800b607c;
    }
  }
  plVar6 = plVar5;
  if (plVar5 == (longlong *)0x0) {
    lVar4 = FUN_1800b5c80((longlong *)local_res18,param_1);
    plVar6 = local_res18[0];
    if (lVar4 == -1) {
      FUN_1800b5f90();
      pcVar1 = (code *)swi(3);
      plVar5 = (longlong *)(*pcVar1)();
      return plVar5;
    }
    local_res8 = local_res18[0];
    FUN_180124504(local_res18[0]);
    (**(code **)(*plVar6 + 8))(plVar6);
    DAT_1801f39c0 = plVar6;
  }
LAB_1800b60c3:
  std::_Lockit::~_Lockit(local_res10);
  return plVar6;
}

// ---- Function: FUN_1800b60f0 ----
void FUN_1800b60f0(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  UNLOCK();
  return;
}

// ---- Function: FUN_1800b6100 ----
longlong FUN_1800b6100(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 8);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  lVar2 = 0;
  if (*piVar1 == 0) {
    lVar2 = param_1;
  }
  return lVar2;
}

// ---- Function: FUN_1800b6110 ----
int32_t * FUN_1800b6110(int32_t *param_1,ulonglong param_2)

{
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_18012d5e8(param_1);
  }
  return param_1;
}

// ---- Function: FUN_1800b6140 ----
void FUN_1800b6140(longlong param_1)

{
  int32_t *puVar1;
  
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
    puVar1 = (int32_t *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    if (puVar1 != (int32_t *)0x0) {
                    
                    
      (**(code **)*puVar1)(puVar1,1,*(code **)*puVar1);
      return;
    }
  }
  return;
}

// ---- Function: FUN_1800b6180 ----
int32_t *
FUN_1800b6180(int32_t *param_1,int32_t *param_2,int32_t *param_3,int32_t *param_4)

{
  int32_t uVar1;
  
  if (param_2 == param_3) {
    *param_1 = param_4;
  }
  else {
    do {
      uVar1 = *param_2;
      if ((ulonglong)param_4[3] < param_4[2] + 1) {
        (**(code **)*param_4)(param_4);
      }
      param_2 = param_2 + 1;
      *(int32_t *)(param_4[2] + param_4[1]) = uVar1;
      param_4[2] = param_4[2] + 1;
    } while (param_2 != param_3);
    *param_1 = param_4;
  }
  return param_1;
}

// ---- Function: FUN_1800b6210 ----
int32_t * FUN_1800b6210(longlong *param_1,int32_t *param_2,int32_t *param_3)

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
  
  if (*(int *)param_1[2] < 0) {
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
    if (*(char *)(param_1[1] + 10) != '\x03') goto LAB_1800b62be;
    if ((ulonglong)param_3[3] < param_3[2] + 1) {
      (**(code **)*param_3)(param_3);
    }
    *(int32_t *)(param_3[1] + param_3[2]) = 0x20;
  }
  param_3[2] = param_3[2] + 1;
LAB_1800b62be:
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

// ---- Function: FUN_1800b6450 ----
void FUN_1800b6450(longlong *param_1,int32_t *param_2,ulonglong param_3,longlong *param_4,
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
  uint uVar14;
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
  uint local_178 [2];
  int local_170 [2];
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
  local_178[0] = (uint)param_3;
  iVar7 = 0;
  cVar13 = (char)param_4[1];
  local_168 = param_1;
  if (cVar13 == 'c') {
    if (0xff < local_178[0] + 0x80) {
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
    else if (cStack_b0 != '?') {
      local_198 = (char *)*param_4;
      p_Stack_190 = (_Locimp *)param_4[1];
      local_188 = (int32_t)param_4[2];
      FUN_1800b3b10(param_1,param_2,param_3,(int *)&local_198,param_5);
      goto LAB_1800b68f2;
    }
    local_148 = *param_4;
    lStack_140 = param_4[1];
    local_138 = (int32_t)param_4[2];
    local_198 = local_1a8;
    p_Stack_190 = (_Locimp *)0x1;
    FUN_1800b4bf0(param_1,param_2,(longlong *)&local_198,(int *)&local_148,0x27);
    goto LAB_1800b68f2;
  }
  if (*(char *)((longlong)param_4 + 10) == '\0') {
    *(int32_t *)((longlong)param_4 + 10) = 2;
  }
  uVar14 = 10;
  if (cVar13 == 'B') {
LAB_1800b65b6:
    uVar14 = 2;
  }
  else if (cVar13 == 'X') {
LAB_1800b65a8:
    uVar14 = 0x10;
  }
  else {
    if (cVar13 == 'b') goto LAB_1800b65b6;
    if (cVar13 == 'o') {
      uVar14 = 8;
    }
    else if (cVar13 == 'x') goto LAB_1800b65a8;
  }
  FUN_1800b5650((longlong *)&local_198,(int32_t *)&local_98,&local_57,local_178[0],uVar14);
  pcVar12 = local_198;
  local_160 = &local_98;
  local_19c = (int)local_198 - (int)local_160;
  if ((int)local_178[0] < 0) {
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
  iVar17 = 0;
  if (*(char *)((longlong)param_4 + 0xb) != '\0') {
    cVar13 = (char)param_4[1];
    if (cVar13 == 'B') {
      local_198 = "0B";
LAB_1800b66bb:
      iVar18 = 2;
      p_Stack_190 = (_Locimp *)0x2;
    }
    else {
      if (cVar13 == 'X') {
        local_198 = "0X";
        goto LAB_1800b66bb;
      }
      if (cVar13 == 'b') {
        local_198 = "0b";
        goto LAB_1800b66bb;
      }
      if (cVar13 == 'o') {
        if (local_178[0] == 0) goto LAB_1800b666a;
        local_198 = "0";
        p_Stack_190 = (_Locimp *)0x1;
        iVar18 = 1;
      }
      else {
        if (cVar13 == 'x') {
          local_198 = "0x";
          goto LAB_1800b66bb;
        }
LAB_1800b666a:
        local_198 = (char *)0x0;
        p_Stack_190 = (_Locimp *)0x0;
        iVar18 = iVar7;
      }
    }
    local_158 = local_198;
    p_Stack_150 = p_Stack_190;
    local_19c = local_19c + iVar18;
  }
  local_170[0] = 0;
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
        goto LAB_1800b6aa3;
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
    uVar16 = (longlong)pcVar12 - (longlong)local_160;
    if ((local_c8 != 0) && ((ulonglong)(longlong)*(char *)ppppppcVar11 < uVar16)) {
      ppppppcVar3 = (char ******)((longlong)ppppppcVar11 + local_c8);
      iVar17 = iVar7;
      do {
        cVar13 = *(char *)ppppppcVar11;
        uVar16 = uVar16 - (longlong)cVar13;
        iVar17 = iVar17 + 1;
        ppppppcVar1 = (char ******)((longlong)ppppppcVar11 + 1);
        if (ppppppcVar1 != ppppppcVar3) {
          cVar13 = *(char *)ppppppcVar1;
          ppppppcVar11 = ppppppcVar1;
        }
      } while ((ulonglong)(longlong)cVar13 < uVar16);
    }
    local_19c = local_19c + iVar17;
    local_170[0] = iVar17;
  }
  if ((*(char *)((longlong)param_4 + 0xd) == '\0') || (*(char *)((longlong)param_4 + 9) != '\0')) {
    local_1a0[0] = '\0';
  }
  else {
    local_1a0[0] = '\x01';
  }
  local_128 = pcVar12;
  local_118 = local_178;
  local_110 = &local_158;
  local_108 = local_1a0;
  local_100 = &local_19c;
  local_f8 = local_170;
  local_f0 = &local_160;
  local_e0 = &param_5;
  local_120 = param_4;
  local_e8 = (char *****)&local_d8;
  if (local_1a0[0] == '\0') {
    cVar13 = *(char *)((longlong)param_4 + 9);
    if (cVar13 == '\0') {
      cVar13 = '\x02';
    }
    iVar17 = (int)*param_4;
    iVar18 = iVar7;
    if (local_19c < iVar17) {
      if (cVar13 != '\x01') {
        iVar18 = 0;
        if (cVar13 == '\x02') {
          iVar7 = iVar17 - local_19c;
        }
        else if (cVar13 == '\x03') {
          iVar7 = (iVar17 - local_19c) / 2;
          iVar18 = (iVar17 - iVar7) - local_19c;
        }
        goto LAB_1800b6967;
      }
      iVar18 = iVar17 - local_19c;
      pcVar15 = (char *)(ulonglong)*(byte *)((longlong)param_4 + 0xe);
    }
    else {
LAB_1800b6967:
      pcVar15 = (char *)(ulonglong)*(byte *)((longlong)param_4 + 0xe);
      pcVar2 = (char *)((longlong)param_4 + 0xf);
      local_198 = pcVar15;
      if (0 < iVar7) {
        pcVar4 = pcVar15 + (longlong)pcVar2;
        pcVar6 = pcVar2;
        do {
          for (; local_198 = pcVar15, pcVar6 != pcVar4; pcVar6 = pcVar6 + 1) {
            cVar13 = *pcVar6;
            if ((ulonglong)param_2[3] < param_2[2] + 1) {
              (**(code **)*param_2)(param_2);
            }
            *(char *)(param_2[2] + param_2[1]) = cVar13;
            param_2[2] = param_2[2] + 1;
            pcVar15 = local_198;
          }
          iVar7 = iVar7 + -1;
          pcVar6 = pcVar2;
        } while (0 < iVar7);
      }
    }
    pcVar12 = (char *)((longlong)param_4 + 0xf);
    plVar9 = FUN_1800b6210((longlong *)&local_128,&local_198,param_2);
    puVar10 = (int32_t *)*plVar9;
    if (0 < iVar18) {
      pcVar2 = pcVar12;
      do {
        for (; pcVar2 != pcVar15 + (longlong)pcVar12; pcVar2 = pcVar2 + 1) {
          cVar13 = *pcVar2;
          if ((ulonglong)puVar10[3] < puVar10[2] + 1) {
            (**(code **)*puVar10)(puVar10);
          }
          *(char *)(puVar10[2] + puVar10[1]) = cVar13;
          puVar10[2] = puVar10[2] + 1;
        }
        iVar18 = iVar18 + -1;
        pcVar2 = pcVar12;
      } while (0 < iVar18);
    }
    *local_168 = (longlong)puVar10;
    if (uStack_c0 < 0x10) goto LAB_1800b68f2;
    ppppppcVar11 = (char ******)local_d8;
    if (0xfff < uStack_c0 + 1) {
      ppppppcVar11 = (char ******)local_d8[-1];
      pcVar12 = (char *)((longlong)local_d8 + (-8 - (longlong)ppppppcVar11));
      goto joined_r0x0001800b6a78;
    }
  }
  else {
    FUN_1800b6210((longlong *)&local_128,local_168,param_2);
    if (uStack_c0 < 0x10) goto LAB_1800b68f2;
    ppppppcVar11 = (char ******)local_d8;
    if (0xfff < uStack_c0 + 1) {
      ppppppcVar11 = (char ******)local_d8[-1];
      pcVar12 = (char *)((longlong)local_d8 + (-8 - (longlong)ppppppcVar11));
joined_r0x0001800b6a78:
      if ((char *)0x1f < pcVar12) {
LAB_1800b6aa3:
        FUN_18012b7b4();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  thunk_FUN_18012d5e8(ppppppcVar11);
LAB_1800b68f2:
  FUN_1801252c0(local_48 ^ (ulonglong)auStackY_1d8);
  return;
}

// ---- Function: FUN_1800b6ac0 ----
longlong * FUN_1800b6ac0(int32_t *param_1,longlong *param_2,longlong *param_3)

{
  code *pcVar1;
  longlong *plVar2;
  int32_t *puVar3;
  byte local_res8 [8];
  byte *local_68;
  longlong lStack_60;
  int32_t local_58;
  int32_t local_48;
  int32_t uStack_47;
  int32_t uStack_46;
  int32_t uStack_45;
  int32_t uStack_44;
  int32_t uStack_43;
  int32_t uStack_42;
  int32_t uStack_41;
  char cStack_40;
  int32_t uStack_3f;
  int32_t uStack_3e;
  int32_t uStack_3d;
  int32_t uStack_3c;
  int32_t uStack_3b;
  int32_t uStack_3a;
  int32_t uStack_39;
  int32_t local_38;
  int32_t local_28;
  int32_t uStack_27;
  int32_t uStack_26;
  int32_t uStack_25;
  int32_t uStack_24;
  int32_t uStack_23;
  int32_t uStack_22;
  int32_t uStack_21;
  char cStack_20;
  int32_t uStack_1f;
  int32_t uStack_1e;
  int32_t uStack_1d;
  int32_t uStack_1c;
  int32_t uStack_1b;
  int32_t uStack_1a;
  int32_t uStack_19;
  int32_t local_18;
  
  switch(*param_1) {
  case 0:
    *param_2 = *(longlong *)*param_3;
    break;
  case 1:
    puVar3 = (int32_t *)param_3[1];
    local_68 = (byte *)*puVar3;
    lStack_60 = puVar3[1];
    local_58 = *(int32_t *)(puVar3 + 2);
    FUN_1800b6450(param_2,*(int32_t **)*param_3,(ulonglong)*(uint *)(param_1 + 8),
                  (longlong *)&local_68,((int32_t *)*param_3)[3]);
    break;
  case 2:
    puVar3 = (int32_t *)param_3[1];
    local_68 = (byte *)*puVar3;
    lStack_60 = puVar3[1];
    local_58 = *(int32_t *)(puVar3 + 2);
    FUN_1800ac410(param_2,*(int32_t **)*param_3,(ulonglong)*(uint *)(param_1 + 8),
                  (longlong *)&local_68,((int32_t *)*param_3)[3]);
    break;
  case 3:
    puVar3 = (int32_t *)param_3[1];
    local_68 = (byte *)*puVar3;
    lStack_60 = puVar3[1];
    local_58 = *(int32_t *)(puVar3 + 2);
    FUN_1800acef0(param_2,*(int32_t **)*param_3,*(ulonglong *)(param_1 + 8),(longlong *)&local_68
                  ,((int32_t *)*param_3)[3]);
    break;
  case 4:
    puVar3 = (int32_t *)param_3[1];
    local_68 = (byte *)*puVar3;
    lStack_60 = puVar3[1];
    local_58 = *(int32_t *)(puVar3 + 2);
    FUN_1800ad560(param_2,*(int32_t **)*param_3,*(ulonglong *)(param_1 + 8),(longlong *)&local_68
                  ,((int32_t *)*param_3)[3]);
    break;
  case 5:
    puVar3 = (int32_t *)param_3[1];
    local_68 = (byte *)*puVar3;
    lStack_60 = puVar3[1];
    local_58 = *(int32_t *)(puVar3 + 2);
    FUN_1800adbb0(param_2,*(int32_t **)*param_3,(ulonglong)(byte)param_1[8],(longlong *)&local_68
                  ,((int32_t *)*param_3)[3]);
    break;
  case 6:
    puVar3 = (int32_t *)param_3[1];
    local_res8[0] = param_1[8];
    local_48 = *(int32_t *)puVar3;
    uStack_47 = *(int32_t *)((longlong)puVar3 + 1);
    uStack_46 = *(int32_t *)((longlong)puVar3 + 2);
    uStack_45 = *(int32_t *)((longlong)puVar3 + 3);
    uStack_44 = *(int32_t *)((longlong)puVar3 + 4);
    uStack_43 = *(int32_t *)((longlong)puVar3 + 5);
    uStack_42 = *(int32_t *)((longlong)puVar3 + 6);
    uStack_41 = *(int32_t *)((longlong)puVar3 + 7);
    local_68 = (byte *)*puVar3;
    cStack_40 = *(char *)(puVar3 + 1);
    uStack_3f = *(int32_t *)((longlong)puVar3 + 9);
    uStack_3e = *(int32_t *)((longlong)puVar3 + 10);
    uStack_3d = *(int32_t *)((longlong)puVar3 + 0xb);
    uStack_3c = *(int32_t *)((longlong)puVar3 + 0xc);
    uStack_3b = *(int32_t *)((longlong)puVar3 + 0xd);
    uStack_3a = *(int32_t *)((longlong)puVar3 + 0xe);
    uStack_39 = *(int32_t *)((longlong)puVar3 + 0xf);
    lStack_60 = puVar3[1];
    local_58 = *(int32_t *)(puVar3 + 2);
    puVar3 = *(int32_t **)*param_3;
    local_28 = local_48;
    uStack_27 = uStack_47;
    uStack_26 = uStack_46;
    uStack_25 = uStack_45;
    uStack_24 = uStack_44;
    uStack_23 = uStack_43;
    uStack_22 = uStack_42;
    uStack_21 = uStack_41;
    cStack_20 = cStack_40;
    uStack_1f = uStack_3f;
    uStack_1e = uStack_3e;
    uStack_1d = uStack_3d;
    uStack_1c = uStack_3c;
    uStack_1b = uStack_3b;
    uStack_1a = uStack_3a;
    uStack_19 = uStack_39;
    local_18 = local_58;
    if ((cStack_40 == '\0') || (cStack_40 == 'c')) {
      if (cStack_40 != '?') {
        local_68 = local_res8;
        lStack_60 = 1;
        plVar2 = (longlong *)&local_28;
        goto LAB_1800b6cb9;
      }
    }
    else if (cStack_40 != '?') {
      FUN_1800b3b10(param_2,puVar3,(ulonglong)local_res8[0],(int *)&local_68,
                    ((int32_t *)*param_3)[3]);
      return param_2;
    }
    local_68 = local_res8;
    lStack_60 = 1;
    local_38 = local_58;
    FUN_1800b4bf0(param_2,puVar3,(longlong *)&local_68,(int *)&local_48,0x27);
    break;
  case 7:
    FUN_1800af970(param_2,*(int32_t **)*param_3,*(float *)(param_1 + 8),(int *)param_3[1],
                  ((int32_t *)*param_3)[3]);
    break;
  case 8:
    FUN_1800affe0(param_2,*(char **)*param_3,*(double *)(param_1 + 8),(int *)param_3[1],
                  ((int32_t *)*param_3)[3]);
    break;
  case 9:
    FUN_1800affe0(param_2,*(char **)*param_3,*(double *)(param_1 + 8),(int *)param_3[1],
                  ((int32_t *)*param_3)[3]);
    break;
  case 10:
    FUN_1800b37b0(param_2,*(int32_t **)*param_3,*(ulonglong *)(param_1 + 8),(int *)param_3[1]);
    break;
  case 0xb:
    local_68 = *(byte **)(param_1 + 8);
    lStack_60 = -1;
    do {
      lStack_60 = lStack_60 + 1;
    } while (local_68[lStack_60] != 0);
    plVar2 = (longlong *)param_3[1];
    puVar3 = *(int32_t **)*param_3;
    goto LAB_1800b6cb9;
  case 0xc:
    local_68 = *(byte **)(param_1 + 8);
    lStack_60 = *(longlong *)(param_1 + 0x10);
    plVar2 = (longlong *)param_3[1];
    puVar3 = *(int32_t **)*param_3;
LAB_1800b6cb9:
    FUN_1800b5450(param_2,puVar3,(longlong *)&local_68,plVar2);
    break;
  case 0xd:
    FUN_1800b3990();
    pcVar1 = (code *)swi(3);
    plVar2 = (longlong *)(*pcVar1)();
    return plVar2;
  default:
    FUN_18012b7b4();
    pcVar1 = (code *)swi(3);
    plVar2 = (longlong *)(*pcVar1)();
    return plVar2;
  }
  return param_2;
}

// ---- Function: FUN_1800b6df0 ----
void FUN_1800b6df0(longlong param_1,byte *param_2,longlong *param_3)

{
  longlong *plVar1;
  byte bVar2;
  int32_t *puVar3;
  code *pcVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  byte *pbVar8;
  int32_t auStack_108 [32];
  longlong local_e8;
  byte local_e0;
  int32_t uStack_df;
  int32_t uStack_d8;
  code *local_d0;
  int32_t *local_c8;
  longlong *local_c0;
  longlong *plStack_b8;
  longlong local_b0;
  longlong *local_a8;
  longlong *local_a0;
  int32_t *local_98;
  int32_t local_88 [8];
  int32_t uStack_80;
  code *local_78;
  int32_t local_68;
  int32_t uStack_60;
  int32_t uStack_5c;
  int32_t uStack_5a;
  int32_t uStack_58;
  int32_t uStack_56;
  int32_t uStack_55;
  ulonglong local_48;
  
  local_48 = DAT_1801eb080 ^ (ulonglong)auStack_108;
  pbVar8 = (byte *)(param_1 + 1);
  if (pbVar8 == param_2) goto LAB_1800b714c;
  bVar2 = *pbVar8;
  if (bVar2 == 0x7d) {
    uVar7 = param_3[3];
    if ((longlong)uVar7 < 0) {
LAB_1800b7173:
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
    if (local_e0 == 0xd) {
      lVar6 = *param_3 - (longlong)pbVar8;
      *param_3 = (longlong)pbVar8;
LAB_1800b6fc0:
      param_3[1] = param_3[1] + lVar6;
    }
  }
  else {
    if (bVar2 == 0x7b) {
      puVar3 = (int32_t *)param_3[4];
      for (; pbVar8 != (byte *)(param_1 + 2); pbVar8 = pbVar8 + 1) {
        bVar2 = *pbVar8;
        if ((ulonglong)puVar3[3] < puVar3[2] + 1) {
          (**(code **)*puVar3)(puVar3);
        }
        *(byte *)(puVar3[2] + puVar3[1]) = bVar2;
        puVar3[2] = puVar3[2] + 1;
      }
      param_3[4] = (longlong)puVar3;
      goto LAB_1800b7114;
    }
    if (bVar2 == 0x3a) {
      uVar7 = param_3[3];
      if ((longlong)uVar7 < 0) goto LAB_1800b7173;
      lVar6 = uVar7 + 1;
    }
    else {
      if (9 < (byte)(bVar2 - 0x30)) {
LAB_1800b714c:
        FUN_1800b7ac0(0x1801878a0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar5 = 0;
      if (bVar2 == 0x30) {
        pbVar8 = (byte *)(param_1 + 2);
      }
      else {
        do {
          if (0xccccccc < uVar5) goto LAB_1800b7166;
          bVar2 = *pbVar8;
          pbVar8 = pbVar8 + 1;
          uVar5 = ((int)(char)bVar2 + uVar5 * 10) - 0x30;
        } while (((pbVar8 != param_2) && ('/' < (char)*pbVar8)) && ((char)*pbVar8 < ':'));
        if (0x7fffffff < uVar5) {
LAB_1800b7166:
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
    FUN_1800ab850((longlong)(param_3 + 4),(int32_t *)&local_e0,uVar7);
    if (local_e0 == 0) goto LAB_1800b7180;
    if (local_e0 == 0xd) {
      lVar6 = *param_3 - (longlong)pbVar8;
      *param_3 = (longlong)pbVar8;
      goto LAB_1800b6fc0;
    }
  }
  local_c0 = (longlong *)param_3[5];
  plStack_b8 = (longlong *)param_3[6];
  local_c8 = (int32_t *)param_3[4];
  local_68 = CONCAT71(uStack_df,local_e0);
  local_b0 = param_3[7];
  uStack_60 = (int32_t)uStack_d8;
  uStack_5c = (int32_t)((ulonglong)uStack_d8 >> 0x20);
  uStack_5a = (int32_t)((ulonglong)uStack_d8 >> 0x30);
  uStack_58 = SUB82(local_d0,0);
  uStack_56 = (int32_t)((ulonglong)local_d0 >> 0x10);
  uStack_55 = (int32_t)((ulonglong)local_d0 >> 0x18);
  local_a8 = param_3;
  FUN_1800aad80((int32_t *)&local_68,&local_e8,(longlong *)&local_c8);
  param_3[4] = local_e8;
LAB_1800b7114:
  FUN_1801252c0(local_48 ^ (ulonglong)auStack_108);
  return;
}

// ---- Function: FUN_1800b71b0 ----
void FUN_1800b71b0(longlong *param_1,longlong *param_2)

{
  int32_t (*pauVar1) [32];
  int32_t uVar2;
  int32_t *puVar3;
  code *pcVar4;
  int32_t (*pauVar5) [32];
  int32_t (*pauVar6) [32];
  int32_t (*pauVar7) [32];
  int32_t (*pauVar8) [32];
  
  pauVar7 = (int32_t (*) [32])*param_1;
  pauVar8 = (int32_t (*) [32])(*pauVar7 + param_1[1]);
  do {
    if (pauVar7 == pauVar8) {
      return;
    }
    pauVar5 = pauVar7;
    if ((*pauVar7)[0] != '{') {
      pauVar5 = thunk_FUN_180123d80(pauVar7,pauVar8,0x7b);
      while( true ) {
        pauVar6 = thunk_FUN_180123d80(pauVar7,pauVar5,0x7d);
        if (pauVar6 == pauVar5) break;
        pauVar1 = (int32_t (*) [32])(*pauVar6 + 1);
        if ((pauVar1 == pauVar5) || ((*pauVar1)[0] != '}')) {
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
        param_2[4] = (longlong)puVar3;
        pauVar7 = (int32_t (*) [32])(*pauVar6 + 2);
      }
      puVar3 = (int32_t *)param_2[4];
      for (; pauVar7 != pauVar5; pauVar7 = (int32_t (*) [32])(*pauVar7 + 1)) {
        uVar2 = (*pauVar7)[0];
        if ((ulonglong)puVar3[3] < puVar3[2] + 1) {
          (**(code **)*puVar3)(puVar3);
        }
        *(int32_t *)(puVar3[2] + puVar3[1]) = uVar2;
        puVar3[2] = puVar3[2] + 1;
      }
      param_2[4] = (longlong)puVar3;
      if (pauVar5 == pauVar8) {
        return;
      }
    }
    pauVar7 = (int32_t (*) [32])FUN_1800b6df0((longlong)pauVar5,(byte *)pauVar8,param_2);
  } while( true );
}

// ---- Function: FUN_1800b7330 ----
void FUN_1800b7330(void)

{
  code *pcVar1;
  
  FUN_18012335c(0x180187918);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

