#include "_isindst.h"
#include <stdint.h>
#include <stddef.h>

int __cdecl _isindst(tm *_Time) {
bool bVar1;
  int32_t extraout_var;
  
  __acrt_lock(6);
  bVar1 = FUN_18013b35c(&_Time->tm_sec);
  __acrt_unlock(6);
  return (int)CONCAT71(extraout_var,bVar1);
}
}

