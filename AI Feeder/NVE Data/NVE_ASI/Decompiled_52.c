#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_1801259c8 ----
int32_t FUN_1801259c8(int32_t param_1)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  piVar3 = *(int **)(lVar1 + 0x20);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)(lVar1 + 0x30);
  }
  else {
    iVar2 = *piVar3;
    if (iVar2 != 0x1e) goto LAB_180125a42;
    piVar3 = (int *)_malloc_base(0x100);
    FUN_18012d5e8((LPVOID)0x0);
    if (piVar3 == (int *)0x0) {
      return 0xffffffff;
    }
    *(int32_t *)(piVar3 + 2) = *(int32_t *)(lVar1 + 0x20);
  }
  *piVar3 = 0;
  iVar2 = 0;
  *(int **)(lVar1 + 0x20) = piVar3;
LAB_180125a42:
  *(int32_t *)(piVar3 + (longlong)iVar2 * 2 + 4) = param_1;
  *piVar3 = *piVar3 + 1;
  return 0;
}

// ---- Function: operator_new ----
void * __cdecl operator_new(__uint64 param_1)

{
  code *pcVar1;
  int32_t *puVar2;
  LPVOID pvVar3;
  void *pvVar4;
  
  do {
    pvVar3 = _malloc_base(param_1);
    if (pvVar3 != (LPVOID)0x0) {
      return pvVar3;
    }
    puVar2 = FUN_180136d74(param_1);
  } while ((int)puVar2 != 0);
  if (param_1 == 0xffffffffffffffff) {
    FUN_1800ba8a0();
    pcVar1 = (code *)swi(3);
    pvVar4 = (void *)(*pcVar1)();
    return pvVar4;
  }
  FUN_1801232f8();
  pcVar1 = (code *)swi(3);
  pvVar4 = (void *)(*pcVar1)();
  return pvVar4;
}

// ---- Function: dllmain_crt_dispatch ----
/* Library Function - Single Match
    int __cdecl dllmain_crt_dispatch(struct HINSTANCE__ * __ptr64 const,unsigned long,void * __ptr64
   const)
   
   Library: Visual Studio 2019 Release */

int __cdecl dllmain_crt_dispatch(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t **ppuVar8;
  ulonglong uVar9;
  
  if (param_2 == 0) {
    uVar9 = FUN_180125bd4(param_3 != (void *)0x0);
    return (int)uVar9;
  }
  if (param_2 != 1) {
    if (param_2 == 2) {
      bVar3 = __scrt_dllmain_crt_thread_attach();
    }
    else {
      if (param_2 != 3) {
        return 1;
      }
      bVar3 = __scrt_dllmain_crt_thread_detach();
    }
    return (int)bVar3;
  }
  uVar6 = FUN_1801256b4(0);
  if ((char)uVar6 != '\0') {
    uVar6 = __scrt_acquire_startup_lock();
    bVar2 = true;
    if (DAT_1801ed688 != 0) {
      FUN_1801264a4(7);
      pcVar1 = (code *)swi(3);
      iVar5 = (*pcVar1)();
      return iVar5;
    }
    DAT_1801ed688 = 1;
    bVar4 = __scrt_dllmain_before_initialize_c();
    if (bVar4) {
      _RTC_Initialize();
      FUN_180126698();
      __scrt_initialize_default_local_stdio_options();
      uVar7 = FUN_180138208((int32_t *)&DAT_1801576b8,(int32_t *)&DAT_1801576f0);
      if (((int)uVar7 == 0) && (uVar7 = __scrt_dllmain_after_initialize_c(), (char)uVar7 != '\0')) {
        FUN_1801381c4((int32_t *)&DAT_180157498,(int32_t *)&DAT_180157698);
        DAT_1801ed688 = 2;
        bVar2 = false;
      }
    }
    __scrt_release_startup_lock((char)uVar6);
    if (!bVar2) {
      ppuVar8 = FUN_1801266d8();
      if ((*ppuVar8 != (int32_t *)0x0) &&
         (uVar9 = FUN_18012577c((longlong)ppuVar8), (char)uVar9 != '\0')) {
        (*(code *)PTR__guard_dispatch_icall_180157468)(param_1,2,param_3);
      }
      DAT_1801ed6d0 = DAT_1801ed6d0 + 1;
      return 1;
    }
  }
  return 0;
}

// ---- Function: FUN_180125bd4 ----
ulonglong FUN_180125bd4(bool param_1)

