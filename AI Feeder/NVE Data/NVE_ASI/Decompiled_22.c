#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_1800cb380 ----
uint FUN_1800cb380(uint param_1)

{
  if (param_1 < 0x3030384d) {
    if (param_1 == 0x3030384c) {
switchD_1800cb3bb_caseD_3c:
      return 0x3c;
    }
    switch(param_1) {
    case 1:
    case 2:
    case 3:
    case 4:
      return 1;
    case 5:
    case 6:
    case 7:
    case 8:
      return 5;
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
      return 9;
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
      return 0xf;
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
      return 0x13;
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x59:
      return 0x17;
    default:
      return param_1;
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
      return 0x1b;
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
      return 0x21;
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2b:
      return 0x27;
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
      return 0x2c;
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
      return 0x30;
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3a:
    case 0x3b:
      return 0x35;
    case 0x3c:
    case 0x3d:
    case 0x3e:
    case 0x3f:
    case 0x40:
      goto switchD_1800cb3bb_caseD_3c;
    case 0x46:
    case 0x47:
    case 0x48:
      return 0x46;
    case 0x49:
    case 0x4a:
    case 0x4b:
    case 0x4c:
    case 0x4d:
    case 0x4e:
      return 0x49;
    case 0x4f:
    case 0x50:
    case 0x51:
      return 0x4f;
    case 0x52:
    case 0x53:
    case 0x54:
      return 0x52;
    case 0x57:
    case 0x5a:
    case 0x5b:
      return 0x5a;
    case 0x58:
    case 0x5c:
    case 0x5d:
      return 0x5c;
    case 0x5e:
    case 0x5f:
    case 0x60:
      return 0x5e;
    case 0x61:
    case 0x62:
    case 99:
      return 0x61;
    }
  }
  if (param_1 < 0x42475332) {
    if (param_1 != 0x42475331) {
      if (param_1 == 0x3036314c) {
        return 0x35;
      }
      if (param_1 == 0x3038414c) {
        return 0x30;
      }
      if (param_1 == 0x3631414c) {
        return 0x21;
      }
      if (param_1 != 0x42475330) {
        return param_1;
      }
    }
  }
  else if (param_1 != 0x42475332) {
    if (param_1 == 0x424757b9) {
      return 0x1b;
    }
    if (param_1 != 0x424757ba) {
      return param_1;
    }
    return 0x1b;
  }
  return 0x42475330;
}

// ---- Function: IGCS_MoveCameraPanorama ----
void IGCS_MoveCameraPanorama(int32_t param_1)

{
  LPCSTR **lpOutputString;
  int32_t auStack_88 [32];
  char *local_68;
  int32_t uStack_60;
  ulonglong local_58;
  int32_t *local_50;
  int32_t local_48;
  int32_t local_40;
  LPCSTR *local_38 [3];
  ulonglong local_20;
  ulonglong local_18;
  
                    
  local_18 = DAT_1801eb080 ^ (ulonglong)auStack_88;
  local_48 = 0x7000000000000000;
  local_58 = 1;
  local_50 = &local_48;
  local_68 = "IGCS_MoveCameraPanorama({:.2f})";
  uStack_60 = 0x1f;
  local_40 = param_1;
  FUN_1800b7670((longlong *)local_38,(longlong *)&local_68,&local_58);
  lpOutputString = local_38;
  if (0xf < local_20) {
    lpOutputString = (LPCSTR **)local_38[0];
  }
  OutputDebugStringA((LPCSTR)lpOutputString);
  FUN_1800a6800((longlong *)local_38);
  DAT_1801f3aed = 1;
  FUN_1801252c0(local_18 ^ (ulonglong)auStack_88);
  return;
}

// ---- Function: IGCS_MoveCameraMultishot ----
void IGCS_MoveCameraMultishot(int32_t param_1,int32_t param_2,int32_t param_3,char param_4)

{
  LPCSTR **lpOutputString;
  int32_t auStack_c8 [32];
  char *local_a8;
  int32_t uStack_a0;
  ulonglong local_98;
  int32_t *local_90;
  int32_t local_88;
  int32_t local_80;
  int32_t local_78;
  int32_t local_70;
  int32_t local_68;
  int32_t local_64;
  int32_t local_60;
  char local_5c;
  LPCSTR *local_58 [3];
  ulonglong local_40;
  ulonglong local_38;
  
                    
  local_38 = DAT_1801eb080 ^ (ulonglong)auStack_c8;
  local_88 = 0x7000000000000000;
  local_80 = 0x7000000000000004;
  local_78 = 0x7000000000000008;
  local_70 = 0x500000000000000c;
  local_98 = 4;
  local_90 = &local_88;
  local_a8 = "IGCS_MoveCameraMultishot({:.2f}, {:.2f}, {:.2f}, {})";
  uStack_a0 = 0x34;
  local_68 = param_1;
  local_64 = param_2;
  local_60 = param_3;
  local_5c = param_4;
  FUN_1800b7670((longlong *)local_58,(longlong *)&local_a8,&local_98);
  lpOutputString = local_58;
  if (0xf < local_40) {
    lpOutputString = (LPCSTR **)local_58[0];
  }
  OutputDebugStringA((LPCSTR)lpOutputString);
  FUN_1800a6800((longlong *)local_58);
  if (DAT_1801ee909 == '\0') {
    DAT_1801f3af9 = 1;
    DAT_1801f3aed = 1;
    DAT_1801ee909 = '\x01';
  }
  if (param_4 != '\0') {
    _DAT_1801ec720 = DAT_1801ec730;
    DAT_1801ec728 = DAT_1801ec738;
  }
  DAT_1801ec718 = param_1;
  DAT_1801ec71c = param_2;
  FUN_1801252c0(local_38 ^ (ulonglong)auStack_c8);
  return;
}

