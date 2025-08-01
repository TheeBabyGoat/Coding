#include "construct_ptd.h"
#include <stdint.h>
#include <stddef.h>

void __cdecl construct_ptd_array(struct __acrt_ptd * __ptr64 const)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl construct_ptd_array(__acrt_ptd *param_1) {
int32_t local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  int local_38 [2];
  __acrt_ptd *local_30;
  int32_t *local_28;
  __acrt_ptd **local_20;
  __acrt_ptd **local_18;
  int32_t **local_10;
  
  local_20 = &local_30;
  local_res18[0] = 5;
  local_res20[0] = 5;
  local_18 = &local_30;
  local_10 = &local_28;
  local_38[0] = 4;
  local_38[1] = 4;
  local_28 = &DAT_1801ee160;
  *(int32_t *)(param_1 + 0x28) = 1;
  *(int32_t **)param_1 = &DAT_18017ab80;
  *(int32_t *)(param_1 + 0x3a8) = 1;
  *(int32_t **)(param_1 + 0x88) = &DAT_1801eb780;
  *(int32_t *)(param_1 + 0xbc) = 0x43;
  *(int32_t *)(param_1 + 0x1c2) = 0x43;
  *(int32_t *)(param_1 + 0x3a0) = 0;
  local_30 = param_1;
  operator()<>(local_res10,local_res20,&local_20,local_res18);
  operator()<>(local_res10,local_38 + 1,&local_18,local_38);
  return;
}
}

 construct_ptd_array(lpFlsData);
          FUN_18013bf3c((LPVOID)0x0);
          goto LAB_180138885;
        }
        FlsSetValue(DAT_1801eb2e0,(PVOID)0x0);
      }
      FUN_18013bf3c(lpFlsData);
      lpFlsData = p_Var2;
    }
  }
  else if (lpFlsData == (__acrt_ptd *)0xffffffffffffffff) {
lpFlsData = p_Var2;
  }
}

 construct_ptd_array(p_Var2);
          FUN_18013bf3c((LPVOID)0x0);
          return p_Var2;
        }
        FlsSetValue(DAT_1801eb2e0,(PVOID)0x0);
      }
      FUN_18013bf3c(p_Var2);
    }
  }
  else if (p_Var2 != (__acrt_ptd *)0xffffffffffffffff) {
return p_Var2;
  }
}

 construct_ptd_array(lpFlsData);
          FUN_18013bf3c((LPVOID)0x0);
          goto LAB_1801389fd;
        }
        FlsSetValue(DAT_1801eb2e0,(PVOID)0x0);
      }
      FUN_18013bf3c(lpFlsData);
      lpFlsData = p_Var2;
    }
  }
  else if (lpFlsData == (__acrt_ptd *)0xffffffffffffffff) {
lpFlsData = p_Var2;
  }
}

 construct_ptd_array(lpFlsData);
        FUN_18013bf3c((LPVOID)0x0);
        goto LAB_180138ab9;
      }
      FlsSetValue(DAT_1801eb2e0,(PVOID)0x0);
    }
    FUN_18013bf3c(lpFlsData);
  }
  else {
    if (lpFlsData == (__acrt_ptd *)0xffffffffffffffff) {
return (__acrt_ptd *)0x0;
    }
}

