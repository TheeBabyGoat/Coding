#include "_updatetlocinfoEx.h"
#include <stdint.h>
#include <stddef.h>

int32_t ** _updatetlocinfoEx_nolock(longlong *param_1,int32_t **param_2) {
int32_t **ppuVar1;
  
  if ((param_2 == (int32_t **)0x0) || (param_1 == (longlong *)0x0)) {
    param_2 = (int32_t **)0x0;
  }
  else {
    ppuVar1 = (int32_t **)*param_1;
    if (ppuVar1 != param_2) {
      *param_1 = (longlong)param_2;
      __acrt_add_locale_ref((longlong)param_2);
      if (((ppuVar1 != (int32_t **)0x0) &&
          (__acrt_release_locale_ref((longlong)ppuVar1), *(int *)(ppuVar1 + 2) == 0)) &&
         (ppuVar1 != &PTR_DAT_1801eb2f0)) {
        __acrt_free_locale((longlong)ppuVar1);
      }
    }
  }
  return param_2;
}
}

