#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_18014498c ----
bool FUN_18014498c(void)

{
  DAT_1801ee8a8 = GetProcessHeap();
  return DAT_1801ee8a8 != (HANDLE)0x0;
}

// ---- Function: FUN_1801449b4 ----
int32_t FUN_1801449b4(int32_t *param_1,int32_t *param_2)

{
  longlong *in_RAX;
  longlong *plVar1;
  
  plVar1 = param_1;
  if (param_1 != param_2) {
    do {
      in_RAX = (longlong *)*plVar1;
      if ((in_RAX != (longlong *)0x0) &&
         (in_RAX = (longlong *)(*(code *)PTR__guard_dispatch_icall_180157478)(),
         (char)in_RAX == '\0')) break;
      plVar1 = plVar1 + 2;
    } while (plVar1 != param_2);
    if (plVar1 != param_2) {
      if (plVar1 != param_1) {
        plVar1 = plVar1 + -1;
        do {
          if ((plVar1[-1] != 0) && (*plVar1 != 0)) {
            (*(code *)PTR__guard_dispatch_icall_180157478)(0);
          }
          in_RAX = plVar1 + -1;
          plVar1 = plVar1 + -2;
        } while (in_RAX != param_1);
      }
      return (ulonglong)in_RAX & 0xffffffffffffff00;
    }
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}

// ---- Function: FUN_180144a48 ----
int32_t FUN_180144a48(longlong param_1,longlong param_2)

{
  longlong in_RAX;
  
  if (param_1 != param_2) {
    do {
      in_RAX = *(longlong *)(param_2 + -8);
      if (in_RAX != 0) {
        in_RAX = (*(code *)PTR__guard_dispatch_icall_180157478)(0);
      }
      param_2 = param_2 + -0x10;
    } while (param_2 != param_1);
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}

// ---- Function: FUN_180144a90 ----
int32_t FUN_180144a90(void)

{
  byte bVar1;
  
  bVar1 = (byte)DAT_1801eb080 & 0x3f;
  return CONCAT71((int7)(DAT_1801eb080 >> 8),
                  (DAT_1801ee8b0 ^ DAT_1801eb080) >> bVar1 != 0 ||
                  (DAT_1801ee8b0 ^ DAT_1801eb080) << 0x40 - bVar1 != 0);
}

// ---- Function: FUN_180144ab0 ----
void FUN_180144ab0(int32_t param_1)

{
  DAT_1801ee8b0 = param_1;
  return;
}

// ---- Function: FUN_180144ab8 ----
int32_t FUN_180144ab8(int32_t param_1)

{
  int32_t uVar1;
  byte bVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  bVar2 = (byte)DAT_1801eb080 & 0x3f;
  UNRECOVERED_JUMPTABLE =
       (code *)((DAT_1801ee8b0 ^ DAT_1801eb080) >> bVar2 |
               (DAT_1801ee8b0 ^ DAT_1801eb080) << 0x40 - bVar2);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    
                    
    uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
    return uVar1;
  }
  return 0;
}

// ---- Function: __acrt_add_locale_ref ----
/* Library Function - Single Match
    __acrt_add_locale_ref
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_add_locale_ref(longlong param_1)

{
  int *piVar1;
  int32_t *puVar2;
  longlong lVar3;
  
  LOCK();
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  UNLOCK();
  piVar1 = *(int **)(param_1 + 0xe0);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_1 + 0xf0);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_1 + 0xe8);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_1 + 0x100);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  puVar2 = (int32_t *)(param_1 + 0x38);
  lVar3 = 6;
  do {
    if (((int32_t *)puVar2[-2] != &DAT_1801eb458) &&
       (piVar1 = (int *)*puVar2, piVar1 != (int *)0x0)) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    if ((puVar2[-3] != 0) && (piVar1 = (int *)puVar2[-1], piVar1 != (int *)0x0)) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    puVar2 = puVar2 + 4;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  __acrt_locale_add_lc_time_reference(*(int32_t ***)(param_1 + 0x120));
  return;
}

// ---- Function: __acrt_free_locale ----
/* Library Function - Single Match
    __acrt_free_locale
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_free_locale(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  int32_t *puVar3;
  int32_t *puVar4;
  
  if ((((*(int32_t ***)(param_1 + 0xf8) != (int32_t **)0x0) &&
       (*(int32_t ***)(param_1 + 0xf8) != &PTR_DAT_1801eb100)) &&
      (*(int **)(param_1 + 0xe0) != (int *)0x0)) && (**(int **)(param_1 + 0xe0) == 0)) {
    piVar1 = *(int **)(param_1 + 0xf0);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      FUN_18013bf3c(piVar1);
      __acrt_locale_free_monetary(*(longlong *)(param_1 + 0xf8));
    }
    piVar1 = *(int **)(param_1 + 0xe8);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      FUN_18013bf3c(piVar1);
      __acrt_locale_free_numeric(*(longlong **)(param_1 + 0xf8));
    }
    FUN_18013bf3c(*(LPVOID *)(param_1 + 0xe0));
    FUN_18013bf3c(*(LPVOID *)(param_1 + 0xf8));
  }
  if ((*(int **)(param_1 + 0x100) != (int *)0x0) && (**(int **)(param_1 + 0x100) == 0)) {
    FUN_18013bf3c((LPVOID)(*(longlong *)(param_1 + 0x108) + -0xfe));
    FUN_18013bf3c((LPVOID)(*(longlong *)(param_1 + 0x110) + -0x80));
    FUN_18013bf3c((LPVOID)(*(longlong *)(param_1 + 0x118) + -0x80));
    FUN_18013bf3c(*(LPVOID *)(param_1 + 0x100));
  }
  __acrt_locale_free_lc_time_if_unreferenced(*(int32_t ***)(param_1 + 0x120));
  puVar3 = (int32_t *)(param_1 + 0x128);
  lVar2 = 6;
  puVar4 = (int32_t *)(param_1 + 0x38);
  do {
    if ((((int32_t *)puVar4[-2] != &DAT_1801eb458) &&
        (piVar1 = (int *)*puVar4, piVar1 != (int *)0x0)) && (*piVar1 == 0)) {
      FUN_18013bf3c(piVar1);
      FUN_18013bf3c((LPVOID)*puVar3);
    }
    if (((puVar4[-3] != 0) && (piVar1 = (int *)puVar4[-1], piVar1 != (int *)0x0)) && (*piVar1 == 0))
    {
      FUN_18013bf3c(piVar1);
    }
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 4;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_18013bf3c((LPVOID)param_1);
  return;
}

// ---- Function: __acrt_locale_add_lc_time_reference ----
/* Library Function - Single Match
    __acrt_locale_add_lc_time_reference
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __acrt_locale_add_lc_time_reference(int32_t **param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((param_1 != (int32_t **)0x0) && (param_1 != &PTR_DAT_18017afe0)) {
    LOCK();
    piVar1 = (int *)((longlong)param_1 + 0x15c);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    return iVar2 + 1;
  }
  return 0x7fffffff;
}

// ---- Function: __acrt_locale_free_lc_time_if_unreferenced ----
/* Library Function - Single Match
    __acrt_locale_free_lc_time_if_unreferenced
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_locale_free_lc_time_if_unreferenced(int32_t **param_1)

{
  if (((param_1 != (int32_t **)0x0) && (param_1 != &PTR_DAT_18017afe0)) &&
     (*(int *)((longlong)param_1 + 0x15c) == 0)) {
    __acrt_locale_free_time(param_1);
    FUN_18013bf3c(param_1);
  }
  return;
}

// ---- Function: __acrt_locale_release_lc_time_reference ----
/* Library Function - Single Match
    __acrt_locale_release_lc_time_reference
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __acrt_locale_release_lc_time_reference(int32_t **param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((param_1 != (int32_t **)0x0) && (param_1 != &PTR_DAT_18017afe0)) {
    LOCK();
    piVar1 = (int *)((longlong)param_1 + 0x15c);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    return iVar2 + -1;
  }
  return 0x7fffffff;
}

// ---- Function: __acrt_release_locale_ref ----
/* Library Function - Single Match
    __acrt_release_locale_ref
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_release_locale_ref(longlong param_1)

{
  int *piVar1;
  int32_t *puVar2;
  longlong lVar3;
  
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    UNLOCK();
    piVar1 = *(int **)(param_1 + 0xe0);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_1 + 0xf0);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_1 + 0xe8);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_1 + 0x100);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    puVar2 = (int32_t *)(param_1 + 0x38);
    lVar3 = 6;
    do {
      if (((int32_t *)puVar2[-2] != &DAT_1801eb458) &&
         (piVar1 = (int *)*puVar2, piVar1 != (int *)0x0)) {
        LOCK();
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      if ((puVar2[-3] != 0) && (piVar1 = (int *)puVar2[-1], piVar1 != (int *)0x0)) {
        LOCK();
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      puVar2 = puVar2 + 4;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    __acrt_locale_release_lc_time_reference(*(int32_t ***)(param_1 + 0x120));
  }
  return;
}

// ---- Function: FUN_180144e28 ----
int32_t ** FUN_180144e28(void)

{
  __acrt_ptd *p_Var1;
  int32_t **ppuVar2;
  
  p_Var1 = FUN_1801387d8();
  if (((DAT_1801eb774 & *(uint *)(p_Var1 + 0x3a8)) == 0) ||
     (ppuVar2 = *(int32_t ***)(p_Var1 + 0x90), ppuVar2 == (int32_t **)0x0)) {
    __acrt_lock(4);
    ppuVar2 = _updatetlocinfoEx_nolock((longlong *)(p_Var1 + 0x90),DAT_1801ee160);
    __acrt_unlock(4);
    if (ppuVar2 == (int32_t **)0x0) {
                    
      abort();
    }
  }
  return ppuVar2;
}

// ---- Function: _updatetlocinfoEx_nolock ----
/* Library Function - Single Match
    _updatetlocinfoEx_nolock
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int32_t ** _updatetlocinfoEx_nolock(longlong *param_1,int32_t **param_2)

{
  int32_t **ppuVar1;
  
  if ((param_2 == (int32_t **)0x0) || (param_1 == (longlong *)0x0)) {
    param_2 = (int32_t **)0x0;
  }
  else {
    ppuVar1 = (int32_t **)*param_1;
    if (ppuVar1 != param_2) {
      *param_1 = (longlong)param_2;
      __acrt_add_locale_ref((longlong)param_2);
      if (((ppuVar1 != (int32_t **)0x0) &&
          (__acrt_release_locale_ref((longlong)ppuVar1), *(int *)(ppuVar1 + 2) == 0)) &&
         (ppuVar1 != &PTR_DAT_1801eb2f0)) {
        __acrt_free_locale((longlong)ppuVar1);
      }
    }
  }
  return param_2;
}

// ---- Function: __acrt_locale_free_monetary ----
/* Library Function - Single Match
    __acrt_locale_free_monetary
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_locale_free_monetary(longlong param_1)

{
  if (param_1 != 0) {
    if (*(int32_t **)(param_1 + 0x18) != PTR_DAT_1801eb118) {
      FUN_18013bf3c(*(int32_t **)(param_1 + 0x18));
    }
    if (*(int32_t **)(param_1 + 0x20) != PTR_DAT_1801eb120) {
      FUN_18013bf3c(*(int32_t **)(param_1 + 0x20));
    }
    if (*(int32_t **)(param_1 + 0x28) != PTR_DAT_1801eb128) {
      FUN_18013bf3c(*(int32_t **)(param_1 + 0x28));
    }
    if (*(int32_t **)(param_1 + 0x30) != PTR_DAT_1801eb130) {
      FUN_18013bf3c(*(int32_t **)(param_1 + 0x30));
    }
    if (*(int32_t **)(param_1 + 0x38) != PTR_DAT_1801eb138) {
      FUN_18013bf3c(*(int32_t **)(param_1 + 0x38));
    }
    if (*(int32_t **)(param_1 + 0x40) != PTR_DAT_1801eb140) {
      FUN_18013bf3c(*(int32_t **)(param_1 + 0x40));
    }
    if (*(int32_t **)(param_1 + 0x48) != PTR_DAT_1801eb148) {
      FUN_18013bf3c(*(int32_t **)(param_1 + 0x48));
    }
    if (*(int32_t **)(param_1 + 0x68) != PTR_DAT_1801eb168) {
      FUN_18013bf3c(*(int32_t **)(param_1 + 0x68));
    }
    if (*(int32_t **)(param_1 + 0x70) != PTR_DAT_1801eb170) {
      FUN_18013bf3c(*(int32_t **)(param_1 + 0x70));
    }
    if (*(int32_t **)(param_1 + 0x78) != PTR_DAT_1801eb178) {
      FUN_18013bf3c(*(int32_t **)(param_1 + 0x78));
    }
    if (*(int32_t **)(param_1 + 0x80) != PTR_DAT_1801eb180) {
      FUN_18013bf3c(*(int32_t **)(param_1 + 0x80));
    }
    if (*(int32_t **)(param_1 + 0x88) != PTR_DAT_1801eb188) {
      FUN_18013bf3c(*(int32_t **)(param_1 + 0x88));
    }
    if (*(int32_t **)(param_1 + 0x90) != PTR_DAT_1801eb190) {
      FUN_18013bf3c(*(int32_t **)(param_1 + 0x90));
    }
  }
  return;
}

// ---- Function: __acrt_locale_free_numeric ----
/* Library Function - Single Match
    __acrt_locale_free_numeric
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_locale_free_numeric(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
    if ((int32_t *)*param_1 != PTR_DAT_1801eb100) {
      FUN_18013bf3c((int32_t *)*param_1);
    }
    if ((int32_t *)param_1[1] != PTR_DAT_1801eb108) {
      FUN_18013bf3c((int32_t *)param_1[1]);
    }
    if ((int32_t *)param_1[2] != PTR_DAT_1801eb110) {
      FUN_18013bf3c((int32_t *)param_1[2]);
    }
    if ((int32_t *)param_1[0xb] != PTR_DAT_1801eb158) {
      FUN_18013bf3c((int32_t *)param_1[0xb]);
    }
    if ((int32_t *)param_1[0xc] != PTR_DAT_1801eb160) {
      FUN_18013bf3c((int32_t *)param_1[0xc]);
    }
  }
  return;
}

// ---- Function: FUN_18014587c ----
void FUN_18014587c(int32_t *param_1,longlong param_2)

{
  int32_t *puVar1;
  
  puVar1 = param_1 + param_2;
  if (param_1 != puVar1) {
    do {
      FUN_18013bf3c((LPVOID)*param_1);
      param_1 = param_1 + 1;
    } while (param_1 != puVar1);
  }
  return;
}

