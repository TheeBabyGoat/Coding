#include "_lock.h"
#include <stdint.h>
#include <stddef.h>

 _lock_locales();
  }
  else if (param_1 < 8) {
EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_1801ed2a0 + (longlong)param_1 * 0x28));
  }
}

void _lock_locales(void) {
__acrt_eagerly_load_locale_apis();
                    
                    
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1801ede40);
  return;
}
}