// ---- Function: IGCS_EndScreenshotSession ----
void IGCS_EndScreenshotSession(void)

{
  LPCSTR **lpOutputString;
  int32_t auStack_78 [32];
  ulonglong local_58 [2];
  char *local_48;
  int32_t local_40;
  LPCSTR *local_38 [3];
  ulonglong local_20;
  ulonglong local_18;
  
                    
  local_18 = DAT_1801eb080 ^ (ulonglong)auStack_78;
  local_40 = 0x1b;
  local_58[0] = 0;
  local_58[1] = 0;
  local_48 = "IGCS_EndScreenshotSession()";
  FUN_1800b7670((longlong *)local_38,(longlong *)&local_48,local_58);
  lpOutputString = local_38;
  if (0xf < local_20) {
    lpOutputString = (LPCSTR **)local_38[0];
  }
  OutputDebugStringA((LPCSTR)lpOutputString);
  FUN_1800a6800((longlong *)local_38);
  DAT_1801f3aed = 0;
  DAT_1801f3af8 = 1;
  DAT_1801ee909 = 0;
  FUN_1801252c0(local_18 ^ (ulonglong)auStack_78);
  return;
}

// ---- Function: FUN_1800cb820 ----
void FUN_1800cb820(void)

{
  __uint64 _Var1;
  int32_t uVar2;
  __uint64 _Var3;
  __uint64 _Var4;
  float fVar5;
  FARPROC pFVar6;
  int32_t *puVar7;
  __uint64 *p_Var8;
  float *pfVar9;
  longlong lVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float local_108;
  float local_f8;
  int32_t local_e8;
  int32_t local_d8;
  int32_t uStack_d0;
  float local_b8;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x10) < DAT_1801fc900) && (FUN_180125398(&DAT_1801fc900), DAT_1801fc900 == -1)) {
    bVar11 = DAT_1801f3af0 == (HMODULE)0x0;
    if (bVar11) {
      DAT_1801f3af0 = LoadLibraryA("IgcsConnector.addon64");
      bVar11 = DAT_1801f3af0 == (HMODULE)0x0;
    }
    DAT_1801fc904 = !bVar11;
    _Init_thread_footer(&DAT_1801fc900);
  }
  if (DAT_1801fc904 != '\0') {
    if (DAT_1801f3af0 == (HMODULE)0x0) {
      DAT_1801f3af0 = LoadLibraryA("IgcsConnector.addon64");
    }
    pFVar6 = GetProcAddress(DAT_1801f3af0,"getDataFromCameraToolsBuffer");
    puVar7 = (int32_t *)(*pFVar6)();
    *puVar7 = DAT_1801f3aec;
    puVar7[1] = 0;
    nativeInit(0xa200eb1ee790f448);
    p_Var8 = nativeCall();
    _Var3 = *p_Var8;
    _Var4 = p_Var8[1];
    _Var1 = p_Var8[2];
    nativeInit(0x5b4e4c817fcc2dfb);
    nativePush64(2);
    pfVar9 = (float *)nativeCall();
    fVar5 = DAT_1801d8f10;
    fVar20 = pfVar9[2];
    fVar21 = *pfVar9;
    for (fVar14 = fVar21; DAT_1801d8f10 < fVar14; fVar14 = fVar14 + DAT_1801d8f48) {
    }
    for (; fVar16 = fVar20, fVar14 < 0.0; fVar14 = fVar14 + DAT_1801d8f10) {
    }
    for (; DAT_1801d8f10 < fVar16; fVar16 = fVar16 + DAT_1801d8f48) {
    }
    for (; fVar16 < 0.0; fVar16 = fVar16 + DAT_1801d8f10) {
    }
    local_b8 = (float)*(int32_t *)(pfVar9 + 4);
    for (fVar14 = local_b8; DAT_1801d8f10 < fVar14; fVar14 = fVar14 + DAT_1801d8f48) {
    }
    for (; fVar14 < 0.0; fVar14 = fVar14 + DAT_1801d8f10) {
    }
    uVar2 = FUN_18014df60();
    fVar14 = (float)uVar2;
    uVar2 = FUN_18014fb00();
    fVar16 = (float)uVar2;
    uVar2 = FUN_18014df60();
    fVar15 = (float)uVar2;
    uVar2 = FUN_18014fb00();
    fVar17 = (float)uVar2;
    uVar2 = FUN_18014df60();
    fVar12 = (float)uVar2;
    uVar2 = FUN_18014fb00();
    fVar18 = (float)uVar2;
    nativeInit(0x5b4e4c817fcc2dfb);
    nativePush64(0);
    nativeCall();
    local_d8 = (int32_t)_Var3;
    uStack_d0 = (int32_t)_Var4;
    *(int32_t *)(puVar7 + 8) = local_d8;
    *(int32_t *)(puVar7 + 0xc) = uStack_d0;
    local_e8 = (int32_t)_Var1;
    *(int32_t *)(puVar7 + 0x10) = local_e8;
    *(float *)(puVar7 + 0x14) = fVar18 * fVar14 * fVar15 - fVar12 * fVar16 * fVar17;
    *(float *)(puVar7 + 0x18) = fVar18 * fVar16 * fVar15 + fVar12 * fVar14 * fVar17;
    *(float *)(puVar7 + 0x1c) = fVar15 * fVar16 * fVar12 - fVar17 * fVar14 * fVar18;
    *(float *)(puVar7 + 0x20) = fVar17 * fVar16 * fVar18 + fVar15 * fVar14 * fVar12;
    nativeInit(0x80ec114669daeff4);
    p_Var8 = nativeCall();
    *(int *)(puVar7 + 4) = (int)*p_Var8;
    lVar10 = FUN_1800a6750();
    local_108 = *(float *)(lVar10 + 0x30);
    local_f8 = *(float *)(lVar10 + 0x34);
    fVar14 = *(float *)(lVar10 + 0x38);
    fVar16 = local_f8 * local_f8 + local_108 * local_108 + fVar14 * fVar14;
    if (fVar16 < 0.0) {
      fVar16 = FUN_1801501f8(fVar16);
    }
    else {
      fVar16 = SQRT(fVar16);
    }
    if (0.0 < fVar16) {
      local_108 = local_108 / fVar16;
      local_f8 = local_f8 / fVar16;
    }
    lVar10 = FUN_1800a6750();
    fVar16 = *(float *)(lVar10 + 0x20);
    fVar15 = *(float *)(lVar10 + 0x24);
    fVar17 = *(float *)(lVar10 + 0x28);
    fVar12 = fVar15 * fVar15 + fVar16 * fVar16 + fVar17 * fVar17;
    if (fVar12 < 0.0) {
      fVar12 = FUN_1801501f8(fVar12);
    }
    else {
      fVar12 = SQRT(fVar12);
    }
    if (0.0 < fVar12) {
      fVar16 = fVar16 / fVar12;
      fVar15 = fVar15 / fVar12;
      fVar17 = fVar17 / fVar12;
    }
    lVar10 = FUN_1800a6750();
    fVar12 = *(float *)(lVar10 + 0x10);
    fVar18 = *(float *)(lVar10 + 0x14);
    fVar19 = *(float *)(lVar10 + 0x18);
    fVar13 = fVar18 * fVar18 + fVar12 * fVar12 + fVar19 * fVar19;
    if (fVar13 < 0.0) {
      fVar13 = FUN_1801501f8(fVar13);
    }
    else {
      fVar13 = SQRT(fVar13);
    }
    if (0.0 < fVar13) {
      fVar12 = fVar12 / fVar13;
      fVar18 = fVar18 / fVar13;
      fVar19 = fVar19 / fVar13;
    }
    *(float *)(puVar7 + 0x24) = local_108;
    *(float *)(puVar7 + 0x3c) = fVar16;
    *(float *)(puVar7 + 0x40) = fVar15;
    *(float *)(puVar7 + 0x44) = fVar17;
    *(float *)(puVar7 + 0x28) = local_f8;
    fVar15 = DAT_1801d8f48;
    *(float *)(puVar7 + 0x30) = fVar12;
    *(float *)(puVar7 + 0x34) = fVar18;
    *(float *)(puVar7 + 0x38) = fVar19;
    *(float *)(puVar7 + 0x2c) = fVar14;
    fVar16 = DAT_1801d8efc;
    fVar14 = DAT_1801d8e78;
    for (; fVar5 < local_b8; local_b8 = local_b8 + fVar15) {
    }
    for (; local_b8 < 0.0; local_b8 = local_b8 + fVar5) {
    }
    *(float *)(puVar7 + 0x4c) = (local_b8 / DAT_1801d8efc) * DAT_1801d8e78;
    for (; fVar5 < fVar21; fVar21 = fVar21 + fVar15) {
    }
    for (; fVar21 < 0.0; fVar21 = fVar21 + fVar5) {
    }
    *(float *)(puVar7 + 0x48) = (fVar21 / fVar16) * fVar14;
    for (; fVar5 < fVar20; fVar20 = fVar20 + fVar15) {
    }
    for (; fVar20 < 0.0; fVar20 = fVar20 + fVar5) {
    }
    *(float *)(puVar7 + 0x50) = (fVar20 / fVar16) * fVar14;
  }
  return;
}

