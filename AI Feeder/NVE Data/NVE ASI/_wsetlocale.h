#ifndef _WSETLOCALE_H
#define _WSETLOCALE_H

wchar_t * __cdecl _wsetlocale(int _Category,wchar_t *_Locale);
short * _wsetlocale_get_all(longlong param_1);
void _wsetlocale_nolock(longlong param_1,int param_2,wchar_t *param_3);

#endif
