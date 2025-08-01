#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_1800ba540 ----
void FUN_1800ba540(void)

{
  code *pcVar1;
  
  FUN_180123338(0x1801879b8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// ---- Function: _Calculate_growth ----
/* Library Function - Single Match
    private: static unsigned __int64 __cdecl std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> >::_Calculate_growth(unsigned __int64,unsigned
   __int64,unsigned __int64)
   
   Library: Visual Studio 2019 Release */

__uint64 __cdecl
std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::_Calculate_growth
          (__uint64 param_1,__uint64 param_2,__uint64 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = param_1 | 0xf;
  if ((uVar2 <= param_3) && (param_2 <= param_3 - (param_2 >> 1))) {
    uVar1 = (param_2 >> 1) + param_2;
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    return uVar2;
  }
  return param_3;
}

// ---- Function: FUN_1800ba590 ----
void * FUN_1800ba590(int32_t param_1,__uint64 *param_2)

{
  __uint64 _Var1;
  code *pcVar2;
  void *pvVar3;
  void *pvVar4;
  __uint64 _Var5;
  
  _Var1 = *param_2;
  _Var5 = _Var1 + 1;
  *param_2 = _Var5;
  if (_Var5 == 0) {
    *param_2 = *param_2 - 1;
    return (void *)0x0;
  }
  if (_Var5 < 0x1000) {
    pvVar3 = operator_new(_Var5);
    *param_2 = *param_2 - 1;
    return pvVar3;
  }
  _Var1 = _Var1 + 0x28;
  if (_Var1 <= _Var5) {
    FUN_1800ba8a0();
    pcVar2 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar2)();
    return pvVar3;
  }
  pvVar3 = operator_new(_Var1);
  if (pvVar3 != (void *)0x0) {
    pvVar4 = (void *)((longlong)pvVar3 + 0x27U & 0xffffffffffffffe0);
    *(void **)((longlong)pvVar4 + -8) = pvVar3;
    *param_2 = *param_2 - 1;
    return pvVar4;
  }
  FUN_18012b7b4();
  pcVar2 = (code *)swi(3);
  pvVar3 = (void *)(*pcVar2)();
  return pvVar3;
}

// ---- Function: FUN_1800ba610 ----
int32_t * FUN_1800ba610(int32_t *param_1,int32_t *param_2,ulonglong param_3)

{
  FUN_180150fd0(param_1,param_2,param_3);
  return param_1;
}

// ---- Function: FUN_1800ba630 ----
int32_t * FUN_1800ba630(int32_t *param_1,int32_t *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  code *pcVar3;
  int32_t uVar4;
  ulonglong uVar5;
  void *pvVar6;
  int32_t *puVar7;
  ulonglong uVar8;
  
  puVar7 = (int32_t *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar2 = param_2[2];
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (int32_t *)*param_2;
  }
  if (0x7fffffffffffffff < uVar2) {
    FUN_1800ba540();
    pcVar3 = (code *)swi(3);
    puVar7 = (int32_t *)(*pcVar3)();
    return puVar7;
  }
  if (uVar2 < 0x10) {
    param_1[2] = uVar2;
    param_1[3] = 0xf;
    uVar4 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar4;
    return param_1;
  }
  uVar8 = uVar2 | 0xf;
  if (uVar8 < 0x8000000000000000) {
    if (uVar8 < 0x16) {
      uVar8 = 0x16;
    }
    uVar1 = uVar8 + 1;
    if (uVar1 == 0) goto LAB_1800ba703;
    if (uVar1 < 0x1000) {
      puVar7 = (int32_t *)operator_new(uVar1);
      goto LAB_1800ba703;
    }
    uVar5 = uVar8 + 0x28;
    if (uVar5 <= uVar1) {
      FUN_1800ba8a0();
      pcVar3 = (code *)swi(3);
      puVar7 = (int32_t *)(*pcVar3)();
      return puVar7;
    }
  }
  else {
    uVar5 = 0x8000000000000027;
    uVar8 = 0x7fffffffffffffff;
  }
  pvVar6 = operator_new(uVar5);
  if (pvVar6 == (void *)0x0) {
    FUN_18012b7b4();
    pcVar3 = (code *)swi(3);
    puVar7 = (int32_t *)(*pcVar3)();
    return puVar7;
  }
  puVar7 = (int32_t *)((longlong)pvVar6 + 0x27U & 0xffffffffffffffe0);
  puVar7[-1] = pvVar6;
LAB_1800ba703:
  *param_1 = puVar7;
  param_1[2] = uVar2;
  param_1[3] = uVar8;
  FUN_180150fd0(puVar7,param_2,uVar2 + 1);
  return param_1;
}

// ---- Function: FUN_1800ba750 ----
void FUN_1800ba750(int32_t *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)param_1[1];
  for (plVar2 = (longlong *)*param_1; plVar2 != plVar1; plVar2 = plVar2 + 4) {
    FUN_1800a6800(plVar2);
  }
  return;
}

// ---- Function: FUN_1800ba790 ----
int32_t * FUN_1800ba790(int32_t *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad array new length";
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}

