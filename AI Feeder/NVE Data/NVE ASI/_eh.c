#include "_eh.h"
#include <stdint.h>
#include <stddef.h>

 _eh_vector_destructor_iterator_(&local_1f8,0x20,2,thunk_FUN_1800a6800);
      atexit((_func_5014 *)&LAB_1801561c0);
      puVar7 = &DAT_1801fc688;
      _Init_thread_footer(&DAT_1801fc688);
      goto LAB_1800bfc95;
    }
    for (; plVar5 != plVar4; plVar5 = plVar5 + 4) {
FUN_1800a6800(plVar5);
    }
}

 _eh_vector_destructor_iterator_(&local_1b8,0x20,2,thunk_FUN_1800a6800);
        atexit((_func_5014 *)&LAB_180156140);
        puVar7 = &DAT_1801fc6a8;
        _Init_thread_footer(&DAT_1801fc6a8);
        goto LAB_1800c00b4;
      }
      for (; plVar5 != plVar4; plVar5 = plVar5 + 4) {
FUN_1800a6800(plVar5);
      }
}

 _eh_vector_destructor_iterator_(&local_178,0x20,2,thunk_FUN_1800a6800);
        atexit((_func_5014 *)&LAB_180156130);
        puVar7 = &DAT_1801fc6ac;
        _Init_thread_footer(&DAT_1801fc6ac);
        goto LAB_1800c02b4;
      }
      for (; plVar5 != plVar4; plVar5 = plVar5 + 4) {
FUN_1800a6800(plVar5);
      }
}

 _eh_vector_destructor_iterator_(&local_138,0x20,2,thunk_FUN_1800a6800);
        atexit((_func_5014 *)&LAB_180156120);
        puVar7 = &DAT_1801fc6b0;
        _Init_thread_footer(&DAT_1801fc6b0);
        goto LAB_1800c04b4;
      }
      for (; plVar5 != plVar4; plVar5 = plVar5 + 4) {
FUN_1800a6800(plVar5);
      }
}

 _eh_vector_destructor_iterator_(&local_f8,0x20,2,thunk_FUN_1800a6800);
      atexit((_func_5014 *)&LAB_180156110);
      puVar7 = &DAT_1801fc6b4;
      _Init_thread_footer(&DAT_1801fc6b4);
      goto LAB_1800c06c1;
    }
    for (; plVar5 != plVar4; plVar5 = plVar5 + 4) {
FUN_1800a6800(plVar5);
    }
}

void __cdecl _eh_vector_destructor_iterator_(void *param_1,__uint64 param_2,__uint64 param_3,_func_void_void_ptr *param_4) {
void *pvVar1;
  
  pvVar1 = (void *)(param_2 * param_3 + (longlong)param_1);
  while( true ) {
    if (param_3 == 0) break;
    pvVar1 = (void *)((longlong)pvVar1 - param_2);
    (*(code *)PTR__guard_dispatch_icall_180157468)(pvVar1);
    param_3 = param_3 - 1;
  }
  return;
}
}

