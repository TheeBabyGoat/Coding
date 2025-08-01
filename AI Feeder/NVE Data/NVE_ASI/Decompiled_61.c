#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_18012d334 ----
longlong FUN_18012d334(ushort *param_1,ulonglong param_2,ushort *param_3,uint *param_4,
                      int32_t **param_5,__crt_locale_pointers *param_6)

{
  ushort *puVar1;
  ulong *puVar2;
  int32_t uVar3;
  ushort uVar4;
  longlong lVar5;
  bool bVar6;
  ulonglong local_res8;
  ushort *local_58;
  longlong local_50;
  longlong local_48 [2];
  char local_38;
  
  lVar5 = 0;
  if (((param_1 == (ushort *)0x0) || (param_2 == 0)) || (*param_1 = 0, param_3 == (ushort *)0x0)) {
    puVar2 = __doserrno();
    *puVar2 = 0x16;
    FUN_18012b794();
    lVar5 = 0;
  }
  else {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_50,param_6);
    local_res8 = param_2;
    local_58 = param_1;
    if (param_5 == (int32_t **)0x0) {
      param_5 = *(int32_t ***)(local_48[0] + 0x120);
    }
    do {
      uVar4 = *param_3;
      if (uVar4 == 0) break;
      if (uVar4 == 0x25) {
        if (param_4 == (uint *)0x0) goto LAB_18012d467;
        uVar4 = param_3[1];
        bVar6 = uVar4 == 0x23;
        puVar1 = param_3 + 1;
        if (bVar6) {
          uVar4 = param_3[2];
          puVar1 = param_3 + 2;
        }
        param_3 = puVar1;
        if ((uVar4 == 0x45) || (uVar4 == 0x4f)) {
          param_3 = param_3 + 1;
          uVar4 = *param_3;
        }
        uVar3 = FUN_18012bdd4(local_48,uVar4,param_4,(longlong *)&local_58,&local_res8,param_5,bVar6
                             );
        if ((char)uVar3 == '\0') {
          if (local_res8 == 0) goto LAB_18012d4a7;
          *param_1 = 0;
          goto LAB_18012d467;
        }
      }
      else {
        *local_58 = uVar4;
        local_58 = local_58 + 1;
        local_res8 = local_res8 - 1;
      }
      param_3 = param_3 + 1;
    } while (local_res8 != 0);
    if (local_res8 == 0) {
LAB_18012d4a7:
      *param_1 = 0;
      if (local_res8 == 0) {
        puVar2 = __doserrno();
        *puVar2 = 0x22;
      }
      else {
LAB_18012d467:
        puVar2 = __doserrno();
        *puVar2 = 0x16;
        FUN_18012b794();
      }
    }
    else {
      *local_58 = 0;
      lVar5 = param_2 - local_res8;
    }
    if (local_38 != '\0') {
      *(uint *)(local_50 + 0x3a8) = *(uint *)(local_50 + 0x3a8) & 0xfffffffd;
    }
  }
  return lVar5;
}

// ---- Function: FUN_18012d4c0 ----
void FUN_18012d4c0(ushort *param_1,ulonglong param_2,ushort *param_3,uint *param_4)

{
  FUN_18012d334(param_1,param_2,param_3,param_4,(int32_t **)0x0,(__crt_locale_pointers *)0x0);
  return;
}

// ---- Function: FUN_18012d4dc ----
void FUN_18012d4dc(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  do {
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    bVar2 = *param_2;
    uVar3 = bVar1 + 0x20;
    if (0x19 < bVar1 - 0x41) {
      uVar3 = (uint)bVar1;
    }
    uVar4 = bVar2 + 0x20;
    param_2 = param_2 + 1;
    if (0x19 < bVar2 - 0x41) {
      uVar4 = (uint)bVar2;
    }
  } while ((uVar3 == uVar4) && (uVar3 != 0));
  return;
}

