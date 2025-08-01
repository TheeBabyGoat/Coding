#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_180155853 ----
void FUN_180155853(void)

{
  __acrt_unlock(6);
  return;
}

// ---- Function: FUN_18015586c ----
void FUN_18015586c(int32_t param_1,longlong param_2)

{
  __acrt_lowio_unlock_fh(**(uint **)(param_2 + 0x48));
  return;
}

// ---- Function: FUN_180155886 ----
void FUN_180155886(int32_t param_1,longlong param_2)

{
  __acrt_lowio_unlock_fh(*(uint *)(param_2 + 0x60));
  return;
}

// ---- Function: FUN_18015589d ----
void FUN_18015589d(void)

{
  __acrt_unlock(7);
  return;
}

// ---- Function: FUN_1801558b6 ----
void FUN_1801558b6(int32_t param_1,longlong param_2)

{
  __acrt_lowio_unlock_fh(*(uint *)(param_2 + 0x40));
  return;
}

// ---- Function: FUN_1801558cd ----
void FUN_1801558cd(void)

{
  __acrt_unlock(8);
  return;
}

// ---- Function: FUN_1801558e6 ----
int32_t FUN_1801558e6(int32_t *param_1)

{
  int32_t uVar1;
  
  if ((*(int *)*param_1 == -0x3ffffffb) || (*(int *)*param_1 == -0x3fffffe3)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

// ---- Function: FUN_180155912 ----
void FUN_180155912(int32_t param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) != '\0') {
    __acrt_unlock(3);
  }
  return;
}

// ---- Function: FUN_180155933 ----
void FUN_180155933(int32_t param_1,longlong param_2)

{
  __acrt_unlock(**(int **)(param_2 + 0x68));
  return;
}

// ---- Function: FUN_18015594d ----
void FUN_18015594d(void)

{
  __acrt_unlock(5);
  return;
}

// ---- Function: FUN_180155966 ----
void FUN_180155966(void)

{
  __acrt_unlock(4);
  return;
}

// ---- Function: FUN_18015597f ----
void FUN_18015597f(int32_t param_1,longlong param_2)

{
  uint *puVar1;
  
  if (*(int *)(param_2 + 0x40) != 0) {
    if (*(int *)(param_2 + 0x44) != 0) {
      puVar1 = *(uint **)(param_2 + 0x80);
      *(byte *)((&DAT_1801ee410)[(longlong)(int)*puVar1 >> 6] + 0x38 +
               (ulonglong)(*puVar1 & 0x3f) * 0x48) =
           *(byte *)((&DAT_1801ee410)[(longlong)(int)*puVar1 >> 6] + 0x38 +
                    (ulonglong)(*puVar1 & 0x3f) * 0x48) & 0xfe;
    }
    __acrt_lowio_unlock_fh(**(uint **)(param_2 + 0x80));
  }
  return;
}

// ---- Function: FUN_180155a80 ----
void FUN_180155a80(void)

{
  FUN_1800a9720(&DAT_1801fb160,&DAT_1801fb160,*(longlong **)((longlong)DAT_1801fb160 + 8));
  thunk_FUN_18012d5e8(DAT_1801fb160);
  return;
}

// ---- Function: FUN_180155ac0 ----
void FUN_180155ac0(void)

{
  FUN_1800a97e0(&DAT_1801fb150,&DAT_1801fb150,*(longlong **)((longlong)DAT_1801fb150 + 8));
  thunk_FUN_18012d5e8(DAT_1801fb150);
  return;
}

// ---- Function: FUN_180155b00 ----
void FUN_180155b00(void)

{
  FUN_1800a97e0(&DAT_1801fb140,&DAT_1801fb140,*(longlong **)((longlong)DAT_1801fb140 + 8));
  thunk_FUN_18012d5e8(DAT_1801fb140);
  return;
}

// ---- Function: FUN_180155b40 ----
void FUN_180155b40(void)

{
  FUN_1800a97e0(&DAT_1801fb130,&DAT_1801fb130,*(longlong **)((longlong)DAT_1801fb130 + 8));
  thunk_FUN_18012d5e8(DAT_1801fb130);
  return;
}

// ---- Function: FUN_180155be0 ----
void FUN_180155be0(void)

{
  FUN_1800a6800((longlong *)s_Color_Preset_1_1801ec6a0);
  return;
}

