#include <stdint.h>
#include <stddef.h>

// ---- Function: FlsGetValue ----
PVOID __stdcall FlsGetValue(DWORD dwFlsIndex)

{
  PVOID pvVar1;
  
                    
                    
  pvVar1 = FlsGetValue(dwFlsIndex);
  return pvVar1;
}

// ---- Function: FlsSetValue ----
BOOL __stdcall FlsSetValue(DWORD dwFlsIndex,PVOID lpFlsData)

{
  BOOL BVar1;
  
                    
                    
  BVar1 = FlsSetValue(dwFlsIndex,lpFlsData);
  return BVar1;
}

// ---- Function: FUN_18013a870 ----
void FUN_18013a870(ushort *param_1,DWORD param_2,SYSTEMTIME *param_3,LPCWSTR param_4,LPWSTR param_5,
                  int param_6,int32_t param_7)

{
  LCID Locale;
  FARPROC pFVar1;
  
  pFVar1 = FUN_18013a46c(4,"GetDateFormatEx",(uint *)&DAT_18017bc08,(uint *)"GetDateFormatEx");
  if (pFVar1 == (FARPROC)0x0) {
    Locale = FUN_18013ad24(param_1,0);
    GetDateFormatW(Locale,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    (*(code *)PTR__guard_dispatch_icall_180157478)
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return;
}

// ---- Function: FUN_18013a930 ----
void FUN_18013a930(ushort *param_1,LCTYPE param_2,LPWSTR param_3,int param_4)

{
  LCID Locale;
  FARPROC pFVar1;
  
  pFVar1 = FUN_18013a46c(8,"GetLocaleInfoEx",(uint *)&DAT_18017bc20,(uint *)"GetLocaleInfoEx");
  if (pFVar1 == (FARPROC)0x0) {
    Locale = FUN_18013ad24(param_1,0);
    GetLocaleInfoW(Locale,param_2,param_3,param_4);
  }
  else {
    (*(code *)PTR__guard_dispatch_icall_180157478)(param_1,param_2,param_3,param_4);
  }
  return;
}

// ---- Function: FUN_18013a9c0 ----
void FUN_18013a9c0(ushort *param_1,DWORD param_2,SYSTEMTIME *param_3,LPCWSTR param_4,LPWSTR param_5,
                  int param_6)

{
  LCID Locale;
  FARPROC pFVar1;
  
  pFVar1 = FUN_18013a46c(0xb,"GetTimeFormatEx",(uint *)&DAT_18017bc38,(uint *)"GetTimeFormatEx");
  if (pFVar1 == (FARPROC)0x0) {
    Locale = FUN_18013ad24(param_1,0);
    GetTimeFormatW(Locale,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    (*(code *)PTR__guard_dispatch_icall_180157478)(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return;
}

// ---- Function: FUN_18013aa74 ----
void FUN_18013aa74(wchar_t *param_1,int param_2)

{
  LCID LVar1;
  FARPROC pFVar2;
  
  pFVar2 = FUN_18013a46c(0xc,"GetUserDefaultLocaleName",(uint *)&DAT_18017bc50,
                         (uint *)"GetUserDefaultLocaleName");
  if (pFVar2 == (FARPROC)0x0) {
    LVar1 = GetUserDefaultLCID();
    FUN_18013abb4(LVar1,param_1,param_2,0);
  }
  else {
    (*(code *)PTR__guard_dispatch_icall_180157478)(param_1,param_2);
  }
  return;
}

// ---- Function: FUN_18013aae0 ----
void FUN_18013aae0(LPCRITICAL_SECTION param_1,DWORD param_2,int32_t param_3)

{
  FARPROC pFVar1;
  
  pFVar1 = FUN_18013a46c(0xf,"InitializeCriticalSectionEx",(uint *)&DAT_18017bc78,
                         (uint *)&DAT_18017bc80);
  if (pFVar1 == (FARPROC)0x0) {
    InitializeCriticalSectionAndSpinCount(param_1,param_2);
  }
  else {
    (*(code *)PTR__guard_dispatch_icall_180157478)(param_1,param_2,param_3);
  }
  return;
}

// ---- Function: FUN_18013ab50 ----
void FUN_18013ab50(ushort *param_1)

{
  LCID Locale;
  FARPROC pFVar1;
  
  pFVar1 = FUN_18013a46c(0x10,"IsValidLocaleName",(uint *)&DAT_18017bc80,(uint *)"IsValidLocaleName"
                        );
  if (pFVar1 != (FARPROC)0x0) {
    (*(code *)PTR__guard_dispatch_icall_180157478)(param_1);
    return;
  }
  Locale = FUN_18013ad24(param_1,0);
                    
                    
  IsValidLocale(Locale,1);
  return;
}

// ---- Function: FUN_18013abb4 ----
void FUN_18013abb4(uint param_1,wchar_t *param_2,int param_3,int32_t param_4)

{
  FARPROC pFVar1;
  
  pFVar1 = FUN_18013a46c(0x12,"LCIDToLocaleName",(uint *)&DAT_18017bcb8,(uint *)"LCIDToLocaleName");
  if (pFVar1 == (FARPROC)0x0) {
    FUN_1801474dc(param_1,param_2,param_3);
  }
  else {
    (*(code *)PTR__guard_dispatch_icall_180157478)(param_1,param_2,param_3,param_4);
  }
  return;
}

// ---- Function: FUN_18013ac38 ----
void FUN_18013ac38(ushort *param_1,DWORD param_2,LPCWSTR param_3,int param_4,LPWSTR param_5,
                  int param_6,int32_t param_7,int32_t param_8,int32_t param_9)

{
  LCID Locale;
  FARPROC pFVar1;
  
  pFVar1 = FUN_18013a46c(0x11,"LCMapStringEx",(uint *)&DAT_18017bca0,(uint *)"LCMapStringEx");
  if (pFVar1 == (FARPROC)0x0) {
    Locale = FUN_18013ad24(param_1,0);
    LCMapStringW(Locale,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    (*(code *)PTR__guard_dispatch_icall_180157478)
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  }
  return;
}

// ---- Function: FUN_18013ad24 ----
void FUN_18013ad24(ushort *param_1,int32_t param_2)

{
  FARPROC pFVar1;
  
  pFVar1 = FUN_18013a46c(0x13,"LocaleNameToLCID",(uint *)&DAT_18017bcd8,(uint *)"LocaleNameToLCID");
  if (pFVar1 == (FARPROC)0x0) {
    FUN_1801475c4(param_1);
  }
  else {
    (*(code *)PTR__guard_dispatch_icall_180157478)(param_1,param_2);
  }
  return;
}

// ---- Function: __acrt_can_use_vista_locale_apis ----
/* Library Function - Single Match
    __acrt_can_use_vista_locale_apis
   
   Library: Visual Studio 2019 Release */

bool __acrt_can_use_vista_locale_apis(void)

{
  FARPROC pFVar1;
  
  pFVar1 = FUN_18013a46c(1,"CompareStringEx",(uint *)&DAT_18017bbd0,(uint *)"CompareStringEx");
  return pFVar1 != (FARPROC)0x0;
}

// ---- Function: __acrt_eagerly_load_locale_apis ----
/* Library Function - Single Match
    __acrt_eagerly_load_locale_apis
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_eagerly_load_locale_apis(void)

{
  FUN_18013a46c(0,"AreFileApisANSI",(uint *)&DAT_18017bbb8,(uint *)&DAT_18017bbbc);
  FUN_18013a46c(1,"CompareStringEx",(uint *)&DAT_18017bbd0,(uint *)"CompareStringEx");
  FUN_18013a46c(2,"EnumSystemLocalesEx",(uint *)&DAT_18017bbe8,(uint *)"EnumSystemLocalesEx");
  FUN_18013a46c(4,"GetDateFormatEx",(uint *)&DAT_18017bc08,(uint *)"GetDateFormatEx");
  FUN_18013a46c(8,"GetLocaleInfoEx",(uint *)&DAT_18017bc20,(uint *)"GetLocaleInfoEx");
  FUN_18013a46c(0xb,"GetTimeFormatEx",(uint *)&DAT_18017bc38,(uint *)"GetTimeFormatEx");
  FUN_18013a46c(0xc,"GetUserDefaultLocaleName",(uint *)&DAT_18017bc50,
                (uint *)"GetUserDefaultLocaleName");
  FUN_18013a46c(0x10,"IsValidLocaleName",(uint *)&DAT_18017bc80,(uint *)"IsValidLocaleName");
  FUN_18013a46c(0x11,"LCMapStringEx",(uint *)&DAT_18017bca0,(uint *)"LCMapStringEx");
  FUN_18013a46c(0x12,"LCIDToLocaleName",(uint *)&DAT_18017bcb8,(uint *)"LCIDToLocaleName");
  FUN_18013a46c(0x13,"LocaleNameToLCID",(uint *)&DAT_18017bcd8,(uint *)"LocaleNameToLCID");
  return;
}

// ---- Function: __acrt_uninitialize_winapi_thunks ----
/* Library Function - Single Match
    __acrt_uninitialize_winapi_thunks
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int32_t __acrt_uninitialize_winapi_thunks(char param_1)

{
  HMODULE hLibModule;
  int32_t *in_RAX;
  int32_t *puVar1;
  
  if (param_1 == '\0') {
    puVar1 = &DAT_1801ee170;
    do {
      hLibModule = (HMODULE)*puVar1;
      if (hLibModule != (HMODULE)0x0) {
        if (hLibModule != (HMODULE)0xffffffffffffffff) {
          FreeLibrary(hLibModule);
        }
        *puVar1 = 0;
      }
      puVar1 = puVar1 + 1;
      in_RAX = &DAT_1801ee218;
    } while (puVar1 != (int32_t *)&DAT_1801ee218);
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}

// ---- Function: FUN_18013afc8 ----
int32_t * FUN_18013afc8(void)

{
  return &DAT_1801ee324;
}

// ---- Function: FUN_18013afd0 ----
int32_t * FUN_18013afd0(void)

{
  return &DAT_1801ee328;
}

// ---- Function: FUN_18013afd8 ----
int32_t * FUN_18013afd8(void)

{
  return &DAT_1801ee320;
}

