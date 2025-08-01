#include "FUN_1800b21d0.h"
#include <stdint.h>
#include <stddef.h>

 FUN_1800b21d0(uVar31,uVar34,(longlong)pauVar37);
          pauVar37 = (int32_t (*) [32])(*pauVar37 + uVar31);
          goto LAB_1800b1fa6;
        }
        goto LAB_1800b2087;
      }
    }
    else {
LAB_1800b204d:
      bVar42 = SBORROW8((longlong)param_3 - (longlong)pauVar37,uVar27);
      lVar39 = ((longlong)param_3 - (longlong)pauVar37) - uVar27;
LAB_1800b2059:
      if (bVar42 != lVar39 < 0) goto LAB_1800b2087;
      if (param_5 != 0) {
pauVar32 = pauVar37;
        FUN_180151670(pauVar37,0x30,uVar27);
      }
}

void FUN_1800b21d0(uint param_1,uint param_2,longlong param_3) {
longlong lVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  uVar3 = 0;
  uVar2 = param_2;
  if (param_1 != 1) {
    do {
      param_2 = uVar2 / 100;
      lVar1 = param_1 - uVar4;
      uVar3 = (int)uVar4 + 2;
      uVar4 = (ulonglong)uVar3;
      *(int32_t *)(lVar1 + -2 + param_3) =
           *(int32_t *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899integral cannot be stored in char"
            + (uVar2 % 100) * 2);
      uVar2 = param_2;
    } while (uVar3 < param_1 - 1);
  }
  if (uVar3 < param_1) {
    *(char *)((ulonglong)((param_1 - uVar3) - 1) + param_3) =
         (char)param_2 + (char)((ulonglong)param_2 / 10) * -10 + '0';
  }
  return;
}
}

