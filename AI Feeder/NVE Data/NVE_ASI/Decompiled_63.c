#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_18012e4a0 ----
ulonglong FUN_18012e4a0(int32_t param_1,longlong param_2,longlong param_3,longlong param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong local_48 [2];
  int32_t local_38;
  int32_t *local_30;
  int32_t *puStack_28;
  char local_20;
  int32_t local_1c;
  char local_18;
  int32_t local_14;
  char local_10;
  
  local_48[0] = 0;
  local_20 = DAT_1801ee158 == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_1801eb448;
    puStack_28 = PTR_DAT_1801eb450;
  }
  uVar1 = FUN_18012e1f0(param_1,param_2,param_3,param_4,local_48);
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_18012b3a8(local_48);
    *(int32_t *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_18012b3a8(local_48);
    *(int32_t *)(lVar2 + 0x24) = local_14;
  }
  return uVar1;
}

// ---- Function: FUN_18012e544 ----
ulonglong FUN_18012e544(int32_t (*param_1) [32],ulonglong param_2,ulonglong param_3,
                       ulonglong param_4,longlong *param_5)

{
  int32_t auVar1 [16];
  int32_t auVar2 [16];
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  ulong *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int32_t (*pauVar9) [32];
  ulonglong uVar10;
  ulonglong uVar11;
  
  plVar3 = param_5;
  if ((param_3 != 0) && (param_4 != 0)) {
    if (param_1 != (int32_t (*) [32])0x0) {
      if ((param_5 != (longlong *)0x0) &&
         (auVar1._8_8_ = 0, auVar1._0_8_ = param_3,
         param_4 <= SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0))) {
LAB_18012e5e2:
        if ((*(uint *)((longlong)param_5 + 0x14) & 0x4c0) == 0) {
          param_5._0_4_ = 0x1000;
        }
        else {
          param_5._0_4_ = *(uint *)(param_5 + 4);
        }
        uVar8 = param_3 * param_4;
        pauVar9 = param_1;
        uVar10 = param_2;
        do {
          if (uVar8 == 0) {
            return param_4;
          }
          if ((*(uint *)((longlong)plVar3 + 0x14) & 0x4c0) == 0) {
LAB_18012e6a2:
            if (uVar8 < (uint)param_5) {
              uVar7 = FUN_18013eb04(plVar3);
              if ((int)uVar7 == -1) goto LAB_18012e78d;
              if (uVar10 == 0) goto LAB_18012e765;
              uVar8 = uVar8 - 1;
              uVar10 = uVar10 - 1;
              uVar11 = 1;
              (*pauVar9)[0] = (char)uVar7;
              param_5._0_4_ = *(uint *)(plVar3 + 4);
            }
            else {
              uVar11 = uVar8 & 0xffffffff;
              if (0x7fffffff < uVar8) {
                uVar11 = 0x7fffffff;
              }
              if ((uint)param_5 != 0) {
                uVar11 = (ulonglong)(uint)((int)uVar11 - (int)(uVar11 % (ulonglong)(uint)param_5));
              }
              if (uVar10 < uVar11) {
LAB_18012e765:
                if (param_2 != 0xffffffffffffffff) {
                  FUN_180151670(param_1,0,param_2);
                }
                puVar6 = __doserrno();
                *puVar6 = 0x22;
                goto LAB_18012e588;
              }
              *(int32_t *)(plVar3 + 2) = 0;
              *plVar3 = plVar3[1];
              uVar4 = FUN_18013c524((longlong)plVar3);
              iVar5 = FUN_18013e6b4(uVar4,(LPWSTR)pauVar9,(uint)uVar11);
              if (iVar5 == 0) {
                LOCK();
                *(uint *)((longlong)plVar3 + 0x14) = *(uint *)((longlong)plVar3 + 0x14) | 8;
                UNLOCK();
                goto LAB_18012e78d;
              }
              if (iVar5 < 0) goto LAB_18012e788;
              uVar11 = (ulonglong)iVar5;
              uVar8 = uVar8 - uVar11;
              uVar10 = uVar10 - uVar11;
            }
          }
          else {
            uVar4 = *(uint *)(plVar3 + 2);
            if (uVar4 == 0) goto LAB_18012e6a2;
            if ((int)uVar4 < 0) {
LAB_18012e788:
              LOCK();
              *(uint *)((longlong)plVar3 + 0x14) = *(uint *)((longlong)plVar3 + 0x14) | 0x10;
              UNLOCK();
LAB_18012e78d:
              return (param_3 * param_4 - uVar8) / param_3;
            }
            uVar11 = (ulonglong)uVar4;
            if (uVar8 < (ulonglong)(longlong)(int)uVar4) {
              uVar11 = uVar8 & 0xffffffff;
            }
            if (uVar10 < uVar11) goto LAB_18012e765;
            if (uVar11 != 0) {
              if (pauVar9 != (int32_t (*) [32])0x0) {
                if ((int32_t *)*plVar3 != (int32_t *)0x0) {
                  FUN_180150fd0((int32_t *)pauVar9,(int32_t *)*plVar3,uVar11);
                  goto LAB_18012e689;
                }
                FUN_180151670(pauVar9,0,uVar10);
              }
              puVar6 = __doserrno();
              *puVar6 = 0x16;
              FUN_18012b794();
            }
LAB_18012e689:
            *(int *)(plVar3 + 2) = (int)plVar3[2] - (int)uVar11;
            uVar8 = uVar8 - uVar11;
            *plVar3 = *plVar3 + uVar11;
            uVar10 = uVar10 - uVar11;
          }
          pauVar9 = (int32_t (*) [32])(*pauVar9 + uVar11);
        } while( true );
      }
      if (param_2 != 0xffffffffffffffff) {
        FUN_180151670(param_1,0,param_2);
      }
      if ((param_5 != (longlong *)0x0) &&
         (auVar2._8_8_ = 0, auVar2._0_8_ = param_3,
         param_4 <= SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar2,0)))
      goto LAB_18012e5e2;
    }
    puVar6 = __doserrno();
    *puVar6 = 0x16;