// ---- Function: FUN_18012d518 ----
ulonglong FUN_18012d518(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  ulong *puVar4;
  ulonglong uVar5;
  longlong local_28;
  longlong local_20;
  char local_10;
  
  if (DAT_1801ee158 == 0) {
    if ((param_1 != (byte *)0x0) && (param_2 != (byte *)0x0)) {
      uVar5 = FUN_18012d4dc(param_1,param_2);
      return uVar5;
    }
    puVar4 = __doserrno();
    *puVar4 = 0x16;
    FUN_18012b794();
    return 0x7fffffff;
  }
  if ((param_1 == (byte *)0x0) || (param_2 == (byte *)0x0)) {
    puVar4 = __doserrno();
    *puVar4 = 0x16;
    FUN_18012b794();
    uVar5 = 0x7fffffff;
  }
  else {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,(__crt_locale_pointers *)0x0);
    do {
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      bVar1 = *(byte *)((ulonglong)bVar1 + *(longlong *)(local_20 + 0x110));
      bVar2 = *param_2;
      param_2 = param_2 + 1;
      uVar3 = (uint)bVar1 - (uint)*(byte *)((ulonglong)bVar2 + *(longlong *)(local_20 + 0x110));
      uVar5 = (ulonglong)uVar3;
      if (uVar3 != 0) break;
    } while (bVar1 != 0);
    if (local_10 != '\0') {
      *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
    }
  }
  return uVar5;
}

// ---- Function: FUN_18012d5e8 ----
void FUN_18012d5e8(LPVOID param_1)

{
  FUN_18013bf3c(param_1);
  return;
}

// ---- Function: _calloc_base ----
LPVOID _calloc_base(ulonglong param_1,ulonglong param_2)

{
  int iVar1;
  int32_t *puVar2;
  LPVOID pvVar3;
  ulong *puVar4;
  SIZE_T dwBytes;
  
  if ((param_1 == 0) || (param_2 <= 0xffffffffffffffe0 / param_1)) {
    dwBytes = param_1 * param_2;
    if (dwBytes == 0) {
      dwBytes = 1;
    }
    do {
      pvVar3 = HeapAlloc(DAT_1801ee8a8,8,dwBytes);
      if (pvVar3 != (LPVOID)0x0) {
        return pvVar3;
      }
      iVar1 = FUN_180147668();
    } while ((iVar1 != 0) && (puVar2 = FUN_180136d74(dwBytes), (int)puVar2 != 0));
  }
  puVar4 = __doserrno();
  *puVar4 = 0xc;
  return (LPVOID)0x0;
}

// ---- Function: FUN_18012d604 ----
int32_t FUN_18012d604(void)

{
  __acrt_ptd *p_Var1;
  longlong local_res8 [4];
  
  p_Var1 = FUN_1801387d8();
  local_res8[0] = *(longlong *)(p_Var1 + 0x90);
  FUN_18013c1fc((longlong)p_Var1,local_res8);
  return *(int32_t *)(local_res8[0] + 0xf8);
}

