#include "_get.h"
#include <stdint.h>
#include <stddef.h>

 _get_stream_buffer_pointers((longlong)p_Var8,(longlong *)&local_res8,&local_48,&local_40);
    *(longlong **)(param_1 + 0x18) = local_res8;
    *(longlong **)(param_1 + 0x20) = local_res8;
    *(longlong *)(param_1 + 0x38) = local_48;
    *(longlong *)(param_1 + 0x40) = local_48;
    *(longlong *)(param_1 + 0x50) = local_40;
    *(longlong *)(param_1 + 0x58) = local_40;
    *(_iobuf **)(param_1 + 0x80) = p_Var8;
    *(int32_t *)(param_1 + 0x74) = DAT_1801fc930;
    *(int32_t *)(param_1 + 0x68) = 0;
    plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x60) + 8);
    local_38 = plVar6;
    (**(code **)(*plVar6 + 8))(plVar6);
    local_res8 = FUN_1800ce6c0((longlong)&local_40);
    cVar7 = (**(code **)(*local_res8 + 0x18))(local_res8);
    if (cVar7 == '\0') {
*(longlong **)(param_1 + 0x68) = local_res8;
      *(int32_t **)(param_1 + 0x18) = puVar9;
      *(int32_t **)(param_1 + 0x20) = puVar1;
      *(int32_t **)(param_1 + 0x38) = puVar2;
      *(int32_t **)(param_1 + 0x40) = puVar3;
      *(int32_t **)(param_1 + 0x50) = puVar4;
      *(int32_t **)(param_1 + 0x58) = puVar5;
      *puVar1 = 0;
      *puVar3 = 0;
      *puVar5 = 0;
      *puVar9 = 0;
      *puVar2 = 0;
      *puVar4 = 0;
    }
}

errno_t __cdecl _get_dstbias(long *_Daylight_savings_bias) {
errno_t eVar1;
  ulong *puVar2;
  
  if (_Daylight_savings_bias == (long *)0x0) {
    puVar2 = __doserrno();
    *puVar2 = 0x16;
    FUN_18012b794();
    eVar1 = 0x16;
  }
  else {
    *_Daylight_savings_bias = DAT_1801ee328;
    eVar1 = 0;
  }
  return eVar1;
}
}

int32_t _get_fpsr(void) {
return MXCSR;
}
}

int32_t _get_stream_buffer_pointers(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4) {
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
}

