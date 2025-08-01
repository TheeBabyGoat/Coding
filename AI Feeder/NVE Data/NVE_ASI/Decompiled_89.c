#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_1801486bc ----
ulong FUN_1801486bc(uint param_1,byte *param_2,uint param_3,char *param_4)

{
  int iVar1;
  int32_t uVar2;
  longlong lVar3;
  ulong *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint local_res8 [2];
  
  iVar6 = 0;
  *param_4 = '\0';
  if (-1 < *(char *)((&DAT_1801ee410)[(longlong)(int)param_1 >> 6] + 0x38 +
                    (ulonglong)(param_1 & 0x3f) * 0x48)) {
    return 0;
  }
  if ((param_3 & 0x74000) == 0) {
    local_res8[0] = 0;
    uVar2 = FUN_18014be6c(local_res8);
    if ((int)uVar2 != 0) {
                    
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    if ((local_res8[0] & 0x74000) == 0) {
      param_3 = param_3 | 0x4000;
    }
    else {
      param_3 = param_3 | local_res8[0] & 0x74000;
    }
  }
  uVar5 = param_3 & 0x74000;
  iVar7 = 2;
  if (uVar5 == 0x4000) {
    *param_4 = '\0';
  }
  else if ((uVar5 - 0x10000 & 0xffffbfff) == 0) {
    if ((param_3 & 0x301) == 0x301) goto LAB_180148783;
  }
  else if ((uVar5 - 0x20000 & 0xffffbfff) == 0) {
LAB_180148783:
    *param_4 = '\x02';
  }
  else if ((uVar5 - 0x40000 & 0xffffbfff) == 0) {
    *param_4 = '\x01';
  }
  if ((param_3 & 0x70000) == 0) {
    return 0;
  }
  if ((*param_2 & 0x40) != 0) {
    return 0;
  }
  uVar5 = *(uint *)(param_2 + 4) & 0xc0000000;
  if (uVar5 == 0x40000000) {
LAB_1801487c7:
    iVar1 = *(int *)(param_2 + 8);
    if ((iVar1 != 1) && (iVar1 != 2)) {
      if ((iVar1 == 3) || (iVar1 == 4)) {
        lVar3 = FUN_18013d4c8(param_1,(LARGE_INTEGER)0x0,2);
        if (lVar3 != 0) {
          lVar3 = FUN_18013d4c8(param_1,(LARGE_INTEGER)0x0,0);
          if (lVar3 == -1) goto LAB_180148830;
          if ((*(uint *)(param_2 + 4) & 0x80000000) == 0) {
            return 0;
          }
          goto LAB_180148845;
        }
      }
      else if (iVar1 != 5) {
        return 0;
      }
    }
    if (*param_4 == '\x01') {
      iVar7 = 3;
      local_res8[0] = 0xbfbbef;
    }
    else {
      if (*param_4 != '\x02') {
        return 0;
      }
      local_res8[0] = 0xfeff;
    }
    while (iVar1 = FUN_18013cd54(param_1,(wchar_t *)((longlong)local_res8 + (longlong)iVar6),
                                 iVar7 - iVar6), iVar1 != -1) {
      iVar6 = iVar6 + iVar1;
      if (iVar7 <= iVar6) {
        return 0;
      }
    }
    goto LAB_180148830;
  }
  if (uVar5 != 0x80000000) {
    if (uVar5 != 0xc0000000) {
      return 0;
    }
    goto LAB_1801487c7;
  }
LAB_180148845:
  local_res8[0] = 0;
  iVar6 = FUN_18013e6b4(param_1,(LPWSTR)local_res8,3);
  if (iVar6 == -1) goto LAB_180148830;
  if (iVar6 == 2) {
LAB_18014887e:
    if ((local_res8[0] & 0xffff) == 0xfffe) {
      puVar4 = __doserrno();
      *puVar4 = 0x16;
      goto LAB_180148830;
    }
    if ((local_res8[0] & 0xffff) == 0xfeff) {
      lVar3 = FUN_18013d4c8(param_1,(LARGE_INTEGER)0x2,0);
      if (lVar3 != -1) {
        *param_4 = '\x02';
        return 0;
      }
      goto LAB_180148830;
    }
  }
  else if (iVar6 == 3) {
    if (local_res8[0] == 0xbfbbef) {
      *param_4 = '\x01';
      return 0;
    }
    goto LAB_18014887e;
  }
  lVar3 = FUN_18013d4c8(param_1,(LARGE_INTEGER)0x0,0);
  if (lVar3 != -1) {
    return 0;
  }
LAB_180148830:
  puVar4 = __doserrno();
  return *puVar4;
}

// ---- Function: FUN_18014893c ----
byte * FUN_18014893c(byte *param_1,uint param_2,int param_3,byte param_4)

{
  int iVar1;
  int32_t uVar2;
  ulong *puVar3;
  int32_t uVar4;
  uint uVar5;
  uint uVar6;
  int local_res10 [2];
  
  *param_1 = 0;
  uVar5 = param_2 & 3;
  uVar6 = 0xffffffff;
  if (uVar5 == 0) {
    iVar1 = -0x80000000;
  }
  else if (uVar5 == 1) {
    iVar1 = (-(uint)((param_2 & 0x70000) != 0 && (param_2 & 8) != 0) & 0x80000000) + 0x40000000;
  }
  else if (uVar5 == 2) {
    iVar1 = -0x40000000;
  }
  else {
    puVar3 = __doserrno();
    *puVar3 = 0x16;
    FUN_18012b794();
    iVar1 = -1;
  }
  *(int *)(param_1 + 4) = iVar1;
  uVar5 = param_2 & 0x700;
  if (uVar5 == 0) {
LAB_180148a20:
    uVar2 = 3;
  }
  else if (uVar5 == 0x100) {
    uVar2 = 4;
  }
  else if (uVar5 == 0x200) {
LAB_180148a12:
    uVar2 = 5;
  }
  else if (uVar5 == 0x300) {
    uVar2 = 2;
  }
  else {
    if (uVar5 == 0x400) goto LAB_180148a20;
    if (uVar5 != 0x500) {
      if (uVar5 == 0x600) goto LAB_180148a12;
      if (uVar5 != 0x700) {
        puVar3 = __doserrno();
        *puVar3 = 0x16;
        FUN_18012b794();
        uVar2 = 0xffffffff;
        goto LAB_180148a25;
      }
    }
    uVar2 = 1;
  }
LAB_180148a25:
  *(int32_t *)(param_1 + 8) = uVar2;
  if (param_3 == 0x10) {
    uVar6 = 0;
  }
  else if (param_3 == 0x20) {
    uVar6 = 1;
  }
  else if (param_3 == 0x30) {
    uVar6 = 2;
  }
  else if (param_3 == 0x40) {
    uVar6 = 3;
  }
  else if (param_3 == 0x80) {
    uVar6 = (uint)(*(int *)(param_1 + 4) == -0x80000000);
  }
  else {
    puVar3 = __doserrno();
    *puVar3 = 0x16;
    FUN_18012b794();
  }
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(uint *)(param_1 + 0xc) = uVar6;
  param_1[0x10] = 0x80;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  if ((char)param_2 < '\0') {
    *param_1 = *param_1 | 0x10;
  }
  if ((param_2 & 0x8000) == 0) {
    if ((param_2 & 0x74000) == 0) {
      uVar4 = FUN_18014be6c(local_res10);
      if ((int)uVar4 != 0) {
                    
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      if (local_res10[0] == 0x8000) goto LAB_180148ab7;
    }
    *param_1 = *param_1 | 0x80;
  }
LAB_180148ab7:
  if (((param_2 & 0x100) != 0) && (-1 < (char)(~(byte)DAT_1801ee8d0 & param_4))) {
    param_1[0x10] = 1;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  if ((param_2 & 0x40) != 0) {
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x4000000;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10000;
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 4;
  }
  if ((param_2 >> 0xc & 1) != 0) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x100;
  }
  if ((param_2 >> 0xd & 1) != 0) {
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x2000000;
  }
  if ((param_2 & 0x20) == 0) {
    if ((param_2 & 0x10) != 0) {
      *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x10000000;
    }
  }
  else {
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x8000000;
  }
  return param_1;
}

// ---- Function: truncate_ctrl_z_if_present ----
/* Library Function - Single Match
    int __cdecl truncate_ctrl_z_if_present(int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl truncate_ctrl_z_if_present(int param_1)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  LARGE_INTEGER LVar4;
  ulong *puVar5;
  longlong lVar6;
  WCHAR local_res8 [4];
  
  bVar1 = *(byte *)((&DAT_1801ee410)[(longlong)param_1 >> 6] + 0x38 +
                   (ulonglong)(param_1 & 0x3f) * 0x48);
  if (((bVar1 & 0x48) == 0) && ((char)bVar1 < '\0')) {
    LVar4.QuadPart = FUN_18013d4c8(param_1,(LARGE_INTEGER)0xffffffffffffffff,2);
    if (LVar4.QuadPart == -1) {
      puVar5 = __doserrno();
      if (*puVar5 == 0x83) goto LAB_180148bf3;
    }
    else {
      local_res8[0] = L'\0';
      iVar2 = FUN_18013e6b4(param_1,local_res8,1);
      if ((iVar2 == 0) && (local_res8[0] == L'\x1a')) {
        iVar2 = FUN_18014bf80(param_1,LVar4);
        if (iVar2 == -1) goto LAB_180148ba6;
      }
      lVar6 = FUN_18013d4c8(param_1,(LARGE_INTEGER)0x0,0);
      if (lVar6 != -1) goto LAB_180148bf3;
    }
LAB_180148ba6:
    puVar5 = __doserrno();
    uVar3 = *puVar5;
  }
  else {
LAB_180148bf3:
    uVar3 = 0;
  }
  return uVar3;
}

// ---- Function: FUN_180148c08 ----
ulong FUN_180148c08(int32_t *param_1,uint *param_2,LPCSTR param_3,uint param_4,int param_5,
                   byte param_6)

{
  uint uVar1;
  ulong uVar2;
  int32_t uVar3;
  UINT UVar4;
  int32_t local_68 [8];
  longlong local_60;
  longlong local_58;
  char local_48;
  int32_t local_40;
  int32_t local_38;
  LPCWSTR local_30;
  int32_t local_28;
  int32_t local_20;
  char local_18;
  
  local_40 = 0;
  local_38 = 0;
  local_30 = (LPCWSTR)0x0;
  local_28 = 0;
  local_20 = 0;
  local_18 = '\0';
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_60,(__crt_locale_pointers *)0x0);
  UVar4 = 0xfde9;
  if (*(int *)(local_58 + 0xc) == 0xfde9) {
    if (local_48 != '\0') {
      *(uint *)(local_60 + 0x3a8) = *(uint *)(local_60 + 0x3a8) & 0xfffffffd;
    }
  }
  else {
    uVar3 = FUN_18013a680();
    if ((int)uVar3 == 0) {
      if (local_48 != (char)uVar3) {
        *(uint *)(local_60 + 0x3a8) = *(uint *)(local_60 + 0x3a8) & 0xfffffffd;
      }
      UVar4 = 1;
    }
    else {
      if (local_48 != '\0') {
        *(uint *)(local_60 + 0x3a8) = *(uint *)(local_60 + 0x3a8) & 0xfffffffd;
      }
      UVar4 = 0;
    }
  }
  uVar1 = FUN_180135a24(param_3,(longlong)&local_40,local_68,UVar4);
  if (uVar1 == 0) {
    uVar2 = FUN_180148d58(param_1,param_2,local_30,param_4,param_5,param_6);
  }
  else {
    uVar2 = 0xffffffff;
  }
  if (local_18 != '\0') {
    FUN_18013bf3c(local_30);
  }
  return uVar2;
}

// ---- Function: FID_conflict__sopen_s ----
/* Library Function - Multiple Matches With Different Base Names
    _sopen_s
    _wsopen_s
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

errno_t __cdecl
FID_conflict__sopen_s
          (int *_FileHandle,char *_Filename,int _OpenFlag,int _ShareFlag,int _PermissionMode)

{
  ulong uVar1;
  
  uVar1 = common_sopen_dispatch<>
                    (_Filename,_OpenFlag,_ShareFlag,(ulonglong)(uint)_PermissionMode,
                     (uint *)_FileHandle,1);
  return uVar1;
}

// ---- Function: FUN_180148d58 ----
ulong FUN_180148d58(int32_t *param_1,uint *param_2,LPCWSTR param_3,uint param_4,int param_5,
                   byte param_6)

{
  byte *pbVar1;
  int32_t uVar2;
  uint uVar3;
  DWORD DVar4;
  ulong uVar5;
  int32_t (*pauVar6) [16];
  ulong *puVar7;
  HANDLE pvVar8;
  ulonglong uVar9;
  byte bVar10;
  uint uVar11;
  char local_a8 [8];
  int32_t local_a0 [16];
  int32_t local_90;
  byte local_88;
  int32_t local_80;
  ulonglong local_78;
  ulonglong local_70;
  _SECURITY_ATTRIBUTES local_68;
  int32_t local_48;
  int32_t uStack_40;
  int32_t local_38;
  
  pauVar6 = (int32_t (*) [16])FUN_18014893c((byte *)&local_48,param_4,param_5,param_6);
  local_a0 = *pauVar6;
  local_90 = *(int32_t *)pauVar6[1];
  local_70 = local_a0._8_8_ >> 0x20;
  DVar4 = local_a0._12_4_;
  local_80 = local_90;
  if (DVar4 == 0xffffffff) {
    puVar7 = __doserrno();
    *puVar7 = 0;
    *param_2 = 0xffffffff;
    goto LAB_180148dd9;
  }
  uVar3 = _alloc_osfhnd();
  *param_2 = uVar3;
  if (uVar3 == 0xffffffff) {
    puVar7 = __doserrno();
    *puVar7 = 0;
    *param_2 = 0xffffffff;
    puVar7 = __doserrno();
    *puVar7 = 0x18;
    goto LAB_180148dd9;
  }
  uVar11 = (uint)((ulonglong)local_90 >> 0x20) | (uint)local_90;
  local_78 = (ulonglong)uVar11;
  local_68.bInheritHandle = ~(param_4 >> 7) & 1;
  *param_1 = 1;
  local_68.nLength = 0x18;
  local_68.lpSecurityDescriptor = (LPVOID)0x0;
  pvVar8 = CreateFileW(param_3,local_a0._4_4_,DVar4,&local_68,local_a0._8_4_,uVar11,(HANDLE)0x0);
  uVar3 = local_a0._4_4_;
  if (pvVar8 == (HANDLE)0xffffffffffffffff) {
    if (((local_a0._4_4_ & 0xc0000000) == 0xc0000000) && ((param_4 & 1) != 0)) {
      uVar2 = local_a0._8_4_;
      uVar3 = local_a0._4_4_ & 0x7fffffff;
      local_a0._0_8_ = local_a0._0_8_ & 0x7fffffffffffffff;
      pvVar8 = CreateFileW(param_3,SUB84(local_a0._0_8_,4),DVar4,&local_68,uVar2,uVar11,(HANDLE)0x0)
      ;
      if (pvVar8 != (HANDLE)0xffffffffffffffff) goto LAB_180148ef0;
    }
    pbVar1 = (byte *)((&DAT_1801ee410)[(longlong)(int)*param_2 >> 6] + 0x38 +
                     (ulonglong)(*param_2 & 0x3f) * 0x48);
    *pbVar1 = *pbVar1 & 0xfe;
    DVar4 = GetLastError();
    FUN_1801312a8(DVar4);
  }
  else {
LAB_180148ef0:
    DVar4 = GetFileType(pvVar8);
    if (DVar4 != 0) {
      if (DVar4 == 2) {
        bVar10 = local_a0[0] | 0x40;
      }
      else {
        bVar10 = local_a0[0];
        if (DVar4 == 3) {
          bVar10 = local_a0[0] | 8;
        }
      }
      FUN_180147c20(*param_2,pvVar8);
      local_88 = bVar10 | 1;
      local_a0[0] = local_88;
      *(byte *)((&DAT_1801ee410)[(longlong)(int)*param_2 >> 6] + 0x38 +
               (ulonglong)(*param_2 & 0x3f) * 0x48) = local_88;
      *(int32_t *)
       ((&DAT_1801ee410)[(longlong)(int)*param_2 >> 6] + 0x39 + (ulonglong)(*param_2 & 0x3f) * 0x48)
           = 0;
      if (((param_4 & 2) == 0) || (uVar5 = truncate_ctrl_z_if_present(*param_2), uVar5 == 0)) {
        local_48 = local_a0._0_8_;
        uStack_40 = local_a0._8_8_;
        local_a8[0] = '\0';
        local_38 = local_80;
        uVar5 = FUN_1801486bc(*param_2,(byte *)&local_48,param_4,local_a8);
        uVar11 = *param_2;
        if (uVar5 == 0) {
          *(char *)((&DAT_1801ee410)[(longlong)(int)uVar11 >> 6] + 0x39 +
                   (ulonglong)(uVar11 & 0x3f) * 0x48) = local_a8[0];
          uVar9 = (ulonglong)(*param_2 & 0x3f);
          pbVar1 = (byte *)((&DAT_1801ee410)[(longlong)(int)*param_2 >> 6] + 0x3d + uVar9 * 0x48);
          *pbVar1 = *pbVar1 ^ ((byte)(param_4 >> 0x10) ^
                              *(byte *)((&DAT_1801ee410)[(longlong)(int)*param_2 >> 6] + 0x3d +
                                       uVar9 * 0x48)) & 1;
          if (((local_88 & 0x48) == 0) && ((param_4 & 8) != 0)) {
            pbVar1 = (byte *)((&DAT_1801ee410)[(longlong)(int)*param_2 >> 6] + 0x38 +
                             (ulonglong)(*param_2 & 0x3f) * 0x48);
            *pbVar1 = *pbVar1 | 0x20;
          }
          if (((uVar3 & 0xc0000000) == 0xc0000000) && ((param_4 & 1) != 0)) {
            CloseHandle(pvVar8);
            uVar2 = local_a0._8_4_;
            local_a0._0_8_ = CONCAT44(uVar3,local_a0._0_4_) & 0x7fffffffffffffff;
            pvVar8 = CreateFileW(param_3,SUB84(local_a0._0_8_,4),(DWORD)local_70,&local_68,uVar2,
                                 (DWORD)local_78,(HANDLE)0x0);
            if (pvVar8 == (HANDLE)0xffffffffffffffff) {
              DVar4 = GetLastError();
              FUN_1801312a8(DVar4);
              pbVar1 = (byte *)((&DAT_1801ee410)[(longlong)(int)*param_2 >> 6] + 0x38 +
                               (ulonglong)(*param_2 & 0x3f) * 0x48);
              *pbVar1 = *pbVar1 & 0xfe;
              FUN_180147e48(*param_2);
              goto LAB_180148dd9;
            }
            *(HANDLE *)
             ((&DAT_1801ee410)[(longlong)(int)*param_2 >> 6] + 0x28 +
             (ulonglong)(*param_2 & 0x3f) * 0x48) = pvVar8;
          }
          return 0;
        }
      }
      else {
        uVar11 = *param_2;
      }
      FUN_18013eec8(uVar11);
      return uVar5;
    }
    DVar4 = GetLastError();
    FUN_1801312a8(DVar4);
    pbVar1 = (byte *)((&DAT_1801ee410)[(longlong)(int)*param_2 >> 6] + 0x38 +
                     (ulonglong)(*param_2 & 0x3f) * 0x48);
    *pbVar1 = *pbVar1 & 0xfe;
    CloseHandle(pvVar8);
    if (DVar4 == 0) {
      puVar7 = __doserrno();
      *puVar7 = 0xd;
    }
  }
LAB_180148dd9:
  puVar7 = __doserrno();
  return *puVar7;
}

// ---- Function: FID_conflict__sopen_s ----
/* Library Function - Multiple Matches With Different Base Names
    _sopen_s
    _wsopen_s
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

errno_t __cdecl
FID_conflict__sopen_s
          (int *_FileHandle,char *_Filename,int _OpenFlag,int _ShareFlag,int _PermissionMode)

{
  ulong uVar1;
  
  uVar1 = common_sopen_dispatch<>
                    ((LPCWSTR)_Filename,_OpenFlag,_ShareFlag,(ulonglong)(uint)_PermissionMode,
                     (uint *)_FileHandle,1);
  return uVar1;
}

// ---- Function: FUN_18014917c ----
bool FUN_18014917c(char *param_1,char *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  char *pcVar2;
  
  if (param_5 == 0) {
    return '4' < *param_2;
  }
  iVar1 = fegetround();
  if (iVar1 == 0) {
    if ('5' < *param_2) {
      return true;
    }
    if ('4' < *param_2) {
      pcVar2 = param_2 + 1;
      if (param_4 == 0) {
        return true;
      }
      for (; *pcVar2 == '0'; pcVar2 = pcVar2 + 1) {
      }
      if (*pcVar2 != '\0') {
        return true;
      }
      if (param_2 != param_1) {
        return (bool)(param_2[-1] & 1);
      }
    }
  }
  else if (iVar1 == 0x200) {
    if (param_4 != 0) {
      for (; *param_2 == '0'; param_2 = param_2 + 1) {
      }
      if (*param_2 == '\0') {
        return false;
      }
    }
    if (param_3 != 0x2d) {
      return true;
    }
  }
  else if (iVar1 == 0x100) {
    if (param_4 != 0) {
      for (; *param_2 == '0'; param_2 = param_2 + 1) {
      }
      if (*param_2 == '\0') {
        return false;
      }
    }
    if (param_3 == 0x2d) {
      return true;
    }
  }
  return false;
}

// ---- Function: FUN_18014924c ----
int32_t
FUN_18014924c(char *param_1,ulonglong param_2,int param_3,int *param_4,int param_5,int param_6,
             longlong *param_7)

{
  char *pcVar1;
  longlong lVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  char *pcVar6;
  int32_t uVar7;
  char *pcVar8;
  longlong lVar9;
  
  if ((param_1 != (char *)0x0) && (param_2 != 0)) {
    *param_1 = '\0';
    iVar5 = 0;
    if (0 < param_3) {
      iVar5 = param_3;
    }
    if (param_2 <= (ulonglong)(longlong)(iVar5 + 1)) {
      uVar7 = 0x22;
      goto LAB_180149270;
    }
    if (param_4 != (int *)0x0) {
      pcVar1 = *(char **)(param_4 + 2);
      pcVar8 = param_1 + 1;
      *param_1 = '0';
      pcVar6 = pcVar1;
      for (; 0 < param_3; param_3 = param_3 + -1) {
        cVar3 = *pcVar6;
        if (cVar3 == '\0') {
          cVar3 = '0';
        }
        else {
          pcVar6 = pcVar6 + 1;
        }
        *pcVar8 = cVar3;
        pcVar8 = pcVar8 + 1;
      }
      *pcVar8 = '\0';
      if ((-1 < param_3) && (bVar4 = FUN_18014917c(pcVar1,pcVar6,*param_4,param_5,param_6), bVar4))
      {
        while( true ) {
          pcVar8 = pcVar8 + -1;
          if (*pcVar8 != '9') break;
          *pcVar8 = '0';
        }
        *pcVar8 = *pcVar8 + '\x01';
      }
      if (*param_1 == '1') {
        param_4[1] = param_4[1] + 1;
      }
      else {
        lVar2 = -1;
        do {
          lVar9 = lVar2;
          lVar2 = lVar9 + 1;
        } while (param_1[lVar9 + 2] != '\0');
        FUN_180150fd0((int32_t *)param_1,(int32_t *)(param_1 + 1),lVar9 + 2);
      }
      return 0;
    }
  }
  uVar7 = 0x16;
LAB_180149270:
  *(int32_t *)((longlong)param_7 + 0x2c) = uVar7;
  *(int32_t *)(param_7 + 6) = 1;
  FUN_18012b6c8((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_7);
  return uVar7;
}

// ---- Function: FUN_18014935c ----
void FUN_18014935c(uint *param_1,int param_2,uint param_3,int32_t *param_4,char *param_5,
                  rsize_t param_6)

{
  uint *puVar1;
  byte bVar2;
  sbyte sVar3;
  int32_t uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulong *puVar9;
  longlong lVar10;
  byte bVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  char *pcVar16;
  uint uVar17;
  int iVar18;
  char *pcVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  bool bVar24;
  double dVar25;
  int32_t auStackY_828 [32];
  uint local_7f4;
  uint local_7f0;
  int32_t local_7e8;
  uint local_7e0;
  uint *local_7d8;
  uint *local_7d0;
  uint local_7c8;
  uint local_7c4;
  uint local_7c0;
  uint local_7bc;
  byte local_7b8 [8];
  char local_7b0;
  uint local_7a8 [2];
  char *local_7a0;
  uint *local_798;
  int32_t *local_790;
  uint local_788;
  int32_t local_784;
  uint local_5b8;
  uint local_5b4 [115];
  uint local_3e8;
  uint local_3e4 [115];
  uint local_218;
  uint local_214 [115];
  ulonglong local_48;
  
  local_48 = DAT_1801eb080 ^ (ulonglong)auStackY_828;
  local_7a0 = param_5;
  local_7d8 = param_1;
  local_7c4 = param_3;
  local_790 = param_4;
  fegetenv((uint *)local_7b8);
  local_7b0 = (local_7b8[0] & 0x1f) != 0x1f;
  if ((bool)local_7b0) {
    feholdexcept((int32_t *)local_7b8);
  }
  puVar1 = local_7d8;
  *(char **)(param_4 + 2) = param_5;
  uVar4 = 0x20;
  if ((longlong)local_7d8 < 0) {
    uVar4 = 0x2d;
  }
  *param_4 = uVar4;
  _controlfp_s(local_7a8,0,0);
  uVar8 = (ulonglong)puVar1 >> 0x34 & 0x7ff;
  if (uVar8 == 0) {
    if ((((ulonglong)puVar1 & 0xfffffffffffff) != 0) && ((local_7a8[0] & 0x1000000) == 0)) {
LAB_1801494f2:
      local_7d8 = (uint *)((ulonglong)puVar1 & 0x7fffffffffffffff);
      local_7bc = 0x8001f;
      _controlfp_s(&local_7c0,0,0);
      _controlfp_s((uint *)&local_7e8,0x8001f,local_7bc);
      local_7c8 = param_2 + 1;
      local_7d0 = local_7d8;
      uVar8 = (ulonglong)local_7d8 >> 0x34 & 0x7ff;
      uVar15 = (-(ulonglong)(uVar8 != 0) & 0x10000000000000) +
               ((ulonglong)local_7d8 & 0xfffffffffffff);
      uVar22 = (2 - (uint)(uVar8 != 0)) + ((uint)((ulonglong)local_7d8 >> 0x34) & 0x7ff);
      dVar25 = FUN_18014c3a0();
      dVar25 = ceil(dVar25);
      uVar6 = -(uint)(((int)dVar25 + 0x80000001U & 0xfffffffe) != 0) & (int)dVar25;
      uVar17 = (uint)(uVar15 >> 0x20);
      local_784 = uVar15;
      uVar23 = (uint)(uVar17 != 0);
      uVar14 = uVar23 + 1;
      if (uVar22 < 0x434) {
        if (uVar22 == 0x36) {
LAB_18014993f:
          local_7e8 = (uint *)((ulonglong)local_7e8._4_4_ << 0x20);
          puVar1 = (uint *)((longlong)&local_784 + (ulonglong)(-(uint)(uVar17 != 0) & 4));
          iVar5 = 0x1f;
          bVar24 = *puVar1 == 0;
          if (!bVar24) {
            for (; *puVar1 >> iVar5 == 0; iVar5 = iVar5 + -1) {
            }
          }
          if (bVar24) {
            iVar5 = 0;
          }
          else {
            iVar5 = iVar5 + 1;
          }
          uVar23 = (iVar5 == 0x20) + uVar14;
          if (uVar23 < 0x74) {
            uVar17 = uVar23 - 1;
            while (uVar17 != 0xffffffff) {
              uVar21 = uVar17 - 1;
              if (uVar17 < uVar14) {
                iVar5 = *(int *)((longlong)&local_784 + (ulonglong)uVar17 * 4);
              }
              else {
                iVar5 = 0;
              }
              if (uVar21 < uVar14) {
                uVar7 = *(uint *)((longlong)&local_784 + (ulonglong)uVar21 * 4);
              }
              else {
                uVar7 = 0;
              }
              *(uint *)((longlong)&local_784 + (ulonglong)uVar17 * 4) = uVar7 >> 0x1f | iVar5 * 2;
              uVar17 = uVar21;
            }
          }
          else {
            uVar23 = 0;
          }
          uVar14 = 0x435 - uVar22 >> 5;
          local_788 = uVar23;
          FUN_180151670((int32_t (*) [32])local_3e4,0,(ulonglong)uVar14 * 4);
          local_3e4[uVar14] = 1 << ((byte)(0x435 - uVar22) & 0x1f);
        }
        else {
          local_3e4[1] = 0x100000;
          local_3e4[0] = 0;
          local_3e8 = 2;
          if (uVar17 == 0) goto LAB_18014993f;
          uVar8 = 0;
          do {
            if (local_3e4[uVar8] != *(uint *)((longlong)&local_784 + uVar8 * 4)) goto LAB_18014993f;
            uVar23 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar23;
          } while (uVar23 != 2);
          local_7e8 = (uint *)((ulonglong)local_7e8._4_4_ << 0x20);
          iVar5 = 0x1f;
          if (uVar17 != 0) {
            for (; uVar17 >> iVar5 == 0; iVar5 = iVar5 + -1) {
            }
          }
          if (uVar17 == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = iVar5 + 1;
          }
          uVar23 = (0x20U - iVar5 < 2) + uVar14;
          if (uVar23 < 0x74) {
            uVar17 = uVar23 - 1;
            while (uVar17 != 0xffffffff) {
              uVar21 = uVar17 - 1;
              if (uVar17 < uVar14) {
                iVar5 = *(int *)((longlong)&local_784 + (ulonglong)uVar17 * 4);
              }
              else {
                iVar5 = 0;
              }
              if (uVar21 < uVar14) {
                uVar7 = *(uint *)((longlong)&local_784 + (ulonglong)uVar21 * 4);
              }
              else {
                uVar7 = 0;
              }
              *(uint *)((longlong)&local_784 + (ulonglong)uVar17 * 4) = uVar7 >> 0x1e | iVar5 * 4;
              uVar17 = uVar21;
            }
          }
          else {
            uVar23 = 0;
          }
          uVar14 = 0x436 - uVar22 >> 5;
          local_788 = uVar23;
          FUN_180151670((int32_t (*) [32])local_3e4,0,(ulonglong)uVar14 * 4);
          local_3e4[uVar14] = 1 << ((byte)(0x436 - uVar22) & 0x1f);
        }
        local_3e8 = uVar14 + 1;
        uVar8 = (ulonglong)local_3e8;
        local_5b8 = local_3e8;
        if (uVar8 != 0) {
          if (uVar8 << 2 < 0x1cd) {
            FUN_180150fd0((int32_t *)local_5b4,(int32_t *)local_3e4,uVar8 << 2);
          }
          else {
            FUN_180151670((int32_t (*) [32])local_5b4,0,0x1cc);
            puVar9 = __doserrno();
            *puVar9 = 0x22;
            FUN_18012b794();
          }
          uVar8 = (ulonglong)local_5b8;
        }
      }
      else {
        local_3e4[1] = 0x100000;
        local_3e4[0] = 0;
        local_3e8 = 2;
        if (uVar17 == 0) {
LAB_180149703:
          local_7e8 = (uint *)((ulonglong)local_7e8._4_4_ << 0x20);
          uVar21 = uVar22 - 0x433 & 0x1f;
          uVar17 = uVar22 - 0x433 >> 5;
          sVar3 = (sbyte)uVar21;
          bVar11 = 0x20 - sVar3;
          uVar22 = (int)(1L << (bVar11 & 0x3f)) - 1;
          puVar1 = (uint *)((longlong)&local_784 + (ulonglong)uVar23 * 4);
          iVar5 = 0x1f;
          bVar24 = *puVar1 == 0;
          if (!bVar24) {
            for (; *puVar1 >> iVar5 == 0; iVar5 = iVar5 + -1) {
            }
          }
          if (bVar24) {
            iVar5 = 0;
          }
          else {
            iVar5 = iVar5 + 1;
          }
          if ((uVar14 + uVar17 < 0x74) &&
             (uVar23 = (0x20U - iVar5 < uVar21) + uVar14 + uVar17, uVar23 < 0x74)) {
            uVar21 = uVar23;
            while (uVar21 = uVar21 - 1, uVar21 != uVar17 - 1) {
              uVar7 = uVar21 - uVar17;
              if (uVar7 < uVar14) {
                uVar20 = *(uint *)((longlong)&local_784 + (ulonglong)uVar7 * 4);
              }
              else {
                uVar20 = 0;
              }
              if (uVar7 - 1 < uVar14) {
                uVar7 = *(uint *)((longlong)&local_784 + (ulonglong)(uVar7 - 1) * 4);
              }
              else {
                uVar7 = 0;
              }
              *(uint *)((longlong)&local_784 + (ulonglong)uVar21 * 4) =
                   (uVar7 & ~uVar22) >> (bVar11 & 0x1f) | (uVar20 & uVar22) << sVar3;
            }
            uVar8 = 0;
            if (uVar17 != 0) {
              do {
                *(int32_t *)((longlong)&local_784 + uVar8 * 4) = 0;
                uVar14 = (int)uVar8 + 1;
                uVar8 = (ulonglong)uVar14;
              } while (uVar14 != uVar17);
            }
          }
          else {
            uVar23 = 0;
          }
          uVar8 = 1;
          local_5b8 = 1;
          local_5b4[0] = 2;
          local_788 = uVar23;
        }
        else {
          uVar8 = 0;
          do {
            if (local_3e4[uVar8] != *(uint *)((longlong)&local_784 + uVar8 * 4)) goto LAB_180149703;
            uVar17 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar17;
          } while (uVar17 != 2);
          local_7e8 = (uint *)((ulonglong)local_7e8._4_4_ << 0x20);
          uVar21 = uVar22 - 0x432 & 0x1f;
          uVar17 = uVar22 - 0x432 >> 5;
          sVar3 = (sbyte)uVar21;
          bVar11 = 0x20 - sVar3;
          uVar22 = (int)(1L << (bVar11 & 0x3f)) - 1;
          puVar1 = (uint *)((longlong)&local_784 + (ulonglong)uVar23 * 4);
          iVar5 = 0x1f;
          bVar24 = *puVar1 == 0;
          if (!bVar24) {
            for (; *puVar1 >> iVar5 == 0; iVar5 = iVar5 + -1) {
            }
          }
          if (bVar24) {
            iVar5 = 0;
          }
          else {
            iVar5 = iVar5 + 1;
          }
          if ((uVar14 + uVar17 < 0x74) &&
             (uVar23 = (0x20U - iVar5 < uVar21) + uVar14 + uVar17, uVar23 < 0x74)) {
            uVar21 = uVar23;
            while (uVar21 = uVar21 - 1, uVar21 != uVar17 - 1) {
              uVar7 = uVar21 - uVar17;
              if (uVar7 < uVar14) {
                uVar20 = *(uint *)((longlong)&local_784 + (ulonglong)uVar7 * 4);
              }
              else {
                uVar20 = 0;
              }
              if (uVar7 - 1 < uVar14) {
                uVar7 = *(uint *)((longlong)&local_784 + (ulonglong)(uVar7 - 1) * 4);
              }
              else {
                uVar7 = 0;
              }
              *(uint *)((longlong)&local_784 + (ulonglong)uVar21 * 4) =
                   (uVar7 & ~uVar22) >> (bVar11 & 0x1f) | (uVar20 & uVar22) << sVar3;
            }
            uVar8 = 0;
            if (uVar17 != 0) {
              do {
                *(int32_t *)((longlong)&local_784 + uVar8 * 4) = 0;
                uVar14 = (int)uVar8 + 1;
                uVar8 = (ulonglong)uVar14;
              } while (uVar14 != uVar17);
            }
          }
          else {
            uVar23 = 0;
          }
          uVar8 = 1;
          local_5b8 = 1;
          local_5b4[0] = 4;
          local_788 = uVar23;
        }
      }
      uVar14 = (uint)uVar8;
      if ((int)uVar6 < 0) {
        local_7e0 = -uVar6;
        uVar8 = (ulonglong)local_7e0 / 10;
        local_7f4 = (uint)uVar8;
        local_7e8 = (uint *)CONCAT44(local_7e8._4_4_,local_7f4);
        if (local_7f4 != 0) {
          do {
            uVar17 = (uint)uVar8;
            if (0x26 < uVar17) {
              uVar17 = 0x26;
            }
            local_7d8 = (uint *)CONCAT44(local_7d8._4_4_,uVar17);
            uVar17 = uVar17 - 1;
            bVar11 = (&DAT_18017a112)[(ulonglong)uVar17 * 4];
            bVar2 = (&DAT_18017a113)[(ulonglong)uVar17 * 4];
            local_3e8 = (uint)bVar2 + (uint)bVar11;
            FUN_180151670((int32_t (*) [32])local_3e4,0,(ulonglong)bVar11 * 4);
            FUN_180150fd0((int32_t *)(local_3e4 + bVar11),
                          (int32_t *)
                          (&DAT_180179800 +
                          (ulonglong)*(ushort *)(&DAT_18017a110 + (ulonglong)uVar17 * 4) * 4),
                          (ulonglong)bVar2 << 2);
            if (local_3e8 < 2) {
              uVar8 = (ulonglong)local_3e4[0];
              if (local_3e4[0] == 0) {
LAB_180149fcf:
                uVar23 = 0;
                local_788 = uVar23;
LAB_18014a0e0:
                bVar24 = true;
              }
              else {
                if ((local_3e4[0] == 1) || (uVar23 == 0)) goto LAB_18014a0e0;
                uVar15 = 0;
                uVar13 = 0;
                do {
                  uVar12 = *(uint *)((longlong)&local_784 + uVar13 * 4) * uVar8 + uVar15;
                  *(int *)((longlong)&local_784 + uVar13 * 4) = (int)uVar12;
                  uVar15 = uVar12 >> 0x20;
                  iVar5 = (int)(uVar12 >> 0x20);
                  uVar17 = (int)uVar13 + 1;
                  uVar13 = (ulonglong)uVar17;
                } while (uVar17 != uVar23);
LAB_18014a0b1:
                uVar23 = local_788;
                if (iVar5 == 0) goto LAB_18014a0e0;
                if (local_788 < 0x73) {
                  *(int *)((longlong)&local_784 + (ulonglong)local_788 * 4) = iVar5;
                  uVar23 = local_788 + 1;
                  local_788 = uVar23;
                  goto LAB_18014a0e0;
                }
                uVar23 = 0;
                bVar24 = false;
                local_788 = 0;
              }
              if (!bVar24) goto LAB_18014a0eb;
            }
            else {
              if (uVar23 < 2) {
                uVar17 = (uint)local_784;
                uVar8 = local_784 & 0xffffffff;
                uVar15 = (ulonglong)local_3e8 << 2;
                local_788 = local_3e8;
                if ((ulonglong)local_3e8 != 0) {
                  if (uVar15 < 0x1cd) {
                    FUN_180150fd0(&local_784,(int32_t *)local_3e4,uVar15);
                  }
                  else {
                    FUN_180151670((int32_t (*) [32])&local_784,0,0x1cc);
                    puVar9 = __doserrno();
                    *puVar9 = 0x22;
                    FUN_18012b794();
                  }
                }
                if (uVar17 != 0) {
                  uVar23 = local_788;
                  if ((uVar17 != 1) && (local_788 != 0)) {
                    uVar15 = 0;
                    uVar13 = 0;
                    do {
                      uVar12 = *(uint *)((longlong)&local_784 + uVar13 * 4) * uVar8 + uVar15;
                      *(int *)((longlong)&local_784 + uVar13 * 4) = (int)uVar12;
                      uVar15 = uVar12 >> 0x20;
                      iVar5 = (int)(uVar12 >> 0x20);
                      uVar23 = (int)uVar13 + 1;
                      uVar13 = (ulonglong)uVar23;
                    } while (uVar23 != local_788);
                    goto LAB_18014a0b1;
                  }
                  goto LAB_18014a0e0;
                }
                goto LAB_180149fcf;
              }
              bVar24 = local_3e8 < uVar23;
              local_798 = local_3e4;
              if (!bVar24) {
                local_798 = (uint *)&local_784;
              }
              local_7d0 = local_3e4;
              uVar17 = uVar23;
              if (bVar24) {
                uVar17 = local_3e8;
              }
              uVar22 = local_3e8;
              if (bVar24) {
                uVar22 = uVar23;
                local_7d0 = (uint *)&local_784;
              }
              local_788 = 0;
              uVar8 = 0;
              local_218 = 0;
              if (uVar17 != 0) {
                do {
                  uVar23 = local_798[uVar8];
                  uVar21 = (uint)uVar8;
                  if (uVar23 == 0) {
                    if (uVar21 == local_788) {
                      local_214[uVar8] = 0;
                      local_788 = uVar21 + 1;
                      local_218 = local_788;
                    }
                  }
                  else {
                    uVar15 = 0;
                    if (uVar22 != 0) {
                      do {
                        uVar7 = (uint)uVar8;
                        uVar13 = uVar8;
                        if (uVar7 == 0x73) break;
                        if (uVar7 == local_788) {
                          local_214[uVar8] = 0;
                          local_218 = uVar7 + 1;
                        }
                        uVar13 = (ulonglong)(uVar7 + 1);
                        uVar15 = (ulonglong)local_7d0[uVar7 + -uVar21] * (ulonglong)uVar23 +
                                 (ulonglong)local_214[uVar8] + uVar15;
                        local_214[uVar8] = (uint)uVar15;
                        uVar15 = uVar15 >> 0x20;
                        uVar8 = uVar13;
                        local_788 = local_218;
                      } while (-uVar21 + uVar7 + 1 != uVar22);
                      uVar23 = (uint)uVar15;
                      uVar8 = uVar13;
                      while (uVar23 != 0) {
                        uVar7 = (uint)uVar8;
                        if (uVar7 == 0x73) goto LAB_18014a0eb;
                        if (uVar7 == local_788) {
                          local_214[uVar8] = 0;
                          local_218 = uVar7 + 1;
                        }
                        uVar23 = local_214[uVar8];
                        local_214[uVar8] = (uint)(uVar23 + uVar15);
                        uVar23 = (uint)(uVar23 + uVar15 >> 0x20);
                        uVar15 = (ulonglong)uVar23;
                        uVar8 = (ulonglong)(uVar7 + 1);
                        local_788 = local_218;
                      }
                    }
                    if ((int)uVar8 == 0x73) goto LAB_18014a0eb;
                  }
                  uVar8 = (ulonglong)(uVar21 + 1);
                } while (uVar21 + 1 != uVar17);
              }
              uVar8 = (ulonglong)local_788 << 2;
              uVar23 = local_788;
              if ((ulonglong)local_788 != 0) {
                if (uVar8 < 0x1cd) {
                  FUN_180150fd0(&local_784,(int32_t *)local_214,uVar8);
                  uVar23 = local_788;
                }
                else {
                  FUN_180151670((int32_t (*) [32])&local_784,0,0x1cc);
                  puVar9 = __doserrno();
                  *puVar9 = 0x22;
                  FUN_18012b794();
                  uVar23 = local_788;
                }
              }
            }
            local_7f4 = local_7f4 - (uint)local_7d8;
            uVar8 = (ulonglong)local_7f4;
          } while (local_7f4 != 0);
          local_7f4 = (uint)local_7e8;
        }
        iVar5 = local_7e0 + local_7f4 * -10;
        if (iVar5 == 0) goto LAB_180149c35;
        uVar17 = *(uint *)(&DAT_18017a1a8 + (ulonglong)(iVar5 - 1) * 4);
        if (uVar17 != 0) {
          if ((uVar17 != 1) && (uVar23 != 0)) {
            uVar8 = 0;
            uVar15 = 0;
            do {
              uVar13 = (ulonglong)*(uint *)((longlong)&local_784 + uVar15 * 4) * (ulonglong)uVar17 +
                       uVar8;
              *(int *)((longlong)&local_784 + uVar15 * 4) = (int)uVar13;
              uVar8 = uVar13 >> 0x20;
              uVar22 = (int)uVar15 + 1;
              uVar15 = (ulonglong)uVar22;
            } while (uVar22 != uVar23);
            iVar5 = (int)(uVar13 >> 0x20);
            uVar23 = local_788;
            if (iVar5 != 0) {
              if (0x72 < local_788) goto LAB_18014a0eb;
              *(int *)((longlong)&local_784 + (ulonglong)local_788 * 4) = iVar5;
              local_788 = local_788 + 1;
              uVar23 = local_788;
            }
          }
          goto LAB_180149c35;
        }
LAB_18014a0eb:
        local_788 = 0;
        pcVar19 = local_7a0;
      }
      else {
        uVar15 = (ulonglong)uVar6 / 10;
        local_7f0 = (uint)uVar15;
        local_7d8 = (uint *)CONCAT44(local_7d8._4_4_,local_7f0);
        if (local_7f0 != 0) {
          do {
            uVar14 = (uint)uVar8;
            local_7e0 = (uint)uVar15;
            if (0x26 < local_7e0) {
              local_7e0 = 0x26;
            }
            uVar17 = local_7e0 - 1;
            bVar11 = (&DAT_18017a112)[(ulonglong)uVar17 * 4];
            bVar2 = (&DAT_18017a113)[(ulonglong)uVar17 * 4];
            local_3e8 = (uint)bVar2 + (uint)bVar11;
            FUN_180151670((int32_t (*) [32])local_3e4,0,(ulonglong)bVar11 * 4);
            FUN_180150fd0((int32_t *)(local_3e4 + bVar11),
                          (int32_t *)
                          (&DAT_180179800 +
                          (ulonglong)*(ushort *)(&DAT_18017a110 + (ulonglong)uVar17 * 4) * 4),
                          (ulonglong)bVar2 << 2);
            uVar17 = local_5b4[0];
            if (local_3e8 < 2) {
              uVar15 = (ulonglong)local_3e4[0];
              if (local_3e4[0] == 0) {
LAB_180149ae2:
                uVar8 = 0;
LAB_180149c02:
                local_5b8 = (uint)uVar8;
LAB_180149c20:
                bVar24 = true;
              }
              else {
                if ((local_3e4[0] == 1) || (uVar14 == 0)) goto LAB_180149c20;
                uVar8 = 0;
                uVar13 = 0;
                do {
                  uVar12 = local_5b4[uVar13] * uVar15 + uVar8;
                  local_5b4[uVar13] = (uint)uVar12;
                  uVar8 = uVar12 >> 0x20;
                  uVar17 = (uint)(uVar12 >> 0x20);
                  uVar22 = (int)uVar13 + 1;
                  uVar13 = (ulonglong)uVar22;
                } while (uVar22 != uVar14);
LAB_180149bdc:
                if (uVar17 == 0) {
                  uVar8 = (ulonglong)local_5b8;
                  goto LAB_180149c20;
                }
                if (local_5b8 < 0x73) {
                  local_5b4[local_5b8] = uVar17;
                  uVar8 = (ulonglong)(local_5b8 + 1);
                  goto LAB_180149c02;
                }
                uVar8 = 0;
                bVar24 = false;
                local_5b8 = 0;
              }
              if (!bVar24) goto LAB_180149c2b;
            }
            else {
              if (uVar14 < 2) {
                uVar15 = (ulonglong)local_5b4[0];
                uVar8 = (ulonglong)local_3e8 << 2;
                local_5b8 = local_3e8;
                if ((ulonglong)local_3e8 != 0) {
                  if (uVar8 < 0x1cd) {
                    FUN_180150fd0((int32_t *)local_5b4,(int32_t *)local_3e4,uVar8);
                  }
                  else {
                    FUN_180151670((int32_t (*) [32])local_5b4,0,0x1cc);
                    puVar9 = __doserrno();
                    *puVar9 = 0x22;
                    FUN_18012b794();
                  }
                }
                uVar8 = (ulonglong)local_5b8;
                if (uVar17 != 0) {
                  if ((uVar17 != 1) && (local_5b8 != 0)) {
                    uVar8 = 0;
                    uVar13 = 0;
                    do {
                      uVar12 = local_5b4[uVar13] * uVar15 + uVar8;
                      local_5b4[uVar13] = (uint)uVar12;
                      uVar8 = uVar12 >> 0x20;
                      uVar17 = (uint)(uVar12 >> 0x20);
                      uVar14 = (int)uVar13 + 1;
                      uVar13 = (ulonglong)uVar14;
                    } while (uVar14 != local_5b8);
                    goto LAB_180149bdc;
                  }
                  goto LAB_180149c20;
                }
                goto LAB_180149ae2;
              }
              bVar24 = local_3e8 < uVar14;
              local_7d0 = local_3e4;
              if (!bVar24) {
                local_7d0 = local_5b4;
              }
              local_7e8 = local_3e4;
              uVar17 = uVar14;
              if (bVar24) {
                uVar17 = local_3e8;
              }
              uVar22 = local_3e8;
              if (bVar24) {
                uVar22 = uVar14;
                local_7e8 = local_5b4;
              }
              uVar8 = 0;
              uVar15 = 0;
              local_218 = 0;
              if (uVar17 != 0) {
                do {
                  uVar14 = local_7d0[uVar15];
                  iVar5 = (int)uVar15;
                  if (uVar14 == 0) {
                    if (iVar5 == (int)uVar8) {
                      local_214[uVar15] = 0;
                      uVar8 = (ulonglong)(iVar5 + 1U);
                      local_218 = iVar5 + 1U;
                    }
                  }
                  else {
                    uVar13 = 0;
                    if (uVar22 != 0) {
                      do {
                        iVar18 = (int)uVar15;
                        uVar12 = uVar15;
                        if (iVar18 == 0x73) break;
                        if (iVar18 == (int)uVar8) {
                          local_214[uVar15] = 0;
                          local_218 = iVar18 + 1;
                        }
                        uVar12 = (ulonglong)(iVar18 + 1U);
                        uVar13 = (ulonglong)local_7e8[(uint)(iVar18 + -iVar5)] * (ulonglong)uVar14 +
                                 uVar13 + (ulonglong)local_214[uVar15];
                        local_214[uVar15] = (uint)uVar13;
                        uVar8 = (ulonglong)local_218;
                        uVar13 = uVar13 >> 0x20;
                        uVar15 = uVar12;
                      } while (iVar18 + 1U + -iVar5 != uVar22);
                      uVar14 = (uint)uVar13;
                      uVar15 = uVar12;
                      while (uVar14 != 0) {
                        iVar18 = (int)uVar15;
                        if (iVar18 == 0x73) goto LAB_180149c2b;
                        if (iVar18 == (int)uVar8) {
                          local_214[uVar15] = 0;
                          local_218 = iVar18 + 1U;
                        }
                        uVar14 = local_214[uVar15];
                        local_214[uVar15] = (uint)(uVar13 + uVar14);
                        uVar8 = (ulonglong)local_218;
                        uVar14 = (uint)(uVar13 + uVar14 >> 0x20);
                        uVar13 = (ulonglong)uVar14;
                        uVar15 = (ulonglong)(iVar18 + 1U);
                      }
                    }
                    if ((int)uVar15 == 0x73) goto LAB_180149c2b;
                  }
                  uVar15 = (ulonglong)(iVar5 + 1U);
                } while (iVar5 + 1U != uVar17);
              }
              local_5b8 = (uint)uVar8;
              if (uVar8 != 0) {
                if (uVar8 << 2 < 0x1cd) {
                  FUN_180150fd0((int32_t *)local_5b4,(int32_t *)local_214,uVar8 << 2);
                }
                else {
                  FUN_180151670((int32_t (*) [32])local_5b4,0,0x1cc);
                  puVar9 = __doserrno();
                  *puVar9 = 0x22;
                  FUN_18012b794();
                }
                uVar8 = (ulonglong)local_5b8;
              }
            }
            uVar14 = (uint)uVar8;
            local_7f0 = local_7f0 - local_7e0;
            uVar15 = (ulonglong)local_7f0;
          } while (local_7f0 != 0);
          local_7f0 = (uint)local_7d8;
        }
        iVar5 = uVar6 + local_7f0 * -10;
        if (iVar5 != 0) {
          uVar17 = *(uint *)(&DAT_18017a1a8 + (ulonglong)(iVar5 - 1) * 4);
          if (uVar17 == 0) {
LAB_180149c2b:
            local_5b8 = 0;
LAB_180149c2e:
            uVar14 = local_5b8;
          }
          else if ((uVar17 != 1) && (uVar14 != 0)) {
            uVar8 = 0;
            uVar15 = 0;
            do {
              uVar13 = (ulonglong)local_5b4[uVar15] * (ulonglong)uVar17 + uVar8;
              local_5b4[uVar15] = (uint)uVar13;
              uVar8 = uVar13 >> 0x20;
              uVar22 = (int)uVar15 + 1;
              uVar15 = (ulonglong)uVar22;
            } while (uVar22 != uVar14);
            uVar17 = (uint)(uVar13 >> 0x20);
            uVar14 = local_5b8;
            if (uVar17 != 0) {
              if (0x72 < local_5b8) goto LAB_180149c2b;
              local_5b4[local_5b8] = uVar17;
              local_5b8 = local_5b8 + 1;
              goto LAB_180149c2e;
            }
          }
        }
LAB_180149c35:
        pcVar19 = local_7a0;
        if (uVar23 != 0) {
          uVar8 = 0;
          uVar15 = 0;
          do {
            uVar13 = uVar8 + (ulonglong)*(uint *)((longlong)&local_784 + uVar15 * 4) * 10;
            *(int *)((longlong)&local_784 + uVar15 * 4) = (int)uVar13;
            uVar17 = (int)uVar15 + 1;
            uVar15 = (ulonglong)uVar17;
            uVar8 = uVar13 >> 0x20;
          } while (uVar17 != uVar23);
          iVar5 = (int)(uVar13 >> 0x20);
          if (iVar5 != 0) {
            if (local_788 < 0x73) {
              *(int *)((longlong)&local_784 + (ulonglong)local_788 * 4) = iVar5;
              local_788 = local_788 + 1;
            }
            else {
              local_3e8 = 0;
              local_788 = 0;
              memcpy_s(&local_784,0x1cc,local_3e4,0);
            }
          }
        }
      }
      uVar8 = FUN_1801350e0(&local_788,&local_5b8);
      if ((int)uVar8 == 10) {
        uVar6 = uVar6 + 1;
        *pcVar19 = '1';
        pcVar16 = pcVar19 + 1;
        if (uVar14 != 0) {
          uVar8 = 0;
          uVar15 = 0;
          do {
            uVar13 = uVar8 + (ulonglong)local_5b4[uVar15] * 10;
            local_5b4[uVar15] = (uint)uVar13;
            uVar23 = (int)uVar15 + 1;
            uVar15 = (ulonglong)uVar23;
            uVar8 = uVar13 >> 0x20;
          } while (uVar23 != uVar14);
          uVar23 = (uint)(uVar13 >> 0x20);
          if (uVar23 != 0) {
            if (local_5b8 < 0x73) {
              local_5b4[local_5b8] = uVar23;
              local_5b8 = local_5b8 + 1;
            }
            else {
              local_3e8 = 0;
              local_5b8 = 0;
              memcpy_s(local_5b4,0x1cc,local_3e4,0);
            }
          }
        }
      }
      else if ((int)uVar8 == 0) {
        uVar6 = uVar6 - 1;
        pcVar16 = pcVar19;
      }
      else {
        pcVar16 = pcVar19 + 1;
        *pcVar19 = (char)uVar8 + '0';
      }
      local_790[1] = uVar6;
      uVar23 = local_7c8;
      if (((-1 < (int)uVar6) && (local_7c8 < 0x80000000)) && (local_7c4 == 0)) {
        uVar23 = local_7c8 + uVar6;
      }
      uVar8 = (ulonglong)uVar23;
      if (param_6 - 1 < (ulonglong)uVar23) {
        uVar8 = param_6 - 1;
      }
      pcVar19 = pcVar19 + uVar8;
      while ((pcVar16 != pcVar19 && (local_788 != 0))) {
        uVar8 = 0;
        uVar15 = 0;
        do {
          uVar13 = (ulonglong)*(uint *)((longlong)&local_784 + uVar15 * 4) * 1000000000 + uVar8;
          *(int *)((longlong)&local_784 + uVar15 * 4) = (int)uVar13;
          uVar8 = uVar13 >> 0x20;
          uVar23 = (int)uVar15 + 1;
          uVar15 = (ulonglong)uVar23;
        } while (uVar23 != local_788);
        iVar5 = (int)(uVar13 >> 0x20);
        if (iVar5 != 0) {
          if (local_788 < 0x73) {
            *(int *)((longlong)&local_784 + (ulonglong)local_788 * 4) = iVar5;
            local_788 = local_788 + 1;
          }
          else {
            local_3e8 = 0;
            local_788 = 0;
            memcpy_s(&local_784,0x1cc,local_3e4,0);
          }
        }
        uVar8 = FUN_1801350e0(&local_788,&local_5b8);
        uVar23 = 8;
        do {
          uVar15 = (uVar8 & 0xffffffff) / 10;
          if (uVar23 < (uint)((int)pcVar19 - (int)pcVar16)) {
            pcVar16[uVar23] = (char)uVar8 + (char)uVar15 * -10 + '0';
          }
          uVar23 = uVar23 - 1;
          uVar8 = uVar15;
        } while (uVar23 != 0xffffffff);
        lVar10 = (longlong)pcVar19 - (longlong)pcVar16;
        if (9 < lVar10) {
          lVar10 = 9;
        }
        pcVar16 = pcVar16 + lVar10;
      }
      *pcVar16 = '\0';
      _controlfp_s(&local_7c4,local_7c0,local_7bc);
      goto LAB_18014a59f;
    }
    param_4[1] = 0;
    pcVar19 = "0";
LAB_18014949e:
    iVar5 = strcpy_s(param_5,param_6,pcVar19);
  }
  else {
    if (uVar8 != 0x7ff) goto LAB_1801494f2;
    if (((ulonglong)puVar1 & 0xfffffffffffff) == 0) {
      uVar23 = 1;
    }
    else if (((longlong)puVar1 < 0) && (((ulonglong)puVar1 & 0xfffffffffffff) == 0x8000000000000)) {
      uVar23 = 4;
    }
    else {
      uVar23 = ~(uint)((ulonglong)puVar1 >> 0x33) & 1 | 2;
    }
    param_4[1] = 1;
    if (uVar23 != 1) {
      if (uVar23 == 2) {
        pcVar19 = "1#QNAN";
      }
      else if (uVar23 == 3) {
        pcVar19 = "1#SNAN";
      }
      else {
        if (uVar23 != 4) goto LAB_1801494f2;
        pcVar19 = "1#IND";
      }
      goto LAB_18014949e;
    }
    iVar5 = strcpy_s(param_5,param_6,"1#INF");
  }
  if (iVar5 != 0) {
                    
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
LAB_18014a59f:
  if (local_7b0 != '\0') {
    FUN_18014c230((uint *)local_7b8);
  }
  FUN_1801252c0(local_48 ^ (ulonglong)auStackY_828);
  return;
}

// ---- Function: FUN_18014a5ec ----
int32_t FUN_18014a5ec(byte *param_1,uint param_2,int32_t *param_3,longlong param_4)

{
  byte bVar1;
  int32_t uVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  
  if (param_1 != (byte *)0x0) {
    if (param_2 != 0) {
      if ((param_2 & 0xffffff80) == 0) {
        *param_1 = (byte)param_2;
        return 1;
      }
      if ((param_2 & 0xfffff800) == 0) {
        lVar3 = 1;
        bVar5 = 0xc0;
        lVar4 = lVar3;
      }
      else if ((param_2 & 0xffff0000) == 0) {
        if (param_2 - 0xd800 < 0x800) {
LAB_18014a683:
          uVar2 = FUN_18014c954(param_3,param_4);
          return uVar2;
        }
        lVar3 = 2;
        bVar5 = 0xe0;
        lVar4 = lVar3;
      }
      else {
        if (((param_2 & 0xffe00000) != 0) || (0x10ffff < param_2)) goto LAB_18014a683;
        lVar3 = 3;
        bVar5 = 0xf0;
        lVar4 = lVar3;
      }
      do {
        bVar1 = (byte)param_2;
        param_2 = param_2 >> 6;
        param_1[lVar3] = bVar1 & 0x3f | 0x80;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      *param_1 = (byte)param_2 | bVar5;
      uVar2 = FUN_18014c94c(lVar4 + 1,param_3);
      return uVar2;
    }
    *param_1 = 0;
  }
  *param_3 = 0;
  return 1;
}

// ---- Function: GetStringTypeW ----
BOOL __stdcall GetStringTypeW(DWORD dwInfoType,LPCWSTR lpSrcStr,int cchSrc,LPWORD lpCharType)

{
  BOOL BVar1;
  
                    
                    
  BVar1 = GetStringTypeW(dwInfoType,lpSrcStr,cchSrc,lpCharType);
  return BVar1;
}

// ---- Function: __acrt_CompareStringW ----
/* Library Function - Single Match
    __acrt_CompareStringW
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

ulonglong __acrt_CompareStringW
                    (ushort *param_1,DWORD param_2,int32_t (*param_3) [32],int param_4,
                    int32_t (*param_5) [32],int param_6)

{
  ulonglong uVar1;
  
  if (0 < param_4) {
    uVar1 = FUN_180136b94(param_3,(longlong)param_4);
    param_4 = (int)uVar1;
  }
  if (0 < param_6) {
    uVar1 = FUN_180136b94(param_5,(longlong)param_6);
    param_6 = (int)uVar1;
  }
  if ((param_4 == 0) || (param_6 == 0)) {
    uVar1 = (ulonglong)((param_4 - param_6 >> 0x1f & 0xfffffffeU) + 3);
    if (param_4 - param_6 == 0) {
      uVar1 = 2;
    }
  }
  else {
    uVar1 = FUN_18013a6c4(param_1,param_2,(PCNZWCH)param_3,param_4,(PCNZWCH)param_5,param_6,0,0,0);
  }
  return uVar1;
}

// ---- Function: FUN_18014a758 ----
void FUN_18014a758(longlong *param_1,ushort *param_2,DWORD param_3,byte *param_4,int param_5,
                  byte *param_6,int param_7,UINT param_8)

{
  int *piVar1;
  longlong lVar2;
  DWORD DVar3;
  byte *pbVar4;
  ushort *puVar5;
  BOOL BVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  size_t sVar10;
  BYTE *pBVar11;
  ulonglong uVar12;
  PCNZWCH pWVar13;
  int32_t *puVar14;
  ulonglong uVar15;
  int32_t *puVar16;
  int32_t *puVar17;
  int32_t *puVar18;
  int32_t auStackY_d8 [32];
  DWORD local_88 [2];
  byte *local_80;
  ushort *local_78;
  _cpinfo local_70;
  ulonglong local_58;
  
  puVar16 = auStackY_d8;
  puVar17 = auStackY_d8;
  puVar18 = auStackY_d8;
  local_58 = DAT_1801eb080 ^ (ulonglong)local_88;
  local_80 = param_6;
  local_88[0] = param_3;
  local_78 = param_2;
  if (param_5 < 1) {
    if (param_5 < -1) goto LAB_18014aab7;
  }
  else {
    sVar10 = __strncnt((char *)param_4,(longlong)param_5);
    param_5 = (int)sVar10;
  }
  if (param_7 < 1) {
    puVar18 = auStackY_d8;
    if (param_7 < -1) goto LAB_18014aab7;
  }
  else {
    sVar10 = __strncnt((char *)param_6,(longlong)param_7);
    param_7 = (int)sVar10;
  }
  if (param_8 == 0) {
    param_8 = *(UINT *)(*param_1 + 0xc);
  }
  if ((param_5 == 0) || (param_7 == 0)) {
    puVar18 = auStackY_d8;
    if ((param_5 == param_7) ||
       (((puVar18 = auStackY_d8, 1 < param_7 || (puVar18 = auStackY_d8, 1 < param_5)) ||
        (BVar6 = GetCPInfo(param_8,&local_70), puVar18 = auStackY_d8, BVar6 == 0))))
    goto LAB_18014aab7;
    if (0 < param_5) {
      puVar18 = auStackY_d8;
      if (1 < local_70.MaxCharSize) {
        pBVar11 = local_70.LeadByte;
        while (((puVar18 = auStackY_d8, local_70.LeadByte[0] != 0 &&
                (puVar18 = auStackY_d8, pBVar11[1] != 0)) &&
               ((*param_4 < *pBVar11 || (puVar18 = auStackY_d8, pBVar11[1] < *param_4))))) {
          pBVar11 = pBVar11 + 2;
          local_70.LeadByte[0] = *pBVar11;
        }
      }
      goto LAB_18014aab7;
    }
    if (0 < param_7) {
      puVar18 = auStackY_d8;
      if (1 < local_70.MaxCharSize) {
        pBVar11 = local_70.LeadByte;
        while (((puVar18 = auStackY_d8, local_70.LeadByte[0] != 0 &&
                (puVar18 = auStackY_d8, pBVar11[1] != 0)) &&
               ((*param_6 < *pBVar11 || (puVar18 = auStackY_d8, pBVar11[1] < *param_6))))) {
          pBVar11 = pBVar11 + 2;
          local_70.LeadByte[0] = *pBVar11;
        }
      }
      goto LAB_18014aab7;
    }
  }
  iVar7 = FUN_180141178(param_8,9,(LPCSTR)param_4,param_5,(LPWSTR)0x0,0);
  puVar18 = auStackY_d8;
  if ((iVar7 == 0) ||
     (uVar15 = (longlong)iVar7 * 2 + 0x10,
     uVar15 = -(ulonglong)((ulonglong)((longlong)iVar7 * 2) < uVar15) & uVar15,
     puVar18 = auStackY_d8, uVar15 == 0)) goto LAB_18014aab7;
  if (uVar15 < 0x401) {
    uVar12 = uVar15 + 0xf;
    if (uVar12 <= uVar15) {
      uVar12 = 0xffffffffffffff0;
    }
    lVar2 = -(uVar12 & 0xfffffffffffffff0);
    puVar16 = auStackY_d8 + lVar2;
    pWVar13 = (PCNZWCH)((longlong)local_88 + lVar2);
    puVar18 = auStackY_d8 + lVar2;
    if (pWVar13 == (PCNZWCH)0x0) goto LAB_18014aab7;
    pWVar13[0] = L'쳌';
    pWVar13[1] = L'\0';
LAB_18014a940:
    pWVar13 = pWVar13 + 8;
    puVar17 = puVar16;
  }
  else {
    pWVar13 = (PCNZWCH)_malloc_base(uVar15);
    if (pWVar13 != (PCNZWCH)0x0) {
      pWVar13[0] = L'\xdddd';
      pWVar13[1] = L'\0';
      goto LAB_18014a940;
    }
  }
  puVar18 = puVar17;
  if (pWVar13 == (PCNZWCH)0x0) goto LAB_18014aab7;
  *(int *)(puVar17 + 0x28) = iVar7;
  *(PCNZWCH *)(puVar17 + 0x20) = pWVar13;
  *(int32_t *)(puVar17 + -8) = 0x18014a96a;
  iVar8 = FUN_180141178(param_8,1,(LPCSTR)param_4,param_5,*(LPWSTR *)(puVar17 + 0x20),
                        *(int *)(puVar17 + 0x28));
  if (iVar8 == 0) {
LAB_18014aaa4:
    iVar7 = *(int *)(pWVar13 + -8);
  }
  else {
    *(int32_t *)(puVar17 + 0x28) = 0;
    *(int32_t *)(puVar17 + 0x20) = 0;
    *(int32_t *)(puVar17 + -8) = 0x18014a990;
    iVar8 = FUN_180141178(param_8,9,(LPCSTR)param_6,param_7,*(LPWSTR *)(puVar17 + 0x20),
                          *(int *)(puVar17 + 0x28));
    if ((iVar8 == 0) ||
       (uVar15 = (longlong)iVar8 * 2 + 0x10,
       uVar15 = -(ulonglong)((ulonglong)((longlong)iVar8 * 2) < uVar15) & uVar15, uVar15 == 0))
    goto LAB_18014aaa4;
    if (uVar15 < 0x401) {
      uVar12 = uVar15 + 0xf;
      if (uVar12 <= uVar15) {
        uVar12 = 0xffffffffffffff0;
      }
      *(int32_t *)(puVar17 + -8) = 0x18014a9d9;
      lVar2 = -(uVar12 & 0xfffffffffffffff0);
      puVar18 = puVar17 + lVar2;
      puVar14 = (int32_t *)(puVar17 + lVar2 + 0x50);
      if (puVar14 == (int32_t *)0x0) goto LAB_18014aaa4;
      *puVar14 = 0xcccc;
      puVar17 = puVar17 + lVar2;
LAB_18014aa05:
      puVar14 = puVar14 + 4;
      puVar18 = puVar17;
    }
    else {
      *(int32_t *)(puVar17 + -8) = 0x18014a9f7;
      puVar14 = (int32_t *)_malloc_base(uVar15);
      if (puVar14 != (int32_t *)0x0) {
        *puVar14 = 0xdddd;
        goto LAB_18014aa05;
      }
    }
    pbVar4 = local_80;
    if (puVar14 == (int32_t *)0x0) goto LAB_18014aaa4;
    piVar1 = puVar14 + -4;
    *(int *)(puVar18 + 0x28) = iVar8;
    *(int32_t **)(puVar18 + 0x20) = puVar14;
    *(int32_t *)(puVar18 + -8) = 0x18014aa34;
    iVar9 = FUN_180141178(param_8,1,(LPCSTR)pbVar4,param_7,*(LPWSTR *)(puVar18 + 0x20),
                          *(int *)(puVar18 + 0x28));
    DVar3 = local_88[0];
    if (iVar9 != 0) {
      *(int32_t *)(puVar18 + 0x40) = 0;
      *(int32_t *)(puVar18 + 0x38) = 0;
      *(int32_t *)(puVar18 + 0x30) = 0;
      puVar5 = local_78;
      *(int *)(puVar18 + 0x28) = iVar8;
      *(int32_t **)(puVar18 + 0x20) = puVar14;
      *(int32_t *)(puVar18 + -8) = 0x18014aa7f;
      FUN_18013a6c4(puVar5,DVar3,pWVar13,iVar7,*(PCNZWCH *)(puVar18 + 0x20),*(int *)(puVar18 + 0x28)
                    ,*(int32_t *)(puVar18 + 0x30),*(int32_t *)(puVar18 + 0x38),
                    *(int32_t *)(puVar18 + 0x40));
      if (*piVar1 == 0xdddd) {
        *(int32_t *)(puVar18 + -8) = 0x18014aa93;
        FUN_18013bf3c(piVar1);
      }
      if (*(int *)(pWVar13 + -8) == 0xdddd) {
        *(int32_t *)(puVar18 + -8) = 0x18014aaa0;
        FUN_18013bf3c(pWVar13 + -8);
      }
      goto LAB_18014aab7;
    }
    if (*piVar1 == 0xdddd) {
      *(int32_t *)(puVar18 + -8) = 0x18014aa4c;
      FUN_18013bf3c(piVar1);
    }
    iVar7 = *(int *)(pWVar13 + -8);
  }
  if (iVar7 == 0xdddd) {
    *(int32_t *)(puVar18 + -8) = 0x18014aab5;
    FUN_18013bf3c(pWVar13 + -8);
  }
LAB_18014aab7:
  uVar15 = local_58 ^ (ulonglong)local_88;
  *(int32_t *)(puVar18 + -8) = 0x18014aac3;
  FUN_1801252c0(uVar15);
  return;
}

// ---- Function: __acrt_CompareStringA ----
/* Library Function - Single Match
    __acrt_CompareStringA
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_CompareStringA
               (__crt_locale_pointers *param_1,ushort *param_2,DWORD param_3,byte *param_4,
               int param_5,byte *param_6,int param_7,UINT param_8)

{
  longlong local_28;
  longlong local_20 [2];
  char local_10;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,param_1);
  FUN_18014a758(local_20,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return;
}

// ---- Function: _get_fpsr ----
/* Library Function - Single Match
    _get_fpsr
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int32_t _get_fpsr(void)

{
  return MXCSR;
}

// ---- Function: FUN_18014ab90 ----
void FUN_18014ab90(int32_t param_1)

{
  MXCSR = param_1;
  return;
}

