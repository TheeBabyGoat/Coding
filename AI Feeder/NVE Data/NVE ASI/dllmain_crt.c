#include "dllmain_crt.h"
#include <stdint.h>
#include <stddef.h>

int __cdecl dllmain_crt_dispatch(struct HINSTANCE__ * __ptr64 const,unsigned long,void * __ptr64
   const)
   
   Library: Visual Studio 2019 Release */

int __cdecl dllmain_crt_dispatch(HINSTANCE__ *param_1,ulong param_2,void *param_3) {
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
}

