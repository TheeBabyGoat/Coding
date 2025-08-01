#include "_strnicmp.h"
#include <stdint.h>
#include <stddef.h>

int __cdecl _strnicmp(char *_Str1,char *_Str2,size_t _MaxCount) {
int iVar1;
  ulong *puVar2;
  
  if (DAT_1801ee158 != 0) {
    iVar1 = _strnicmp_l(_Str1,_Str2,_MaxCount,(_locale_t)0x0);
    return iVar1;
  }
  if (((_Str1 != (char *)0x0) && (_Str2 != (char *)0x0)) && (_MaxCount < 0x80000000)) {
    iVar1 = FUN_1801483e8((byte *)_Str1,(byte *)_Str2,_MaxCount);
    return iVar1;
  }
  puVar2 = __doserrno();
  *puVar2 = 0x16;
  FUN_18012b794();
  return 0x7fffffff;
}
}

int __cdecl _strnicmp_l(char *_Str1,char *_Str2,size_t _MaxCount,_locale_t _Locale) {
byte bVar1;
  byte bVar2;
  int iVar3;
  ulong *puVar4;
  longlong local_28;
  longlong local_20;
  char local_10;
  
  if (((_Str1 == (char *)0x0) || (_Str2 == (char *)0x0)) || (0x7fffffff < _MaxCount)) {
    puVar4 = __doserrno();
    *puVar4 = 0x16;
    FUN_18012b794();
    iVar3 = 0x7fffffff;
  }
  else if (_MaxCount == 0) {
    iVar3 = 0;
  }
  else {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,(__crt_locale_pointers *)_Locale);
    do {
      bVar1 = *_Str1;
      _Str1 = (char *)((byte *)_Str1 + 1);
      bVar1 = *(byte *)((ulonglong)bVar1 + *(longlong *)(local_20 + 0x110));
      bVar2 = *_Str2;
      _Str2 = (char *)((byte *)_Str2 + 1);
      iVar3 = (uint)bVar1 - (uint)*(byte *)((ulonglong)bVar2 + *(longlong *)(local_20 + 0x110));
      if ((iVar3 != 0) || (bVar1 == 0)) break;
      _MaxCount = _MaxCount - 1;
    } while (_MaxCount != 0);
    if (local_10 != '\0') {
      *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
    }
  }
  return iVar3;
}
}

