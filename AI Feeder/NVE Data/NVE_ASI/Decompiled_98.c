#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_180155c20 ----
void FUN_180155c20(void)

{
  longlong lVar1;
  LPVOID pvVar2;
  code *pcVar3;
  longlong *plVar4;
  LPVOID pvVar5;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  plVar4 = (longlong *)(lVar1 + 0x130);
  if ((longlong *)*plVar4 != (longlong *)0x0) {
    FUN_1800c6090((longlong *)*plVar4,*(longlong **)(lVar1 + 0x138));
    pvVar2 = (LPVOID)*plVar4;
    pvVar5 = pvVar2;
    if ((0xfff < (ulonglong)(((*(longlong *)(lVar1 + 0x140) - (longlong)pvVar2) / 0x18) * 0x18)) &&
       (pvVar5 = *(LPVOID *)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar5)))) {
      FUN_18012b7b4();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    thunk_FUN_18012d5e8(pvVar5);
    *plVar4 = 0;
    *(int32_t *)(lVar1 + 0x138) = 0;
    *(int32_t *)(lVar1 + 0x140) = 0;
  }
  return;
}

// ---- Function: FUN_180156260 ----
void FUN_180156260(void)

{
  code *pcVar1;
  LPVOID pvVar2;
  
  if (DAT_1801ec6f0 != (LPVOID)0x0) {
    pvVar2 = DAT_1801ec6f0;
    if ((0xfff < (DAT_1801ec700 - (longlong)DAT_1801ec6f0 & 0xfffffffffffffff8U)) &&
       (pvVar2 = *(LPVOID *)((longlong)DAT_1801ec6f0 + -8),
       0x1f < (ulonglong)((longlong)DAT_1801ec6f0 + (-8 - (longlong)pvVar2)))) {
      FUN_18012b7b4();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    thunk_FUN_18012d5e8(pvVar2);
    DAT_1801ec6f0 = (LPVOID)0x0;
    DAT_1801ec6f8 = 0;
    DAT_1801ec700 = 0;
  }
  return;
}

// ---- Function: FUN_1801562d0 ----
void FUN_1801562d0(void)

{
  code *pcVar1;
  LPVOID pvVar2;
  
  if (DAT_1801ec6d8 != (LPVOID)0x0) {
    pvVar2 = DAT_1801ec6d8;
    if ((0xfff < (DAT_1801ec6e8 - (longlong)DAT_1801ec6d8 & 0xfffffffffffffff8U)) &&
       (pvVar2 = *(LPVOID *)((longlong)DAT_1801ec6d8 + -8),
       0x1f < (ulonglong)((longlong)DAT_1801ec6d8 + (-8 - (longlong)pvVar2)))) {
      FUN_18012b7b4();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    thunk_FUN_18012d5e8(pvVar2);
    DAT_1801ec6d8 = (LPVOID)0x0;
    DAT_1801ec6e0 = 0;
    DAT_1801ec6e8 = 0;
  }
  return;
}

// ---- Function: FUN_180156340 ----
void FUN_180156340(void)

{
  code *pcVar1;
  LPVOID pvVar2;
  
  if (DAT_1801ec6c0 != (LPVOID)0x0) {
    pvVar2 = DAT_1801ec6c0;
    if ((0xfff < (DAT_1801ec6d0 - (longlong)DAT_1801ec6c0 & 0xfffffffffffffff8U)) &&
       (pvVar2 = *(LPVOID *)((longlong)DAT_1801ec6c0 + -8),
       0x1f < (ulonglong)((longlong)DAT_1801ec6c0 + (-8 - (longlong)pvVar2)))) {
      FUN_18012b7b4();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    thunk_FUN_18012d5e8(pvVar2);
    DAT_1801ec6c0 = (LPVOID)0x0;
    DAT_1801ec6c8 = 0;
    DAT_1801ec6d0 = 0;
  }
  return;
}

// ---- Function: FUN_1801563d0 ----
void FUN_1801563d0(void)

{
  code *pcVar1;
  LPVOID pvVar2;
  
  if (DAT_1801ee950 != (LPVOID)0x0) {
    pvVar2 = DAT_1801ee950;
    if ((0xfff < (DAT_1801ee960 - (longlong)DAT_1801ee950 & 0xffffffffffffffe0U)) &&
       (pvVar2 = *(LPVOID *)((longlong)DAT_1801ee950 + -8),
       0x1f < (ulonglong)((longlong)DAT_1801ee950 + (-8 - (longlong)pvVar2)))) {
      FUN_18012b7b4();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    thunk_FUN_18012d5e8(pvVar2);
    DAT_1801ee950 = (LPVOID)0x0;
    _DAT_1801ee958 = 0;
    DAT_1801ee960 = 0;
  }
  return;
}

// ---- Function: FUN_180156450 ----
void FUN_180156450(void)

{
  FUN_1800a6800((longlong *)s_Medium_1801ec770);
  return;
}

// ---- Function: FUN_180156480 ----
void FUN_180156480(void)

{
  FUN_1800a6800((longlong *)s_Medium__1024__1801ec790);
  return;
}

// ---- Function: FUN_180156490 ----
void FUN_180156490(void)

{
  FUN_1800a6800((longlong *)s_Medium__1024__1801ec7b0);
  return;
}

// ---- Function: FUN_1801564b0 ----
void FUN_1801564b0(void)

{
  FUN_1800a6800((longlong *)s_Preset_1_1801ec7d0);
  return;
}

// ---- Function: FUN_1801564d0 ----
void FUN_1801564d0(void)

{
  FUN_1800a6800((longlong *)s_Low__Vanilla__1801ec7f0);
  return;
}

// ---- Function: FUN_1801564f0 ----
void FUN_1801564f0(void)

{
  code *pcVar1;
  LPVOID pvVar2;
  
  if (DAT_1801fcb38 != (LPVOID)0x0) {
    pvVar2 = DAT_1801fcb38;
    if ((0xfff < (DAT_1801fcb48 - (longlong)DAT_1801fcb38 & 0xfffffffffffffff8U)) &&
       (pvVar2 = *(LPVOID *)((longlong)DAT_1801fcb38 + -8),
       0x1f < (ulonglong)((longlong)DAT_1801fcb38 + (-8 - (longlong)pvVar2)))) {
      FUN_18012b7b4();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    thunk_FUN_18012d5e8(pvVar2);
    DAT_1801fcb38 = (LPVOID)0x0;
    _DAT_1801fcb40 = 0;
    DAT_1801fcb48 = 0;
  }
  FUN_1800a6800((longlong *)&DAT_1801fcb10);
  FUN_1800a6800((longlong *)&DAT_1801fcaf0);
  return;
}

// ---- Function: FUN_180156590 ----
void FUN_180156590(void)

{
  code *pcVar1;
  LPVOID pvVar2;
  
  if (DAT_1801fcf10 != (LPVOID)0x0) {
    pvVar2 = DAT_1801fcf10;
    if ((0xfff < (DAT_1801fcf20 - (longlong)DAT_1801fcf10 & 0xffffffffffffffe0U)) &&
       (pvVar2 = *(LPVOID *)((longlong)DAT_1801fcf10 + -8),
       0x1f < (ulonglong)((longlong)DAT_1801fcf10 + (-8 - (longlong)pvVar2)))) {
      FUN_18012b7b4();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    thunk_FUN_18012d5e8(pvVar2);
    DAT_1801fcf10 = (LPVOID)0x0;
    DAT_1801fcf18 = 0;
    DAT_1801fcf20 = 0;
  }
  return;
}

// ---- Function: FUN_180156610 ----
void FUN_180156610(void)

{
  code *pcVar1;
  LPVOID pvVar2;
  
  if (DAT_1801ec820 != (LPVOID)0x0) {
    pvVar2 = DAT_1801ec820;
    if ((0xfff < (DAT_1801ec830 - (longlong)DAT_1801ec820 & 0xfffffffffffffff0U)) &&
       (pvVar2 = *(LPVOID *)((longlong)DAT_1801ec820 + -8),
       0x1f < (ulonglong)((longlong)DAT_1801ec820 + (-8 - (longlong)pvVar2)))) {
      FUN_18012b7b4();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    thunk_FUN_18012d5e8(pvVar2);
    DAT_1801ec820 = (LPVOID)0x0;
    DAT_1801ec828 = 0;
    DAT_1801ec830 = 0;
  }
  return;
}

// ---- Function: FUN_180156680 ----
void FUN_180156680(void)

{
  code *pcVar1;
  LPVOID pvVar2;
  
  if (DAT_1801eca88 != (LPVOID)0x0) {
    pvVar2 = DAT_1801eca88;
    if ((0xfff < (DAT_1801eca98 - (longlong)DAT_1801eca88 & 0xfffffffffffffff8U)) &&
       (pvVar2 = *(LPVOID *)((longlong)DAT_1801eca88 + -8),
       0x1f < (ulonglong)((longlong)DAT_1801eca88 + (-8 - (longlong)pvVar2)))) {
      FUN_18012b7b4();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    thunk_FUN_18012d5e8(pvVar2);
    DAT_1801eca88 = (LPVOID)0x0;
    _DAT_1801eca90 = 0;
    DAT_1801eca98 = 0;
  }
  FUN_1800a6800((longlong *)&DAT_1801eca60);
  FUN_1800a6800((longlong *)&DAT_1801eca40);
  return;
}

// ---- Function: FUN_180156700 ----
void FUN_180156700(void)

{
  code *pcVar1;
  LPVOID pvVar2;
  
  if (DAT_1801eca08 != (LPVOID)0x0) {
    pvVar2 = DAT_1801eca08;
    if ((0xfff < (DAT_1801eca18 - (longlong)DAT_1801eca08 & 0xfffffffffffffff8U)) &&
       (pvVar2 = *(LPVOID *)((longlong)DAT_1801eca08 + -8),
       0x1f < (ulonglong)((longlong)DAT_1801eca08 + (-8 - (longlong)pvVar2)))) {
      FUN_18012b7b4();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    thunk_FUN_18012d5e8(pvVar2);
    DAT_1801eca08 = (LPVOID)0x0;
    DAT_1801eca10 = 0;
    DAT_1801eca18 = 0;
  }
  FUN_1800a6800((longlong *)&DAT_1801ec9e0);
  FUN_1800a6800((longlong *)&DAT_1801ec9c0);
  return;
}

// ---- Function: FUN_180156780 ----
void FUN_180156780(void)

{
  code *pcVar1;
  LPVOID pvVar2;
  
  if (DAT_1801ec988 != (LPVOID)0x0) {
    pvVar2 = DAT_1801ec988;
    if ((0xfff < (DAT_1801ec998 - (longlong)DAT_1801ec988 & 0xfffffffffffffff8U)) &&
       (pvVar2 = *(LPVOID *)((longlong)DAT_1801ec988 + -8),
       0x1f < (ulonglong)((longlong)DAT_1801ec988 + (-8 - (longlong)pvVar2)))) {
      FUN_18012b7b4();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    thunk_FUN_18012d5e8(pvVar2);
    DAT_1801ec988 = (LPVOID)0x0;
    DAT_1801ec990 = 0;
    DAT_1801ec998 = 0;
  }
  FUN_1800a6800((longlong *)&DAT_1801ec960);
  FUN_1800a6800((longlong *)&DAT_1801ec940);
  return;
}

// ---- Function: FUN_180156800 ----
void FUN_180156800(void)

{
  code *pcVar1;
  LPVOID pvVar2;
  
  if (DAT_1801ec908 != (LPVOID)0x0) {
    pvVar2 = DAT_1801ec908;
    if ((0xfff < (DAT_1801ec918 - (longlong)DAT_1801ec908 & 0xfffffffffffffff8U)) &&
       (pvVar2 = *(LPVOID *)((longlong)DAT_1801ec908 + -8),
       0x1f < (ulonglong)((longlong)DAT_1801ec908 + (-8 - (longlong)pvVar2)))) {
      FUN_18012b7b4();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    thunk_FUN_18012d5e8(pvVar2);
    DAT_1801ec908 = (LPVOID)0x0;
    DAT_1801ec910 = 0;
    DAT_1801ec918 = 0;
  }
  FUN_1800a6800((longlong *)&DAT_1801ec8e0);
  FUN_1800a6800((longlong *)&DAT_1801ec8c0);
  return;
}