{
  code *pcVar1;
  int32_t uVar2;
  ulonglong uVar3;
  
  if (DAT_1801ed6d0 < 1) {
    uVar3 = 0;
  }
  else {
    DAT_1801ed6d0 = DAT_1801ed6d0 + -1;
    uVar2 = __scrt_acquire_startup_lock();
    if (DAT_1801ed688 != 2) {
      FUN_1801264a4(7);
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    __scrt_dllmain_uninitialize_c();
    FUN_1801266a8();
    FUN_18012671c();
    DAT_1801ed688 = 0;
    __scrt_release_startup_lock((char)uVar2);
    uVar3 = __scrt_uninitialize_crt(param_1,'\0');
    uVar3 = uVar3 & 0xff;
    FUN_1801256a0();
  }
  return uVar3;
}

// ---- Function: FUN_180125c54 ----
int FUN_180125c54(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  int32_t uVar1;
  int iVar2;
  
  if ((param_2 == 0) && (DAT_1801ed6d0 < 1)) {
    iVar2 = 0;
  }
  else {
    if (param_2 - 1 < 2) {
      if (DAT_180178348 == 0) {
        iVar2 = 1;
      }
      else {
        iVar2 = (*(code *)PTR__guard_dispatch_icall_180157468)();
      }
      if (iVar2 == 0) {
        return 0;
      }
      iVar2 = dllmain_crt_dispatch(param_1,param_2,param_3);
      if (iVar2 == 0) {
        return 0;
      }
    }
    uVar1 = FUN_1800a89f0(param_1,param_2);
    iVar2 = (int)uVar1;
    if ((param_2 == 1) && (iVar2 == 0)) {
      FUN_1800a89f0(param_1,0);
      FUN_180125bd4(param_3 != (void *)0x0);
      if (DAT_180178348 != 0) {
        (*(code *)PTR__guard_dispatch_icall_180157468)(param_1,0,param_3);
      }
    }
    if (((param_2 == 0) || (param_2 == 3)) &&
       (iVar2 = dllmain_crt_dispatch(param_1,param_2,param_3), iVar2 != 0)) {
      if (DAT_180178348 == 0) {
        iVar2 = 1;
      }
      else {
        iVar2 = (*(code *)PTR__guard_dispatch_icall_180157468)(param_1,param_2,param_3);
      }
    }
  }
  return iVar2;
}

// ---- Function: entry ----
void entry(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  if (param_2 == 1) {
    __security_init_cookie();
  }
  FUN_180125c54(param_1,param_2,param_3);
  return;
}

// ---- Function: __GSHandlerCheck ----
/* Library Function - Single Match
    __GSHandlerCheck
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int32_t
__GSHandlerCheck(int32_t param_1,ulonglong param_2,int32_t param_3,longlong param_4)

{
  __GSHandlerCheckCommon(param_2,param_4,*(uint **)(param_4 + 0x38));
  return 1;
}

// ---- Function: __GSHandlerCheckCommon ----
/* Library Function - Single Match
    __GSHandlerCheckCommon
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __GSHandlerCheckCommon(ulonglong param_1,longlong param_2,uint *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = param_1;
  if ((*param_3 & 4) != 0) {
    uVar2 = (longlong)(int)param_3[1] + param_1 & (longlong)(int)-param_3[2];
  }
  uVar1 = (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 8);
  if ((*(byte *)(uVar1 + 3 + *(longlong *)(param_2 + 8)) & 0xf) != 0) {
    param_1 = param_1 + (*(byte *)(uVar1 + 3 + *(longlong *)(param_2 + 8)) & 0xfffffff0);
  }
  FUN_1801252c0(param_1 ^ *(ulonglong *)((longlong)(int)(*param_3 & 0xfffffff8) + uVar2));
  return;
}

// ---- Function: FUN_180125e38 ----
int32_t FUN_180125e38(void)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint in_XCR0;
  
  piVar1 = (int *)cpuid_basic_info(0);
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar5 = puVar2[3];
  if ((piVar1[2] == 0x49656e69 && piVar1[3] == 0x6c65746e) && piVar1[1] == 0x756e6547) {
    DAT_1801eb0e0 = 0xffffffffffffffff;
    uVar8 = *puVar2 & 0xfff3ff0;
    DAT_1801eb0d8 = 0x8000;
    if ((((uVar8 == 0x106c0) || (uVar8 == 0x20660)) || (uVar8 == 0x20670)) ||
       ((uVar8 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar8 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_1801ed6d8 = DAT_1801ed6d8 | 1;
    }
  }
  uVar10 = 0;
  uVar8 = uVar10;
  uVar9 = uVar10;
  uVar11 = uVar10;
  if (6 < *piVar1) {
    piVar3 = (int *)cpuid_Extended_Feature_Enumeration_info(7);
    uVar8 = piVar3[1];
    uVar9 = piVar3[2];
    if ((uVar8 >> 9 & 1) != 0) {
      DAT_1801ed6d8 = DAT_1801ed6d8 | 2;
    }
    if (0 < *piVar3) {
      lVar4 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar11 = *(uint *)(lVar4 + 8);
    }
    if (0x23 < *piVar1) {
      lVar4 = cpuid(0x24);
      uVar10 = *(uint *)(lVar4 + 4);
    }
  }
  DAT_1801eb0d0 = 1;
  DAT_1801eb0d4 = 2;
  uVar6 = DAT_1801eb0c8 & 0xfffffffffffffffe;
  if ((uVar5 >> 0x14 & 1) != 0) {
    DAT_1801eb0d0 = 2;
    DAT_1801eb0d4 = 6;
    uVar6 = DAT_1801eb0c8 & 0xffffffffffffffee;
  }
  DAT_1801eb0c8 = uVar6;
  if ((uVar5 >> 0x1b & 1) != 0) {
    if (((uVar5 >> 0x1c & 1) != 0) && (bVar7 = (byte)in_XCR0, (bVar7 & 6) == 6)) {
      DAT_1801eb0d0 = 3;
      uVar6 = DAT_1801eb0c8;
      uVar5 = DAT_1801eb0d4 | 8;
      if ((uVar8 & 0x20) != 0) {
        DAT_1801eb0d0 = 5;
        uVar6 = DAT_1801eb0c8 & 0xfffffffffffffffd;
        uVar5 = DAT_1801eb0d4 | 0x28;
        if (((uVar8 & 0xd0030000) == 0xd0030000) && ((bVar7 & 0xe0) == 0xe0)) {
          DAT_1801eb0d4 = DAT_1801eb0d4 | 0x68;
          DAT_1801eb0d0 = 6;
          uVar6 = DAT_1801eb0c8 & 0xffffffffffffffd9;
          uVar5 = DAT_1801eb0d4;
        }
      }
      DAT_1801eb0d4 = uVar5;
      DAT_1801eb0c8 = uVar6;
      if ((uVar9 >> 0x17 & 1) != 0) {
        DAT_1801eb0c8 = DAT_1801eb0c8 & 0xfffffffffeffffff;
      }
      if (((uVar11 >> 0x13 & 1) != 0) && ((bVar7 & 0xe0) == 0xe0)) {
        _DAT_1801ed6d4 = uVar10 & 0x400ff;
        DAT_1801eb0c8 = ~((ulonglong)(uVar10 >> 0x10 & 7) | 0x1000028) & DAT_1801eb0c8;
        if (1 < _DAT_1801ed6d4) {
          DAT_1801eb0c8 = DAT_1801eb0c8 & 0xffffffffffffffbf;
        }
      }
    }
    if (((uVar11 >> 0x15 & 1) != 0) && ((in_XCR0 >> 0x13 & 1) != 0)) {
      DAT_1801eb0c8 = DAT_1801eb0c8 & 0xffffffffffffff7f;
    }
  }
  return 0;
}

// ---- Function: __chkstk ----
/* Library Function - Single Match
    __chkstk
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012 */

void __chkstk(void)

{
  int32_t *in_RAX;
  int32_t *puVar1;
  int32_t *puVar2;
  int32_t local_res8 [32];
  
  puVar1 = local_res8 + -(longlong)in_RAX;
  if (local_res8 < in_RAX) {
    puVar1 = (int32_t *)0x0;
  }
  if (puVar1 < StackLimit) {
    puVar2 = (int32_t *)StackLimit;
    do {
      puVar2 = puVar2 + -0x1000;
      *puVar2 = 0;
    } while ((int32_t *)((ulonglong)puVar1 & 0xfffffffffffff000) != puVar2);
  }
  return;
}

// ---- Function: __raise_securityfailure ----
/* Library Function - Single Match
    __raise_securityfailure
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __raise_securityfailure(_EXCEPTION_POINTERS *param_1)

{
  HANDLE hProcess;
  
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter(param_1);
  hProcess = GetCurrentProcess();
                    
                    
  TerminateProcess(hProcess,0xc0000409);
  return;
}

// ---- Function: FUN_180126224 ----
void FUN_180126224(void)

{
  code *pcVar1;
  BOOL BVar2;
  int32_t *puVar3;
  int32_t auStack_38 [8];
  int32_t auStack_30 [48];
  
  puVar3 = auStack_38;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(2);
    puVar3 = auStack_30;
  }
  *(int32_t *)(puVar3 + -8) = 0x18012624f;
  capture_previous_context((PCONTEXT)&DAT_1801ed780);
  _DAT_1801ed6f0 = *(int32_t *)(puVar3 + 0x38);
  _DAT_1801ed818 = puVar3 + 0x40;
  _DAT_1801ed800 = *(int32_t *)(puVar3 + 0x40);
  _DAT_1801ed6e0 = 0xc0000409;
  _DAT_1801ed6e4 = 1;
  _DAT_1801ed6f8 = 1;
  DAT_1801ed700 = 2;
  *(int32_t *)(puVar3 + 0x20) = DAT_1801eb080;
  *(int32_t *)(puVar3 + 0x28) = DAT_1801eb0c0;
  *(int32_t *)(puVar3 + -8) = 0x1801262f1;
  DAT_1801ed878 = _DAT_1801ed6f0;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_180178490);
  return;
}

// ---- Function: __report_rangecheckfailure ----
/* Library Function - Single Match
    __report_rangecheckfailure
   
   Library: Visual Studio 2019 Release */

void __report_rangecheckfailure(void)

{
  FUN_18012630c(8);
  return;
}

// ---- Function: FUN_18012630c ----
void FUN_18012630c(int32_t param_1)

{
  code *pcVar1;
  BOOL BVar2;
  int32_t *puVar3;
  int32_t auStack_28 [8];
  int32_t auStack_20 [32];
  
  puVar3 = auStack_28;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(param_1);
    puVar3 = auStack_20;
  }
  *(int32_t *)(puVar3 + -8) = 0x180126337;
  capture_current_context((PCONTEXT)&DAT_1801ed780);
  _DAT_1801ed6f0 = *(int32_t *)(puVar3 + 0x28);
  _DAT_1801ed818 = puVar3 + 0x30;
  _DAT_1801ed6e0 = 0xc0000409;
  _DAT_1801ed6e4 = 1;
  _DAT_1801ed6f8 = 1;
  DAT_1801ed700 = (ulonglong)*(uint *)(puVar3 + 0x30);
  *(int32_t *)(puVar3 + -8) = 0x1801263a3;
  DAT_1801ed878 = _DAT_1801ed6f0;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_180178490);
  return;
}

