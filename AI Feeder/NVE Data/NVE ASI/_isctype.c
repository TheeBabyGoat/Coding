#include "_isctype.h"
#include <stdint.h>
#include <stddef.h>

int __cdecl _isctype_l(int _C,int _Type,_locale_t _Locale) {
int iVar1;
  int32_t auStackY_88 [32];
  CHAR local_48;
  CHAR local_47;
  int32_t local_46;
  longlong local_40;
  longlong *local_38 [2];
  char local_28;
  WORD local_20 [4];
  ulonglong local_18;
  
  local_18 = DAT_1801eb080 ^ (ulonglong)auStackY_88;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_40,(__crt_locale_pointers *)_Locale);
  if (0x100 < _C + 1U) {
    iVar1 = 1;
    if (*(short *)(*local_38[0] + (ulonglong)(_C >> 8 & 0xff) * 2) < 0) {
      iVar1 = 2;
      local_46 = 0;
      local_48 = (CHAR)((uint)_C >> 8);
      local_47 = (CHAR)_C;
    }
    else {
      local_47 = '\0';
      local_48 = (CHAR)_C;
    }
    local_20[0] = 0;
    local_20[1] = 0;
    local_20[2] = 0;
    iVar1 = FUN_180141a88((__crt_locale_pointers *)local_38,1,&local_48,iVar1,local_20,
                          *(UINT *)((longlong)local_38[0] + 0xc),1);
    if (iVar1 == 0) {
      if (local_28 != '\0') {
        *(uint *)(local_40 + 0x3a8) = *(uint *)(local_40 + 0x3a8) & 0xfffffffd;
      }
      goto LAB_180140b1b;
    }
  }
  if (local_28 != '\0') {
    *(uint *)(local_40 + 0x3a8) = *(uint *)(local_40 + 0x3a8) & 0xfffffffd;
  }
LAB_180140b1b:
  iVar1 = FUN_1801252c0(local_18 ^ (ulonglong)auStackY_88);
  return iVar1;
}
}