// ---- Function: _dclass ----
/* Library Function - Single Match
    _dclass
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void _dclass(int32_t param_1)

{
  int32_t local_res8 [4];
  
  local_res8[0] = param_1;
  _dtest((short *)local_res8);
  return;
}

// ---- Function: FUN_18012d654 ----
ushort FUN_18012d654(int32_t param_1)

{
  return (ushort)((ulonglong)param_1 >> 0x30) & 0x8000;
}

// ---- Function: _dclass ----
/* Library Function - Single Match
    _dclass
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void _dclass(int32_t param_1)

{
  int32_t local_res8 [4];
  
  local_res8[0] = param_1;
  _dtest((short *)local_res8);
  return;
}

// ---- Function: _fdclass ----
/* Library Function - Single Match
    _fdclass
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void _fdclass(int32_t param_1)

{
  int32_t local_res8 [8];
  
  local_res8[0] = param_1;
  _fdtest((short *)local_res8);
  return;
}

// ---- Function: FUN_18012d6a4 ----
uint FUN_18012d6a4(uint param_1)

{
  return param_1 >> 0x10 & 0x8000;
}

// ---- Function: FUN_18012d6b8 ----
void FUN_18012d6b8(int32_t param_1,longlong *param_2,int32_t *param_3,longlong *param_4)

{
  uint uVar1;
  int iVar2;
  
  FUN_18012ef14(*param_2);
  if ((*(longlong *)*param_3 != 0) &&
     (uVar1 = *(uint *)(*(longlong *)*param_3 + 0x14), (uVar1 >> 0xd & 1) != 0)) {
    if (((((byte)uVar1 & 3) == 2) && ((uVar1 & 0xc0) != 0)) || ((uVar1 >> 0xb & 1) != 0)) {
      if ((*(char *)param_3[2] != '\0') || ((*(uint *)(*(longlong *)*param_3 + 0x14) >> 1 & 1) != 0)
         ) {
        iVar2 = FUN_18012d964(*(int **)*param_3);
        if (iVar2 == -1) {
          *(int32_t *)param_3[3] = 0xffffffff;
        }
        else {
          *(int *)param_3[1] = *(int *)param_3[1] + 1;
        }
      }
    }
    else {
      *(int *)param_3[1] = *(int *)param_3[1] + 1;
    }
  }
  FUN_18012ef20(*param_4);
  return;
}

// ---- Function: FUN_18012d754 ----
void FUN_18012d754(int32_t param_1,int *param_2,int32_t *param_3,int *param_4)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  int32_t local_res10 [16];
  int *local_res20;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  int32_t local_30;
  int32_t local_28;
  int32_t local_20;
  
  local_res20 = param_4;
  __acrt_lock(*param_2);
  plVar1 = DAT_1801edd90 + DAT_1801edd88;
  for (plVar3 = DAT_1801edd90; local_40 = plVar3, plVar3 != plVar1; plVar3 = plVar3 + 1) {
    local_58 = *plVar3;
    if ((local_58 != 0) && (uVar2 = *(uint *)(local_58 + 0x14), (uVar2 >> 0xd & 1) != 0)) {
      if (((((byte)uVar2 & 3) == 2) && ((uVar2 & 0xc0) != 0)) || ((uVar2 >> 0xb & 1) != 0)) {
        local_20 = param_3[2];
        local_28 = param_3[1];
        local_30 = *param_3;
        local_38 = &local_58;
        local_50 = local_58;
        local_48 = local_58;
        FUN_18012d6b8(local_res10,&local_48,&local_38,&local_50);
      }
      else {
        *(int *)*param_3 = *(int *)*param_3 + 1;
      }
    }
  }
  __acrt_unlock(*param_4);
  return;
}

// ---- Function: FUN_18012d838 ----
int FUN_18012d838(int32_t param_1,longlong *param_2,int32_t *param_3,longlong *param_4)

{
  int iVar1;
  
  FUN_18012ef14(*param_2);
  iVar1 = FUN_18012d964(*(int **)*param_3);
  FUN_18012ef20(*param_4);
  return iVar1;
}

// ---- Function: common_flush_all ----
/* Library Function - Single Match
    int __cdecl common_flush_all(bool)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl common_flush_all(bool param_1)

{
  char local_res8 [8];
  int32_t local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  int local_28 [2];
  int *local_20;
  char *local_18;
  int *local_10;
  
  local_res20[0] = 0;
  local_20 = local_res20;
  local_res18[0] = 0;
  local_18 = local_res8;
  local_10 = local_res18;
  local_28[0] = 8;
  local_28[1] = 8;
  local_res8[0] = param_1;
  FUN_18012d754(local_res10,local_28 + 1,&local_20,local_28);
  if (local_res8[0] != '\0') {
    local_res18[0] = local_res20[0];
  }
  return local_res18[0];
}

// ---- Function: FUN_18012d8d8 ----
int32_t FUN_18012d8d8(int *param_1,longlong *param_2)

{
  wchar_t *pwVar1;
  uint uVar2;
  uint uVar3;
  
  if ((((byte)param_1[5] & 3) == 2) && ((param_1[5] & 0xc0U) != 0)) {
    uVar3 = *param_1 - param_1[2];
    param_1[4] = 0;
    pwVar1 = *(wchar_t **)(param_1 + 2);
    *(wchar_t **)param_1 = pwVar1;
    if (0 < (int)uVar3) {
      uVar2 = FUN_18013c524((longlong)param_1);
      uVar2 = FUN_18013cdec(uVar2,pwVar1,uVar3,param_2);
      if (uVar3 != uVar2) {
        LOCK();
        param_1[5] = param_1[5] | 0x10;
        UNLOCK();
        return 0xffffffff;
      }
      if (((uint)param_1[5] >> 2 & 1) != 0) {
        LOCK();
        param_1[5] = param_1[5] & 0xfffffffd;
        UNLOCK();
      }
    }
  }
  return 0;
}

