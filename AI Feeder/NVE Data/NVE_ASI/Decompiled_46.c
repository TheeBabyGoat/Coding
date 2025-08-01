#include <stdint.h>
#include <stddef.h>

// ---- Function: _guard_check_icall ----
void _guard_check_icall(void)

{
  return;
}

// ---- Function: FUN_180123140 ----
int32_t * FUN_180123140(int32_t *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}

// ---- Function: FUN_180123160 ----
int32_t * FUN_180123160(int32_t *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy((longlong *)(param_2 + 8),param_1 + 1);
  *param_1 = std::bad_function_call::vftable;
  return param_1;
}

// ---- Function: FUN_18012319c ----
int32_t * FUN_18012319c(int32_t *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = std::bad_function_call::vftable;
  return param_1;
}

// ---- Function: FUN_1801231b4 ----
int32_t * FUN_1801231b4(int32_t *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy((longlong *)(param_2 + 8),param_1 + 1);
  *param_1 = std::length_error::vftable;
  return param_1;
}

// ---- Function: FUN_1801231f0 ----
int32_t * FUN_1801231f0(int32_t *param_1,longlong param_2)

{
  longlong local_18;
  int32_t local_10;
  
  local_10 = 1;
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  local_18 = param_2;
  __std_exception_copy(&local_18,param_1 + 1);
  *param_1 = std::length_error::vftable;
  return param_1;
}

// ---- Function: FUN_180123238 ----
int32_t * FUN_180123238(int32_t *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy((longlong *)(param_2 + 8),param_1 + 1);
  *param_1 = std::logic_error::vftable;
  return param_1;
}

// ---- Function: FUN_1801232b0 ----
int32_t * FUN_1801232b0(int32_t *param_1,longlong param_2)

{
  longlong local_18;
  int32_t local_10;
  
  local_10 = 1;
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  local_18 = param_2;
  __std_exception_copy(&local_18,param_1 + 1);
  *param_1 = std::out_of_range::vftable;
  return param_1;
}

// ---- Function: FUN_1801232f8 ----
void FUN_1801232f8(void)

{
  code *pcVar1;
  longlong local_28 [5];
  
  FUN_180123140(local_28);
  FUN_1801279a8(local_28,&DAT_1801e8b90);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// ---- Function: FUN_180123318 ----
void FUN_180123318(void)

{
  code *pcVar1;
  longlong local_28 [5];
  
  FUN_18012319c(local_28);
  FUN_1801279a8(local_28,&DAT_1801e8cf8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// ---- Function: FUN_180123338 ----
void FUN_180123338(longlong param_1)

{
  code *pcVar1;
  longlong local_28 [5];
  
  FUN_1801231f0(local_28,param_1);
  FUN_1801279a8(local_28,&DAT_1801e8bf0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// ---- Function: FUN_18012335c ----
void FUN_18012335c(longlong param_1)

{
  code *pcVar1;
  longlong local_28 [5];
  
  FUN_1801232b0(local_28,param_1);
  FUN_1801279a8(local_28,&DAT_1801e8c58);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// ---- Function: FUN_180123380 ----
void FUN_180123380(longlong param_1)

{
  code *pcVar1;
  longlong local_28 [5];
  
  FUN_1800b79e0(local_28,param_1);
  FUN_1801279a8(local_28,&DAT_1801e8cc0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// ---- Function: FUN_1801233a4 ----
char * FUN_1801233a4(void)

{
  return "bad function call";
}

// ---- Function: FUN_1801233ac ----
DWORD FUN_1801233ac(HANDLE param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  int32_t local_res10 [8];
  int32_t local_res18 [4];
  
  local_res18[0] = 3;
  BVar1 = SetFileInformationByHandle(param_1,0x15,local_res18,4);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    if (DVar2 != 1) {
      if (DVar2 == 5) {
        return 5;
      }
      if ((DVar2 != 0x32) && (DVar2 != 0x57)) {
        return DVar2;
      }
    }
    local_res10[0] = 1;
    BVar1 = SetFileInformationByHandle(param_1,FileDispositionInfo,local_res10,1);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      return DVar2;
    }
  }
  return 0;
}

// ---- Function: __std_fs_code_page ----
/* Library Function - Single Match
    __std_fs_code_page
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

ulonglong __std_fs_code_page(void)

{
  UINT UVar1;
  BOOL BVar2;
  ulonglong uVar3;
  
  UVar1 = ___lc_codepage_func();
  uVar3 = 0xfde9;
  if (UVar1 != 0xfde9) {
    BVar2 = AreFileApisANSI();
    uVar3 = (ulonglong)(BVar2 == 0);
  }
  return uVar3;
}

// ---- Function: __std_fs_convert_narrow_to_wide ----
/* Library Function - Single Match
    __std_fs_convert_narrow_to_wide
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int32_t
__std_fs_convert_narrow_to_wide(UINT param_1,LPCSTR param_2,int param_3,LPWSTR param_4,int param_5)

{
  int iVar1;
  int32_t uStack_14;
  
  iVar1 = MultiByteToWideChar(param_1,8,param_2,param_3,param_4,param_5);
  if (iVar1 == 0) {
    uStack_14 = GetLastError();
  }
  else {
    uStack_14 = 0;
  }
  return CONCAT44(uStack_14,iVar1);
}

