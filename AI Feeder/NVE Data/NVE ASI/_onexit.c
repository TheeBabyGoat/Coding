#include "_onexit.h"
#include <stdint.h>
#include <stddef.h>

_onexit_t __cdecl _onexit(_onexit_t _Func) {
int iVar1;
  _onexit_t p_Var2;
  
  if (DAT_1801ed6a0 == -1) {
    iVar1 = FUN_180137f54(_Func);
  }
  else {
    iVar1 = _register_onexit_function(&DAT_1801ed6a0,_Func);
  }
  p_Var2 = (_onexit_t)0x0;
  if (iVar1 == 0) {
    p_Var2 = _Func;
  }
  return p_Var2;
}
}

