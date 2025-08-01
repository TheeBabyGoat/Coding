#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_180122832 ----
void FUN_180122832(int32_t param_1,int32_t param_2,int32_t param_3,int32_t param_4)

{
  void *in_RAX;
  FARPROC UNRECOVERED_JUMPTABLE;
  int32_t in_RCX;
  int32_t in_R8;
  
  UNRECOVERED_JUMPTABLE = FUN_180122e2c(&ImgDelayDescr_1801e9314.grAttrs,in_RAX);
                    
                    
  (*UNRECOVERED_JUMPTABLE)(in_RCX,param_2,in_R8,param_4);
  return;
}

// ---- Function: DelayLoad__scriptWait__YAXK_Z ----
void DelayLoad__scriptWait__YAXK_Z
               (int32_t param_1,int32_t param_2,int32_t param_3,int32_t param_4)

{
  FUN_180122832(param_1,param_2,param_3,param_4);
  return;
}

// ---- Function: DelayLoad__scriptRegister__YAXPEAUHINSTANCE____P6AXXZ_Z ----
void DelayLoad__scriptRegister__YAXPEAUHINSTANCE____P6AXXZ_Z
               (int32_t param_1,int32_t param_2,int32_t param_3,int32_t param_4)

{
  FUN_180122832(param_1,param_2,param_3,param_4);
  return;
}

// ---- Function: DelayLoad__nativeInit__YAX_K_Z ----
void DelayLoad__nativeInit__YAX_K_Z
               (int32_t param_1,int32_t param_2,int32_t param_3,int32_t param_4)

{
  FUN_180122832(param_1,param_2,param_3,param_4);
  return;
}

// ---- Function: DelayLoad__nativeCall__YAPEA_KXZ ----
void DelayLoad__nativeCall__YAPEA_KXZ
               (int32_t param_1,int32_t param_2,int32_t param_3,int32_t param_4)

{
  FUN_180122832(param_1,param_2,param_3,param_4);
  return;
}

// ---- Function: DelayLoad__nativePush64__YAX_K_Z ----
void DelayLoad__nativePush64__YAX_K_Z
               (int32_t param_1,int32_t param_2,int32_t param_3,int32_t param_4)

{
  FUN_180122832(param_1,param_2,param_3,param_4);
  return;
}

// ---- Function: DelayLoad__worldGetAllObjects__YAHPEAHH_Z ----
void DelayLoad__worldGetAllObjects__YAHPEAHH_Z
               (int32_t param_1,int32_t param_2,int32_t param_3,int32_t param_4)

{
  FUN_180122832(param_1,param_2,param_3,param_4);
  return;
}

// ---- Function: DelayLoad__worldGetAllVehicles__YAHPEAHH_Z ----
void DelayLoad__worldGetAllVehicles__YAHPEAHH_Z
               (int32_t param_1,int32_t param_2,int32_t param_3,int32_t param_4)

{
  FUN_180122832(param_1,param_2,param_3,param_4);
  return;
}

// ---- Function: DelayLoad__worldGetAllPeds__YAHPEAHH_Z ----
void DelayLoad__worldGetAllPeds__YAHPEAHH_Z
               (int32_t param_1,int32_t param_2,int32_t param_3,int32_t param_4)

{
  FUN_180122832(param_1,param_2,param_3,param_4);
  return;
}

// ---- Function: FUN_18012290c ----
void FUN_18012290c(void *param_1,SIZE_T param_2,int32_t *param_3)