LAB_18012e588:
    FUN_18012b794();
  }
  return 0;
}

// ---- Function: fread ----
/* Library Function - Single Match
    fread
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

size_t __cdecl fread(void *_DstBuf,size_t _ElementSize,size_t _Count,FILE *_File)

{
  size_t sVar1;
  
  sVar1 = fread_s(_DstBuf,0xffffffffffffffff,_ElementSize,_Count,_File);
  return sVar1;
}

// ---- Function: fread_s ----
/* Library Function - Single Match
    fread_s
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

size_t __cdecl fread_s(void *_DstBuf,size_t _DstSize,size_t _ElementSize,size_t _Count,FILE *_File)

{
  ulong *puVar1;
  ulonglong uVar2;
  
  if ((_ElementSize != 0) && (_Count != 0)) {
    if (_File != (FILE *)0x0) {
      FUN_18012ef14((longlong)_File);
      uVar2 = FUN_18012e544((int32_t (*) [32])_DstBuf,_DstSize,_ElementSize,_Count,
                            (longlong *)_File);
      FUN_18012ef20((longlong)_File);
      return uVar2;
    }
    if (_DstSize != 0xffffffffffffffff) {
      FUN_180151670((int32_t (*) [32])_DstBuf,0,_DstSize);
    }
    puVar1 = __doserrno();
    *puVar1 = 0x16;
    FUN_18012b794();
  }
  return 0;
}

// ---- Function: _fgetc_nolock ----
/* Library Function - Single Match
    _fgetc_nolock
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

ulonglong _fgetc_nolock(int32_t *param_1)

{
  int *piVar1;
  ulong *puVar2;
  ulonglong uVar3;
  
  if (param_1 == (int32_t *)0x0) {
    puVar2 = __doserrno();
    *puVar2 = 0x16;
    FUN_18012b794();
    uVar3 = 0xffffffff;
  }
  else {
    piVar1 = (int *)(param_1 + 2);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      uVar3 = FUN_18013eb04(param_1);
      return uVar3;
    }
    uVar3 = (ulonglong)*(byte *)*param_1;
    *param_1 = (byte *)*param_1 + 1;
  }
  return uVar3;
}

// ---- Function: FUN_18012e8b0 ----
ulonglong FUN_18012e8b0(int32_t *param_1)

{
  bool bVar1;
  uint uVar2;
  ulong *puVar3;
  ulonglong uVar4;
  int32_t *puVar5;
  int32_t *puVar6;
  int32_t auStack_38 [32];
  int32_t *local_18;
  
  local_18 = auStack_38;
  if (param_1 == (int32_t *)0x0) {
    local_18 = auStack_38;
    puVar3 = __doserrno();
    *puVar3 = 0x16;
    FUN_18012b794();
    return 0xffffffff;
  }
  FUN_18012ef14((longlong)param_1);
  bVar1 = true;
  if ((*(uint *)((longlong)param_1 + 0x14) >> 0xc & 1) == 0) {
    uVar2 = FUN_18013c524((longlong)param_1);
    if (uVar2 < 0xfffffffe) {
      puVar6 = (int32_t *)
               ((&DAT_1801ee410)[(longlong)(int)uVar2 >> 6] + (ulonglong)(uVar2 & 0x3f) * 0x48);
    }
    else {
      puVar6 = &DAT_1801eb620;
    }
    puVar5 = &DAT_1801eb620;
    if (puVar6[0x39] == '\0') {
      if (uVar2 < 0xfffffffe) {
        puVar5 = (int32_t *)
                 ((&DAT_1801ee410)[(longlong)(int)uVar2 >> 6] + (ulonglong)(uVar2 & 0x3f) * 0x48);
      }
      if ((puVar5[0x3d] & 1) == 0) goto LAB_18012e97c;
    }
    bVar1 = false;
  }
LAB_18012e97c:
  if (bVar1) {
    uVar4 = _fgetc_nolock(param_1);
    uVar4 = uVar4 & 0xffffffff;
    FUN_18012ef20((longlong)param_1);
  }
  else {
    puVar3 = __doserrno();
    *puVar3 = 0x16;
    FUN_18012b794();
    FUN_18014d440(local_18,(PVOID)0x18012e9a3);
    uVar4 = 0xffffffff;
  }
  return uVar4;
}

// ---- Function: FUN_18012e9c4 ----
uint FUN_18012e9c4(uint param_1,longlong *param_2)

{
  char *pcVar1;
  longlong lVar2;
  uint uVar3;
  ulong *puVar4;
  int32_t *puVar5;
  int32_t *puVar6;
  
  if ((*(uint *)((longlong)param_2 + 0x14) >> 0xc & 1) == 0) {
    uVar3 = FUN_18013c524((longlong)param_2);
    puVar5 = &DAT_1801eb620;
    if (uVar3 + 2 < 2) {
      puVar6 = &DAT_1801eb620;
    }
    else {
      puVar6 = (int32_t *)
               ((&DAT_1801ee410)[(longlong)(int)uVar3 >> 6] + (ulonglong)(uVar3 & 0x3f) * 0x48);
    }
    if (puVar6[0x39] == '\0') {
      if (1 < uVar3 + 2) {
        puVar5 = (int32_t *)
                 ((&DAT_1801ee410)[(longlong)(int)uVar3 >> 6] + (ulonglong)(uVar3 & 0x3f) * 0x48);
      }
      if ((puVar5[0x3d] & 1) == 0) goto LAB_18012ea70;
    }
    puVar4 = __doserrno();
    *puVar4 = 0x16;
    FUN_18012b794();
  }
  else {
LAB_18012ea70:
    if ((param_1 != 0xffffffff) &&
       (((*(uint *)((longlong)param_2 + 0x14) & 1) != 0 ||
        (((byte)*(int32_t *)((longlong)param_2 + 0x14) & 6) == 6)))) {
      if (param_2[1] == 0) {
        __acrt_stdio_allocate_buffer_nolock(param_2);
      }
      if (*param_2 == param_2[1]) {
        if ((int)param_2[2] != 0) {
          return 0xffffffff;
        }
        *param_2 = *param_2 + 1;
      }
      lVar2 = *param_2;
      pcVar1 = (char *)(lVar2 + -1);
      *param_2 = (longlong)pcVar1;
      if ((*(uint *)((longlong)param_2 + 0x14) >> 0xc & 1) == 0) {
        *pcVar1 = (char)param_1;
      }
      else if (*pcVar1 != (char)param_1) {
        *param_2 = lVar2;
        return 0xffffffff;
      }
      *(int *)(param_2 + 2) = (int)param_2[2] + 1;
      LOCK();
      *(uint *)((longlong)param_2 + 0x14) = *(uint *)((longlong)param_2 + 0x14) & 0xfffffff7;
      UNLOCK();
      LOCK();
      *(uint *)((longlong)param_2 + 0x14) = *(uint *)((longlong)param_2 + 0x14) | 1;
      UNLOCK();
      return param_1 & 0xff;
    }
  }
  return 0xffffffff;
}

// ---- Function: ungetc ----
/* Library Function - Single Match
    ungetc
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl ungetc(int _Ch,FILE *_File)

{
  uint uVar1;
  ulong *puVar2;
  
  if (_File == (FILE *)0x0) {
    puVar2 = __doserrno();
    *puVar2 = 0x16;
    FUN_18012b794();
    uVar1 = 0xffffffff;
  }
  else {
    FUN_18012ef14((longlong)_File);
    uVar1 = FUN_18012e9c4(_Ch,(longlong *)_File);
    FUN_18012ef20((longlong)_File);
  }
  return uVar1;
}

// ---- Function: FUN_18012eb3c ----
ulonglong FUN_18012eb3c(byte param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  bool bVar2;
  uint uVar3;
  ulonglong uVar4;
  int32_t *puVar5;
  int32_t *puVar6;
  int32_t auStackY_48 [32];
  
  if (param_2 == (longlong *)0x0) {
    *(int32_t *)(param_3 + 6) = 1;
    *(int32_t *)((longlong)param_3 + 0x2c) = 0x16;
    FUN_18012b6c8((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_3);
    return 0xffffffff;
  }
  FUN_18012ef14((longlong)param_2);
  if ((*(uint *)((longlong)param_2 + 0x14) >> 0xc & 1) == 0) {
    uVar3 = FUN_18013c524((longlong)param_2);
    if (uVar3 + 2 < 2) {
      puVar6 = &DAT_1801eb620;
    }
    else {
      puVar6 = (int32_t *)
               ((&DAT_1801ee410)[(longlong)(int)uVar3 >> 6] + (ulonglong)(uVar3 & 0x3f) * 0x48);
    }
    puVar5 = &DAT_1801eb620;
    if (puVar6[0x39] == '\0') {
      if (1 < uVar3 + 2) {
        puVar5 = (int32_t *)
                 ((&DAT_1801ee410)[(longlong)(int)uVar3 >> 6] + (ulonglong)(uVar3 & 0x3f) * 0x48);
      }
      if ((puVar5[0x3d] & 1) == 0) goto LAB_18012ec25;
    }
    bVar2 = false;
  }
  else {
LAB_18012ec25:
    bVar2 = true;
  }
  if (bVar2) {
    plVar1 = param_2 + 2;
    *(int *)plVar1 = (int)*plVar1 + -1;
    if ((int)*plVar1 < 0) {
      uVar4 = FUN_18013deec(param_1,param_2,param_3);
      uVar4 = uVar4 & 0xffffffff;
    }
    else {
      *(byte *)*param_2 = param_1;
      *param_2 = *param_2 + 1;
      uVar4 = (ulonglong)param_1;
    }
    FUN_18012ef20((longlong)param_2);
  }
  else {
    *(int32_t *)(param_3 + 6) = 1;
    *(int32_t *)((longlong)param_3 + 0x2c) = 0x16;
    FUN_18012b6c8((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_3);
    FUN_18014d440(auStackY_48,(PVOID)0x18012ec66);
    uVar4 = 0xffffffff;
  }
  return uVar4;
}

// ---- Function: FUN_18012eca4 ----
ulonglong FUN_18012eca4(byte param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong local_48 [2];
  int32_t local_38;
  int32_t *local_30;
  int32_t *puStack_28;
  char local_20;
  int32_t local_1c;
  char local_18;
  int32_t local_14;
  char local_10;
  
  local_48[0] = 0;
  local_20 = DAT_1801ee158 == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_1801eb448;
    puStack_28 = PTR_DAT_1801eb450;
  }
  uVar1 = FUN_18012eb3c(param_1,param_2,local_48);
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_18012b3a8(local_48);
    *(int32_t *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_18012b3a8(local_48);
    *(int32_t *)(lVar2 + 0x24) = local_14;
  }
  return uVar1 & 0xffffffff;
}

// ---- Function: FUN_18012ee5c ----
int32_t * FUN_18012ee5c(ulonglong param_1)

{
  return &DAT_1801eb1b0 + (param_1 & 0xffffffff) * 0x58;
}

// ---- Function: __acrt_uninitialize_stdio ----
/* Library Function - Single Match
    __acrt_uninitialize_stdio
   
   Library: Visual Studio 2019 Release */

