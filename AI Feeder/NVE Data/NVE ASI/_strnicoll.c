#include "_strnicoll.h"
#include <stdint.h>
#include <stddef.h>

int __cdecl _strnicoll(char *_Str1,char *_Str2,size_t _MaxCount) {
int iVar1;
  ulong *puVar2;
  
  if (DAT_1801ee158 != 0) {
    iVar1 = _strnicoll_l(_Str1,_Str2,_MaxCount,(_locale_t)0x0);
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

int __cdecl _strnicoll_l(char *_Str1,char *_Str2,size_t _MaxCount,_locale_t _Locale) {
int iVar1;
  int iVar2;
  ulong *puVar3;
  longlong local_28;
  localeinfo_struct local_20;
  char local_10;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,(__crt_locale_pointers *)_Locale);
  if (_MaxCount == 0) {
    iVar1 = 0;
  }
  else if ((_Str1 == (char *)0x0) || (_Str2 == (char *)0x0)) {
    puVar3 = __doserrno();
    *puVar3 = 0x16;
    FUN_18012b794();
    iVar1 = 0x7fffffff;
  }
  else {
    iVar1 = 0x7fffffff;
    if (_MaxCount < 0x80000000) {
      if ((local_20.locinfo)->locale_name[1] == (wchar_t *)0x0) {
        iVar1 = _strnicmp_l(_Str1,_Str2,_MaxCount,&local_20);
      }
      else {
        iVar2 = __acrt_CompareStringA
                          ((__crt_locale_pointers *)&local_20,
                           (ushort *)(local_20.locinfo)->locale_name[1],0x1001,(byte *)_Str1,
                           (int)_MaxCount,(byte *)_Str2,(int)_MaxCount,
                           *(UINT *)((longlong)&(local_20.locinfo)->lc_category[0].locale + 4));
        if (iVar2 == 0) {
          puVar3 = __doserrno();
          *puVar3 = 0x16;
        }
        else {
          iVar1 = iVar2 + -2;
        }
      }
    }
    else {
      puVar3 = __doserrno();
      *puVar3 = 0x16;
      FUN_18012b794();
    }
  }
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return iVar1;
}
}