// ---- Function: FUN_1800ba7c0 ----
int32_t * FUN_1800ba7c0(int32_t *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy((longlong *)(param_2 + 8),param_1 + 1);
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}

// ---- Function: FUN_1800ba800 ----
int32_t * FUN_1800ba800(int32_t *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy((longlong *)(param_2 + 8),param_1 + 1);
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}

// ---- Function: FUN_1800ba840 ----
char * FUN_1800ba840(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(char **)(param_1 + 8) != (char *)0x0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
}

// ---- Function: exception ----
/* Library Function - Single Match
    public: __cdecl std::exception::exception(class std::exception const & __ptr64) __ptr64
   
   Library: Visual Studio 2019 Release */

exception * __thiscall std::exception::exception(exception *this,exception *param_1)

{
  *(int32_t ***)this = vftable;
  *(longlong *)(this + 8) = 0;
  *(int32_t *)(this + 0x10) = 0;
  __std_exception_copy((longlong *)(param_1 + 8),(longlong *)(this + 8));
  return this;
}

// ---- Function: FUN_1800ba8a0 ----
void FUN_1800ba8a0(void)

{
  code *pcVar1;
  longlong local_28 [5];
  
  FUN_1800ba790(local_28);
  FUN_1801279a8(local_28,&DAT_1801e9050);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// ---- Function: FUN_1800ba8c0 ----
void * FUN_1800ba8c0(int32_t param_1,ulonglong param_2)

{
  code *pcVar1;
  void *pvVar2;
  void *pvVar3;
  ulonglong uVar4;
  
  if (param_2 < 0x800000000000000) {
    uVar4 = param_2 * 0x20;
    if (uVar4 == 0) {
      return (void *)0x0;
    }
    if (uVar4 < 0x1000) {
      pvVar2 = operator_new(uVar4);
      return pvVar2;
    }
    if (uVar4 < uVar4 + 0x27) {
      pvVar2 = operator_new(uVar4 + 0x27);
      if (pvVar2 != (void *)0x0) {
        pvVar3 = (void *)((longlong)pvVar2 + 0x27U & 0xffffffffffffffe0);
        *(void **)((longlong)pvVar3 + -8) = pvVar2;
        return pvVar3;
      }
      FUN_18012b7b4();
      pcVar1 = (code *)swi(3);
      pvVar2 = (void *)(*pcVar1)();
      return pvVar2;
    }
  }
  FUN_1800ba8a0();
  pcVar1 = (code *)swi(3);
  pvVar2 = (void *)(*pcVar1)();
  return pvVar2;
}

// ---- Function: FUN_1800ba930 ----
void FUN_1800ba930(int32_t param_1,LPVOID param_2,longlong param_3)

{
  code *pcVar1;
  LPVOID pvVar2;
  
  pvVar2 = param_2;
  if ((0xfff < param_3 + 1U) &&
     (pvVar2 = *(LPVOID *)((longlong)param_2 + -8),
     0x1f < (ulonglong)((longlong)param_2 + (-8 - (longlong)pvVar2)))) {
    FUN_18012b7b4();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  thunk_FUN_18012d5e8(pvVar2);
  return;
}

// ---- Function: thunk_FUN_1800a6800 ----
void thunk_FUN_1800a6800(longlong *param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  LPVOID pvVar3;
  
  if (0xf < (ulonglong)param_1[3]) {
    pvVar1 = (LPVOID)*param_1;
    pvVar3 = pvVar1;
    if ((0xfff < param_1[3] + 1U) &&
       (pvVar3 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3)))) {
      FUN_18012b7b4();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    thunk_FUN_18012d5e8(pvVar3);
  }
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(int32_t *)param_1 = 0;
  return;
}

// ---- Function: FUN_1800ba980 ----
int32_t FUN_1800ba980(void)

{
  int *piVar1;
  char *local_18;
  int32_t local_10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x10
              ) < DAT_1801fb340) {
    FUN_180125398(&DAT_1801fb340);
    if (DAT_1801fb340 == -1) {
      local_18 = "41 83 7D 20 02 49 8B 47 30";
      local_10 = 0x1a;
      piVar1 = (int *)FUN_1800a68d0(&local_18);
      DAT_1801fb348 = (int32_t *)((longlong)piVar1 + (longlong)*piVar1 + 4);
      _Init_thread_footer(&DAT_1801fb340);
    }
  }
  return *DAT_1801fb348;
}

// ---- Function: FUN_1800baa10 ----
int32_t FUN_1800baa10(void)

{
  int *piVar1;
  char *local_18;
  int32_t local_10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x10
              ) < DAT_1801fb350) {
    FUN_180125398(&DAT_1801fb350);
    if (DAT_1801fb350 == -1) {
      local_18 = "0F 57 C0 8D 0C 40 8B 05";
      local_10 = 0x17;
      piVar1 = (int *)FUN_1800a68d0(&local_18);
      DAT_1801fb358 = (int32_t *)((longlong)piVar1 + (longlong)*piVar1 + 4);
      _Init_thread_footer(&DAT_1801fb350);
    }
  }
  return *DAT_1801fb358;
}