{
  bool bVar1;
  bool bVar2;
  DWORD local_res18 [2];
  
  if (((IMAGE_LOAD_CONFIG_DIRECTORY64_180178350.GuardFlags & IMAGE_GUARD_PROTECT_DELAYLOAD_IAT) == 0
      ) || (DAT_1801577d0 != 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    bVar1 = FUN_180122ab4();
    if (bVar1) {
      (*(code *)PTR__guard_dispatch_icall_180157468)(&DAT_1801ed210);
    }
    else {
      do {
      } while (DAT_1801ed210 != 0);
      LOCK();
      DAT_1801ed210 = 1;
      UNLOCK();
    }
    FUN_180122c88(param_1,param_2,4,local_res18);
  }
  *(int32_t *)*param_3 = param_3[1];
  if (bVar2) {
    FUN_180122c88(param_1,param_2,local_res18[0],local_res18);
    bVar2 = FUN_180122ab4();
    if (bVar2) {
      (*(code *)PTR__guard_dispatch_icall_180157468)(&DAT_1801ed210);
    }
    else {
      DAT_1801ed210 = 0;
    }
  }
  return;
}

// ---- Function: FUN_1801229f8 ----
void FUN_1801229f8(void)

{
  bool bVar1;
  
  if (((IMAGE_LOAD_CONFIG_DIRECTORY64_180178350.GuardFlags & IMAGE_GUARD_PROTECT_DELAYLOAD_IAT) != 0
      ) && (DAT_1801577d0 != 0)) {
    bVar1 = FUN_180122ab4();
    if (bVar1) {
      (*(code *)PTR__guard_dispatch_icall_180157468)();
    }
    else {
      do {
      } while (DAT_1801ed210 != 0);
      LOCK();
      DAT_1801ed210 = 1;
      UNLOCK();
    }
    DAT_1801ed218 = DAT_1801ed218 + 1;
    if (DAT_1801ed218 == 1) {
      FUN_180122c88((void *)0x0,0,4,&DAT_1801ed21c);
    }
    bVar1 = FUN_180122ab4();
    if (bVar1) {
      (*(code *)PTR__guard_dispatch_icall_180157468)(&DAT_1801ed210);
      return;
    }
    DAT_1801ed210 = 0;
  }
  return;
}

// ---- Function: FUN_180122ab4 ----
bool FUN_180122ab4(void)

{
  HMODULE pHVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  HMODULE pHVar3;
  bool bVar4;
  
  if (DAT_1801ed1f8 != (HMODULE)0x1) {
    if (DAT_1801ed1f8 != (HMODULE)0x0) {
      return true;
    }
    hModule = GetModuleHandleW(L"KERNEL32.DLL");
    if (((hModule == (HMODULE)0x0) ||
        (pFVar2 = GetProcAddress(hModule,"AcquireSRWLockExclusive"), pFVar2 == (FARPROC)0x0)) ||
       (DAT_1801ed200 = pFVar2, pFVar2 = GetProcAddress(hModule,"ReleaseSRWLockExclusive"),
       pFVar2 == (FARPROC)0x0)) {
      hModule = (HMODULE)0x1;
      pFVar2 = DAT_1801ed208;
    }
    DAT_1801ed208 = pFVar2;
    pHVar3 = (HMODULE)0x0;
    LOCK();
    bVar4 = DAT_1801ed1f8 != (HMODULE)0x0;
    pHVar1 = hModule;
    if (bVar4) {
      pHVar3 = DAT_1801ed1f8;
      pHVar1 = DAT_1801ed1f8;
    }
    DAT_1801ed1f8 = pHVar1;
    UNLOCK();
    if ((bVar4) || (hModule != (HMODULE)0x1)) {
      return pHVar3 != (HMODULE)0x1;
    }
  }
  return false;
}

// ---- Function: DloadMakePermanentImageCommit ----
/* Library Function - Single Match
    void __cdecl DloadMakePermanentImageCommit(void * __ptr64,unsigned __int64)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl DloadMakePermanentImageCommit(void *param_1,__uint64 param_2)

{
  code *pcVar1;
  SIZE_T SVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  int32_t *puVar6;
  int32_t *puVar7;
  ulonglong uVar8;
  int32_t auStack_88 [8];
  int32_t auStack_80 [24];
  _MEMORY_BASIC_INFORMATION local_68 [2];
  
  puVar6 = auStack_88;
  SVar2 = VirtualQuery(param_1,local_68,0x30);
  if (SVar2 == 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(0x19);
    puVar6 = auStack_80;
  }
  if ((puVar6[0x44] & 0x44) != 0) {
    *(int32_t *)(puVar6 + -8) = 0x180122b94;
    GetSystemInfo((LPSYSTEM_INFO)(puVar6 + 0x50));
    uVar8 = (ulonglong)*(uint *)(puVar6 + 0x54);
    puVar7 = (int32_t *)(-uVar8 & (ulonglong)param_1);
    uVar4 = *(uint *)(puVar6 + 0x54) - 1;
    uVar5 = (((ulonglong)((uVar4 & (uint)param_2) + (uVar4 & (uint)param_1)) - 1) + uVar8) / uVar8 +
            param_2 / uVar8;
    uVar3 = uVar5 & 0xffffffff;
    if ((int)uVar5 != 0) {
      do {
        LOCK();
        *puVar7 = *puVar7;
        UNLOCK();
        puVar7 = (int32_t *)((longlong)puVar7 + uVar8);
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  return;
}

// ---- Function: FUN_180122bec ----
longlong FUN_180122bec(dword *param_1,SectionFlags *param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  
  lVar2 = (longlong)(int)IMAGE_DOS_HEADER_180000000.e_lfanew;
  if (0xd < *(uint *)(&UNK_180000080.field_0x4 + lVar2)) {
    uVar3 = 0;
    if (*(uint *)(&UNK_180000080.field_0x70 + lVar2) != 0) {
      lVar1 = (ulonglong)*(ushort *)((longlong)IMAGE_DOS_HEADER_180000000.e_res_4_ + lVar2 + -8) +
              lVar2 + 0x180000018;
      if (*(ushort *)(IMAGE_DOS_HEADER_180000000.e_magic + lVar2 + 6) != 0) {
        do {
          if ((*(uint *)(lVar1 + 0xc) <=
               *(uint *)(IMAGE_DOS_HEADER_180000000.e_magic +
                        (ulonglong)*(uint *)(&UNK_180000080.field_0x70 + lVar2) + 0xc)) &&
             (*(uint *)(IMAGE_DOS_HEADER_180000000.e_magic +
                       (ulonglong)*(uint *)(&UNK_180000080.field_0x70 + lVar2) + 0xc) <
              *(uint *)(lVar1 + 0xc) + *(dword *)(lVar1 + 8))) {
            *param_1 = *(dword *)(lVar1 + 8);
            *param_2 = *(SectionFlags *)(lVar1 + 0x24);
            return (ulonglong)*(uint *)(lVar1 + 0xc) + 0x180000000;
          }
          uVar3 = uVar3 + 1;
          lVar1 = lVar1 + 0x28;
        } while (uVar3 < *(ushort *)(IMAGE_DOS_HEADER_180000000.e_magic + lVar2 + 6));
      }
    }
  }
  return 0;
}

// ---- Function: FUN_180122c88 ----
void FUN_180122c88(void *param_1,SIZE_T param_2,DWORD param_3,PDWORD param_4)

{
  code *pcVar1;
  int32_t *puVar2;
  BOOL BVar3;
  void *lpAddress;
  void *pvVar4;
  int32_t *puVar5;
  int32_t *puVar6;
  int32_t uStack_50;
  int32_t auStack_48 [8];
  int32_t auStack_40 [24];
  dword local_28;
  SectionFlags local_24 [3];
  
  puVar6 = auStack_48;
  lpAddress = (void *)FUN_180122bec(&local_28,local_24);
  if (lpAddress == (void *)0x0) {
    *param_4 = 4;
    return;
  }
  if (DAT_1801ed220 == 0) {
    DAT_1801ed220 = 1;
    puVar6 = auStack_48;
    if ((local_24[0] & IMAGE_SCN_MEM_WRITE) == 0) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(0x19);
      puVar6 = auStack_40;
    }
    *(int32_t *)(puVar6 + -8) = 0x180122d02;
    DloadMakePermanentImageCommit(lpAddress,(ulonglong)*(uint *)(puVar6 + 0x20));
  }
  if (param_1 == (void *)0x0) {
    if (param_2 != 0) goto LAB_180122d13;
LAB_180122d43:
    param_2 = (SIZE_T)*(uint *)(puVar6 + 0x20);
  }
  else {
    puVar2 = puVar6;
    if (param_2 == 0) {
LAB_180122d13:
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(0x19);
      puVar5 = puVar6 + 8;
      puVar6 = puVar6 + 8;
      puVar2 = puVar5;
      if (param_1 == (void *)0x0) goto LAB_180122d43;
    }
    puVar6 = puVar2;
    pvVar4 = (void *)((ulonglong)*(uint *)(puVar6 + 0x20) + (longlong)lpAddress);
    if ((((pvVar4 <= lpAddress) || ((void *)((longlong)param_1 + param_2) <= param_1)) ||
        (param_1 < lpAddress)) ||
       (lpAddress = param_1, pvVar4 < (void *)((longlong)param_1 + param_2))) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(0x19);
      puVar6 = puVar6 + 8;
      lpAddress = param_1;
    }
  }
  *(int32_t *)(puVar6 + -8) = 0x180122d5c;
  BVar3 = VirtualProtect(lpAddress,param_2,param_3,param_4);
  if (BVar3 == 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(0x19);
  }
  return;
}

// ---- Function: FUN_180122d80 ----
void FUN_180122d80(void)

{
  bool bVar1;
  DWORD local_res10 [6];
  
  if (((IMAGE_LOAD_CONFIG_DIRECTORY64_180178350.GuardFlags & IMAGE_GUARD_PROTECT_DELAYLOAD_IAT) != 0
      ) && (DAT_1801577d0 != 0)) {
    bVar1 = FUN_180122ab4();
    if (bVar1) {
      (*(code *)PTR__guard_dispatch_icall_180157468)();
    }
    else {
      do {
      } while (DAT_1801ed210 != 0);
      LOCK();
      DAT_1801ed210 = 1;
      UNLOCK();
    }
    DAT_1801ed218 = DAT_1801ed218 + -1;
    if (DAT_1801ed218 == 0) {
      FUN_180122c88((void *)0x0,0,DAT_1801ed21c,local_res10);
    }
    bVar1 = FUN_180122ab4();
    if (bVar1) {
      (*(code *)PTR__guard_dispatch_icall_180157468)(&DAT_1801ed210);
    }
    else {
      DAT_1801ed210 = 0;
    }
  }
  return;
}

// ---- Function: FUN_180122e2c ----
FARPROC FUN_180122e2c(uint *param_1,void *param_2)

{
  HMODULE pHVar1;
  uint uVar2;
  uint uVar3;
  FARPROC pFVar4;
  HMODULE hLibModule;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  int32_t *local_res8;
  void *local_88;
  FARPROC pFStack_80;
  int32_t local_78 [2];
  uint *local_70;
  void *local_68;
  LPCSTR local_60;
  ulonglong local_58;
  char *pcStack_50;
  HMODULE local_48;
  FARPROC local_40;
  DWORD local_38;
  
  FUN_1801229f8();
  local_60 = (LPCSTR)((ulonglong)param_1[1] + 0x180000000);
  plVar8 = (longlong *)((ulonglong)param_1[2] + 0x180000000);
  uVar2 = param_1[5];
  lVar6 = (ulonglong)param_1[4] + 0x180000000;
  local_48 = (HMODULE)0x0;
  local_40 = (FARPROC)0x0;
  local_38 = 0;
  local_res8 = (int32_t *)CONCAT44(local_res8._4_4_,param_1[7]);
  local_78[0] = 0x48;
  local_58 = 0;
  pcStack_50 = (char *)0x0;
  local_70 = param_1;
  local_68 = param_2;
  if ((*param_1 & 1) == 0) {
    local_res8 = local_78;
    FUN_180122d80();
    RaiseException(0xc06d0057,0,1,(ULONG_PTR *)&local_res8);
    pFVar4 = (FARPROC)0x0;
  }
  else {
    hLibModule = (HMODULE)*plVar8;
    uVar7 = (longlong)((longlong)param_2 - ((ulonglong)param_1[3] + 0x180000000)) >> 3;
    uVar5 = uVar7 & 0xffffffff;
    uVar3 = -(int)((longlong)*(int32_t *)(lVar6 + uVar5 * 8) >> 0x3f);
    local_58 = (ulonglong)uVar3 ^ 1;
    if (uVar3 == 1) {
      pcStack_50 = (char *)(ulonglong)*(ushort *)(lVar6 + uVar5 * 8);
    }
    else {
      pcStack_50 = IMAGE_DOS_HEADER_180000000.e_magic + (ulonglong)*(uint *)(lVar6 + uVar5 * 8) + 2;
    }
    pFVar4 = (FARPROC)0x0;
    if ((DAT_1801577c0 == 0) ||
       (pFVar4 = (FARPROC)(*(code *)PTR__guard_dispatch_icall_180157468)(0,local_78),
       pFVar4 == (FARPROC)0x0)) {
      if (hLibModule == (HMODULE)0x0) {
        if ((((DAT_1801577c0 == 0) ||
             (hLibModule = (HMODULE)(*(code *)PTR__guard_dispatch_icall_180157468)(1,local_78),
             hLibModule == (HMODULE)0x0)) &&
            (hLibModule = LoadLibraryExA(local_60,(HANDLE)0x0,0), hLibModule == (HMODULE)0x0)) &&
           ((local_38 = GetLastError(), DAT_1801577c8 == 0 ||
            (hLibModule = (HMODULE)(*(code *)PTR__guard_dispatch_icall_180157468)(3,local_78),
            hLibModule == (HMODULE)0x0)))) {
          local_res8 = local_78;
          FUN_180122d80();
          RaiseException(0xc06d007e,0,1,(ULONG_PTR *)&local_res8);
          return local_40;
        }
        LOCK();
        pHVar1 = (HMODULE)*plVar8;
        *plVar8 = (longlong)hLibModule;
        UNLOCK();
        if (pHVar1 == hLibModule) {
          FreeLibrary(hLibModule);
        }
      }
      local_48 = hLibModule;
      if (DAT_1801577c0 != 0) {
        pFVar4 = (FARPROC)(*(code *)PTR__guard_dispatch_icall_180157468)(2,local_78);
      }
      if ((((pFVar4 == (FARPROC)0x0) &&
           (((param_1[5] == 0 || (param_1[7] == 0)) ||
            ((lVar6 = (longlong)hLibModule[0xf].unused,
             *(int *)((longlong)&hLibModule->unused + lVar6) != 0x4550 ||
             (((*(int *)((longlong)&hLibModule[2].unused + lVar6) != (int)local_res8 ||
               (hLibModule != *(HMODULE *)((longlong)&hLibModule[0xc].unused + lVar6))) ||
              (pFVar4 = *(FARPROC *)((ulonglong)uVar2 + 0x180000000 + (uVar7 & 0xffffffff) * 8),
              pFVar4 == (FARPROC)0x0)))))))) &&
          (pFVar4 = GetProcAddress(hLibModule,pcStack_50), pFVar4 == (FARPROC)0x0)) &&
         ((local_38 = GetLastError(), DAT_1801577c8 == 0 ||
          (pFVar4 = (FARPROC)(*(code *)PTR__guard_dispatch_icall_180157468)(4,local_78),
          pFVar4 == (FARPROC)0x0)))) {
        local_res8 = local_78;
        FUN_180122d80();
        RaiseException(0xc06d007f,0,1,(ULONG_PTR *)&local_res8);
        FUN_1801229f8();
        pFVar4 = local_40;
      }
      local_88 = param_2;
      pFStack_80 = pFVar4;
      FUN_18012290c(param_2,8,&local_88);
    }
    if (DAT_1801577c0 != 0) {
      local_38 = 0;
      local_48 = hLibModule;
      local_40 = pFVar4;
      (*(code *)PTR__guard_dispatch_icall_180157468)(5,local_78);
    }
    FUN_180122d80();
  }
  return pFVar4;
}

