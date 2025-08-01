#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_1800e0440 ----
void FUN_1800e0440(ulonglong param_1,void *param_2,int *param_3,longlong *param_4)

{
  float fVar1;
  char cVar2;
  int32_t *puVar3;
  size_t _Size;
  char cVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  ulonglong uVar8;
  size_t sVar9;
  longlong *_Buf1;
  int32_t ****ppppuVar10;
  int32_t uVar11;
  longlong *plVar12;
  longlong lVar13;
  code *pcVar14;
  int32_t *puVar15;
  char **ppcVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  bool bVar21;
  float fVar22;
  float fVar23;
  int32_t auStack_118 [32];
  char *local_f8;
  int32_t uStack_f0;
  char *local_e8;
  int32_t uStack_e0;
  longlong *local_d8;
  ulonglong local_c8;
  ulonglong *local_c0;
  int *local_b8;
  ulonglong local_a8;
  ulonglong *local_a0;
  int32_t ***local_98 [3];
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  
  local_68 = DAT_1801eb080 ^ (ulonglong)auStack_118;
  local_d8 = param_4;
  local_c8 = param_1;
  local_b8 = param_3;
  pcVar6 = (char *)(**(code **)(DAT_1801f3ae0 + 8))();
  local_f8 = pcVar6;
  fVar22 = (float)(**(code **)(DAT_1801f3ae0 + 0x200))();
  fVar1 = *(float *)(pcVar6 + 0x54);
  fVar23 = (float)(**(code **)(DAT_1801f3ae0 + 0x2f8))();
  iVar17 = 0;
  puVar3 = (int32_t *)*param_4;
  uVar18 = param_4[1] - (longlong)puVar3 >> 5;
  if (uVar18 != 0) {
    uVar8 = 0;
    puVar15 = puVar3;
    if (uVar18 == 0) {
LAB_1800e0902:
      FUN_1800ddc20();
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    do {
      pcVar7 = (char *)(puVar3 + uVar8 * 4);
      if (0xf < (ulonglong)puVar15[3]) {
        pcVar7 = (char *)*puVar15;
      }
      lVar13 = (longlong)param_2 - (longlong)pcVar7;
      do {
        cVar4 = *pcVar7;
        cVar2 = pcVar7[lVar13];
        if (cVar4 != cVar2) break;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      if (cVar4 == cVar2) {
        *param_3 = iVar17;
        break;
      }
      iVar17 = iVar17 + 1;
      puVar15 = puVar15 + 4;
      uVar8 = (ulonglong)iVar17;
    } while (uVar8 < uVar18);
  }
  (**(code **)(DAT_1801f3ae0 + 0x1e8))((fVar22 - (fVar1 + fVar1)) - (fVar23 + fVar23));
  local_78 = 0xb000000000000000;
  local_a8 = 1;
  local_a0 = &local_78;
  local_e8 = "##arrow_combo_{}";
  uStack_e0 = 0x10;
  local_70 = param_1;
  FUN_1800b7670((longlong *)local_98,(longlong *)&local_e8,&local_a8);
  ppppuVar10 = local_98;
  if (0xf < local_80) {
    ppppuVar10 = (int32_t ****)local_98[0];
  }
  ppcVar16 = *(char ***)(DAT_1801f3ae0 + 0x3f0);
  cVar4 = (*(code *)ppcVar16)(ppppuVar10,param_2,0x20);
  FUN_1800a6800((longlong *)local_98);
  if (cVar4 != '\0') {
    iVar17 = 0;
    lVar13 = param_4[1];
    lVar19 = *param_4;
    if (lVar13 - lVar19 >> 5 != 0) {
      local_78 = 0;
      lVar20 = 0;
      do {
        plVar12 = (longlong *)(lVar20 + lVar19);
        sVar9 = 0xffffffffffffffff;
        do {
          sVar9 = sVar9 + 1;
        } while (*(char *)((longlong)param_2 + sVar9) != '\0');
        _Size = plVar12[2];
        uVar18 = plVar12[3];
        _Buf1 = plVar12;
        if (0xf < uVar18) {
          _Buf1 = (longlong *)*plVar12;
        }
        if (_Size == sVar9) {
          if (_Size == 0) {
            bVar21 = true;
          }
          else {
            iVar5 = memcmp(_Buf1,param_2,_Size);
            bVar21 = iVar5 == 0;
            uVar18 = plVar12[3];
          }
        }
        else {
          bVar21 = false;
        }
        uVar8 = local_78;
        local_e8 = (char *)0x0;
        if ((ulonglong)(lVar13 - lVar19 >> 5) <= local_78) {
          FUN_1800ddc20();
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        if (0xf < uVar18) {
          plVar12 = (longlong *)*plVar12;
        }
        ppcVar16 = &local_e8;
        cVar4 = (**(code **)(DAT_1801f3ae0 + 0x5f0))(plVar12,bVar21,0);
        plVar12 = local_d8;
        if (cVar4 != '\0') {
          *local_b8 = iVar17;
          lVar13 = *local_d8;
          if ((ulonglong)(local_d8[1] - lVar13 >> 5) <= (ulonglong)(longlong)iVar17)
          goto LAB_1800e0902;
          param_2 = (void *)((longlong)iVar17 * 0x20 + lVar13);
          if (0xf < *(ulonglong *)(lVar13 + 0x18 + lVar20)) {
            param_2 = *(void **)(lVar13 + lVar20);
          }
        }
        if (bVar21 != false) {
          (**(code **)(DAT_1801f3ae0 + 0x8a0))();
        }
        iVar17 = iVar17 + 1;
        local_78 = uVar8 + 1;
        lVar20 = lVar20 + 0x20;
        lVar13 = plVar12[1];
        lVar19 = *plVar12;
        param_4 = local_d8;
        param_1 = local_c8;
      } while ((ulonglong)(longlong)iVar17 < (ulonglong)(lVar13 - lVar19 >> 5));
    }
    (**(code **)(DAT_1801f3ae0 + 0x3f8))();
    param_3 = local_b8;
    pcVar6 = local_f8;
  }
  (**(code **)(DAT_1801f3ae0 + 0x1f0))();
  (**(code **)(DAT_1801f3ae0 + 0x2a0))(0,fVar1);
  local_a8 = 0xb000000000000000;
  local_c8 = 1;
  local_c0 = &local_a8;
  local_f8 = "##arrow_combo_l_{}";
  uStack_f0 = 0x12;
  local_a0 = (ulonglong *)param_1;
  FUN_1800b7670((longlong *)local_98,(longlong *)&local_f8,&local_c8);
  ppppuVar10 = local_98;
  if (0xf < local_80) {
    ppppuVar10 = (int32_t ****)local_98[0];
  }
  cVar4 = (**(code **)(DAT_1801f3ae0 + 0x3a0))(ppppuVar10,0);
  FUN_1800a6800((longlong *)local_98);
  if ((cVar4 != '\0') && (*param_3 = *param_3 + -1, *param_3 < 0)) {
    *param_3 = (int)(param_4[1] - *param_4 >> 5) + -1;
  }
  (**(code **)(DAT_1801f3ae0 + 0x2a0))(0,fVar1);
  local_a8 = 0xb000000000000000;
  local_c8 = 1;
  local_c0 = &local_a8;
  local_f8 = "##arrow_combo_r_{}";
  uStack_f0 = 0x12;
  local_a0 = (ulonglong *)param_1;
  FUN_1800b7670((longlong *)local_98,(longlong *)&local_f8,&local_c8);
  ppppuVar10 = local_98;
  if (0xf < local_80) {
    ppppuVar10 = (int32_t ****)local_98[0];
  }
  pcVar14 = *(code **)(DAT_1801f3ae0 + 0x3a0);
  uVar11 = 1;
  cVar4 = (*pcVar14)(ppppuVar10);
  FUN_1800a6800((longlong *)local_98);
  if ((cVar4 != '\0') &&
     (*param_3 = *param_3 + 1,
     (ulonglong)(param_4[1] - *param_4 >> 5) <= (ulonglong)(longlong)*param_3)) {
    *param_3 = 0;
  }
  (**(code **)(DAT_1801f3ae0 + 0x2a0))(0,*(int32_t *)(pcVar6 + 0x54));
  FUN_1800c70b0(param_1,uVar11,pcVar14,ppcVar16);
  FUN_1801252c0(local_68 ^ (ulonglong)auStack_118);
  return;
}

// ---- Function: FUN_1800e0910 ----
void FUN_1800e0910(int32_t param_1)

{
  int32_t local_res10;
  int32_t local_res14;
  int32_t local_res18 [4];
  int32_t local_18;
  int32_t uStack_10;
  
  (**(code **)(DAT_1801f3ae0 + 0x880))(1);
  local_18 = _DAT_1801d9c80;
  uStack_10 = _UNK_1801d9c88;
  (**(code **)(DAT_1801f3ae0 + 0x1a0))(0x15,&local_18);
  local_18 = _DAT_1801d9c90;
  uStack_10 = _UNK_1801d9c98;
  (**(code **)(DAT_1801f3ae0 + 0x1a0))(0,&local_18);
  (**(code **)(DAT_1801f3ae0 + 0x118))(local_res18);
  local_res10 = local_res18[0];
  local_res14 = 0;
  (**(code **)(DAT_1801f3ae0 + 0x388))(param_1,&local_res10);
  (**(code **)(DAT_1801f3ae0 + 0x1a8))(2);
                    
                    
  (**(code **)(DAT_1801f3ae0 + 0x888))();
  return;
}

// ---- Function: FUN_1800e09f0 ----
void FUN_1800e09f0(int32_t param_1)

{
  longlong lVar1;
  code *pcVar2;
  int32_t uVar3;
  int32_t uVar4;
  float fVar5;
  float fVar6;
  float local_res10 [2];
  float local_res18 [4];
  
  lVar1 = (**(code **)(DAT_1801f3ae0 + 8))();
  uVar4 = 0;
  uVar3 = 0;
  (**(code **)(DAT_1801f3ae0 + 0x9a0))(local_res10,param_1,0,0,DAT_1801d8f38);
  fVar6 = *(float *)(lVar1 + 0x3c);
  pcVar2 = *(code **)(DAT_1801f3ae0 + 0x118);
  (*pcVar2)(local_res18);
  fVar6 = (local_res18[0] - (fVar6 + fVar6 + local_res10[0])) * DAT_1801d8e18;
  if (0.0 < fVar6) {
    fVar5 = (float)(**(code **)(DAT_1801f3ae0 + 0x268))();
    (**(code **)(DAT_1801f3ae0 + 0x280))(fVar5 + fVar6);
  }
  FUN_1800c70b0(param_1,pcVar2,uVar3,uVar4);
  return;
}

// ---- Function: FUN_1800e0ac0 ----
void FUN_1800e0ac0(void)

{
  LPCSTR **lpOutputString;
  int32_t auStack_88 [48];
  ulonglong local_58 [2];
  int32_t *local_48;
  int32_t local_40;
  LPCSTR *local_38 [3];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_1801eb080 ^ (ulonglong)auStack_88;
  if (DAT_1801ebe1c == 0) {
    DAT_1801f3b14 = 0;
    FUN_1801252c0(local_18 ^ (ulonglong)auStack_88);
    return;
  }
  if (DAT_1801ebe1c != 1) {
    if (DAT_1801ebe1c == 2) {
      DAT_1801f3b14 = 2;
    }
    local_58[0] = 0;
    local_58[1] = 0;
    local_48 = &DAT_1801d58cc;
    local_40 = 4;
    FUN_1800b7670((longlong *)local_38,(longlong *)&local_48,local_58);
    lpOutputString = local_38;
    if (0xf < local_20) {
      lpOutputString = (LPCSTR **)local_38[0];
    }
    OutputDebugStringA((LPCSTR)lpOutputString);
    FUN_1800a6800((longlong *)local_38);
    FUN_1801252c0(local_18 ^ (ulonglong)auStack_88);
    return;
  }
  DAT_1801f3b14 = 1;
  FUN_1801252c0(local_18 ^ (ulonglong)auStack_88);
  return;
}

// ---- Function: FUN_1800e0ba0 ----
void FUN_1800e0ba0(void)

{
  ulonglong *puVar1;
  char *pcVar2;
  int32_t uVar3;
  
  DAT_1801ec1b8 = DAT_1801ebe34;
  pcVar2 = (char *)((longlong)DAT_1801ebe34 * 0x20 + DAT_1801fca38);
  if (pcVar2 != s_Low__Vanilla__1801ec7f0) {
    puVar1 = (ulonglong *)(pcVar2 + 0x10);
    if (0xf < *(ulonglong *)(pcVar2 + 0x18)) {
      pcVar2 = *(char **)pcVar2;
    }
    FUN_1800de6e0((longlong *)s_Low__Vanilla__1801ec7f0,(int32_t *)pcVar2,*puVar1);
  }
  pcVar2 = (char *)((longlong)DAT_1801ebe18 * 0x20 + DAT_1801fca68);
  DAT_1801ec1b4 = DAT_1801ebe18;
  if (pcVar2 != s_Medium__1024__1801ec7b0) {
    puVar1 = (ulonglong *)(pcVar2 + 0x10);
    if (0xf < *(ulonglong *)(pcVar2 + 0x18)) {
      pcVar2 = *(char **)pcVar2;
    }
    FUN_1800de6e0((longlong *)s_Medium__1024__1801ec7b0,(int32_t *)pcVar2,*puVar1);
  }
  uVar3 = 0x100;
  if (DAT_1801ec1b4 != 0) {
    if (DAT_1801ec1b4 == 1) {
      DAT_1801ec198 = 0x200;
      goto LAB_1800e0c6d;
    }
    if (DAT_1801ec1b4 == 2) {
      DAT_1801ec198 = 0x400;
      goto LAB_1800e0c6d;
    }
    if (DAT_1801ec1b4 == 3) {
      DAT_1801ec198 = 0x800;
      goto LAB_1800e0c6d;
    }
    if (DAT_1801ec1b4 == 4) {
      DAT_1801ec198 = 0x1000;
      goto LAB_1800e0c6d;
    }
  }
  DAT_1801ec198 = 0x100;
LAB_1800e0c6d:
  pcVar2 = (char *)((longlong)DAT_1801ebe20 * 0x20 + DAT_1801fca68);
  DAT_1801ec1b0 = DAT_1801ebe20;
  if (pcVar2 != s_Medium__1024__1801ec790) {
    puVar1 = (ulonglong *)(pcVar2 + 0x10);
    if (0xf < *(ulonglong *)(pcVar2 + 0x18)) {
      pcVar2 = *(char **)pcVar2;
    }
    FUN_1800de6e0((longlong *)s_Medium__1024__1801ec790,(int32_t *)pcVar2,*puVar1);
  }
  if (DAT_1801ec1b0 != 0) {
    if (DAT_1801ec1b0 == 1) {
      uVar3 = 0x200;
    }
    else if (DAT_1801ec1b0 == 2) {
      uVar3 = 0x400;
    }
    else if (DAT_1801ec1b0 == 3) {
      uVar3 = 0x800;
    }
    else if (DAT_1801ec1b0 == 4) {
      uVar3 = 0x1000;
    }
  }
  pcVar2 = (char *)((longlong)DAT_1801ebe1c * 0x20 + DAT_1801fca80);
  DAT_1801ec1ac = DAT_1801ebe1c;
  DAT_1801ec178 = uVar3;
  if (pcVar2 != s_Medium_1801ec770) {
    puVar1 = (ulonglong *)(pcVar2 + 0x10);
    if (0xf < *(ulonglong *)(pcVar2 + 0x18)) {
      pcVar2 = *(char **)pcVar2;
    }
    FUN_1800de6e0((longlong *)s_Medium_1801ec770,(int32_t *)pcVar2,*puVar1);
  }
  FUN_1800e0ac0();
  return;
}

// ---- Function: FUN_1800e0d40 ----
void FUN_1800e0d40(char *param_1,int32_t param_2,int32_t param_3,int32_t param_4)

{
  char cVar1;
  code *pcVar2;
  char *pcVar3;
  int32_t *puVar4;
  int32_t *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  code *pcVar8;
  int32_t *puVar9;
  float fVar10;
  float fVar11;
  int32_t local_res8;
  float local_res10 [6];
  
  if (DAT_1801f3a3a == '\0') {
    lVar6 = 5;
    do {
      (**(code **)(DAT_1801f3ae0 + 0x2a8))();
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    FUN_1800e09f0("Editing these settings can result in game bugs");
    FUN_1800e09f0("such as shadow flickering and causing the game world to go black.");
    (**(code **)(DAT_1801f3ae0 + 0x2a8))();
    FUN_1800e09f0("By clicking \"I accept\" you agree to acknowledging this message.");
    (**(code **)(DAT_1801f3ae0 + 0x2a8))();
    (**(code **)(DAT_1801f3ae0 + 0x2a8))();
    lVar6 = (**(code **)(DAT_1801f3ae0 + 8))();
    (**(code **)(DAT_1801f3ae0 + 0x9a0))(&local_res8,"I Accept",0,0,DAT_1801d8f38);
    fVar11 = *(float *)(lVar6 + 0x3c);
    (**(code **)(DAT_1801f3ae0 + 0x118))(local_res10);
    fVar11 = (local_res10[0] - (fVar11 + fVar11 + (float)local_res8)) * DAT_1801d8e18;
    if (0.0 < fVar11) {
      fVar10 = (float)(**(code **)(DAT_1801f3ae0 + 0x268))();
      (**(code **)(DAT_1801f3ae0 + 0x280))(fVar10 + fVar11);
    }
    local_res8 = 0;
    cVar1 = (**(code **)(DAT_1801f3ae0 + 0x388))("I Accept",&local_res8);
    if (cVar1 != '\0') {
      DAT_1801f3a3a = 1;
      return;
    }
    return;
  }
  if (DAT_1801f3b21 != '\0') {
    param_1 = "You must restart your game to apply the changes below.";
    FUN_1800e0910("You must restart your game to apply the changes below.");
  }
  FUN_1800e13d0(param_1,param_2,param_3,param_4);
  (**(code **)(DAT_1801f3ae0 + 0x2a8))();
  FUN_1800e10c0();
  (**(code **)(DAT_1801f3ae0 + 0x2a8))();
  if (DAT_1801f3a15 != '\0') {
    FUN_1800e0910(
                 "There were some issues collecting the required data for shadows, so they were disabled."
                 );
    return;
  }
  cVar1 = (**(code **)(DAT_1801f3ae0 + 0x3a8))("Shadow Patches##extendedrefl",&DAT_1801f3a14);
  if (cVar1 != '\0') {
    DAT_1801f3b21 = '\x01';
  }
  (**(code **)(DAT_1801f3ae0 + 0x2c0))(DAT_1801d8ec0);
  (**(code **)(DAT_1801f3ae0 + 0x880))(DAT_1801f3a14 == '\0');
  pcVar3 = s_Medium__1024__1801ec7b0;
  puVar9 = &DAT_1801fca68;
  if (0xf < DAT_1801ec7c8) {
    pcVar3 = (char *)s_Medium__1024__1801ec7b0._0_8_;
  }
  FUN_1800e0440(0x1801d5b88,pcVar3,&DAT_1801ebe18,&DAT_1801fca68);
  if ((ulonglong)(DAT_1801fca70 - DAT_1801fca68 >> 5) <= (ulonglong)(longlong)DAT_1801ebe18) {
    FUN_1800ddc20();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  puVar4 = (int32_t *)(DAT_1801fca68 + (longlong)DAT_1801ebe18 * 0x20);
  if (0xf < (ulonglong)puVar4[3]) {
    puVar4 = (int32_t *)*puVar4;
  }
  uVar7 = 0xffffffffffffffff;
  do {
    uVar7 = uVar7 + 1;
  } while (*(char *)((longlong)puVar4 + uVar7) != '\0');
  FUN_1800de6e0((longlong *)s_Medium__1024__1801ec7b0,puVar4,uVar7);
  puVar5 = &DAT_1801f3a13;
  pcVar8 = *(code **)(DAT_1801f3ae0 + 0x3a8);
  cVar1 = (*pcVar8)("Unclamp shadow size");
  if (cVar1 != '\0') {
    DAT_1801f3b21 = '\x01';
  }
  pcVar2 = *(code **)(DAT_1801f3ae0 + 0x2a0);
  (*pcVar2)(0,DAT_1801d8f38);
  FUN_1800e03a0(pcVar2,puVar5,pcVar8,puVar9);
  (**(code **)(DAT_1801f3ae0 + 0x888))();
  (**(code **)(DAT_1801f3ae0 + 0x2c8))(DAT_1801d8ec0);
  if (DAT_1801ec1b4 == DAT_1801ebe18) {
    return;
  }
  if (DAT_1801ebe18 != 0) {
    if (DAT_1801ebe18 == 1) {
      DAT_1801ec198 = 0x200;
      DAT_1801ec1b4 = DAT_1801ebe18;
      DAT_1801f3b21 = 1;
      return;
    }
    if (DAT_1801ebe18 == 2) {
      DAT_1801ec198 = 0x400;
      DAT_1801ec1b4 = DAT_1801ebe18;
      DAT_1801f3b21 = 1;
      return;
    }
    if (DAT_1801ebe18 == 3) {
      DAT_1801ec198 = 0x800;
      DAT_1801ec1b4 = DAT_1801ebe18;
      DAT_1801f3b21 = 1;
      return;
    }
    if (DAT_1801ebe18 == 4) {
      DAT_1801ec198 = 0x1000;
      DAT_1801ec1b4 = DAT_1801ebe18;
      DAT_1801f3b21 = 1;
      return;
    }
  }
  DAT_1801f3b21 = 1;
  DAT_1801ec1b4 = DAT_1801ebe18;
  DAT_1801ec198 = 0x100;
  return;
}

// ---- Function: FUN_1800e10c0 ----
void FUN_1800e10c0(void)

{
  code *pcVar1;
  char cVar2;
  char *pcVar3;
  int32_t *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (DAT_1801f3a19 != '\0') {
    FUN_1800e0910(
                 "There were some issues collecting the required data for reflections, so they were disabled."
                 );
    return;
  }
  cVar2 = (**(code **)(DAT_1801f3ae0 + 0x3a8))
                    ("Reflection Patches (Beta Testing)##extendedrefl",&DAT_1801f3a18);
  if (cVar2 != '\0') {
    DAT_1801f3b21 = 1;
  }
  (**(code **)(DAT_1801f3ae0 + 0x2c0))(DAT_1801d8ec0);
  (**(code **)(DAT_1801f3ae0 + 0x880))(DAT_1801f3a18 == '\0');
  pcVar3 = s_Medium__1024__1801ec790;
  if (0xf < DAT_1801ec7a8) {
    pcVar3 = (char *)s_Medium__1024__1801ec790._0_8_;
  }
  FUN_1800e0440(0x1801d5a40,pcVar3,&DAT_1801ebe20,&DAT_1801fca68);
  if ((ulonglong)(DAT_1801fca70 - DAT_1801fca68 >> 5) <= (ulonglong)(longlong)DAT_1801ebe20) {
LAB_1800e13c5:
    FUN_1800ddc20();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  puVar4 = (int32_t *)(DAT_1801fca68 + (longlong)DAT_1801ebe20 * 0x20);
  if (0xf < (ulonglong)puVar4[3]) {
    puVar4 = (int32_t *)*puVar4;
  }
  uVar5 = 0xffffffffffffffff;
  uVar6 = 0xffffffffffffffff;
  do {
    uVar6 = uVar6 + 1;
  } while (*(char *)((longlong)puVar4 + uVar6) != '\0');
  FUN_1800de6e0((longlong *)s_Medium__1024__1801ec790,puVar4,uVar6);
  pcVar3 = s_Medium_1801ec770;
  if (0xf < DAT_1801ec788) {
    pcVar3 = _s_Medium_1801ec770;
  }
  FUN_1800e0440(0x1801d5a58,pcVar3,&DAT_1801ebe1c,&DAT_1801fca80);
  if ((ulonglong)(DAT_1801fca88 - DAT_1801fca80 >> 5) <= (ulonglong)(longlong)DAT_1801ebe1c)
  goto LAB_1800e13c5;
  puVar4 = (int32_t *)(DAT_1801fca80 + (longlong)DAT_1801ebe1c * 0x20);
  if (0xf < (ulonglong)puVar4[3]) {
    puVar4 = (int32_t *)*puVar4;
  }
  do {
    uVar5 = uVar5 + 1;
  } while (*(char *)((longlong)puVar4 + uVar5) != '\0');
  FUN_1800de6e0((longlong *)s_Medium_1801ec770,puVar4,uVar5);
  cVar2 = (**(code **)(DAT_1801f3ae0 + 0x3a8))("Enable peds in reflections",&DAT_1801f3a1c);
  if (cVar2 != '\0') {
    DAT_1801f3b21 = 1;
  }
  cVar2 = (**(code **)(DAT_1801f3ae0 + 0x3a8))("Enable vehicles in reflections",&DAT_1801f3a1b);
  if (cVar2 != '\0') {
    DAT_1801f3b21 = 1;
  }
  cVar2 = (**(code **)(DAT_1801f3ae0 + 0x3a8))("Enable buildings in reflections",&DAT_1801f3a1a);
  if (cVar2 != '\0') {
    DAT_1801f3b21 = 1;
  }
  cVar2 = (**(code **)(DAT_1801f3ae0 + 0x3a8))("Enable map objects in reflections",&DAT_1801f3a16);
  if (cVar2 != '\0') {
    DAT_1801f3b21 = 1;
  }
  cVar2 = (**(code **)(DAT_1801f3ae0 + 0x3a8))("Use higher quality LODs",&DAT_1801f3a17);
  if (cVar2 != '\0') {
    DAT_1801f3b21 = 1;
  }
  (**(code **)(DAT_1801f3ae0 + 0x888))();
  (**(code **)(DAT_1801f3ae0 + 0x2c8))(DAT_1801d8ec0);
  if (DAT_1801ec1b0 == DAT_1801ebe20) goto LAB_1800e139c;
  if (DAT_1801ebe20 == 0) {
LAB_1800e1383:
    DAT_1801ec178 = 0x100;
  }
  else if (DAT_1801ebe20 == 1) {
    DAT_1801ec178 = 0x200;
  }
  else if (DAT_1801ebe20 == 2) {
    DAT_1801ec178 = 0x400;
  }
  else if (DAT_1801ebe20 == 3) {
    DAT_1801ec178 = 0x800;
  }
  else {
    if (DAT_1801ebe20 != 4) goto LAB_1800e1383;
    DAT_1801ec178 = 0x1000;
  }
  DAT_1801ec1b0 = DAT_1801ebe20;
  DAT_1801f3b21 = 1;
LAB_1800e139c:
  if (DAT_1801ec1ac != DAT_1801ebe1c) {
    FUN_1800e0ac0();
    DAT_1801ec1ac = DAT_1801ebe1c;
  }
  return;
}

// ---- Function: FUN_1800e13d0 ----
void FUN_1800e13d0(int32_t param_1,int32_t param_2,int32_t param_3,int32_t param_4)

{
  code *pcVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  char *pcVar7;
  int32_t *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  FUN_1800c70b0("Other Settings",param_2,param_3,param_4);
  (**(code **)(DAT_1801f3ae0 + 0x2c0))(DAT_1801d8ec0);
  cVar2 = (*DAT_1801ec088)();
  if (cVar2 != '\0') {
    (**(code **)(DAT_1801f3ae0 + 0x3a8))("I acknowledge the MSAA information",&DAT_1801f3a39);
  }
  pcVar7 = s_Preset_1_1801ec7d0;
  if (0xf < DAT_1801ec7e8) {
    pcVar7 = (char *)s_Preset_1_1801ec7d0._0_8_;
  }
  FUN_1800e0440(0x1801d5c28,pcVar7,&DAT_1801f3a20,&DAT_1801fca50);
  if ((ulonglong)(longlong)DAT_1801f3a20 < (ulonglong)(DAT_1801fca58 - DAT_1801fca50 >> 5)) {
    puVar8 = (int32_t *)(DAT_1801fca50 + (longlong)DAT_1801f3a20 * 0x20);
    if (0xf < (ulonglong)puVar8[3]) {
      puVar8 = (int32_t *)*puVar8;
    }
    uVar9 = 0xffffffffffffffff;
    uVar10 = 0xffffffffffffffff;
    do {
      uVar10 = uVar10 + 1;
    } while (*(char *)((longlong)puVar8 + uVar10) != '\0');
    FUN_1800de6e0((longlong *)s_Preset_1_1801ec7d0,puVar8,uVar10);
    (**(code **)(DAT_1801f3ae0 + 0x2a8))();
    pcVar7 = s_Low__Vanilla__1801ec7f0;
    if (0xf < DAT_1801ec808) {
      pcVar7 = (char *)s_Low__Vanilla__1801ec7f0._0_8_;
    }
    FUN_1800e0440(0x1801d5c40,pcVar7,&DAT_1801ebe34,&DAT_1801fca38);
    if ((ulonglong)(longlong)DAT_1801ebe34 < (ulonglong)(DAT_1801fca40 - DAT_1801fca38 >> 5)) {
      puVar8 = (int32_t *)(DAT_1801fca38 + (longlong)DAT_1801ebe34 * 0x20);
      if (0xf < (ulonglong)puVar8[3]) {
        puVar8 = (int32_t *)*puVar8;
      }
      do {
        uVar9 = uVar9 + 1;
      } while (*(char *)((longlong)puVar8 + uVar9) != '\0');
      FUN_1800de6e0((longlong *)s_Low__Vanilla__1801ec7f0,puVar8,uVar9);
      bVar3 = 0;
      if (DAT_1801ebe34 == 4) {
        bVar3 = (**(code **)(DAT_1801f3ae0 + 0x478))
                          ("Motion Blur Sample Size",&DAT_1801ebe30,DAT_1801d8e38,DAT_1801d8f04,
                           &DAT_1801cb828,0);
        bVar4 = (**(code **)(DAT_1801f3ae0 + 0x478))
                          ("Motion Blur Length Multiplier",&DAT_1801ebe2c,DAT_1801d8e38,
                           DAT_1801d8ea8,&DAT_1801cb828,0);
        bVar5 = (**(code **)(DAT_1801f3ae0 + 0x478))
                          ("Motion Blur Ghosting",&DAT_1801ebe28,0,DAT_1801d8f04,&DAT_1801cb828,0);
        bVar3 = bVar5 | bVar4 | bVar3;
        (**(code **)(DAT_1801f3ae0 + 0x298))();
      }
      if ((DAT_1801ec1b8 != DAT_1801ebe34) || (bVar3 != 0)) {
        iVar6 = DAT_1801ebe34;
        FUN_1800a7e90();
        DAT_1801ec1b8 = iVar6;
      }
      cVar2 = (**(code **)(DAT_1801f3ae0 + 0x3a8))("Dynamic Headlight Shadows",&DAT_1801ebe24);
      if (cVar2 != '\0') {
        FUN_1800d8970(-(DAT_1801ebe24 != '\0') & 3);
      }
      (**(code **)(DAT_1801f3ae0 + 0x3a8))("Brighten Nights",&DAT_1801f39f5);
                    
                    
      (**(code **)(DAT_1801f3ae0 + 0x2c8))(DAT_1801d8ec0);
      return;
    }
  }
  FUN_1800ddc20();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// ---- Function: FUN_1800e16e0 ----
void FUN_1800e16e0(int32_t *param_1,int *param_2)

{
  int32_t *puVar1;
  code *pcVar2;
  char cVar3;
  void *pvVar4;
  int32_t *puVar5;
  longlong lVar6;
  longlong *plVar7;
  LPVOID pvVar8;
  int32_t uVar9;
  int32_t ****ppppuVar10;
  ulonglong uVar11;
  int32_t **ppuVar12;
  int iVar13;
  uint uVar14;
  void *pvVar15;
  int32_t **ppuVar16;
  int32_t auStack_d8 [32];
  int32_t *local_b8 [2];
  int32_t *local_a8;
  ulonglong *puStack_a0;
  char *local_98;
  int32_t uStack_90;
  ulonglong local_78;
  int32_t *local_70;
  int32_t ***local_68 [3];
  ulonglong local_50;
  int32_t local_48;
  int32_t local_40;
  int32_t local_38;
  int32_t *local_30;
  ulonglong local_28;
  
  local_28 = DAT_1801eb080 ^ (ulonglong)auStack_d8;
  local_b8[0] = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x10) < DAT_1801fca98) && (FUN_180125398(&DAT_1801fca98), DAT_1801fca98 == -1)) {
    DAT_1801fcaa0 = 0;
    DAT_1801fcaa8 = (void *)0x0;
    DAT_1801fcab0 = 0;
    pvVar4 = operator_new(0x20);
    *(void **)pvVar4 = pvVar4;
    *(void **)((longlong)pvVar4 + 8) = pvVar4;
    DAT_1801fcab8 = (int32_t *)0x0;
    _DAT_1801fcac0 = (int32_t *)0x0;
    DAT_1801fcac8 = (int32_t *)0x0;
    DAT_1801fcad0 = 7;
    DAT_1801fcad8 = 8;
    DAT_1801fcaa0 = 0x3f800000;
    DAT_1801fcaa8 = pvVar4;
    puVar5 = (int32_t *)operator_new(0x80);
    lVar6 = (longlong)DAT_1801fcac8 - (longlong)DAT_1801fcab8 >> 3;
    if (lVar6 != 0) {
      pvVar8 = DAT_1801fcab8;
      if ((0xfff < (ulonglong)(lVar6 * 8)) &&
         (pvVar8 = *(LPVOID *)((longlong)DAT_1801fcab8 + -8),
         0x1f < (ulonglong)((longlong)DAT_1801fcab8 + (-8 - (longlong)pvVar8)))) {
        FUN_18012b7b4();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      thunk_FUN_18012d5e8(pvVar8);
    }
    puVar1 = puVar5 + 0x10;
    _DAT_1801fcac0 = puVar1;
    DAT_1801fcac8 = puVar1;
    DAT_1801fcab8 = puVar5;
    for (; puVar5 != puVar1; puVar5 = puVar5 + 1) {
      *puVar5 = pvVar4;
    }
    atexit((_func_5014 *)&LAB_1801564e0);
    _Init_thread_footer(&DAT_1801fca98);
  }
  uVar11 = (((((((((ulonglong)local_b8[0] & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                 (ulonglong)local_b8[0] >> 8 & 0xff) * 0x100000001b3 ^
                (ulonglong)local_b8[0] >> 0x10 & 0xff) * 0x100000001b3 ^
               (ulonglong)local_b8[0] >> 0x18 & 0xff) * 0x100000001b3 ^
              (ulonglong)local_b8[0] >> 0x20 & 0xff) * 0x100000001b3 ^
             (ulonglong)local_b8[0] >> 0x28 & 0xff) * 0x100000001b3 ^
            (ulonglong)local_b8[0] >> 0x30 & 0xff) * 0x100000001b3 ^ (ulonglong)local_b8[0] >> 0x38)
           * 0x100000001b3 & DAT_1801fcad0;
  pvVar4 = (void *)DAT_1801fcab8[uVar11 * 2 + 1];
  pvVar15 = (void *)0x0;
  if (pvVar4 != DAT_1801fcaa8) {
    puVar5 = *(int32_t **)((longlong)pvVar4 + 0x10);
    while ((pvVar15 = pvVar4, local_b8[0] != puVar5 &&
           (pvVar15 = (void *)0x0, pvVar4 != (void *)DAT_1801fcab8[uVar11 * 2]))) {
      pvVar4 = *(void **)((longlong)pvVar4 + 8);
      puVar5 = *(int32_t **)((longlong)pvVar4 + 0x10);
    }
  }
  pvVar4 = DAT_1801fcaa8;
  if (pvVar15 != (void *)0x0) {
    pvVar4 = pvVar15;
  }
  puVar5 = DAT_1801fcab8;
  if (pvVar4 == DAT_1801fcaa8) {
    plVar7 = FUN_1800e1d20(local_b8[0],&local_a8,(byte *)local_b8);
    *(int32_t *)(*plVar7 + 0x18) = 0;
  }
  uVar9 = 1;
  cVar3 = (**(code **)(DAT_1801f3ae0 + 0x9d0))(1,1);
  plVar7 = FUN_1800e1d20(uVar9,&local_a8,(byte *)local_b8);
  if (*(char *)(*plVar7 + 0x18) == '\0') {
    local_38 = (**(code **)(DAT_1801f3ae0 + 0x9f0))(*param_2);
    local_48 = 0xb000000000000000;
    local_30 = local_b8[0];
    local_40 = 0xb000000000000008;
    local_98 = "{}##{}";
    uStack_90 = 6;
    local_78 = 2;
    local_70 = &local_48;
    local_a8 = &DAT_1801d5cd8;
    puStack_a0 = (ulonglong *)0x6;
    FUN_1800b7670((longlong *)local_68,(longlong *)&local_a8,&local_78);
    ppppuVar10 = local_68;
    if (0xf < local_50) {
      ppppuVar10 = (int32_t ****)local_68[0];
    }
    ppuVar16 = *(int32_t ***)(DAT_1801f3ae0 + 0x388);
    ppuVar12 = (int32_t **)&DAT_1801ec1c0;
    cVar3 = (*(code *)ppuVar16)(ppppuVar10);
    ppppuVar10 = local_68;
    FUN_1800a6800((longlong *)ppppuVar10);
    if (cVar3 != '\0') {
      ppuVar16 = local_b8;
      ppuVar12 = &local_a8;
      plVar7 = FUN_1800e1d20(ppppuVar10,ppuVar12,(byte *)ppuVar16);
      *(int32_t *)(*plVar7 + 0x18) = 1;
    }
  }
  else {
    ppuVar16 = local_b8;
    ppuVar12 = &local_a8;
    plVar7 = FUN_1800e1d20(uVar9,ppuVar12,(byte *)ppuVar16);
    if (*(char *)(*plVar7 + 0x18) == '\x01') {
      local_70 = local_b8[0];
      local_78 = 0xb000000000000000;
      local_a8 = (int32_t *)0x1;
      puStack_a0 = &local_78;
      local_98 = "< enter key >##{}";
      uStack_90 = 0x11;
      FUN_1800b7670((longlong *)local_68,(longlong *)&local_98,(ulonglong *)&local_a8);
      ppppuVar10 = local_68;
      if (0xf < local_50) {
        ppppuVar10 = (int32_t ****)local_68[0];
      }
      ppuVar16 = *(int32_t ***)(DAT_1801f3ae0 + 0x388);
      (*(code *)ppuVar16)(ppppuVar10,&DAT_1801ec1c0);
      FUN_1800a6800((longlong *)local_68);
      if (cVar3 != '\0') {
        uVar9 = 0;
        cVar3 = (**(code **)(DAT_1801f3ae0 + 0x8b8))();
        if (cVar3 == '\0') {
          ppuVar16 = local_b8;
          ppuVar12 = &local_a8;
          plVar7 = FUN_1800e1d20(uVar9,ppuVar12,(byte *)ppuVar16);
          *(int32_t *)(*plVar7 + 0x18) = 0;
          goto LAB_1800e1b37;
        }
      }
      uVar11 = 0x200;
      do {
        ppuVar12 = *(int32_t ***)(DAT_1801f3ae0 + 0x9c8);
        iVar13 = (int)uVar11;
        cVar3 = (*(code *)ppuVar12)();
        if (cVar3 != '\0') {
          *param_2 = iVar13;
          ppuVar16 = local_b8;
          ppuVar12 = &local_a8;
          plVar7 = FUN_1800e1d20(uVar11,ppuVar12,(byte *)ppuVar16);
          *(int32_t *)(*plVar7 + 0x18) = 0;
        }
        uVar14 = iVar13 + 1;
        uVar11 = (ulonglong)uVar14;
      } while ((int)uVar14 < 0x29a);
    }
  }
LAB_1800e1b37:
  (**(code **)(DAT_1801f3ae0 + 0x2a0))(0,DAT_1801d8f38);
  FUN_1800c70b0(local_b8[0],ppuVar12,ppuVar16,puVar5);
  FUN_1801252c0(local_28 ^ (ulonglong)auStack_d8);
  return;
}

// ---- Function: FUN_1800e1b90 ----
void FUN_1800e1b90(void)

{
  (**(code **)(DAT_1801f3ae0 + 0x418))
            ("Mouse Sensitivity",&DAT_1801ebdcc,DAT_1801d8ea8,0,DAT_1801d8f2c,&DAT_1801cb828,0);
  (**(code **)(DAT_1801f3ae0 + 0x2a8))();
  FUN_1800e16e0((int32_t *)"Toggle Freecam",&DAT_1801ebdac);
  FUN_1800e16e0((int32_t *)"Toggle Slow Motion",&DAT_1801ebda8);
  (**(code **)(DAT_1801f3ae0 + 0x2a8))();
  FUN_1800e16e0((int32_t *)"Forward",&DAT_1801ebda4);
  FUN_1800e16e0((int32_t *)&DAT_1801d5d40,&DAT_1801ebda0);
  FUN_1800e16e0((int32_t *)&DAT_1801d5d48,&DAT_1801ebd9c);
  FUN_1800e16e0((int32_t *)"Right",&DAT_1801ebd98);
  FUN_1800e16e0((int32_t *)&DAT_1801d5d58,&DAT_1801ebd94);
  FUN_1800e16e0((int32_t *)&DAT_1801d5d5c,&DAT_1801ebd90);
  (**(code **)(DAT_1801f3ae0 + 0x2a8))();
  FUN_1800e16e0((int32_t *)"Rotate Left",&DAT_1801ebd80);
  FUN_1800e16e0((int32_t *)"Rotate Right",&DAT_1801ebd7c);
  (**(code **)(DAT_1801f3ae0 + 0x2a8))();
  FUN_1800e16e0((int32_t *)"FOV Increase",&DAT_1801ebd88);
  FUN_1800e16e0((int32_t *)"FOV Decrease",&DAT_1801ebd8c);
  (**(code **)(DAT_1801f3ae0 + 0x2a8))();
  FUN_1800e16e0((int32_t *)"Double Speed",&DAT_1801ebd84);
  return;
}

// ---- Function: FUN_1800e1d20 ----
int32_t * FUN_1800e1d20(int32_t param_1,int32_t *param_2,byte *param_3)

{
  int32_t *puVar1;
  int32_t *puVar2;
  code *pcVar3;
  ulonglong uVar4;
  int32_t *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int32_t *puVar9;
  ulonglong uVar10;
  float fVar11;
  
  uVar8 = (((((((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1])
                * 0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
              0x100000001b3 ^ (ulonglong)param_3[4]) * 0x100000001b3 ^ (ulonglong)param_3[5]) *
            0x100000001b3 ^ (ulonglong)param_3[6]) * 0x100000001b3 ^ (ulonglong)param_3[7]) *
          0x100000001b3;
  puVar5 = *(int32_t **)(DAT_1801fcab8 + 8 + (uVar8 & DAT_1801fcad0) * 0x10);
  puVar9 = DAT_1801fcaa8;
  if (puVar5 != DAT_1801fcaa8) {
    lVar6 = puVar5[2];
    puVar9 = puVar5;
    while( true ) {
      if (*(longlong *)param_3 == lVar6) {
        *param_2 = puVar9;
        *(int32_t *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar9 == *(int32_t **)(DAT_1801fcab8 + (uVar8 & DAT_1801fcad0) * 0x10)) break;
      puVar9 = (int32_t *)puVar9[1];
      lVar6 = puVar9[2];
    }
  }
  if (DAT_1801fcab0 == 0x7ffffffffffffff) {
    FUN_180123338(0x1801cc0f0);
    pcVar3 = (code *)swi(3);
    puVar5 = (int32_t *)(*pcVar3)();
    return puVar5;
  }
  puVar5 = (int32_t *)operator_new(0x20);
  puVar5[2] = *(int32_t *)param_3;
  *(int32_t *)(puVar5 + 3) = 0;
  uVar4 = DAT_1801fcad8;
  if (DAT_1801fcaa0 < (float)(DAT_1801fcab0 + 1) / (float)DAT_1801fcad8) {
    fVar11 = ceilf((float)(DAT_1801fcab0 + 1) / DAT_1801fcaa0);
    lVar6 = 0;
    if ((DAT_1801d8f34 <= fVar11) && (fVar11 = fVar11 - DAT_1801d8f34, fVar11 < DAT_1801d8f34)) {
      lVar6 = -0x8000000000000000;
    }
    uVar7 = 8;
    if (8 < (ulonglong)((longlong)fVar11 + lVar6)) {
      uVar7 = (longlong)fVar11 + lVar6;
    }
    uVar10 = uVar4;
    if ((uVar4 < uVar7) && ((0x1ff < uVar4 || (uVar10 = uVar4 * 8, uVar4 * 8 < uVar7)))) {
      uVar10 = uVar7;
    }
    FUN_1800e2020(uVar7,uVar10);
    puVar1 = *(int32_t **)(DAT_1801fcab8 + 8 + (DAT_1801fcad0 & uVar8) * 0x10);
    puVar9 = DAT_1801fcaa8;
    if (puVar1 != DAT_1801fcaa8) {
      lVar6 = puVar1[2];
      puVar9 = puVar1;
      while (puVar5[2] != lVar6) {
        if (puVar9 == *(int32_t **)(DAT_1801fcab8 + (DAT_1801fcad0 & uVar8) * 0x10))
        goto LAB_1800e1f99;
        puVar9 = (int32_t *)puVar9[1];
        lVar6 = puVar9[2];
      }
      puVar9 = (int32_t *)*puVar9;
    }
  }
LAB_1800e1f99:
  puVar1 = (int32_t *)puVar9[1];
  DAT_1801fcab0 = DAT_1801fcab0 + 1;
  *puVar5 = puVar9;
  puVar5[1] = puVar1;
  *puVar1 = puVar5;
  puVar9[1] = puVar5;
  lVar6 = DAT_1801fcab8;
  uVar8 = DAT_1801fcad0 & uVar8;
  puVar2 = *(int32_t **)(DAT_1801fcab8 + uVar8 * 0x10);
  if (puVar2 == DAT_1801fcaa8) {
    *(int32_t **)(DAT_1801fcab8 + uVar8 * 0x10) = puVar5;
  }
  else {
    if (puVar2 == puVar9) {
      *(int32_t **)(DAT_1801fcab8 + uVar8 * 0x10) = puVar5;
      goto LAB_1800e1ff8;
    }
    if (*(int32_t **)(DAT_1801fcab8 + 8 + uVar8 * 0x10) != puVar1) goto LAB_1800e1ff8;
  }
  *(int32_t **)(lVar6 + 8 + uVar8 * 0x10) = puVar5;
LAB_1800e1ff8:
  *param_2 = puVar5;
  *(int32_t *)(param_2 + 1) = 1;
  return param_2;
}

// ---- Function: FUN_1800e2020 ----
void FUN_1800e2020(int32_t param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int32_t *puVar3;
  int32_t *puVar4;
  int32_t *puVar5;
  code *pcVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  int32_t *puVar11;
  
  plVar8 = DAT_1801fcaa8;
  for (lVar10 = 0x3f; 0xfffffffffffffffU >> lVar10 == 0; lVar10 = lVar10 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar10 & 0x3f)) < param_2) {
    FUN_180123338(0x1801cc110);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar9 = param_2 - 1 | 1;
  lVar10 = 0x3f;
  if (uVar9 != 0) {
    for (; uVar9 >> lVar10 == 0; lVar10 = lVar10 + -1) {
    }
  }
  lVar10 = 1L << ((char)lVar10 + 1U & 0x3f);
  FUN_1800a9140((ulonglong *)&DAT_1801fcab8,lVar10 * 2,DAT_1801fcaa8);
  DAT_1801fcad0 = lVar10 - 1;
  DAT_1801fcad8 = lVar10;
  plVar7 = (longlong *)*DAT_1801fcaa8;
joined_r0x0001800e2098:
  do {
    while( true ) {
      while( true ) {
        if (plVar7 == plVar8) {
          return;
        }
        plVar1 = (longlong *)*plVar7;
        puVar11 = (int32_t *)
                  (((((((((((ulonglong)*(byte *)(plVar7 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                          (ulonglong)*(byte *)((longlong)plVar7 + 0x11)) * 0x100000001b3 ^
                         (ulonglong)*(byte *)((longlong)plVar7 + 0x12)) * 0x100000001b3 ^
                        (ulonglong)*(byte *)((longlong)plVar7 + 0x13)) * 0x100000001b3 ^
                       (ulonglong)*(byte *)((longlong)plVar7 + 0x14)) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar7 + 0x15)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar7 + 0x16)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar7 + 0x17)) * 0x100000001b3 & DAT_1801fcad0)
                   * 0x10 + DAT_1801fcab8);
        if ((longlong *)*puVar11 != plVar8) break;
        *puVar11 = plVar7;
        puVar11[1] = plVar7;
        plVar7 = plVar1;
      }
      plVar2 = (longlong *)puVar11[1];
      if (plVar7[2] != plVar2[2]) break;
      plVar2 = (longlong *)*plVar2;
      if (plVar2 != plVar7) {
        puVar3 = (int32_t *)plVar7[1];
        *puVar3 = plVar1;
        puVar4 = (int32_t *)plVar1[1];
        *puVar4 = plVar2;
        puVar5 = (int32_t *)plVar2[1];
        *puVar5 = plVar7;
        plVar2[1] = (longlong)puVar4;
        plVar1[1] = (longlong)puVar3;
        plVar7[1] = (longlong)puVar5;
      }
      puVar11[1] = plVar7;
      plVar7 = plVar1;
    }
    do {
      if ((longlong *)*puVar11 == plVar2) {
        puVar3 = (int32_t *)plVar7[1];
        *puVar3 = plVar1;
        puVar4 = (int32_t *)plVar1[1];
        *puVar4 = plVar2;
        puVar5 = (int32_t *)plVar2[1];
        *puVar5 = plVar7;
        plVar2[1] = (longlong)puVar4;
        plVar1[1] = (longlong)puVar3;
        plVar7[1] = (longlong)puVar5;
        *puVar11 = plVar7;
        plVar7 = plVar1;
        goto joined_r0x0001800e2098;
      }
      plVar2 = (longlong *)plVar2[1];
    } while (plVar7[2] != plVar2[2]);
    lVar10 = *plVar2;
    puVar11 = (int32_t *)plVar7[1];
    *puVar11 = plVar1;
    plVar2 = (longlong *)plVar1[1];
    *plVar2 = lVar10;
    puVar3 = *(int32_t **)(lVar10 + 8);
    *puVar3 = plVar7;
    *(longlong **)(lVar10 + 8) = plVar2;
    plVar1[1] = (longlong)puVar11;
    plVar7[1] = (longlong)puVar3;
    plVar7 = plVar1;
  } while( true );
}

// ---- Function: FUN_1800e2210 ----
int32_t FUN_1800e2210(int32_t param_1,char param_2,int32_t param_3)

{
  int32_t uVar1;
  int32_t *puVar2;
  
  if (param_2 == '\0') {
    (**(code **)(DAT_1801f3ae0 + 0x1a0))(0x15,&DAT_1801ec1d0);
    puVar2 = &DAT_1801ec1e0;
  }
  else {
    (**(code **)(DAT_1801f3ae0 + 0x1a0))(0x15,&DAT_1801ec1e0);
    puVar2 = &DAT_1801ec1d0;
  }
  (**(code **)(DAT_1801f3ae0 + 0x1a0))(0x17,puVar2);
  (**(code **)(DAT_1801f3ae0 + 0x1a0))(0x16,&DAT_1801ec1e0);
  uVar1 = (**(code **)(DAT_1801f3ae0 + 0x388))(param_1,param_3);
  (**(code **)(DAT_1801f3ae0 + 0x1a8))(3);
  return uVar1;
}

// ---- Function: FUN_1800e22e0 ----
void FUN_1800e22e0(int32_t *param_1,char param_2,int32_t param_3,byte param_4)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  ulonglong uVar4;
  int32_t ***pppuVar5;
  byte bVar6;
  int32_t *puVar7;
  bool bVar8;
  int32_t auStackY_98 [32];
  int32_t local_58;
  int32_t local_54;
  int32_t local_50 [2];
  int32_t **local_48 [3];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_1801eb080 ^ (ulonglong)auStackY_98;
  bVar6 = (byte)param_3;
  (**(code **)(DAT_1801f3ae0 + 0x118))(local_50);
  local_58 = local_50[0];
  local_54 = 0x42000000;
  puVar7 = (int32_t *)&DAT_180187500;
  if (((bVar6 != 0) && (param_4 != 0)) &&
     (puVar7 = (int32_t *)&DAT_1801d5db8, DAT_1801ec1c8 != param_2)) {
    puVar7 = (int32_t *)&DAT_1801d5dbc;
  }
  bVar8 = DAT_1801ec1c8 == param_2;
  uVar4 = 0xffffffffffffffff;
  do {
    uVar4 = uVar4 + 1;
  } while (*(char *)((longlong)puVar7 + uVar4) != '\0');
  lVar1 = param_1[2];
  if (uVar4 <= 0x7fffffffffffffffU - lVar1) {
    if (0xf < (ulonglong)param_1[3]) {
      param_1 = (int32_t *)*param_1;
    }
    FUN_1800cfa40(local_48,lVar1,param_3,puVar7,uVar4,param_1,lVar1);
    pppuVar5 = local_48;
    if (0xf < local_30) {
      pppuVar5 = (int32_t ***)local_48[0];
    }
    cVar3 = FUN_1800e2210(pppuVar5,bVar8,&local_58);
    FUN_1800a6800((longlong *)local_48);
    if (cVar3 != '\0') {
      DAT_1801ec1c8 = '\0';
      if (!bVar8) {
        DAT_1801ec1c8 = param_2;
      }
      if (bVar6 == 0) {
        if (param_4 == 0) {
          DAT_1801f3b22 = 0;
        }
      }
      else if (param_4 != 0) {
        if (DAT_1801f3b22 == 0) {
          DAT_1801f3b22 = bVar6 + 1;
        }
        if ((DAT_1801f3b22 < bVar6) || (param_4 < DAT_1801f3b22)) {
          DAT_1801f3b22 = bVar6 + 1;
        }
      }
    }
    FUN_1801252c0(local_28 ^ (ulonglong)auStackY_98);
    return;
  }
  FUN_1800ba540();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// ---- Function: FUN_1800e2480 ----
void FUN_1800e2480(void)

{
  uint uVar1;
  char cVar2;
  char *pcVar3;
  int32_t *puVar4;
  int32_t *****pppppuVar5;
  float *pfVar6;
  float *pfVar7;
  code *pcVar8;
  longlong lVar9;
  byte bVar10;
  int32_t *puVar11;
  int32_t uVar12;
  bool bVar13;
  int32_t auVar14 [16];
  int32_t auVar15 [16];
  float fVar16;
  int32_t auStackY_218 [32];
  float local_1d8 [4];
  float local_1c8;
  int32_t local_1c4;
  float local_1c0;
  float local_1bc;
  int32_t local_1b8;
  int32_t uStack_1b0;
  int32_t local_1a8;
  ulonglong uStack_1a0;
  int32_t ****local_198 [3];
  ulonglong local_180;
  char local_178 [32];
  ulonglong local_158;
  int32_t uStack_150;
  int32_t local_148;
  int32_t uStack_140;
  int32_t local_138;
  int32_t uStack_130;
  int32_t local_128;
  int32_t uStack_120;
  int32_t local_118;
  int32_t uStack_110;
  int32_t local_108;
  int32_t uStack_100;
  int32_t local_f8;
  int32_t uStack_f0;
  int32_t local_e8;
  int32_t uStack_e0;
  int32_t local_d8;
  int32_t uStack_d0;
  int32_t local_c8;
  int32_t uStack_c0;
  int32_t local_b8;
  int32_t uStack_b0;
  int32_t local_a8;
  int32_t uStack_a0;
  int32_t local_98;
  int32_t uStack_90;
  int32_t local_88;
  int32_t local_84;
  ulonglong local_38;
  int32_t extraout_XMM0_Qb;
  
  local_38 = DAT_1801eb080 ^ (ulonglong)auStackY_218;
  bVar10 = 0;
  if ((DAT_1801f3a3c == '\0') || (DAT_1801f3a3b != '\0')) {
    (**(code **)(DAT_1801f3ae0 + 0x78))(&local_1c0);
    if ((local_1c0 < DAT_1801d8ef4) || (local_1bc < DAT_1801d8ef4)) {
      local_1d8[0] = 600.0;
      local_1d8[1] = 400.0;
      (**(code **)(DAT_1801f3ae0 + 0xd8))(local_1d8,1);
    }
    (**(code **)(DAT_1801f3ae0 + 0x118))(&local_1c8);
    local_1d8[1] = (float)local_1c4;
    local_1d8[0] = local_1c8 * _DAT_1801d8e04;
    uVar12 = 0;
    (**(code **)(DAT_1801f3ae0 + 0x28))("TabList",local_1d8,0,0x20);
    (**(code **)(DAT_1801f3ae0 + 0x118))(local_1d8 + 2);
    local_1a8 = _DAT_1801d9000;
    uStack_1a0 = _UNK_1801d9008;
    local_1b8 = DAT_1801d5e00;
    uStack_1b0._0_3_ = CONCAT12(DAT_1801d5e0a,DAT_1801d5e08);
    uStack_1b0 = (ulonglong)(uint3)uStack_1b0;
    pcVar8 = *(code **)(DAT_1801f3ae0 + 0x118);
    (*pcVar8)(local_1d8 + 2);
    local_1d8[1] = 32.0;
    local_1d8[0] = local_1d8[2];
    bVar13 = DAT_1801ec1c8 == 1;
    FUN_1800cfa40(local_198,pcVar8,uVar12,(int32_t *)&DAT_180187500,0,&local_1b8,0xb);
    pppppuVar5 = local_198;
    if (0xf < local_180) {
      pppppuVar5 = (int32_t *****)local_198[0];
    }
    pfVar7 = local_1d8;
    cVar2 = FUN_1800e2210(pppppuVar5,bVar13,pfVar7);
    FUN_1800a6800((longlong *)local_198);
    if (cVar2 != '\0') {
      DAT_1801ec1c8 = !bVar13;
      DAT_1801f3b22 = '\0';
    }
    if (0xf < uStack_1a0) {
      pfVar6 = local_1b8;
      if ((0xfff < uStack_1a0 + 1) &&
         (pfVar6 = *(float **)(local_1b8 + -2),
         (char *)0x1f < (char *)((longlong)local_1b8 + (-8 - (longlong)pfVar6))))
      goto LAB_1800e32bb;
      thunk_FUN_18012d5e8(pfVar6);
    }
    local_1a8 = _DAT_1801d9020;
    uStack_1a0 = _UNK_1801d9028;
    local_1b8 = (float *)s_Graphics__tab_1801d5e10._0_8_;
    uStack_1b0 = (ulonglong)CONCAT14(s_Graphics__tab_1801d5e10[0xc],s_Graphics__tab_1801d5e10._8_4_)
    ;
    pcVar8 = *(code **)(DAT_1801f3ae0 + 0x118);
    (*pcVar8)(local_1d8 + 2);
    local_1d8[1] = 32.0;
    local_1d8[0] = local_1d8[2];
    bVar13 = DAT_1801ec1c8 == 9;
    FUN_1800cfa40(local_198,pcVar8,pfVar7,(int32_t *)&DAT_180187500,0,&local_1b8,0xd);
    pppppuVar5 = local_198;
    if (0xf < local_180) {
      pppppuVar5 = (int32_t *****)local_198[0];
    }
    pfVar7 = local_1d8;
    cVar2 = FUN_1800e2210(pppppuVar5,bVar13,pfVar7);
    FUN_1800a6800((longlong *)local_198);
    if (cVar2 != '\0') {
      if (!bVar13) {
        bVar10 = 9;
      }
      DAT_1801f3b22 = '\0';
      DAT_1801ec1c8 = bVar10;
    }
    if (0xf < uStack_1a0) {
      pfVar6 = local_1b8;
      if ((0xfff < uStack_1a0 + 1) &&
         (pfVar6 = *(float **)(local_1b8 + -2),
         (char *)0x1f < (char *)((longlong)local_1b8 + (-8 - (longlong)pfVar6))))
      goto LAB_1800e32bb;
      thunk_FUN_18012d5e8(pfVar6);
    }
    local_1a8 = _DAT_1801d9010;
    uStack_1a0 = _UNK_1801d9018;
    local_1b8 = (float *)s_Weather__tab_1801d5e20._0_8_;
    uStack_1b0 = (ulonglong)(uint)s_Weather__tab_1801d5e20._8_4_;
    pcVar8 = *(code **)(DAT_1801f3ae0 + 0x118);
    (*pcVar8)(local_1d8 + 2);
    local_1d8[1] = 32.0;
    local_1d8[0] = local_1d8[2];
    bVar13 = DAT_1801ec1c8 == 4;
    FUN_1800cfa40(local_198,pcVar8,pfVar7,(int32_t *)&DAT_180187500,0,&local_1b8,0xc);
    pppppuVar5 = local_198;
    if (0xf < local_180) {
      pppppuVar5 = (int32_t *****)local_198[0];
    }
    pfVar7 = local_1d8;
    cVar2 = FUN_1800e2210(pppppuVar5,bVar13,pfVar7);
    FUN_1800a6800((longlong *)local_198);
    if (cVar2 != '\0') {
      DAT_1801ec1c8 = !bVar13 << 2;
      DAT_1801f3b22 = '\0';
    }
    if (0xf < uStack_1a0) {
      pfVar6 = local_1b8;
      if ((0xfff < uStack_1a0 + 1) &&
         (pfVar6 = *(float **)(local_1b8 + -2),
         (char *)0x1f < (char *)((longlong)local_1b8 + (-8 - (longlong)pfVar6))))
      goto LAB_1800e32bb;
      thunk_FUN_18012d5e8(pfVar6);
    }
    local_1a8 = _DAT_1801d9000;
    uStack_1a0 = _UNK_1801d9008;
    local_1b8 = (float *)s_Shader__tab_1801d5e30._0_8_;
    uStack_1b0._0_3_ = CONCAT12(s_Shader__tab_1801d5e30[10],s_Shader__tab_1801d5e30._8_2_);
    uStack_1b0 = (ulonglong)(uint3)uStack_1b0;
    pfVar7 = (float *)CONCAT71((int7)((ulonglong)pfVar7 >> 8),0xb);
    cVar2 = FUN_1800e22e0(&local_1b8,'\x05',pfVar7,0xe);
    if (0xf < uStack_1a0) {
      pfVar7 = local_1b8;
      if ((0xfff < uStack_1a0 + 1) &&
         (pfVar7 = *(float **)(local_1b8 + -2),
         (char *)0x1f < (char *)((longlong)local_1b8 + (-8 - (longlong)pfVar7))))
      goto LAB_1800e32bb;
      thunk_FUN_18012d5e8(pfVar7);
    }
    fVar16 = DAT_1801d8ea0;
    if (cVar2 != '\0') {
      local_1a8 = _DAT_1801d9010;
      uStack_1a0 = _UNK_1801d9018;
      local_1b8 = (float *)s_Game__shader_1801d5e40._0_8_;
      uStack_1b0 = (ulonglong)(uint)s_Game__shader_1801d5e40._8_4_;
      (**(code **)(DAT_1801f3ae0 + 0x1b0))(0x10);
      (**(code **)(DAT_1801f3ae0 + 0x2c0))();
      (**(code **)(DAT_1801f3ae0 + 0x118))(local_1d8 + 2);
      local_1d8[1] = 32.0;
      local_1d8[0] = local_1d8[2] - fVar16;
      puVar4 = &local_1b8;
      if (0xf < uStack_1a0) {
        puVar4 = (int32_t *)local_1b8;
      }
      cVar2 = FUN_1800e2210(puVar4,DAT_1801f3b22 == '\f',local_1d8);
      if (cVar2 != '\0') {
        DAT_1801f3b22 = '\f';
      }
      (**(code **)(DAT_1801f3ae0 + 0x2c8))();
      (**(code **)(DAT_1801f3ae0 + 0x1c0))(1);
      if (0xf < uStack_1a0) {
        puVar4 = (int32_t *)local_1b8;
        if ((0xfff < uStack_1a0 + 1) &&
           (puVar4 = *(int32_t **)((longlong)local_1b8 + -8),
           0x1f < (ulonglong)((longlong)local_1b8 + (-8 - (longlong)puVar4)))) {
          FUN_18012b7b4();
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        thunk_FUN_18012d5e8(puVar4);
      }
      local_1a8 = _DAT_1801d9040;
      uStack_1a0 = _UNK_1801d9048;
      local_1b8 = (float *)s_Vehicle__shader_1801d5e50._0_8_;
      uStack_1b0 = (ulonglong)
                   CONCAT16(s_Vehicle__shader_1801d5e50[0xe],
                            CONCAT24(s_Vehicle__shader_1801d5e50._12_2_,
                                     s_Vehicle__shader_1801d5e50._8_4_));
      (**(code **)(DAT_1801f3ae0 + 0x1b0))(0x10);
      (**(code **)(DAT_1801f3ae0 + 0x2c0))();
      (**(code **)(DAT_1801f3ae0 + 0x118))(local_1d8 + 2);
      local_1d8[1] = 32.0;
      local_1d8[0] = local_1d8[2] - fVar16;
      puVar4 = &local_1b8;
      if (0xf < uStack_1a0) {
        puVar4 = (int32_t *)local_1b8;
      }
      pfVar7 = local_1d8;
      cVar2 = FUN_1800e2210(puVar4,DAT_1801f3b22 == '\r',pfVar7);
      if (cVar2 != '\0') {
        DAT_1801f3b22 = '\r';
      }
      (**(code **)(DAT_1801f3ae0 + 0x2c8))();
      (**(code **)(DAT_1801f3ae0 + 0x1c0))(1);
      FUN_1800a6800(&local_1b8);
    }
    uStack_1b0 = 0;
    local_1a8 = _DAT_1801d8fc0;
    uStack_1a0 = _UNK_1801d8fc8;
    local_1b8 = (float *)(ulonglong)
                         CONCAT16(s_Freecam_1801d5e60[6],
                                  CONCAT24(s_Freecam_1801d5e60._4_2_,s_Freecam_1801d5e60._0_4_));
    pcVar8 = *(code **)(DAT_1801f3ae0 + 0x118);
    (*pcVar8)(local_1d8 + 2);
    local_1d8[1] = 32.0;
    local_1d8[0] = local_1d8[2];
    bVar13 = DAT_1801ec1c8 == 6;
    FUN_1800cfa40(local_198,pcVar8,pfVar7,(int32_t *)&DAT_180187500,0,&local_1b8,7);
    pppppuVar5 = local_198;
    if (0xf < local_180) {
      pppppuVar5 = (int32_t *****)local_198[0];
    }
    pfVar7 = local_1d8;
    cVar2 = FUN_1800e2210(pppppuVar5,bVar13,pfVar7);
    FUN_1800a6800((longlong *)local_198);
    if (cVar2 != '\0') {
      DAT_1801ec1c8 = 0;
      if (!bVar13) {
        DAT_1801ec1c8 = 6;
      }
      DAT_1801f3b22 = '\0';
    }
    if (0xf < uStack_1a0) {
      pfVar6 = local_1b8;
      if ((0xfff < uStack_1a0 + 1) &&
         (pfVar6 = *(float **)(local_1b8 + -2),
         (char *)0x1f < (char *)((longlong)local_1b8 + (-8 - (longlong)pfVar6))))
      goto LAB_1800e32bb;
      thunk_FUN_18012d5e8(pfVar6);
    }
    local_1a8 = _DAT_1801d8fd0;
    uStack_1a0 = _UNK_1801d8fd8;
    local_1b8 = (float *)0x73646e696279654b;
    uStack_1b0 = 0;
    cVar2 = FUN_1800e22e0(&local_1b8,'\a',CONCAT71((int7)((ulonglong)pfVar7 >> 8),8),10);
    if (0xf < uStack_1a0) {
      pfVar7 = local_1b8;
      if ((0xfff < uStack_1a0 + 1) &&
         (pfVar7 = *(float **)(local_1b8 + -2),
         (char *)0x1f < (char *)((longlong)local_1b8 + (-8 - (longlong)pfVar7)))) {
LAB_1800e32bb:
        FUN_18012b7b4();
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      thunk_FUN_18012d5e8(pfVar7);
    }
    if (cVar2 != '\0') {
      local_1b8 = (float *)0x0;
      uStack_1b0 = 0;
      local_1a8 = 0;
      uStack_1a0 = 0;
      local_1b8 = (float *)operator_new(0x20);
      uVar12 = s_Freecam__keybinds_1801d5e68._8_8_;
      local_1a8 = _DAT_1801d9060;
      uStack_1a0 = _UNK_1801d9068;
      *(int32_t *)local_1b8 = s_Freecam__keybinds_1801d5e68._0_8_;
      *(int32_t *)(local_1b8 + 2) = uVar12;
      *(char *)(local_1b8 + 4) = s_Freecam__keybinds_1801d5e68[0x10];
      *(char *)((longlong)local_1b8 + 0x11) = '\0';
      (**(code **)(DAT_1801f3ae0 + 0x1b0))(0x10);
      (**(code **)(DAT_1801f3ae0 + 0x2c0))();
      (**(code **)(DAT_1801f3ae0 + 0x118))(local_1d8 + 2);
      local_1d8[1] = 32.0;
      local_1d8[0] = local_1d8[2] - fVar16;
      pfVar7 = (float *)&local_1b8;
      if (0xf < uStack_1a0) {
        pfVar7 = local_1b8;
      }
      cVar2 = FUN_1800e2210(pfVar7,DAT_1801f3b22 == '\t',local_1d8);
      if (cVar2 != '\0') {
        DAT_1801f3b22 = '\t';
      }
      (**(code **)(DAT_1801f3ae0 + 0x2c8))();
      (**(code **)(DAT_1801f3ae0 + 0x1c0))(1);
      if (0xf < uStack_1a0) {
        pfVar7 = local_1b8;
        if ((0xfff < uStack_1a0 + 1) &&
           (pfVar7 = *(float **)(local_1b8 + -2),
           (char *)0x1f < (char *)((longlong)local_1b8 + (-8 - (longlong)pfVar7)))) {
          FUN_18012b7b4();
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        thunk_FUN_18012d5e8(pfVar7);
      }
    }
    (**(code **)(DAT_1801f3ae0 + 0x38))();
    (**(code **)(DAT_1801f3ae0 + 0x2a0))();
    local_1d8[1] = (float)local_1c4;
    local_1d8[0] = local_1c8 * _DAT_1801d8e30;
    uVar12 = 0x20;
    puVar11 = (int32_t *)0x0;
    (**(code **)(DAT_1801f3ae0 + 0x28))("TabContent",local_1d8);
    if (DAT_1801ec1c8 - 1 < 9) {
      pcVar3 = (char *)((ulonglong)
                        (&switchD_1800e31e3::switchdataD_1800e32c4)[(int)(DAT_1801ec1c8 - 1)] +
                       0x180000000);
      switch(DAT_1801ec1c8) {
      case 1:
        FUN_1800dd440(pcVar3,IMAGE_DOS_HEADER_180000000.e_magic,puVar11,uVar12);
        break;
      default:
        if (DAT_1801f3b22 == '\t') {
          FUN_1800e1b90();
        }
        else if (DAT_1801f3b22 == '\f') {
          (**(code **)(DAT_1801f3ae0 + 0x3a8))("Enable shader modifications",&DAT_1801fb100);
          (**(code **)(DAT_1801f3ae0 + 0x3a8))
                    ("Targeted Sparkle Recolour (Performance Heavy)",&DAT_1801f3a24);
          (**(code **)(DAT_1801f3ae0 + 0x298))();
        }
        else if (DAT_1801f3b22 == '\r') {
          FUN_1800ded60();
        }
        break;
      case 3:
      case 8:
        break;
      case 4:
        FUN_1800e5c60(pcVar3,0x180000000,puVar11,uVar12);
        break;
      case 6:
        FUN_1800df9a0(pcVar3,0x180000000,puVar11,uVar12);
        break;
      case 9:
        FUN_1800e0d40(pcVar3,0x180000000,puVar11,uVar12);
      }
    }
    (**(code **)(DAT_1801f3ae0 + 0x38))();
  }
  else {
    lVar9 = 5;
    do {
      (**(code **)(DAT_1801f3ae0 + 0x2a8))();
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    local_178[0] = '\0';
    local_178[1] = '\0';
    local_178[2] = '\0';
    local_178[3] = '\0';
    local_178[4] = '\0';
    local_178[5] = '\0';
    local_178[6] = '\0';
    local_178[7] = '\0';
    local_178[8] = '\0';
    local_178[9] = '\0';
    local_178[10] = '\0';
    local_178[0xb] = '\0';
    local_178[0xc] = '\0';
    local_178[0xd] = '\0';
    local_178[0xe] = '\0';
    local_178[0xf] = '\0';
    local_178[0x10] = '\0';
    local_178[0x11] = '\0';
    local_178[0x12] = '\0';
    local_178[0x13] = '\0';
    local_178[0x14] = '\0';
    local_178[0x15] = '\0';
    local_178[0x16] = '\0';
    local_178[0x17] = '\0';
    local_178[0x18] = '\0';
    local_178[0x19] = '\0';
    local_178[0x1a] = '\0';
    local_178[0x1b] = '\0';
    local_178[0x1c] = '\0';
    local_178[0x1d] = '\0';
    local_178[0x1e] = '\0';
    local_178[0x1f] = '\0';
    local_158 = 0;
    uStack_150 = 0;
    uVar1 = (uint)local_148;
    local_148 = CONCAT44(0x39,uVar1 & 0xffff0000);
    uStack_140 = 0x2100000052;
    local_138 = _DAT_1801d94a0;
    uStack_130 = _UNK_1801d94a8;
    local_128 = _DAT_1801d92e0;
    uStack_120 = _UNK_1801d92e8;
    local_118 = _DAT_1801d9880;
    uStack_110 = _UNK_1801d9888;
    local_108 = _DAT_1801d9270;
    uStack_100 = _UNK_1801d9278;
    local_f8 = _DAT_1801d96d0;
    uStack_f0 = _UNK_1801d96d8;
    local_e8 = _DAT_1801d9710;
    uStack_e0 = _UNK_1801d9718;
    local_d8 = _DAT_1801d9870;
    uStack_d0 = _UNK_1801d9878;
    local_c8 = _DAT_1801d9250;
    uStack_c0 = _UNK_1801d9258;
    local_b8 = _DAT_1801d97d0;
    uStack_b0 = _UNK_1801d97d8;
    local_a8 = _DAT_1801d9240;
    uStack_a0 = _UNK_1801d9248;
    local_98 = _DAT_1801d91a0;
    uStack_90 = _UNK_1801d91a8;
    local_88 = 0x2c;
    local_84 = 0x7e;
    pcVar3 = FUN_1800e4f70(local_178);
    FUN_1800e09f0(pcVar3);
    puVar4 = FUN_1800e4c30((int32_t *)local_178);
    lVar9 = FUN_1800e4700((longlong)puVar4);
    FUN_1800e09f0(lVar9);
    local_178[0] = '\0';
    local_178[1] = '\0';
    local_178[2] = '\0';
    local_178[3] = '\0';
    local_178[4] = '\0';
    local_178[5] = '\0';
    local_178[6] = '\0';
    local_178[7] = '\0';
    local_178[8] = '\0';
    local_178[9] = '\0';
    local_178[10] = '\0';
    local_178[0xb] = '\0';
    local_178[0xc] = '\0';
    local_178[0xd] = '\0';
    local_178[0xe] = '\0';
    local_178[0xf] = '\0';
    local_178[0x10] = '\0';
    local_178[0x11] = '\0';
    local_178[0x12] = '\0';
    local_178[0x13] = '\0';
    local_178[0x14] = '\0';
    local_178[0x15] = '\0';
    local_178[0x16] = '\0';
    local_178[0x17] = '\0';
    local_178[0x18] = '\0';
    local_178[0x19] = '\0';
    local_178[0x1a] = '\0';
    local_178[0x1b] = '\0';
    local_178[0x1c] = '\0';
    local_178[0x1d] = '\0';
    local_178[0x1e] = '\0';
    local_178[0x1f] = '\0';
    local_158 = local_158 & 0xffffff0000000000;
    uStack_150 = 0x400000015;
    local_148 = _DAT_1801d90f0;
    uStack_140 = _UNK_1801d90f8;
    local_138 = _DAT_1801d9ae0;
    uStack_130 = _UNK_1801d9ae8;
    local_128 = _DAT_1801d9680;
    uStack_120 = _UNK_1801d9688;
    local_118 = _DAT_1801d95b0;
    uStack_110 = _UNK_1801d95b8;
    local_108 = _DAT_1801d91c0;
    uStack_100 = _UNK_1801d91c8;
    local_f8 = _DAT_1801d90e0;
    uStack_f0 = _UNK_1801d90e8;
    local_e8 = _DAT_1801d9490;
    uStack_e0 = _UNK_1801d9498;
    local_d8 = _DAT_1801d98c0;
    uStack_d0 = _UNK_1801d98c8;
    local_c8 = 0x6800000010;
    pcVar3 = FUN_1800e3d90(local_178);
    FUN_1800e09f0(pcVar3);
    (**(code **)(DAT_1801f3ae0 + 0x2a8))();
    puVar4 = FUN_1800e39a0((int32_t *)local_178);
    lVar9 = FUN_1800e32f0((longlong)puVar4);
    FUN_1800e09f0(lVar9);
    (**(code **)(DAT_1801f3ae0 + 0x2a8))();
    (**(code **)(DAT_1801f3ae0 + 0x2a8))();
    lVar9 = (**(code **)(DAT_1801f3ae0 + 8))();
    (**(code **)(DAT_1801f3ae0 + 0x9a0))(local_1d8,"I Accept",0,0);
    fVar16 = *(float *)(lVar9 + 0x3c);
    (**(code **)(DAT_1801f3ae0 + 0x118))(local_1d8 + 2);
    fVar16 = (local_1d8[2] - (fVar16 + fVar16 + local_1d8[0])) * DAT_1801d8e18;
    if (0.0 < fVar16) {
      auVar14._0_8_ = (**(code **)(DAT_1801f3ae0 + 0x268))();
      auVar14._8_8_ = extraout_XMM0_Qb;
      auVar15._4_12_ = auVar14._4_12_;
      auVar15._0_4_ = (float)auVar14._0_8_ + fVar16;
      (**(code **)(DAT_1801f3ae0 + 0x280))(auVar15._0_8_);
    }
    local_1d8[0] = 0.0;
    local_1d8[1] = 0.0;
    cVar2 = (**(code **)(DAT_1801f3ae0 + 0x388))("I Accept",local_1d8);
    if (cVar2 != '\0') {
      DAT_1801f3a3b = '\x01';
    }
  }
  FUN_1801252c0(local_38 ^ (ulonglong)auStackY_218);
  return;
}

// ---- Function: FUN_1800e32f0 ----
longlong FUN_1800e32f0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  longlong lVar5;
  
  lVar5 = 3;
  piVar4 = (int *)(param_1 + 0x44);
  pcVar3 = (char *)(param_1 + 2);
  do {
    iVar2 = ((0x69 - piVar4[-1]) * 0x28) % 0x7f + 0x7f;
    pcVar3[-2] = (char)iVar2 +
                 (((char)(iVar2 / 0x7f) + (char)(iVar2 >> 0x1f)) -
                 (char)((longlong)iVar2 * 0x81020409 >> 0x3f)) * -0x7f;
    iVar2 = ((0x69 - *piVar4) * 0x28) % 0x7f + 0x7f;
    pcVar3[-1] = (char)iVar2 +
                 (((char)(iVar2 / 0x7f) + (char)(iVar2 >> 0x1f)) -
                 (char)((longlong)iVar2 * 0x81020409 >> 0x3f)) * -0x7f;
    iVar2 = ((0x69 - piVar4[1]) * 0x28) % 0x7f + 0x7f;
    *pcVar3 = (char)iVar2 +
              (((char)(iVar2 / 0x7f) + (char)(iVar2 >> 0x1f)) -
              (char)((longlong)iVar2 * 0x81020409 >> 0x3f)) * -0x7f;
    iVar2 = ((0x69 - piVar4[2]) * 0x28) % 0x7f + 0x7f;
    pcVar3[1] = (char)iVar2 +
                (((char)(iVar2 / 0x7f) + (char)(iVar2 >> 0x1f)) -
                (char)((longlong)iVar2 * 0x81020409 >> 0x3f)) * -0x7f;
    iVar2 = ((0x69 - piVar4[3]) * 0x28) % 0x7f + 0x7f;
    pcVar3[2] = (char)iVar2 +
                (((char)(iVar2 / 0x7f) + (char)(iVar2 >> 0x1f)) -
                (char)((longlong)iVar2 * 0x81020409 >> 0x3f)) * -0x7f;
    iVar2 = ((0x69 - piVar4[4]) * 0x28) % 0x7f + 0x7f;
    pcVar3[3] = (char)iVar2 +
                (((char)(iVar2 / 0x7f) + (char)(iVar2 >> 0x1f)) -
                (char)((longlong)iVar2 * 0x81020409 >> 0x3f)) * -0x7f;
    iVar2 = ((0x69 - piVar4[5]) * 0x28) % 0x7f + 0x7f;
    pcVar3[4] = (char)iVar2 +
                (((char)(iVar2 / 0x7f) + (char)(iVar2 >> 0x1f)) -
                (char)((longlong)iVar2 * 0x81020409 >> 0x3f)) * -0x7f;
    iVar2 = ((0x69 - piVar4[6]) * 0x28) % 0x7f + 0x7f;
    pcVar3[5] = (char)iVar2 +
                (((char)(iVar2 / 0x7f) + (char)(iVar2 >> 0x1f)) -
                (char)((longlong)iVar2 * 0x81020409 >> 0x3f)) * -0x7f;
    iVar2 = ((0x69 - piVar4[7]) * 0x28) % 0x7f + 0x7f;
    pcVar3[6] = (char)iVar2 +
                (((char)(iVar2 / 0x7f) + (char)(iVar2 >> 0x1f)) -
                (char)((longlong)iVar2 * 0x81020409 >> 0x3f)) * -0x7f;
    iVar2 = ((0x69 - piVar4[8]) * 0x28) % 0x7f + 0x7f;
    pcVar3[7] = (char)iVar2 +
                (((char)(iVar2 / 0x7f) + (char)(iVar2 >> 0x1f)) -
                (char)((longlong)iVar2 * 0x81020409 >> 0x3f)) * -0x7f;
    iVar2 = ((0x69 - piVar4[9]) * 0x28) % 0x7f + 0x7f;
    pcVar3[8] = (char)iVar2 +
                (((char)(iVar2 / 0x7f) + (char)(iVar2 >> 0x1f)) -
                (char)((longlong)iVar2 * 0x81020409 >> 0x3f)) * -0x7f;
    iVar2 = ((0x69 - piVar4[10]) * 0x28) % 0x7f + 0x7f;
    pcVar3[9] = (char)iVar2 +
                (((char)(iVar2 / 0x7f) + (char)(iVar2 >> 0x1f)) -
                (char)((longlong)iVar2 * 0x81020409 >> 0x3f)) * -0x7f;
    iVar2 = ((0x69 - piVar4[0xb]) * 0x28) % 0x7f + 0x7f;
    pcVar3[10] = (char)iVar2 +
                 (((char)(iVar2 / 0x7f) + (char)(iVar2 >> 0x1f)) -
                 (char)((longlong)iVar2 * 0x81020409 >> 0x3f)) * -0x7f;
    iVar2 = ((0x69 - piVar4[0xc]) * 0x28) % 0x7f + 0x7f;
    pcVar3[0xb] = (char)iVar2 +
                  (((char)(iVar2 / 0x7f) + (char)(iVar2 >> 0x1f)) -
                  (char)((longlong)iVar2 * 0x81020409 >> 0x3f)) * -0x7f;
    iVar2 = ((0x69 - piVar4[0xd]) * 0x28) % 0x7f + 0x7f;
    pcVar3[0xc] = (char)iVar2 +
                  (((char)(iVar2 / 0x7f) + (char)(iVar2 >> 0x1f)) -
                  (char)((longlong)iVar2 * 0x81020409 >> 0x3f)) * -0x7f;
    iVar2 = ((0x69 - piVar4[0xe]) * 0x28) % 0x7f + 0x7f;
    pcVar3[0xd] = (char)iVar2 +
                  (((char)(iVar2 / 0x7f) + (char)(iVar2 >> 0x1f)) -
                  (char)((longlong)iVar2 * 0x81020409 >> 0x3f)) * -0x7f;
    iVar2 = ((0x69 - piVar4[0xf]) * 0x28) % 0x7f + 0x7f;
    pcVar3[0xe] = (char)iVar2 +
                  (((char)(iVar2 / 0x7f) + (char)(iVar2 >> 0x1f)) -
                  (char)((longlong)iVar2 * 0x81020409 >> 0x3f)) * -0x7f;
    iVar2 = ((0x69 - piVar4[0x10]) * 0x28) % 0x7f + 0x7f;
    pcVar3[0xf] = (char)iVar2 +
                  (((char)(iVar2 / 0x7f) + (char)(iVar2 >> 0x1f)) -
                  (char)((longlong)iVar2 * 0x81020409 >> 0x3f)) * -0x7f;
    iVar2 = ((0x69 - piVar4[0x11]) * 0x28) % 0x7f + 0x7f;
    pcVar3[0x10] = (char)iVar2 +
                   (((char)(iVar2 / 0x7f) + (char)(iVar2 >> 0x1f)) -
                   (char)((longlong)iVar2 * 0x81020409 >> 0x3f)) * -0x7f;
    iVar2 = ((0x69 - piVar4[0x12]) * 0x28) % 0x7f + 0x7f;
    pcVar3[0x11] = (char)iVar2 +
                   (((char)(iVar2 / 0x7f) + (char)(iVar2 >> 0x1f)) -
                   (char)((longlong)iVar2 * 0x81020409 >> 0x3f)) * -0x7f;
    piVar1 = piVar4 + 0x13;
    piVar4 = piVar4 + 0x15;
    iVar2 = ((0x69 - *piVar1) * 0x28) % 0x7f + 0x7f;
    pcVar3[0x12] = (char)iVar2 +
                   (((char)(iVar2 / 0x7f) + (char)(iVar2 >> 0x1f)) -
                   (char)((longlong)iVar2 * 0x81020409 >> 0x3f)) * -0x7f;
    lVar5 = lVar5 + -1;
    pcVar3 = pcVar3 + 0x15;
  } while (lVar5 != 0);
  *(int32_t *)(param_1 + 0x3f) = 0;
  return param_1;
}

// ---- Function: FUN_1800e39a0 ----
int32_t * FUN_1800e39a0(int32_t *param_1)

{
  longlong lVar1;
  int *piVar2;
  longlong lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar3 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  piVar2 = (int *)((longlong)param_1 + 0x44);
  do {
    piVar2[-1] = ("By clicking \"I accept\" you agree to acknowledging this message."[lVar3] * 0x49
                 + 0x69) % 0x7f;
    *piVar2 = ("By clicking \"I accept\" you agree to acknowledging this message."[lVar3 + 1] * 0x49
              + 0x69) % 0x7f;
    piVar2[1] = ("By clicking \"I accept\" you agree to acknowledging this message."[lVar3 + 2] *
                 0x49 + 0x69) % 0x7f;
    piVar2[2] = ("By clicking \"I accept\" you agree to acknowledging this message."[lVar3 + 3] *
                 0x49 + 0x69) % 0x7f;
    piVar2[3] = ("By clicking \"I accept\" you agree to acknowledging this message."[lVar3 + 4] *
                 0x49 + 0x69) % 0x7f;
    piVar2[4] = ("By clicking \"I accept\" you agree to acknowledging this message."[lVar3 + 5] *
                 0x49 + 0x69) % 0x7f;
    piVar2[5] = ("By clicking \"I accept\" you agree to acknowledging this message."[lVar3 + 6] *
                 0x49 + 0x69) % 0x7f;
    piVar2[6] = ("By clicking \"I accept\" you agree to acknowledging this message."[lVar3 + 7] *
                 0x49 + 0x69) % 0x7f;
    piVar2[7] = ("By clicking \"I accept\" you agree to acknowledging this message."[lVar3 + 8] *
                 0x49 + 0x69) % 0x7f;
    piVar2[8] = ("By clicking \"I accept\" you agree to acknowledging this message."[lVar3 + 9] *
                 0x49 + 0x69) % 0x7f;
    piVar2[9] = ("By clicking \"I accept\" you agree to acknowledging this message."[lVar3 + 10] *
                 0x49 + 0x69) % 0x7f;
    piVar2[10] = ("By clicking \"I accept\" you agree to acknowledging this message."[lVar3 + 0xb] *
                  0x49 + 0x69) % 0x7f;
    piVar2[0xb] = ("By clicking \"I accept\" you agree to acknowledging this message."[lVar3 + 0xc]
                   * 0x49 + 0x69) % 0x7f;
    piVar2[0xc] = ("By clicking \"I accept\" you agree to acknowledging this message."[lVar3 + 0xd]
                   * 0x49 + 0x69) % 0x7f;
    piVar2[0xd] = ("By clicking \"I accept\" you agree to acknowledging this message."[lVar3 + 0xe]
                   * 0x49 + 0x69) % 0x7f;
    piVar2[0xe] = ("By clicking \"I accept\" you agree to acknowledging this message."[lVar3 + 0xf]
                   * 0x49 + 0x69) % 0x7f;
    piVar2[0xf] = ("By clicking \"I accept\" you agree to acknowledging this message."[lVar3 + 0x10]
                   * 0x49 + 0x69) % 0x7f;
    piVar2[0x10] = ("By clicking \"I accept\" you agree to acknowledging this message."
                    [lVar3 + 0x11] * 0x49 + 0x69) % 0x7f;
    piVar2[0x11] = ("By clicking \"I accept\" you agree to acknowledging this message."
                    [lVar3 + 0x12] * 0x49 + 0x69) % 0x7f;
    piVar2[0x12] = ("By clicking \"I accept\" you agree to acknowledging this message."
                    [lVar3 + 0x13] * 0x49 + 0x69) % 0x7f;
    lVar1 = lVar3 + 0x14;
    lVar3 = lVar3 + 0x15;
    piVar2[0x13] = ("By clicking \"I accept\" you agree to acknowledging this message."[lVar1] *
                    0x49 + 0x69) % 0x7f;
    piVar2 = piVar2 + 0x15;
  } while (lVar3 < 0x3f);
  return param_1;
}

