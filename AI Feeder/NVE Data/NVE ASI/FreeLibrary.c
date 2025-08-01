#include "FreeLibrary.h"
#include <stdint.h>
#include <stddef.h>

 FreeLibrary(hLibModule);
        }
      }
      local_48 = hLibModule;
      if (DAT_1801577c0 != 0) {
pFVar4 = (FARPROC)(*(code *)PTR__guard_dispatch_icall_180157468)(2,local_78);
      }
}

 FreeLibrary(hLibModule);
            }
            goto LAB_18012b0cd;
          }
          LOCK();
          *(int32_t *)(&DAT_1801edd38 + uVar5 * 8) = 0xffffffffffffffff;
          UNLOCK();
        }
        else if (hLibModule != (HMODULE)0xffffffffffffffff) {
LAB_18012b0cd:
          pFVar4 = GetProcAddress(hLibModule,param_2);
          if (pFVar4 != (FARPROC)0x0) {
            LOCK();
            *(FARPROC *)(&DAT_1801edd50 + uVar6 * 8) = pFVar4;
            UNLOCK();
            return pFVar4;
          }
          break;
        }
}

 FreeLibrary(hLibModule);
            }
            goto LAB_18013a5ee;
          }
          LOCK();
          (&DAT_1801ee170)[uVar2] = 0xffffffffffffffff;
          UNLOCK();
        }
        else if (hLibModule != (HMODULE)0xffffffffffffffff) {
LAB_18013a5ee:
          pFVar6 = GetProcAddress(hLibModule,param_2);
          if (pFVar6 != (FARPROC)0x0) {
            bVar5 = 0x40 - ((byte)DAT_1801eb080 & 0x3f) & 0x3f;
            LOCK();
            (&DAT_1801ee220)[param_1] =
                 ((ulonglong)pFVar6 >> bVar5 | (longlong)pFVar6 << 0x40 - bVar5) ^ DAT_1801eb080;
            UNLOCK();
            return pFVar6;
          }
          break;
        }
}