void __acrt_uninitialize_stdio(bool param_1)

{
  longlong lVar1;
  
  common_flush_all(param_1);
  FUN_18013ecd8();
  lVar1 = 0;
  do {
    __acrt_stdio_free_buffer_nolock(*(int32_t **)(lVar1 + (longlong)DAT_1801edd90));
    DeleteCriticalSection
              ((LPCRITICAL_SECTION)(*(longlong *)(lVar1 + (longlong)DAT_1801edd90) + 0x30));
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x18);
  FUN_18013bf3c(DAT_1801edd90);
  DAT_1801edd90 = (LPVOID)0x0;
  return;
}

// ---- Function: _get_stream_buffer_pointers ----
/* Library Function - Single Match
    _get_stream_buffer_pointers
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int32_t
_get_stream_buffer_pointers(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  ulong *puVar1;
  int32_t uVar2;
  
  if (param_1 == 0) {
    puVar1 = __doserrno();
    *puVar1 = 0x16;
    FUN_18012b794();
    uVar2 = 0x16;
  }
  else {
    if (param_2 != (longlong *)0x0) {
      *param_2 = param_1 + 8;
    }
    if (param_3 != (longlong *)0x0) {
      *param_3 = param_1;
    }
    if (param_4 != (longlong *)0x0) {
      *param_4 = param_1 + 0x10;
    }
    uVar2 = 0;
  }
  return uVar2;
}

// ---- Function: FUN_18012ef14 ----
void FUN_18012ef14(longlong param_1)

{
                    
                    
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return;
}

// ---- Function: FUN_18012ef20 ----
void FUN_18012ef20(longlong param_1)

{
                    
                    
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return;
}

// ---- Function: FUN_18012ef2c ----
ulonglong FUN_18012ef2c(int *param_1,longlong *param_2)

{
  ulonglong uVar1;
  
  if (param_1 == (int *)0x0) {
    *(int32_t *)(param_2 + 6) = 1;
    *(int32_t *)((longlong)param_2 + 0x2c) = 0x16;
    FUN_18012b6c8((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_2);
  }
  else {
    if (((uint)param_1[5] >> 0xc & 1) == 0) {
      FUN_18012ef14((longlong)param_1);
      uVar1 = FUN_18012efa8(param_1,param_2);
      FUN_18012ef20((longlong)param_1);
      return uVar1 & 0xffffffff;
    }
    __acrt_stdio_free_stream();
  }
  return 0xffffffff;
}

// ---- Function: FUN_18012efa8 ----
ulonglong FUN_18012efa8(int *param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (param_1 == (int *)0x0) {
    *(int32_t *)(param_2 + 6) = 1;
    *(int32_t *)((longlong)param_2 + 0x2c) = 0x16;
    FUN_18012b6c8((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_2);
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0xffffffff;
    if (((uint)param_1[5] >> 0xd & 1) != 0) {
      uVar2 = FUN_18012d8d8(param_1,param_2);
      uVar2 = uVar2 & 0xffffffff;
      __acrt_stdio_free_buffer_nolock((int32_t *)param_1);
      uVar1 = FUN_18013c524((longlong)param_1);
      uVar3 = FUN_18013ee04(uVar1,param_2);
      if ((int)uVar3 < 0) {
        uVar2 = 0xffffffff;
      }
      else if (*(LPVOID *)(param_1 + 10) != (LPVOID)0x0) {
        FUN_18013bf3c(*(LPVOID *)(param_1 + 10));
        param_1[10] = 0;
        param_1[0xb] = 0;
      }
    }
    __acrt_stdio_free_stream(param_1);
  }
  return uVar2;
}

