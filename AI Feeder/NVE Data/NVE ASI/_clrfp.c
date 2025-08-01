#include "_clrfp.h"
#include <stdint.h>
#include <stddef.h>

 _clrfp();
  RaiseException(dwExceptionCode,0,1,(ULONG_PTR *)&local_res8);
  if ((local_res8[2] & 0x10) != 0) {
*param_2 = *param_2 & 0xffffffffffffff7f;
  }
}

uint _clrfp(void) {
uint uVar1;
  
  uVar1 = _get_fpsr();
  _fclrf();
  return uVar1 & 0x3f;
}
}

