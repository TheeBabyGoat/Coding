#include "_configure.h"
#include <stdint.h>
#include <stddef.h>

ulonglong _configure_narrow_argv(int param_1) {
longlong lVar1;
  ulong *puVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  uint uVar7;
  char *pcVar8;
  longlong *local_res10;
  ulonglong local_res18;
  ulonglong local_res20;
  
  uVar5 = 0;
  if (param_1 != 0) {
    if (param_1 - 1U < 2) {
      __acrt_initialize_multibyte();
      FUN_18014319c((HMODULE)0x0,&DAT_1801ee000,0x104);
      _DAT_1801ee878 = &DAT_1801ee000;
      if ((DAT_1801ee898 == (char *)0x0) || (pcVar8 = DAT_1801ee898, *DAT_1801ee898 == '\0')) {
        pcVar8 = &DAT_1801ee000;
      }
      local_res18 = 0;
      local_res20 = 0;
      FUN_180137270(pcVar8,(int32_t *)0x0,(char *)0x0,(longlong *)&local_res18,
                    (longlong *)&local_res20);
      uVar4 = local_res18;
      plVar3 = (longlong *)__acrt_allocate_buffer_for_argv(local_res18,local_res20,1);
      if (plVar3 != (longlong *)0x0) {
        FUN_180137270(pcVar8,plVar3,(char *)(plVar3 + uVar4),(longlong *)&local_res18,
                      (longlong *)&local_res20);
        if (param_1 == 1) {
          _DAT_1801ee880 = (int)local_res18 + -1;
          plVar6 = (longlong *)0x0;
          DAT_1801ee888 = plVar3;
        }
        else {
          local_res10 = (longlong *)0x0;
          uVar4 = thunk_FUN_180142a7c(plVar3,&local_res10);
          plVar6 = local_res10;
          if ((int)uVar4 != 0) {
            FUN_18013bf3c(local_res10);
            local_res10 = (longlong *)0x0;
            FUN_18013bf3c(plVar3);
            return uVar4 & 0xffffffff;
          }
          _DAT_1801ee880 = 0;
          lVar1 = *local_res10;
          while (lVar1 != 0) {
            local_res10 = local_res10 + 1;
            uVar5 = uVar5 + 1;
            _DAT_1801ee880 = (int)uVar5;
            lVar1 = *local_res10;
          }
          local_res10 = (longlong *)0x0;
          DAT_1801ee888 = plVar6;
          FUN_18013bf3c((LPVOID)0x0);
          local_res10 = (longlong *)0x0;
          plVar6 = plVar3;
        }
        FUN_18013bf3c(plVar6);
        return 0;
      }
      puVar2 = __doserrno();
      uVar7 = 0xc;
      *puVar2 = 0xc;
      FUN_18013bf3c((LPVOID)0x0);
    }
    else {
      puVar2 = __doserrno();
      uVar7 = 0x16;
      *puVar2 = 0x16;
      FUN_18012b794();
    }
    uVar5 = (ulonglong)uVar7;
  }
  return uVar5;
}
}

