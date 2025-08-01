#include "_CallSettingFrameEncoded.h"
#include <stdint.h>
#include <stddef.h>

 _CallSettingFrameEncoded((longlong)(int)local_f8 + *puVar10,lVar7,lVar11);
      }
      else {
        _CallSettingFrame();
      }
      FUN_18012729c(local_d0);
    }
  }
  lVar7 = __vcrt_getptd();
  if (0 < *(int *)(lVar7 + 0x30)) {
lVar7 = __vcrt_getptd();
    *(int *)(lVar7 + 0x30) = *(int *)(lVar7 + 0x30) + -1;
  }
}

void _CallSettingFrameEncoded(int32_t param_1,int32_t param_2,int32_t param_3) {
code *pcVar1;
  
  pcVar1 = (code *)FUN_18012aeb0();
  (*pcVar1)(param_3);
  FUN_18012aee0();
  FUN_18012aeb0();
  return;
}
}

