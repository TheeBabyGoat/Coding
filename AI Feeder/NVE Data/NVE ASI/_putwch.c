#include "_putwch.h"
#include <stdint.h>
#include <stddef.h>

wint_t __cdecl _putwch_nolock(wchar_t _WCh) {
bool bVar1;
  BOOL BVar2;
  int32_t extraout_var;
  wchar_t local_res8 [4];
  DWORD local_res10 [6];
  
  local_res8[0] = _WCh;
  bVar1 = __dcrt_lowio_ensure_console_output_initialized();
  if (((int)CONCAT71(extraout_var,bVar1) == 0) ||
     (BVar2 = __dcrt_write_console(local_res8,1,local_res10), BVar2 == 0)) {
    local_res8[0] = L'\xffff';
  }
  return local_res8[0];
}
}

