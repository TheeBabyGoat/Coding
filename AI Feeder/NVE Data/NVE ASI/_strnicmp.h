#ifndef _STRNICMP_H
#define _STRNICMP_H

int __cdecl _strnicmp(char *_Str1,char *_Str2,size_t _MaxCount);
int __cdecl _strnicmp_l(char *_Str1,char *_Str2,size_t _MaxCount,_locale_t _Locale);

#endif
