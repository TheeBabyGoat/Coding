#include "destroy_ptd.h"
#include <stdint.h>
#include <stddef.h>

void __cdecl destroy_ptd_array(struct __acrt_ptd * __ptr64 const)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl destroy_ptd_array(__acrt_ptd *param_1) {
int32_t local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  int local_28 [2];
  __acrt_ptd *local_20;
  __acrt_ptd **local_18;
  __acrt_ptd **local_10;
  
  local_18 = &local_20;
  local_res18[0] = 5;
  local_res20[0] = 5;
  local_10 = &local_20;
  local_28[0] = 4;
  local_28[1] = 4;
  local_20 = param_1;
  if (*(int32_t **)param_1 != &DAT_18017ab80) {
    FUN_18013bf3c(*(int32_t **)param_1);
  }
  FUN_18013bf3c(*(LPVOID *)(local_20 + 0x70));
  FUN_18013bf3c(*(LPVOID *)(local_20 + 0x58));
  FUN_18013bf3c(*(LPVOID *)(local_20 + 0x60));
  FUN_18013bf3c(*(LPVOID *)(local_20 + 0x68));
  FUN_18013bf3c(*(LPVOID *)(local_20 + 0x48));
  FUN_18013bf3c(*(LPVOID *)(local_20 + 0x50));
  FUN_18013bf3c(*(LPVOID *)(local_20 + 0x78));
  FUN_18013bf3c(*(LPVOID *)(local_20 + 0x80));
  FUN_18013bf3c(*(LPVOID *)(local_20 + 0x3c0));
  operator()<>(local_res10,local_res20,&local_18,local_res18);
  operator()<>(local_res10,local_28 + 1,&local_10,local_28);
  return;
}
}