// ---- Function: FUN_1800cbea0 ----
void FUN_1800cbea0(void)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  plVar2 = *(longlong **)(lVar1 + 0x130);
  if (plVar2 != *(longlong **)(lVar1 + 0x138)) {
    FUN_1800c6090(plVar2,*(longlong **)(lVar1 + 0x138));
    *(int32_t *)(lVar1 + 0x138) = *(int32_t *)(lVar1 + 0x130);
  }
  return;
}

// ---- Function: FUN_1800cbfa0 ----
void FUN_1800cbfa0(void)

{
  uint *puVar1;
  short sVar2;
  code *pcVar3;
  HMODULE hModule;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  ulonglong uVar8;
  char **ppcVar9;
  int32_t auStack_2a8 [32];
  uint local_288;
  int32_t *local_280;
  char *local_278;
  int32_t uStack_270;
  int32_t local_268;
  int32_t uStack_260;
  WCHAR local_258 [16];
  WCHAR local_238;
  int32_t local_236 [526];
  ulonglong local_28;
  
  local_28 = DAT_1801eb080 ^ (ulonglong)auStack_2a8;
  local_288 = 0;
  local_280 = &DAT_1801fc910;
  hModule = GetModuleHandleA("CitizenGame.dll");
  local_238 = L'\0';
  FUN_180151670((int32_t (*) [32])local_236,0,0x206);
  GetModuleFileNameW(hModule,&local_238,0x104);
  uVar8 = 0xffffffffffffffff;
  do {
    uVar8 = uVar8 + 1;
  } while (*(short *)(local_236 + uVar8 * 2 + -2) != 0);
  DAT_1801fc910 = (uint *)0x0;
  uRam00000001801fc918 = 0;
  DAT_1801fc920 = 0;
  DAT_1801fc928 = 0;
  FUN_1800b86e0(&DAT_1801fc910,(int32_t *)&local_238,uVar8);
  local_288 = 7;
  puVar5 = (uint *)&DAT_1801fc910;
  if (7 < DAT_1801fc928) {
    puVar5 = DAT_1801fc910;
  }
  puVar7 = (uint *)((longlong)puVar5 + DAT_1801fc920 * 2);
  puVar4 = FUN_1800b7dd0(puVar5,puVar7);
  if (puVar4 != puVar7) {
    do {
      if (((short)*puVar4 != 0x5c) && ((short)*puVar4 != 0x2f)) break;
      puVar4 = (uint *)((longlong)puVar4 + 2);
    } while (puVar4 != puVar7);
    do {
      if (puVar4 == puVar7) goto LAB_1800cc10b;
      sVar2 = *(short *)((longlong)puVar7 + -2);
      puVar1 = puVar7;
    } while ((sVar2 != 0x5c) && (puVar7 = (uint *)((longlong)puVar7 + -2), sVar2 != 0x2f));
    do {
      puVar7 = puVar1;
      if (puVar4 == puVar7) break;
      puVar1 = (uint *)((longlong)puVar7 + -2);
    } while ((*(short *)puVar1 == 0x5c) || (*(short *)puVar1 == 0x2f));
  }
LAB_1800cc10b:
  local_278 = (char *)0x0;
  uStack_270 = 0;
  local_268 = 0;
  uStack_260 = 0;
  FUN_1800b86e0(&local_278,(int32_t *)puVar5,(longlong)puVar7 - (longlong)puVar5 >> 1);
  uVar6 = 0x3f;
  local_288 = 0x3f;
  if (7 < DAT_1801fc928) {
    puVar5 = DAT_1801fc910;
    if ((0xfff < DAT_1801fc928 * 2 + 2) &&
       (puVar5 = *(uint **)(DAT_1801fc910 + -2),
       0x1f < (ulonglong)((longlong)DAT_1801fc910 + (-8 - (longlong)puVar5)))) {
      FUN_18012b7b4();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    thunk_FUN_18012d5e8(puVar5);
  }
  DAT_1801fc910 = (uint *)local_278;
  uRam00000001801fc918 = uStack_270;
  DAT_1801fc920 = local_268;
  DAT_1801fc928 = uStack_260;
  local_268 = _DAT_1801d8f60;
  uStack_260 = _UNK_1801d8f68;
  local_278 = (char *)((ulonglong)local_278 & 0xffffffffffff0000);
  FUN_1800ba040((longlong *)&local_278);
  if (hModule != (HMODULE)0x0) {
    uVar8 = __std_fs_code_page();
    local_278 = "plugins";
    uStack_270 = 7;
    ppcVar9 = &local_278;
    FUN_1800aab10(local_258,(UINT)uVar8,ppcVar9);
    uVar6 = 0xff;
    local_288 = 0xff;
    FUN_1800b84a0((uint *)&DAT_1801fc910,(uint *)local_258,ppcVar9);
    FUN_1800ba040((longlong *)local_258);
  }
  uVar8 = __std_fs_code_page();
  local_278 = "nve-shaders";
  uStack_270 = 0xb;
  ppcVar9 = &local_278;
  FUN_1800aab10(local_258,(UINT)uVar8,ppcVar9);
  local_288 = uVar6 | 0x300;
  FUN_1800b84a0((uint *)&DAT_1801fc910,(uint *)local_258,ppcVar9);
  FUN_1800ba040((longlong *)local_258);
  FUN_1801252c0(local_28 ^ (ulonglong)auStack_2a8);
  return;
}

// ---- Function: FUN_1800cc290 ----
void FUN_1800cc290(longlong *param_1,int32_t param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  int32_t *puVar4;
  int32_t ****ppppuVar5;
  ulonglong uVar6;
  int32_t auStack_98 [32];
  uint local_78 [2];
  int32_t local_70;
  int32_t *local_68;
  int32_t uStack_60;
  ulonglong local_58;
  int32_t *local_50;
  longlong *local_48;
  int32_t local_40;
  uint local_38;
  int32_t ***local_30 [2];
  ulonglong local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_1801eb080 ^ (ulonglong)auStack_98;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(int32_t *)param_1 = 0;
  local_70 = 1;
  plVar3 = (longlong *)
           ((((((ulonglong)(param_3 >> 8 & 0xff) ^
               ((ulonglong)(param_3 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3 ^
              (ulonglong)(param_3 >> 0x10) & 0xff) * 0x100000001b3 ^ (ulonglong)(param_3 >> 0x18)) *
             0x100000001b3 & _DAT_1801fb420) * 0x10 + _DAT_1801fb408);
  lVar2 = plVar3[1];
  local_78[0] = param_3;
  local_48 = param_1;
  if (lVar2 != DAT_1801fb3f8) {
    uVar1 = *(uint *)(lVar2 + 0x10);
    while (param_3 != uVar1) {
      if (lVar2 == *plVar3) goto LAB_1800cc3aa;
      lVar2 = *(longlong *)(lVar2 + 8);
      uVar1 = *(uint *)(lVar2 + 0x10);
    }
    plVar3 = FUN_1800ce7e0((float *)&DAT_1801fb3f0,&local_58,(byte *)local_78);
    uVar6 = 0xffffffffffffffff;
    do {
      uVar6 = uVar6 + 1;
    } while (*(char *)((longlong)*(int32_t **)(*plVar3 + 0x18) + uVar6) != '\0');
    FUN_1800b9910(param_1,*(int32_t **)(*plVar3 + 0x18),uVar6);
    goto LAB_1800cc4af;
  }
LAB_1800cc3aa:
  FUN_1800b9910(param_1,(int32_t *)&DAT_1801cc314,1);
  switch(param_2) {
  case 1:
    puVar4 = (int32_t *)&DAT_1801cc318;
    break;
  case 2:
    puVar4 = (int32_t *)&DAT_1801cc31c;
    break;
  case 3:
    puVar4 = (int32_t *)&DAT_1801cc320;
    break;
  case 4:
    puVar4 = (int32_t *)&DAT_1801cc324;
    break;
  case 5:
    puVar4 = (int32_t *)&DAT_1801cc328;
    break;
  case 6:
    puVar4 = (int32_t *)&DAT_1801cc32c;
    break;
  default:
    goto switchD_1800cc3d8_default;
  }
  FUN_1800b9910(param_1,puVar4,3);
switchD_1800cc3d8_default:
  local_38 = local_78[0];
  local_40 = 0x2000000000000000;
  local_58 = 1;
  local_50 = &local_40;
  local_68 = &DAT_1801cc330;
  uStack_60 = 4;
  FUN_1800b7670((longlong *)local_30,(longlong *)&local_68,&local_58);
  local_70 = 3;
  ppppuVar5 = local_30;
  if (0xf < local_18) {
    ppppuVar5 = (int32_t ****)local_30[0];
  }
  FUN_1800b9910(param_1,ppppuVar5,local_20);
  FUN_1800a6800((longlong *)local_30);
LAB_1800cc4af:
  FUN_1801252c0(local_10 ^ (ulonglong)auStack_98);
  return;
}

// ---- Function: FUN_1800cc4f0 ----
void FUN_1800cc4f0(uint param_1,int32_t param_2,int32_t *param_3,longlong *param_4)

{
  code *pcVar1;
  int32_t **ppuVar2;
  char cVar3;
  ulonglong uVar4;
  longlong *plVar5;
  LPCWSTR pWVar6;
  int32_t (*pauVar7) [32];
  longlong lVar8;
  ulonglong uVar9;
  wchar_t *pwVar10;
  int32_t (**ppauVar11) [32];
  int32_t (*pauVar12) [32];
  uint uVar13;
  int32_t (*pauVar14) [32];
  int32_t (*pauVar15) [32];
  byte *pbVar16;
  int32_t (*pauVar17) [32];
  int32_t *****pppppuVar18;
  int32_t auStackY_238 [32];
  int32_t (*local_1f8) [32];
  int32_t **ppuStack_1f0;
  int32_t (*local_1e8) [32];
  int iStack_1dc;
  longlong local_1d8 [22];
  int32_t **local_128 [12];
  int32_t (*local_c8 [3]) [32];
  ulonglong local_b0;
  int32_t ****local_a8 [2];
  LPCWSTR local_98;
  ulonglong local_90;
  WCHAR local_88 [16];
  WCHAR local_68 [16];
  ulonglong local_48;
  
  local_48 = DAT_1801eb080 ^ (ulonglong)auStackY_238;
  pauVar15 = (int32_t (*) [32])0x0;
  lVar8 = param_3[1];
  if (lVar8 == 0) goto LAB_1800cc8c6;
  pbVar16 = (byte *)*param_3;
  uVar13 = 0xffffffff;
  do {
    uVar13 = uVar13 >> 8 ^ *(uint *)(&DAT_1801cc4e0 + (ulonglong)((*pbVar16 ^ uVar13) & 0xff) * 4);
    pbVar16 = pbVar16 + 1;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x10) < DAT_1801fc908) && (FUN_180125398(&DAT_1801fc908), DAT_1801fc908 == -1)) {
    FUN_1800cbfa0();
    atexit((_func_5014 *)&LAB_1801563c0);
    _Init_thread_footer(&DAT_1801fc908);
  }
  uVar9 = (ulonglong)~uVar13;
  uVar4 = (ulonglong)param_1;
  FUN_1800cc290((longlong *)local_a8,param_1,~uVar13);
  pWVar6 = local_98;
  if (0x7fffffffffffffffU - (longlong)local_98 < 8) {
LAB_1800cc8f6:
    FUN_1800ba540();
LAB_1800cc8fc:
    FUN_1800ba290(pWVar6,&local_1f8,(int32_t *)local_88);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pppppuVar18 = local_a8;
  if (0xf < local_90) {
    pppppuVar18 = (int32_t *****)local_a8[0];
  }
  FUN_1800cfa40(local_c8,uVar4,uVar9,pppppuVar18,(ulonglong)local_98,(int32_t *)".nve_bin",8);
  local_1f8 = (int32_t (*) [32])local_c8;
  if (0xf < local_b0) {
    local_1f8 = local_c8[0];
  }
  uVar4 = __std_fs_code_page();
  ppuStack_1f0 = (int32_t **)local_c8[2];
  uVar9 = uVar4 & 0xffffffff;
  FUN_1800aab10(local_68,(UINT)uVar4,&local_1f8);
  FUN_1800cfce0((uint *)local_88,uVar9,(uint *)local_68);
  FUN_1800ba040((longlong *)local_68);
  FUN_1800a6800((longlong *)local_c8);
  local_1f8 = (int32_t (*) [32])((ulonglong)local_1f8 & 0xffffffff00000000);
  ppuStack_1f0 = &PTR_vftable_1801ebd20;
  pWVar6 = local_88;
  cVar3 = FUN_1800b8cb0(pWVar6,(longlong *)&local_1f8);
  if ((int)local_1f8 != 0) goto LAB_1800cc8fc;
  if (cVar3 != '\0') {
    pwVar10 = local_88;
    FUN_1800ce4f0(local_1d8,pwVar10);
    FUN_1800cd880(local_1d8,pwVar10,2);
    ppauVar11 = local_c8;
    plVar5 = FUN_1800cd7a0(local_1d8,ppauVar11);
    uVar4 = plVar5[1] + *plVar5;
    local_1f8 = (int32_t (*) [32])0x0;
    ppuStack_1f0 = (int32_t **)0x0;
    local_1e8 = (int32_t (*) [32])0x0;
    if (uVar4 == 0) {
      pauVar14 = (int32_t (*) [32])0x0;
    }
    else {
      FUN_1800cf060((ulonglong *)&local_1f8,uVar4);
      pauVar14 = local_1f8;
      ppauVar11 = (int32_t (**) [32])0x0;
      FUN_180151670(local_1f8,0,uVar4);
      ppuStack_1f0 = (int32_t **)(*pauVar14 + uVar4);
    }
    pauVar17 = local_1e8;
    ppuVar2 = ppuStack_1f0;
    plVar5 = FUN_1800cd880(local_1d8,ppauVar11,0);
    uVar4 = (longlong)ppuVar2 - (longlong)pauVar14;
    FUN_1800cda80(plVar5,pauVar14,uVar4);
    pauVar7 = pauVar14;
    pauVar12 = pauVar15;
    if (uVar4 != 0) {
      do {
        (*pauVar7)[0] = (*pauVar7)[0] ^ (&DAT_1801cc4c0)[(ulonglong)(~(uint)pauVar12 & 1) * 4];
        uVar13 = (uint)pauVar12 + 1;
        pauVar7 = (int32_t (*) [32])(*pauVar7 + 1);
        pauVar12 = (int32_t (*) [32])(ulonglong)uVar13;
      } while ((ulonglong)(longlong)(int)uVar13 < uVar4);
    }
    plVar5 = (longlong *)param_4[1];
    if (plVar5 == (longlong *)param_4[2]) {
      FUN_1800ced50(param_4,plVar5,(longlong *)&local_1f8);
      pauVar15 = local_1e8;
      pauVar14 = local_1f8;
    }
    else {
      *plVar5 = (longlong)pauVar14;
      plVar5[1] = (longlong)ppuVar2;
      plVar5[2] = (longlong)pauVar17;
      param_4[1] = param_4[1] + 0x18;
      pauVar14 = pauVar15;
    }
    *param_3 = *(int32_t *)(param_4[1] + -0x18);
    pWVar6 = (LPCWSTR)param_4[1];
    param_3[1] = *(longlong *)(pWVar6 + -8) - *(longlong *)(pWVar6 + -0xc);
    if (pauVar14 != (int32_t (*) [32])0x0) {
      pauVar17 = pauVar14;
      if ((0xfff < (ulonglong)((longlong)pauVar15 - (longlong)pauVar14)) &&
         (pauVar17 = *(int32_t (**) [32])(pauVar14[-1] + 0x18),
         0x1f < (ulonglong)((longlong)pauVar14 + (-8 - (longlong)pauVar17)))) {
        FUN_18012b7b4();
        goto LAB_1800cc8f6;
      }
      thunk_FUN_18012d5e8(pauVar17);
    }
    *(int32_t ***)((longlong)local_1d8 + (longlong)*(int *)(local_1d8[0] + 4)) =
         &PTR_LAB_1801cc4b8;
    *(int *)((longlong)&iStack_1dc + (longlong)*(int *)(local_1d8[0] + 4)) =
         *(int *)(local_1d8[0] + 4) + -0xb0;
    FUN_1800cd640(local_1d8 + 2);
    *(int32_t ***)((longlong)local_1d8 + (longlong)*(int *)(local_1d8[0] + 4)) =
         &PTR_LAB_1801cc4b0;
    *(int *)((longlong)&iStack_1dc + (longlong)*(int *)(local_1d8[0] + 4)) =
         *(int *)(local_1d8[0] + 4) + -0x18;
    local_128[0] = &PTR_LAB_1801cc4d0;
    std::ios_base::_Ios_base_dtor((ios_base *)local_128);
  }
  FUN_1800ba040((longlong *)local_88);
  FUN_1800a6800((longlong *)local_a8);
LAB_1800cc8c6:
  FUN_1801252c0(local_48 ^ (ulonglong)auStackY_238);
  return;
}

// ---- Function: FUN_1800cc910 ----
void FUN_1800cc910(longlong *param_1)

{
  *(int32_t ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) = &PTR_LAB_1801cc4b8;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0xb0;
  FUN_1800cd640(param_1 + 2);
  *(int32_t ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) = &PTR_LAB_1801cc4b0;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0x18;
  *(int32_t ***)(param_1 + 0x16) = &PTR_LAB_1801cc4d0;
  std::ios_base::_Ios_base_dtor((ios_base *)(param_1 + 0x16));
  return;
}

// ---- Function: FUN_1800cc990 ----
void FUN_1800cc990(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = FUN_1800ce6c0(param_2);
  cVar1 = (**(code **)(*plVar2 + 0x18))(plVar2);
  if (cVar1 != '\0') {
    *(int32_t *)(param_1 + 0x68) = 0;
    return;
  }
  *(longlong **)(param_1 + 0x68) = plVar2;
  *(int32_t **)(param_1 + 0x18) = (int32_t *)(param_1 + 8);
  *(int32_t **)(param_1 + 0x20) = (int32_t *)(param_1 + 0x10);
  *(int32_t **)(param_1 + 0x38) = (int32_t *)(param_1 + 0x28);
  *(int32_t **)(param_1 + 0x40) = (int32_t *)(param_1 + 0x30);
  *(int32_t **)(param_1 + 0x50) = (int32_t *)(param_1 + 0x48);
  *(int32_t **)(param_1 + 0x58) = (int32_t *)(param_1 + 0x4c);
  *(int32_t *)(param_1 + 0x10) = 0;
  *(int32_t *)(param_1 + 0x30) = 0;
  *(int32_t *)(param_1 + 0x4c) = 0;
  *(int32_t *)(param_1 + 8) = 0;
  *(int32_t *)(param_1 + 0x28) = 0;
  *(int32_t *)(param_1 + 0x48) = 0;
  return;
}

// ---- Function: FUN_1800cca20 ----
int FUN_1800cca20(longlong *param_1)

{
  int iVar1;
  
  if (param_1[0x10] != 0) {
    iVar1 = (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
    if (iVar1 != -1) {
      iVar1 = fflush((FILE *)param_1[0x10]);
      return (-1 < iVar1) - 1;
    }
  }
  return 0;
}

// ---- Function: FUN_1800ccb90 ----
longlong * FUN_1800ccb90(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong local_res8;
  
  local_res8 = param_3[1] + *param_3;
  if (param_1[0x10] != 0) {
    cVar3 = FUN_1800cde50(param_1);
    if (cVar3 != '\0') {
      iVar4 = fsetpos((FILE *)param_1[0x10],&local_res8);
      if (iVar4 == 0) {
        *(longlong *)((longlong)param_1 + 0x74) = param_3[2];
        if (*(longlong **)param_1[3] == param_1 + 0xe) {
          lVar1 = param_1[0x11];
          lVar2 = param_1[0x12];
          *(longlong *)param_1[3] = lVar1;
          *(longlong *)param_1[7] = lVar1;
          *(int *)param_1[10] = (int)lVar2 - (int)lVar1;
        }
        lVar1 = *(longlong *)((longlong)param_1 + 0x74);
        *param_2 = local_res8;
        param_2[1] = 0;
        param_2[2] = lVar1;
        return param_2;
      }
    }
  }
  *param_2 = -1;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}

// ---- Function: FUN_1800ccc70 ----
fpos_t * FUN_1800ccc70(longlong *param_1,fpos_t *param_2,LARGE_INTEGER param_3,uint param_4)

{
  longlong lVar1;
  longlong lVar2;
  fpos_t fVar3;
  char cVar4;
  int iVar5;
  fpos_t local_res8;
  
  if (((*(longlong **)param_1[7] == param_1 + 0xe) && (param_4 == 1)) && (param_1[0xd] == 0)) {
    param_3.QuadPart = param_3.QuadPart + -1;
  }
  if ((((param_1[0x10] != 0) && (cVar4 = FUN_1800cde50(param_1), cVar4 != '\0')) &&
      (((param_3.QuadPart == 0 && (param_4 == 1)) ||
       (iVar5 = FUN_18012dfb0((longlong *)param_1[0x10],param_3,param_4), iVar5 == 0)))) &&
     (iVar5 = fgetpos((FILE *)param_1[0x10],&local_res8), iVar5 == 0)) {
    if (*(longlong **)param_1[3] == param_1 + 0xe) {
      lVar1 = param_1[0x11];
      lVar2 = param_1[0x12];
      *(longlong *)param_1[3] = lVar1;
      *(longlong *)param_1[7] = lVar1;
      *(int *)param_1[10] = (int)lVar2 - (int)lVar1;
    }
    fVar3 = *(fpos_t *)((longlong)param_1 + 0x74);
    *param_2 = local_res8;
    param_2[2] = fVar3;
    param_2[1] = 0;
    return param_2;
  }
  *param_2 = -1;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}

// ---- Function: FUN_1800ccd70 ----
longlong FUN_1800ccd70(longlong *param_1,int32_t *param_2,ulonglong param_3)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar5 = param_3;
  if (param_1[0xd] == 0) {
    if (*(int32_t **)param_1[8] == (int32_t *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)param_1[0xb];
    }
    if (0 < (longlong)param_3) {
      if (0 < iVar3) {
        uVar4 = (longlong)iVar3;
        if ((longlong)param_3 < (longlong)iVar3) {
          uVar4 = param_3;
        }
        FUN_180150fd0(*(int32_t **)param_1[8],param_2,uVar4);
        uVar5 = param_3 - uVar4;
        param_2 = (int32_t *)((longlong)param_2 + uVar4);
        *(int *)param_1[0xb] = *(int *)param_1[0xb] - (int)uVar4;
        *(longlong *)param_1[8] = *(longlong *)param_1[8] + (longlong)(int)uVar4;
        if ((longlong)uVar5 < 1) goto LAB_1800cce85;
      }
      if (param_1[0x10] != 0) {
        uVar4 = FUN_18012e4a0(param_2,1,uVar5,param_1[0x10]);
        uVar5 = uVar5 - uVar4;
      }
    }
  }
  else if (0 < (longlong)param_3) {
    do {
      if ((*(int32_t **)param_1[8] == (int32_t *)0x0) ||
         (iVar3 = *(int *)param_1[0xb], iVar3 < 1)) {
        iVar3 = (**(code **)(*param_1 + 0x18))(param_1,*(int32_t *)param_2);
        if (iVar3 == -1) break;
        lVar2 = -1;
        uVar4 = 1;
      }
      else {
        uVar4 = uVar5;
        if ((longlong)iVar3 <= (longlong)uVar5) {
          uVar4 = (longlong)iVar3;
        }
        FUN_180150fd0(*(int32_t **)param_1[8],param_2,uVar4);
        piVar1 = (int *)param_1[0xb];
        lVar2 = -uVar4;
        *piVar1 = *piVar1 - (int)uVar4;
        *(longlong *)param_1[8] = *(longlong *)param_1[8] + (longlong)(int)uVar4;
      }
      uVar5 = uVar5 + lVar2;
      param_2 = (int32_t *)((longlong)param_2 + uVar4);
    } while (0 < (longlong)uVar5);
  }
LAB_1800cce85:
  return param_3 - uVar5;
}

// ---- Function: FUN_1800cd050 ----
void FUN_1800cd050(longlong param_1)

{
  int32_t uVar1;
  int iVar2;
  ulonglong uVar3;
  int32_t *******pppppppuVar4;
  longlong lVar5;
  ulonglong uVar6;
  int32_t *******pppppppuVar7;
  int32_t auStack_98 [32];
  longlong *local_78;
  int32_t *local_70;
  byte *local_68;
  int32_t **local_60;
  int32_t local_58;
  byte local_57 [7];
  longlong local_50;
  int32_t *local_48;
  int32_t *******local_40;
  int32_t uStack_38;
  ulonglong local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_1801eb080 ^ (ulonglong)auStack_98;
  uVar3 = **(ulonglong **)(param_1 + 0x38);
  if (uVar3 != 0) {
    iVar2 = **(int **)(param_1 + 0x50);
    if (uVar3 < uVar3 + (longlong)iVar2) {
      **(int **)(param_1 + 0x50) = iVar2 + -1;
      **(longlong **)(param_1 + 0x38) = **(longlong **)(param_1 + 0x38) + 1;
      goto LAB_1800cd26b;
    }
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    if (**(longlong **)(param_1 + 0x18) == param_1 + 0x70) {
      uVar1 = *(int32_t *)(param_1 + 0x90);
      lVar5 = *(longlong *)(param_1 + 0x88);
      **(longlong **)(param_1 + 0x18) = lVar5;
      **(longlong **)(param_1 + 0x38) = lVar5;
      **(int **)(param_1 + 0x50) = (int)uVar1 - (int)lVar5;
    }
    if (*(longlong *)(param_1 + 0x68) != 0) {
      uStack_38 = 0;
      local_30 = 0;
      local_28 = 0xf;
      local_40 = (int32_t *******)0x0;
      uVar3 = FUN_18012e8b0(*(int32_t **)(param_1 + 0x80));
      iVar2 = (int)uVar3;
      uVar6 = local_30;
      while( true ) {
        local_30 = uVar6;
        if (iVar2 == -1) goto LAB_1800cd260;
        if (uVar6 < local_28) {
          local_30 = uVar6 + 1;
          pppppppuVar4 = &local_40;
          if (0xf < local_28) {
            pppppppuVar4 = local_40;
          }
          *(char *)((longlong)pppppppuVar4 + uVar6) = (char)uVar3;
          *(int32_t *)((longlong)pppppppuVar4 + uVar6 + 1) = 0;
        }
        else {
          FUN_1800b99a0(&local_40,1,(ulonglong)local_57[0],(char)uVar3);
        }
        pppppppuVar4 = &local_40;
        if (0xf < local_28) {
          pppppppuVar4 = local_40;
        }
        pppppppuVar7 = &local_40;
        if (0xf < local_28) {
          pppppppuVar7 = local_40;
        }
        local_60 = &local_48;
        local_68 = local_57;
        local_70 = &local_58;
        local_78 = &local_50;
        iVar2 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x30))
                          (*(longlong **)(param_1 + 0x68),param_1 + 0x74,pppppppuVar7,
                           local_30 + (longlong)pppppppuVar4);
        if ((iVar2 != 0) && (iVar2 != 1)) goto LAB_1800cd260;
        if (local_48 != &local_58) break;
        pppppppuVar4 = &local_40;
        if (0xf < local_28) {
          pppppppuVar4 = local_40;
        }
        uVar3 = local_50 - (longlong)pppppppuVar4;
        if (local_30 < (ulonglong)(local_50 - (longlong)pppppppuVar4)) {
          uVar3 = local_30;
        }
        pppppppuVar4 = &local_40;
        if (0xf < local_28) {
          pppppppuVar4 = local_40;
        }
        uVar6 = local_30 - uVar3;
        FUN_180150fd0(pppppppuVar4,(int32_t *)(uVar3 + (longlong)pppppppuVar4),uVar6 + 1);
        local_30 = uVar6;
        uVar3 = FUN_18012e8b0(*(int32_t **)(param_1 + 0x80));
        iVar2 = (int)uVar3;
        uVar6 = local_30;
      }
      pppppppuVar4 = &local_40;
      if (0xf < local_28) {
        pppppppuVar4 = local_40;
      }
      lVar5 = (local_30 - local_50) + (longlong)pppppppuVar4;
      while (0 < lVar5) {
        lVar5 = lVar5 + -1;
        ungetc((int)*(char *)(lVar5 + local_50),*(FILE **)(param_1 + 0x80));
      }
LAB_1800cd260:
      FUN_1800a6800((longlong *)&local_40);
      goto LAB_1800cd26b;
    }
    FUN_18012e8b0(*(int32_t **)(param_1 + 0x80));
  }
LAB_1800cd26b:
  FUN_1801252c0(local_20 ^ (ulonglong)auStack_98);
  return;
}

// ---- Function: FUN_1800cd300 ----
ulonglong FUN_1800cd300(longlong *param_1)

{
  byte *pbVar1;
  ulonglong uVar2;
  
  pbVar1 = *(byte **)param_1[7];
  if ((pbVar1 != (byte *)0x0) && (pbVar1 < pbVar1 + *(int *)param_1[10])) {
    return (ulonglong)*pbVar1;
  }
  uVar2 = (**(code **)(*param_1 + 0x38))(param_1);
  if ((int)uVar2 == -1) {
    return uVar2;
  }
  (**(code **)(*param_1 + 0x20))(param_1,uVar2 & 0xffffffff);
  return uVar2 & 0xffffffff;
}

