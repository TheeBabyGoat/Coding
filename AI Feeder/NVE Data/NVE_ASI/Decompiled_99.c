#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_180156880 ----
void FUN_180156880(void)

{
  code *pcVar1;
  LPVOID pvVar2;
  
  if (DAT_1801ec888 != (LPVOID)0x0) {
    pvVar2 = DAT_1801ec888;
    if ((0xfff < (DAT_1801ec898 - (longlong)DAT_1801ec888 & 0xfffffffffffffff8U)) &&
       (pvVar2 = *(LPVOID *)((longlong)DAT_1801ec888 + -8),
       0x1f < (ulonglong)((longlong)DAT_1801ec888 + (-8 - (longlong)pvVar2)))) {
      FUN_18012b7b4();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    thunk_FUN_18012d5e8(pvVar2);
    DAT_1801ec888 = (LPVOID)0x0;
    DAT_1801ec890 = 0;
    DAT_1801ec898 = 0;
  }
  FUN_1800a6800((longlong *)&DAT_1801ec860);
  FUN_1800a6800((longlong *)&DAT_1801ec840);
  return;
}

// ---- Function: FUN_18015691c ----
void FUN_18015691c(void)

{
  int32_t *puVar1;
  longlong lVar2;
  
  while (puVar1 = DAT_1801ed270, DAT_1801ed270 != (int32_t *)0x0) {
    DAT_1801ed270 = (int32_t *)*DAT_1801ed270;
    lVar2 = (*(code *)PTR__guard_dispatch_icall_180157468)();
    if (lVar2 != 0) {
      (*(code *)PTR__guard_dispatch_icall_180157468)(lVar2,1);
    }
    FUN_18012d5e8(puVar1);
  }
  return;
}

// ---- Function: FUN_180156974 ----
void FUN_180156974(void)

{
  longlong lVar1;
  
  if (DAT_1801ed260 != 0) {
    lVar1 = (*(code *)PTR__guard_dispatch_icall_180157468)();
    if (lVar1 != 0) {
      (*(code *)PTR__guard_dispatch_icall_180157468)(lVar1,1);
    }
  }
  return;
}

// ---- Function: FUN_1801569c0 ----
void FUN_1801569c0(void)

{
  longlong lVar1;
  PVOID pvVar2;
  
  while (DAT_1801eb060 < 10) {
    lVar1 = DAT_1801eb060 * 8;
    DAT_1801eb060 = DAT_1801eb060 + 1;
    pvVar2 = DecodePointer(*(PVOID *)(&DAT_1801ed530 + lVar1));
    if (pvVar2 != (PVOID)0x0) {
      (*(code *)PTR__guard_dispatch_icall_180157468)();
    }
  }
  return;
}