// ---- Function: capture_current_context ----
/* Library Function - Single Match
    capture_current_context
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void capture_current_context(PCONTEXT param_1)

{
  DWORD64 ControlPc;
  PRUNTIME_FUNCTION FunctionEntry;
  DWORD64 local_res8;
  ulonglong local_res10;
  PVOID local_res18;
  
  RtlCaptureContext();
  ControlPc = param_1->Rip;
  FunctionEntry = RtlLookupFunctionEntry(ControlPc,&local_res8,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    RtlVirtualUnwind(0,local_res8,ControlPc,FunctionEntry,param_1,&local_res18,&local_res10,
                     (PKNONVOLATILE_CONTEXT_POINTERS)0x0);
  }
  return;
}

// ---- Function: capture_previous_context ----
/* Library Function - Single Match
    capture_previous_context
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void capture_previous_context(PCONTEXT param_1)

{
  DWORD64 ControlPc;
  PRUNTIME_FUNCTION FunctionEntry;
  int iVar1;
  DWORD64 local_res8;
  ulonglong local_res10;
  PVOID local_res18 [2];
  
  RtlCaptureContext();
  ControlPc = param_1->Rip;
  iVar1 = 0;
  do {
    FunctionEntry = RtlLookupFunctionEntry(ControlPc,&local_res8,(PUNWIND_HISTORY_TABLE)0x0);
    if (FunctionEntry == (PRUNTIME_FUNCTION)0x0) {
      return;
    }
    RtlVirtualUnwind(0,local_res8,ControlPc,FunctionEntry,param_1,local_res18,&local_res10,
                     (PKNONVOLATILE_CONTEXT_POINTERS)0x0);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return;
}

// ---- Function: __scrt_is_ucrt_dll_in_use ----
/* Library Function - Single Match
    __scrt_is_ucrt_dll_in_use
   
   Library: Visual Studio 2019 Release */

bool __scrt_is_ucrt_dll_in_use(void)

{
  return DAT_1801fe3b8 != 0;
}

