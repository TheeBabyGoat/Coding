#ifndef FUN_1800D0350_H
#define FUN_1800D0350_H

 FUN_1800d0350(lpAddress);
      FUN_1800d9270();
    }
    local_178 = 0;
    uStack_170 = 0;
    local_168 = 0;
    uStack_160 = 0;
    local_158 = 0;
    uStack_150 = 0;
    local_148 = 0;
    uStack_140 = uStack_140 & 0xffffffff00000000;
    uVar21 = uVar24;
    do {
      *(int *)((longlong)&uStack_140 + uVar21 * 4 + 4) =
           ((char)(&DAT_1801d4e90)[uVar21] * 0x67 + 3) % 0x7f;
      uVar21 = uVar21 + 1;
    } while ((longlong)uVar21 < 0x3b);
    do {
      iVar10 = ((*(int *)((longlong)&uStack_140 + uVar24 * 4 + 4) + -3) * 0x25) % 0x7f + 0x7f;
      *(char *)((longlong)&local_178 + uVar24) =
           (char)iVar10 +
           (((char)(iVar10 / 0x7f) + (char)(iVar10 >> 0x1f)) -
           (char)((longlong)iVar10 * 0x81020409 >> 0x3f)) * -0x7f;
      uVar24 = uVar24 + 1;
    } while (uVar24 < 0x3b);
    uStack_140._0_4_ = (uint)(uint3)uStack_140;
    lVar22 = -1;
    do {
      local_1e0 = (int32_t **)(lVar22 + 1);
      lVar3 = lVar22 + 1;
      lVar22 = (longlong)local_1e0;
    } while (*(char *)((longlong)&local_178 + lVar3) != '\0');
    local_1e8 = (code *)&local_178;
    puVar13 = (int32_t *)FUN_1800a68d0(&local_1e8);
    FUN_180121510(puVar13,&LAB_1800d1690,&DAT_1801fc970);
    local_1e8 = (code *)0x1801d50b8;
    local_1e0 = (int32_t **)0x17;
    puVar13 = (int32_t *)FUN_1800a68d0(&local_1e8);
    FUN_180121510(puVar13,&LAB_1800dcc20,(longlong *)&DAT_1801fca10);
    local_1e8 = (code *)0x1801d50d0;
    local_1e0 = (int32_t **)0x1e;
    piVar17 = (int *)FUN_1800a68d0(&local_1e8);
    DAT_1801fca08 = (longlong)piVar17 + (longlong)*piVar17 + 4;
    FUN_1800c2e90();
    if ((DAT_1801f3af0 == (HMODULE)0x0) &&
       (DAT_1801f3af0 = LoadLibraryA("IgcsConnector.addon64"), DAT_1801f3af0 == (HMODULE)0x0));
void FUN_1800d0350(int32_t param_1);

#endif
