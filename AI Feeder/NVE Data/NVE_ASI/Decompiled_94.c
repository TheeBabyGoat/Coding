#include <stdint.h>
#include <stddef.h>

// ---- Function: _guard_dispatch_icall ----
void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    
                    
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

// ---- Function: _guard_dispatch_icall ----
void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    
                    
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

// ---- Function: memcmp ----
/* Library Function - Single Match
    memcmp
   
   Library: Visual Studio */

int __cdecl memcmp(void *_Buf1,void *_Buf2,size_t _Size)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  bool bVar5;
  
  lVar3 = (longlong)_Buf2 - (longlong)_Buf1;
  if (7 < _Size) {
    uVar4 = (ulonglong)_Buf1 & 7;
    while (uVar4 != 0) {
                    
      bVar5 = (byte)*_Buf1 < *(byte *)((longlong)_Buf1 + lVar3);
      if ((byte)*_Buf1 != *(byte *)((longlong)_Buf1 + lVar3)) goto LAB_180150f13;
      _Buf1 = (void *)((longlong)_Buf1 + 1);
      _Size = _Size - 1;
      uVar4 = (ulonglong)_Buf1 & 7;
    }
    if (_Size >> 3 != 0) {
      uVar4 = _Size >> 5;
      if (uVar4 != 0) {
        do {
                    
          uVar2 = *_Buf1;
          if (uVar2 != *(ulonglong *)((longlong)_Buf1 + lVar3)) goto LAB_180150f84;
          uVar2 = *(ulonglong *)((longlong)_Buf1 + 8);
          if (uVar2 != *(ulonglong *)((longlong)_Buf1 + lVar3 + 8)) {
LAB_180150f80:
            _Buf1 = (void *)((longlong)_Buf1 + 8);
            goto LAB_180150f84;
          }
          uVar2 = *(ulonglong *)((longlong)_Buf1 + 0x10);
          if (uVar2 != *(ulonglong *)((longlong)_Buf1 + lVar3 + 0x10)) {
LAB_180150f7c:
            _Buf1 = (void *)((longlong)_Buf1 + 8);
            goto LAB_180150f80;
          }
          uVar2 = *(ulonglong *)((longlong)_Buf1 + 0x18);
          if (uVar2 != *(ulonglong *)((longlong)_Buf1 + lVar3 + 0x18)) {
            _Buf1 = (void *)((longlong)_Buf1 + 8);
            goto LAB_180150f7c;
          }
          _Buf1 = (void *)((longlong)_Buf1 + 0x20);
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
        _Size = _Size & 0x1f;
      }
      uVar4 = _Size >> 3;
      if (uVar4 != 0) {
        do {
                    
          uVar2 = *_Buf1;
          if (uVar2 != *(ulonglong *)((longlong)_Buf1 + lVar3)) {
LAB_180150f84:
            uVar4 = *(ulonglong *)(lVar3 + (longlong)_Buf1);
            uVar1 = (uint)((uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 |
                            (uVar2 & 0xff0000000000) >> 0x18 | (uVar2 & 0xff00000000) >> 8 |
                            (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
                            (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38) <
                          (uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 |
                           (uVar4 & 0xff0000000000) >> 0x18 | (uVar4 & 0xff00000000) >> 8 |
                           (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18 |
                           (uVar4 & 0xff00) << 0x28 | uVar4 << 0x38));
            return (1 - uVar1) - (uint)(uVar1 != 0);
          }
          _Buf1 = (void *)((longlong)_Buf1 + 8);
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
        _Size = _Size & 7;
      }
    }
  }
  while( true ) {
    if (_Size == 0) {
      return 0;
    }
                    
    bVar5 = (byte)*_Buf1 < *(byte *)((longlong)_Buf1 + lVar3);
    if ((byte)*_Buf1 != *(byte *)((longlong)_Buf1 + lVar3)) break;
    _Buf1 = (void *)((longlong)_Buf1 + 1);
    _Size = _Size - 1;
  }
LAB_180150f13:
  return (1 - (uint)bVar5) - (uint)(bVar5 != 0);
}

// ---- Function: FUN_180150fd0 ----
void FUN_180150fd0(int32_t *param_1,int32_t *param_2,ulonglong param_3)

{
  int32_t *puVar1;
  int32_t *puVar2;
  int32_t auVar3 [32];
  int32_t auVar4 [32];
  int32_t auVar5 [32];
  int32_t auVar6 [32];
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  int32_t uVar11;
  int32_t uVar12;
  int32_t uVar13;
  int32_t uVar14;
  int32_t uVar15;
  int32_t uVar16;
  int32_t uVar17;
  int32_t uVar18;
  int32_t uVar19;
  int32_t uVar20;
  int32_t uVar21;
  int32_t uVar22;
  int32_t (*pauVar23) [32];
  int32_t (*pauVar24) [32];
  int32_t *puVar25;
  int32_t (*pauVar26) [32];
  int32_t (*pauVar27) [32];
  int32_t *puVar28;
  ulonglong uVar29;
  longlong lVar30;
  ulonglong uVar31;
  int32_t uVar32;
  int32_t uVar33;
  
  switch(param_3) {
  case 0:
    return;
  case 1:
    *(int32_t *)param_1 = *(int32_t *)param_2;
    return;
  case 2:
    *(int32_t *)param_1 = *(int32_t *)param_2;
    return;
  case 3:
    uVar7 = *(int32_t *)((longlong)param_2 + 2);
    *(int32_t *)param_1 = *(int32_t *)param_2;
    *(int32_t *)((longlong)param_1 + 2) = uVar7;
    return;
  case 4:
    *(int32_t *)param_1 = *(int32_t *)param_2;
    return;
  case 5:
    uVar7 = *(int32_t *)((longlong)param_2 + 4);
    *(int32_t *)param_1 = *(int32_t *)param_2;
    *(int32_t *)((longlong)param_1 + 4) = uVar7;
    return;
  case 6:
    uVar8 = *(int32_t *)((longlong)param_2 + 4);
    *(int32_t *)param_1 = *(int32_t *)param_2;
    *(int32_t *)((longlong)param_1 + 4) = uVar8;
    return;
  case 7:
    uVar8 = *(int32_t *)((longlong)param_2 + 4);
    uVar7 = *(int32_t *)((longlong)param_2 + 6);
    *(int32_t *)param_1 = *(int32_t *)param_2;
    *(int32_t *)((longlong)param_1 + 4) = uVar8;
    *(int32_t *)((longlong)param_1 + 6) = uVar7;
    return;
  case 8:
    *param_1 = *param_2;
    return;
  case 9:
    uVar7 = *(int32_t *)(param_2 + 1);
    *param_1 = *param_2;
    *(int32_t *)(param_1 + 1) = uVar7;
    return;
  case 10:
    uVar8 = *(int32_t *)(param_2 + 1);
    *param_1 = *param_2;
    *(int32_t *)(param_1 + 1) = uVar8;
    return;
  case 0xb:
    uVar8 = *(int32_t *)(param_2 + 1);
    uVar7 = *(int32_t *)((longlong)param_2 + 10);
    *param_1 = *param_2;
    *(int32_t *)(param_1 + 1) = uVar8;
    *(int32_t *)((longlong)param_1 + 10) = uVar7;
    return;
  case 0xc:
    uVar9 = *(int32_t *)(param_2 + 1);
    *param_1 = *param_2;
    *(int32_t *)(param_1 + 1) = uVar9;
    return;
  case 0xd:
    uVar9 = *(int32_t *)(param_2 + 1);
    uVar7 = *(int32_t *)((longlong)param_2 + 0xc);
    *param_1 = *param_2;
    *(int32_t *)(param_1 + 1) = uVar9;
    *(int32_t *)((longlong)param_1 + 0xc) = uVar7;
    return;
  case 0xe:
    uVar9 = *(int32_t *)(param_2 + 1);
    uVar8 = *(int32_t *)((longlong)param_2 + 0xc);
    *param_1 = *param_2;
    *(int32_t *)(param_1 + 1) = uVar9;
    *(int32_t *)((longlong)param_1 + 0xc) = uVar8;
    return;
  case 0xf:
    uVar9 = *(int32_t *)(param_2 + 1);
    uVar8 = *(int32_t *)((longlong)param_2 + 0xc);
    uVar7 = *(int32_t *)((longlong)param_2 + 0xe);
    *param_1 = *param_2;
    *(int32_t *)(param_1 + 1) = uVar9;
    *(int32_t *)((longlong)param_1 + 0xc) = uVar8;
    *(int32_t *)((longlong)param_1 + 0xe) = uVar7;
    return;
  }
  if (param_3 < 0x21) {
    uVar10 = param_2[1];
    puVar25 = (int32_t *)((longlong)param_2 + (param_3 - 0x10));
    uVar11 = *puVar25;
    uVar12 = puVar25[1];
    *param_1 = *param_2;
    param_1[1] = uVar10;
    puVar25 = (int32_t *)((longlong)param_1 + (param_3 - 0x10));
    *puVar25 = uVar11;
    puVar25[1] = uVar12;
    return;
  }
  puVar25 = (int32_t *)((longlong)param_2 + param_3);
  if (param_1 <= param_2) {
    puVar25 = param_1;
  }
  if (puVar25 <= param_1) {
    if (DAT_1801eb0d0 < 3) {
      if ((param_3 < 0x801) || (((byte)DAT_1801ed6d8 & 2) == 0)) {
        if (0x80 < param_3) {
          lVar30 = ((ulonglong)param_1 & 0xf) - 0x10;
          puVar25 = (int32_t *)((longlong)param_1 - lVar30);
          puVar28 = (int32_t *)((longlong)param_2 - lVar30);
          param_3 = param_3 + lVar30;
          if (0x80 < param_3) {
            do {
              uVar10 = puVar28[1];
              uVar11 = puVar28[2];
              uVar12 = puVar28[3];
              uVar13 = puVar28[4];
              uVar32 = puVar28[5];
              uVar33 = puVar28[6];
              uVar14 = puVar28[7];
              *puVar25 = *puVar28;
              puVar25[1] = uVar10;
              puVar25[2] = uVar11;
              puVar25[3] = uVar12;
              puVar25[4] = uVar13;
              puVar25[5] = uVar32;
              puVar25[6] = uVar33;
              puVar25[7] = uVar14;
              uVar10 = puVar28[9];
              uVar11 = puVar28[10];
              uVar12 = puVar28[0xb];
              uVar13 = puVar28[0xc];
              uVar32 = puVar28[0xd];
              uVar33 = puVar28[0xe];
              uVar14 = puVar28[0xf];
              puVar25[8] = puVar28[8];
              puVar25[9] = uVar10;
              puVar25[10] = uVar11;
              puVar25[0xb] = uVar12;
              puVar25[0xc] = uVar13;
              puVar25[0xd] = uVar32;
              puVar25[0xe] = uVar33;
              puVar25[0xf] = uVar14;
              puVar25 = puVar25 + 0x10;
              puVar28 = puVar28 + 0x10;
              param_3 = param_3 - 0x80;
            } while (0x7f < param_3);
          }
        }
                    
                    
        (*(code *)((ulonglong)*(uint *)(&DAT_1801dd738 + (param_3 + 0xf >> 4) * 4) + 0x180000000))()
        ;
        return;
      }
    }
    else if (((param_3 < 0x2001) || (0x180000 < param_3)) || (((byte)DAT_1801ed6d8 & 2) == 0)) {
      uVar10 = *param_2;
      uVar11 = param_2[1];
      uVar12 = param_2[2];
      uVar13 = param_2[3];
      puVar25 = (int32_t *)((longlong)param_2 + (param_3 - 0x20));
      uVar32 = *puVar25;
      uVar33 = puVar25[1];
      uVar14 = puVar25[2];
      uVar15 = puVar25[3];
      if (0x100 < param_3) {
        lVar30 = ((ulonglong)param_1 & 0x1f) - 0x20;
        pauVar23 = (int32_t (*) [32])((longlong)param_1 - lVar30);
        pauVar26 = (int32_t (*) [32])((longlong)param_2 - lVar30);
        param_3 = param_3 + lVar30;
        if (0x100 < param_3) {
          if (0x180000 < param_3) {
            do {
              uVar29 = param_3;
              pauVar27 = pauVar26;
              pauVar24 = pauVar23;
              auVar3 = pauVar27[1];
              auVar4 = pauVar27[2];
              auVar5 = pauVar27[3];
              auVar6 = vmovntdq_avx(*pauVar27);
              *pauVar24 = auVar6;
              auVar3 = vmovntdq_avx(auVar3);
              pauVar24[1] = auVar3;
              auVar3 = vmovntdq_avx(auVar4);
              pauVar24[2] = auVar3;
              auVar3 = vmovntdq_avx(auVar5);
              pauVar24[3] = auVar3;
              auVar3 = pauVar27[5];
              auVar4 = pauVar27[6];
              auVar5 = pauVar27[7];
              auVar6 = vmovntdq_avx(pauVar27[4]);
              pauVar24[4] = auVar6;
              auVar3 = vmovntdq_avx(auVar3);
              pauVar24[5] = auVar3;
              auVar3 = vmovntdq_avx(auVar4);
              pauVar24[6] = auVar3;
              auVar3 = vmovntdq_avx(auVar5);
              pauVar24[7] = auVar3;
              pauVar23 = pauVar24 + 8;
              pauVar26 = pauVar27 + 8;
              param_3 = uVar29 - 0x100;
            } while (0xff < uVar29 - 0x100);
            uVar31 = uVar29 - 0xe1 & 0xffffffffffffffe0;
            switch(uVar29) {
            case 0x1e1:
            case 0x1e2:
            case 0x1e3:
            case 0x1e4:
            case 0x1e5:
            case 0x1e6:
            case 0x1e7:
            case 0x1e8:
            case 0x1e9:
            case 0x1ea:
            case 0x1eb:
            case 0x1ec:
            case 0x1ed:
            case 0x1ee:
            case 0x1ef:
            case 0x1f0:
            case 0x1f1:
            case 0x1f2:
            case 499:
            case 500:
            case 0x1f5:
            case 0x1f6:
            case 0x1f7:
            case 0x1f8:
            case 0x1f9:
            case 0x1fa:
            case 0x1fb:
            case 0x1fc:
            case 0x1fd:
            case 0x1fe:
            case 0x1ff:
              auVar3 = vmovntdq_avx(*(int32_t (*) [32])(*pauVar27 + uVar31));
              *(int32_t (*) [32])(*pauVar24 + uVar31) = auVar3;
            case 0x1c1:
            case 0x1c2:
            case 0x1c3:
            case 0x1c4:
            case 0x1c5:
            case 0x1c6:
            case 0x1c7:
            case 0x1c8:
            case 0x1c9:
            case 0x1ca:
            case 0x1cb:
            case 0x1cc:
            case 0x1cd:
            case 0x1ce:
            case 0x1cf:
            case 0x1d0:
            case 0x1d1:
            case 0x1d2:
            case 0x1d3:
            case 0x1d4:
            case 0x1d5:
            case 0x1d6:
            case 0x1d7:
            case 0x1d8:
            case 0x1d9:
            case 0x1da:
            case 0x1db:
            case 0x1dc:
            case 0x1dd:
            case 0x1de:
            case 0x1df:
            case 0x1e0:
              auVar3 = vmovntdq_avx(*(int32_t (*) [32])(pauVar27[1] + uVar31));
              *(int32_t (*) [32])(pauVar24[1] + uVar31) = auVar3;
            case 0x1a1:
            case 0x1a2:
            case 0x1a3:
            case 0x1a4:
            case 0x1a5:
            case 0x1a6:
            case 0x1a7:
            case 0x1a8:
            case 0x1a9:
            case 0x1aa:
            case 0x1ab:
            case 0x1ac:
            case 0x1ad:
            case 0x1ae:
            case 0x1af:
            case 0x1b0:
            case 0x1b1:
            case 0x1b2:
            case 0x1b3:
            case 0x1b4:
            case 0x1b5:
            case 0x1b6:
            case 0x1b7:
            case 0x1b8:
            case 0x1b9:
            case 0x1ba:
            case 0x1bb:
            case 0x1bc:
            case 0x1bd:
            case 0x1be:
            case 0x1bf:
            case 0x1c0:
              auVar3 = vmovntdq_avx(*(int32_t (*) [32])(pauVar27[2] + uVar31));
              *(int32_t (*) [32])(pauVar24[2] + uVar31) = auVar3;
            case 0x181:
            case 0x182:
            case 0x183:
            case 0x184:
            case 0x185:
            case 0x186:
            case 0x187:
            case 0x188:
            case 0x189:
            case 0x18a:
            case 0x18b:
            case 0x18c:
            case 0x18d:
            case 0x18e:
            case 399:
            case 400:
            case 0x191:
            case 0x192:
            case 0x193:
            case 0x194:
            case 0x195:
            case 0x196:
            case 0x197:
            case 0x198:
            case 0x199:
            case 0x19a:
            case 0x19b:
            case 0x19c:
            case 0x19d:
            case 0x19e:
            case 0x19f:
            case 0x1a0:
              auVar3 = vmovntdq_avx(*(int32_t (*) [32])(pauVar27[3] + uVar31));
              *(int32_t (*) [32])(pauVar24[3] + uVar31) = auVar3;
            case 0x161:
            case 0x162:
            case 0x163:
            case 0x164:
            case 0x165:
            case 0x166:
            case 0x167:
            case 0x168:
            case 0x169:
            case 0x16a:
            case 0x16b:
            case 0x16c:
            case 0x16d:
            case 0x16e:
            case 0x16f:
            case 0x170:
            case 0x171:
            case 0x172:
            case 0x173:
            case 0x174:
            case 0x175:
            case 0x176:
            case 0x177:
            case 0x178:
            case 0x179:
            case 0x17a:
            case 0x17b:
            case 0x17c:
            case 0x17d:
            case 0x17e:
            case 0x17f:
            case 0x180:
              auVar3 = vmovntdq_avx(*(int32_t (*) [32])(pauVar27[4] + uVar31));
              *(int32_t (*) [32])(pauVar24[4] + uVar31) = auVar3;
            case 0x141:
            case 0x142:
            case 0x143:
            case 0x144:
            case 0x145:
            case 0x146:
            case 0x147:
            case 0x148:
            case 0x149:
            case 0x14a:
            case 0x14b:
            case 0x14c:
            case 0x14d:
            case 0x14e:
            case 0x14f:
            case 0x150:
            case 0x151:
            case 0x152:
            case 0x153:
            case 0x154:
            case 0x155:
            case 0x156:
            case 0x157:
            case 0x158:
            case 0x159:
            case 0x15a:
            case 0x15b:
            case 0x15c:
            case 0x15d:
            case 0x15e:
            case 0x15f:
            case 0x160:
              auVar3 = vmovntdq_avx(*(int32_t (*) [32])(pauVar27[5] + uVar31));
              *(int32_t (*) [32])(pauVar24[5] + uVar31) = auVar3;
            case 0x121:
            case 0x122:
            case 0x123:
            case 0x124:
            case 0x125:
            case 0x126:
            case 0x127:
            case 0x128:
            case 0x129:
            case 0x12a:
            case 299:
            case 300:
            case 0x12d:
            case 0x12e:
            case 0x12f:
            case 0x130:
            case 0x131:
            case 0x132:
            case 0x133:
            case 0x134:
            case 0x135:
            case 0x136:
            case 0x137:
            case 0x138:
            case 0x139:
            case 0x13a:
            case 0x13b:
            case 0x13c:
            case 0x13d:
            case 0x13e:
            case 0x13f:
            case 0x140:
              auVar3 = vmovntdq_avx(*(int32_t (*) [32])(pauVar27[6] + uVar31));
              *(int32_t (*) [32])(pauVar24[6] + uVar31) = auVar3;
            default:
              puVar25 = (int32_t *)(pauVar24[-1] + uVar29);
              *puVar25 = uVar32;
              puVar25[1] = uVar33;
              puVar25[2] = uVar14;
              puVar25[3] = uVar15;
            case 0x100:
              *param_1 = uVar10;
              param_1[1] = uVar11;
              param_1[2] = uVar12;
              param_1[3] = uVar13;
              return;
            }
          }
          do {
            uVar10 = *(int32_t *)(*pauVar26 + 8);
            uVar11 = *(int32_t *)(*pauVar26 + 0x10);
            uVar12 = *(int32_t *)(*pauVar26 + 0x18);
            uVar13 = *(int32_t *)pauVar26[1];
            uVar32 = *(int32_t *)(pauVar26[1] + 8);
            uVar33 = *(int32_t *)(pauVar26[1] + 0x10);
            uVar14 = *(int32_t *)(pauVar26[1] + 0x18);
            uVar15 = *(int32_t *)pauVar26[2];
            uVar16 = *(int32_t *)(pauVar26[2] + 8);
            uVar17 = *(int32_t *)(pauVar26[2] + 0x10);
            uVar18 = *(int32_t *)(pauVar26[2] + 0x18);
            uVar19 = *(int32_t *)pauVar26[3];
            uVar20 = *(int32_t *)(pauVar26[3] + 8);
            uVar21 = *(int32_t *)(pauVar26[3] + 0x10);
            uVar22 = *(int32_t *)(pauVar26[3] + 0x18);
            *(int32_t *)*pauVar23 = *(int32_t *)*pauVar26;
            *(int32_t *)(*pauVar23 + 8) = uVar10;
            *(int32_t *)(*pauVar23 + 0x10) = uVar11;
            *(int32_t *)(*pauVar23 + 0x18) = uVar12;
            *(int32_t *)pauVar23[1] = uVar13;
            *(int32_t *)(pauVar23[1] + 8) = uVar32;
            *(int32_t *)(pauVar23[1] + 0x10) = uVar33;
            *(int32_t *)(pauVar23[1] + 0x18) = uVar14;
            *(int32_t *)pauVar23[2] = uVar15;
            *(int32_t *)(pauVar23[2] + 8) = uVar16;
            *(int32_t *)(pauVar23[2] + 0x10) = uVar17;
            *(int32_t *)(pauVar23[2] + 0x18) = uVar18;
            *(int32_t *)pauVar23[3] = uVar19;
            *(int32_t *)(pauVar23[3] + 8) = uVar20;
            *(int32_t *)(pauVar23[3] + 0x10) = uVar21;
            *(int32_t *)(pauVar23[3] + 0x18) = uVar22;
            uVar10 = *(int32_t *)(pauVar26[4] + 8);
            uVar11 = *(int32_t *)(pauVar26[4] + 0x10);
            uVar12 = *(int32_t *)(pauVar26[4] + 0x18);
            uVar13 = *(int32_t *)pauVar26[5];
            uVar32 = *(int32_t *)(pauVar26[5] + 8);
            uVar33 = *(int32_t *)(pauVar26[5] + 0x10);
            uVar14 = *(int32_t *)(pauVar26[5] + 0x18);
            uVar15 = *(int32_t *)pauVar26[6];
            uVar16 = *(int32_t *)(pauVar26[6] + 8);
            uVar17 = *(int32_t *)(pauVar26[6] + 0x10);
            uVar18 = *(int32_t *)(pauVar26[6] + 0x18);
            uVar19 = *(int32_t *)pauVar26[7];
            uVar20 = *(int32_t *)(pauVar26[7] + 8);
            uVar21 = *(int32_t *)(pauVar26[7] + 0x10);
            uVar22 = *(int32_t *)(pauVar26[7] + 0x18);
            *(int32_t *)pauVar23[4] = *(int32_t *)pauVar26[4];
            *(int32_t *)(pauVar23[4] + 8) = uVar10;
            *(int32_t *)(pauVar23[4] + 0x10) = uVar11;
            *(int32_t *)(pauVar23[4] + 0x18) = uVar12;
            *(int32_t *)pauVar23[5] = uVar13;
            *(int32_t *)(pauVar23[5] + 8) = uVar32;
            *(int32_t *)(pauVar23[5] + 0x10) = uVar33;
            *(int32_t *)(pauVar23[5] + 0x18) = uVar14;
            *(int32_t *)pauVar23[6] = uVar15;
            *(int32_t *)(pauVar23[6] + 8) = uVar16;
            *(int32_t *)(pauVar23[6] + 0x10) = uVar17;
            *(int32_t *)(pauVar23[6] + 0x18) = uVar18;
            *(int32_t *)pauVar23[7] = uVar19;
            *(int32_t *)(pauVar23[7] + 8) = uVar20;
            *(int32_t *)(pauVar23[7] + 0x10) = uVar21;
            *(int32_t *)(pauVar23[7] + 0x18) = uVar22;
            pauVar23 = pauVar23 + 8;
            pauVar26 = pauVar26 + 8;
            param_3 = param_3 - 0x100;
          } while (0xff < param_3);
        }
      }
                    
                    
      (*(code *)((ulonglong)*(uint *)(&DAT_1801dd6f0 + (param_3 + 0x1f >> 5) * 4) + 0x180000000))();
      return;
    }
    for (; param_3 != 0; param_3 = param_3 - 1) {
      *(int32_t *)param_1 = *(int32_t *)param_2;
      param_2 = (int32_t *)((longlong)param_2 + 1);
      param_1 = (int32_t *)((longlong)param_1 + 1);
    }
    return;
  }
  uVar10 = *param_2;
  uVar11 = param_2[1];
  lVar30 = (longlong)param_2 - (longlong)param_1;
  puVar25 = (int32_t *)((longlong)param_1 + lVar30 + (param_3 - 0x10));
  uVar12 = *puVar25;
  uVar13 = puVar25[1];
  puVar28 = (int32_t *)((longlong)param_1 + (param_3 - 0x10));
  uVar29 = param_3 - 0x10;
  puVar25 = puVar28;
  uVar32 = uVar12;
  uVar33 = uVar13;
  if (((ulonglong)puVar28 & 0xf) != 0) {
    puVar25 = (int32_t *)((ulonglong)puVar28 & 0xfffffffffffffff0);
    uVar32 = *(int32_t *)((longlong)puVar25 + lVar30);
    uVar33 = ((int32_t *)((longlong)puVar25 + lVar30))[1];
    *puVar28 = uVar12;
    *(int32_t *)((longlong)param_1 + (param_3 - 8)) = uVar13;
    uVar29 = (longlong)puVar25 - (longlong)param_1;
  }
  uVar31 = uVar29 >> 7;
  if (uVar31 != 0) {
    *puVar25 = uVar32;
    puVar25[1] = uVar33;
    puVar28 = puVar25;
    while( true ) {
      puVar1 = (int32_t *)((longlong)puVar28 + lVar30 + -0x10);
      uVar12 = puVar1[1];
      puVar25 = (int32_t *)((longlong)puVar28 + lVar30 + -0x20);
      uVar13 = *puVar25;
      uVar32 = puVar25[1];
      puVar25 = puVar28 + -0x10;
      puVar28[-2] = *puVar1;
      puVar28[-1] = uVar12;
      puVar28[-4] = uVar13;
      puVar28[-3] = uVar32;
      puVar1 = (int32_t *)((longlong)puVar28 + lVar30 + -0x30);
      uVar12 = puVar1[1];
      puVar2 = (int32_t *)((longlong)puVar28 + lVar30 + -0x40);
      uVar13 = *puVar2;
      uVar32 = puVar2[1];
      uVar31 = uVar31 - 1;
      puVar28[-6] = *puVar1;
      puVar28[-5] = uVar12;
      puVar28[-8] = uVar13;
      puVar28[-7] = uVar32;
      puVar1 = (int32_t *)((longlong)puVar28 + lVar30 + -0x50);
      uVar12 = puVar1[1];
      puVar2 = (int32_t *)((longlong)puVar28 + lVar30 + -0x60);
      uVar13 = *puVar2;
      uVar32 = puVar2[1];
      puVar28[-10] = *puVar1;
      puVar28[-9] = uVar12;
      puVar28[-0xc] = uVar13;
      puVar28[-0xb] = uVar32;
      puVar1 = (int32_t *)((longlong)puVar28 + lVar30 + -0x70);
      uVar12 = *puVar1;
      uVar13 = puVar1[1];
      uVar32 = *(int32_t *)((longlong)puVar25 + lVar30);
      uVar33 = ((int32_t *)((longlong)puVar25 + lVar30))[1];
      if (uVar31 == 0) break;
      puVar28[-0xe] = uVar12;
      puVar28[-0xd] = uVar13;
      *puVar25 = uVar32;
      puVar28[-0xf] = uVar33;
      puVar28 = puVar25;
    }
    puVar28[-0xe] = uVar12;
    puVar28[-0xd] = uVar13;
    uVar29 = uVar29 & 0x7f;
  }
  for (uVar31 = uVar29 >> 4; uVar31 != 0; uVar31 = uVar31 - 1) {
    *puVar25 = uVar32;
    puVar25[1] = uVar33;
    puVar25 = puVar25 + -2;
    uVar32 = *(int32_t *)((longlong)puVar25 + lVar30);
    uVar33 = ((int32_t *)((longlong)puVar25 + lVar30))[1];
  }
  if ((uVar29 & 0xf) != 0) {
    *param_1 = uVar10;
    param_1[1] = uVar11;
  }
  *puVar25 = uVar32;
  puVar25[1] = uVar33;
  return;
}

// ---- Function: FUN_180151670 ----
int32_t (*) [32] FUN_180151670(int32_t (*param_1) [32],byte param_2,ulonglong param_3)

{
  int32_t auVar1 [32];
  int32_t (*pauVar2) [32];
  int32_t (*pauVar3) [32];
  int32_t (*pauVar4) [16];
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  int32_t uVar8;
  longlong lVar11;
  int32_t auVar12 [16];
  int32_t auVar13 [32];
  int32_t uVar9;
  int32_t uVar10;
  
  uVar5 = (ulonglong)param_2;
  lVar11 = uVar5 * 0x101010101010101;
  uVar8 = (int32_t)lVar11;
  uVar9 = (int32_t)lVar11;
  uVar10 = (int32_t)lVar11;
  switch(param_3) {
  case 0:
    return param_1;
  case 8:
    *(longlong *)(param_1[-1] + param_3 + 0x18) = lVar11;
    return param_1;
  case 9:
    *(longlong *)(param_1[-1] + param_3 + 0x17) = lVar11;
    param_1[-1][param_3 + 0x1f] = uVar8;
    return param_1;
  case 10:
    *(longlong *)(param_1[-1] + param_3 + 0x16) = lVar11;
    *(int32_t *)(param_1[-1] + param_3 + 0x1e) = uVar9;
    return param_1;
  case 0xb:
    *(longlong *)(param_1[-1] + param_3 + 0x15) = lVar11;
    *(int32_t *)(param_1[-1] + param_3 + 0x1d) = uVar9;
    param_1[-1][param_3 + 0x1f] = uVar8;
    return param_1;
  case 0xc:
    *(longlong *)(param_1[-1] + param_3 + 0x14) = lVar11;
  case 4:
    *(int32_t *)(param_1[-1] + param_3 + 0x1c) = uVar10;
    return param_1;
  case 0xd:
    *(longlong *)(param_1[-1] + param_3 + 0x13) = lVar11;
  case 5:
    *(int32_t *)(param_1[-1] + param_3 + 0x1b) = uVar10;
    param_1[-1][param_3 + 0x1f] = uVar8;
    return param_1;
  case 0xe:
    *(longlong *)(param_1[-1] + param_3 + 0x12) = lVar11;
  case 6:
    *(int32_t *)(param_1[-1] + param_3 + 0x1a) = uVar10;
  case 2:
    *(int32_t *)(param_1[-1] + param_3 + 0x1e) = uVar9;
    return param_1;
  case 0xf:
    *(longlong *)(param_1[-1] + param_3 + 0x11) = lVar11;
  case 7:
    *(int32_t *)(param_1[-1] + param_3 + 0x19) = uVar10;
  case 3:
    *(int32_t *)(param_1[-1] + param_3 + 0x1d) = uVar9;
  case 1:
    param_1[-1][param_3 + 0x1f] = uVar8;
    return param_1;
  }
  auVar12._8_8_ = lVar11;
  auVar12._0_8_ = lVar11;
  if (param_3 < 0x21) {
    *(int32_t (*) [16])*param_1 = auVar12;
    *(int32_t (*) [16])(param_1[-1] + param_3 + 0x10) = auVar12;
    return param_1;
  }
  pauVar2 = param_1;
  if (DAT_1801eb0d0 < 3) {
    if ((param_3 <= DAT_1801eb0d8) || (((byte)DAT_1801ed6d8 & 2) == 0)) {
      lVar11 = ((ulonglong)param_1 & 0xf) - 0x10;
      pauVar4 = (int32_t (*) [16])((longlong)param_1 - lVar11);
      uVar6 = param_3 + lVar11;
      if (0x80 < uVar6) {
        do {
          *pauVar4 = auVar12;
          pauVar4[1] = auVar12;
          pauVar4[2] = auVar12;
          pauVar4[3] = auVar12;
          pauVar4[4] = auVar12;
          pauVar4[5] = auVar12;
          pauVar4[6] = auVar12;
          pauVar4[7] = auVar12;
          pauVar4 = pauVar4 + 8;
          uVar6 = uVar6 - 0x80;
        } while (0x7f < uVar6);
      }
                    
                    
      pauVar2 = (int32_t (*) [32])
                (*(code *)((ulonglong)*(uint *)(&DAT_1801dd7e8 + (uVar6 + 0xf >> 4) * 4) +
                          0x180000000))(pauVar4,uVar5 - lVar11);
      return pauVar2;
    }
  }
  else if (((param_3 <= DAT_1801eb0d8) || (DAT_1801eb0e0 < param_3)) ||
          (((byte)DAT_1801ed6d8 & 2) == 0)) {
    auVar13._16_16_ = auVar12;
    auVar13._0_16_ = auVar12;
    lVar7 = ((ulonglong)param_1 & 0x1f) - 0x20;
    pauVar2 = (int32_t (*) [32])((longlong)param_1 - lVar7);
    uVar6 = param_3 + lVar7;
    if (0x100 < uVar6) {
      if (DAT_1801eb0e0 < uVar6) {
        do {
          uVar5 = uVar6;
          pauVar3 = pauVar2;
          auVar1 = vmovntdq_avx(auVar13);
          *pauVar3 = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[1] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[2] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[3] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[4] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[5] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[6] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[7] = auVar1;
          pauVar2 = pauVar3 + 8;
          uVar6 = uVar5 - 0x100;
        } while (0xff < uVar5 - 0x100);
        uVar6 = uVar5 - 0xe1 & 0xffffffffffffffe0;
        switch(uVar5) {
        case 0x1e1:
        case 0x1e2:
        case 0x1e3:
        case 0x1e4:
        case 0x1e5:
        case 0x1e6:
        case 0x1e7:
        case 0x1e8:
        case 0x1e9:
        case 0x1ea:
        case 0x1eb:
        case 0x1ec:
        case 0x1ed:
        case 0x1ee:
        case 0x1ef:
        case 0x1f0:
        case 0x1f1:
        case 0x1f2:
        case 499:
        case 500:
        case 0x1f5:
        case 0x1f6:
        case 0x1f7:
        case 0x1f8:
        case 0x1f9:
        case 0x1fa:
        case 0x1fb:
        case 0x1fc:
        case 0x1fd:
        case 0x1fe:
        case 0x1ff:
          auVar1 = vmovntdq_avx(auVar13);
          *(int32_t (*) [32])(*pauVar3 + uVar6) = auVar1;
        case 0x1c1:
        case 0x1c2:
        case 0x1c3:
        case 0x1c4:
        case 0x1c5:
        case 0x1c6:
        case 0x1c7:
        case 0x1c8:
        case 0x1c9:
        case 0x1ca:
        case 0x1cb:
        case 0x1cc:
        case 0x1cd:
        case 0x1ce:
        case 0x1cf:
        case 0x1d0:
        case 0x1d1:
        case 0x1d2:
        case 0x1d3:
        case 0x1d4:
        case 0x1d5:
        case 0x1d6:
        case 0x1d7:
        case 0x1d8:
        case 0x1d9:
        case 0x1da:
        case 0x1db:
        case 0x1dc:
        case 0x1dd:
        case 0x1de:
        case 0x1df:
        case 0x1e0:
          auVar1 = vmovntdq_avx(auVar13);
          *(int32_t (*) [32])(pauVar3[1] + uVar6) = auVar1;
        case 0x1a1:
        case 0x1a2:
        case 0x1a3:
        case 0x1a4:
        case 0x1a5:
        case 0x1a6:
        case 0x1a7:
        case 0x1a8:
        case 0x1a9:
        case 0x1aa:
        case 0x1ab:
        case 0x1ac:
        case 0x1ad:
        case 0x1ae:
        case 0x1af:
        case 0x1b0:
        case 0x1b1:
        case 0x1b2:
        case 0x1b3:
        case 0x1b4:
        case 0x1b5:
        case 0x1b6:
        case 0x1b7:
        case 0x1b8:
        case 0x1b9:
        case 0x1ba:
        case 0x1bb:
        case 0x1bc:
        case 0x1bd:
        case 0x1be:
        case 0x1bf:
        case 0x1c0:
          auVar1 = vmovntdq_avx(auVar13);
          *(int32_t (*) [32])(pauVar3[2] + uVar6) = auVar1;
        case 0x181:
        case 0x182:
        case 0x183:
        case 0x184:
        case 0x185:
        case 0x186:
        case 0x187:
        case 0x188:
        case 0x189:
        case 0x18a:
        case 0x18b:
        case 0x18c:
        case 0x18d:
        case 0x18e:
        case 399:
        case 400:
        case 0x191:
        case 0x192:
        case 0x193:
        case 0x194:
        case 0x195:
        case 0x196:
        case 0x197:
        case 0x198:
        case 0x199:
        case 0x19a:
        case 0x19b:
        case 0x19c:
        case 0x19d:
        case 0x19e:
        case 0x19f:
        case 0x1a0:
          auVar1 = vmovntdq_avx(auVar13);
          *(int32_t (*) [32])(pauVar3[3] + uVar6) = auVar1;
        case 0x161:
        case 0x162:
        case 0x163:
        case 0x164:
        case 0x165:
        case 0x166:
        case 0x167:
        case 0x168:
        case 0x169:
        case 0x16a:
        case 0x16b:
        case 0x16c:
        case 0x16d:
        case 0x16e:
        case 0x16f:
        case 0x170:
        case 0x171:
        case 0x172:
        case 0x173:
        case 0x174:
        case 0x175:
        case 0x176:
        case 0x177:
        case 0x178:
        case 0x179:
        case 0x17a:
        case 0x17b:
        case 0x17c:
        case 0x17d:
        case 0x17e:
        case 0x17f:
        case 0x180:
          auVar1 = vmovntdq_avx(auVar13);
          *(int32_t (*) [32])(pauVar3[4] + uVar6) = auVar1;
        case 0x141:
        case 0x142:
        case 0x143:
        case 0x144:
        case 0x145:
        case 0x146:
        case 0x147:
        case 0x148:
        case 0x149:
        case 0x14a:
        case 0x14b:
        case 0x14c:
        case 0x14d:
        case 0x14e:
        case 0x14f:
        case 0x150:
        case 0x151:
        case 0x152:
        case 0x153:
        case 0x154:
        case 0x155:
        case 0x156:
        case 0x157:
        case 0x158:
        case 0x159:
        case 0x15a:
        case 0x15b:
        case 0x15c:
        case 0x15d:
        case 0x15e:
        case 0x15f:
        case 0x160:
          auVar1 = vmovntdq_avx(auVar13);
          *(int32_t (*) [32])(pauVar3[5] + uVar6) = auVar1;
        case 0x121:
        case 0x122:
        case 0x123:
        case 0x124:
        case 0x125:
        case 0x126:
        case 0x127:
        case 0x128:
        case 0x129:
        case 0x12a:
        case 299:
        case 300:
        case 0x12d:
        case 0x12e:
        case 0x12f:
        case 0x130:
        case 0x131:
        case 0x132:
        case 0x133:
        case 0x134:
        case 0x135:
        case 0x136:
        case 0x137:
        case 0x138:
        case 0x139:
        case 0x13a:
        case 0x13b:
        case 0x13c:
        case 0x13d:
        case 0x13e:
        case 0x13f:
        case 0x140:
          auVar1 = vmovntdq_avx(auVar13);
          *(int32_t (*) [32])(pauVar3[6] + uVar6) = auVar1;
        default:
          *(int32_t (*) [32])(pauVar3[-1] + uVar5) = auVar13;
        case 0x100:
          *param_1 = auVar13;
          return param_1;
        }
      }
      do {
        *pauVar2 = auVar13;
        pauVar2[1] = auVar13;
        pauVar2[2] = auVar13;
        pauVar2[3] = auVar13;
        pauVar2[4] = auVar13;
        pauVar2[5] = auVar13;
        pauVar2[6] = auVar13;
        pauVar2[7] = auVar13;
        pauVar2 = pauVar2 + 8;
        uVar6 = uVar6 - 0x100;
      } while (0xff < uVar6);
    }
                    
                    
    pauVar2 = (int32_t (*) [32])
              (*(code *)((ulonglong)*(uint *)(&DAT_1801dd7a0 + (uVar6 + 0x1f >> 5) * 4) +
                        0x180000000))(lVar11,uVar5 - lVar7);
    return pauVar2;
  }
  for (; param_3 != 0; param_3 = param_3 - 1) {
    (*pauVar2)[0] = param_2;
    pauVar2 = (int32_t (*) [32])(*pauVar2 + 1);
  }
  return param_1;
}

// ---- Function: FUN_180152490 ----
void FUN_180152490(int32_t param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    thunk_FUN_1800ba040(*(longlong **)(param_2 + 0x60));
  }
  return;
}

// ---- Function: FUN_180152610 ----
void FUN_180152610(int32_t param_1,longlong param_2)

{
  thunk_FUN_18012d5e8(*(LPVOID *)(param_2 + 0x100));
  return;
}

// ---- Function: FUN_180152700 ----
void FUN_180152700(int32_t param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    thunk_FUN_1800a6800(*(longlong **)(param_2 + 0x28));
  }
  return;
}

// ---- Function: FUN_180152820 ----
void FUN_180152820(int32_t param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    thunk_FUN_1800a6800(*(longlong **)(param_2 + 0x60));
  }
  return;
}

// ---- Function: FUN_180152850 ----
void FUN_180152850(int32_t param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 1) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffffe;
    thunk_FUN_1800a6800(*(longlong **)(param_2 + 0x40));
  }
  return;
}

// ---- Function: FUN_1801534d0 ----
void FUN_1801534d0(int32_t param_1,longlong param_2)

{
  thunk_FUN_18012d5e8(*(LPVOID *)(param_2 + 0x38));
  return;
}

// ---- Function: FUN_1801535a0 ----
void FUN_1801535a0(int32_t param_1,longlong param_2)

{
  thunk_FUN_18012d5e8(*(LPVOID *)(param_2 + 0x58));
  return;
}

// ---- Function: FUN_180153630 ----
void FUN_180153630(int32_t param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    thunk_FUN_1800ba040(*(longlong **)(param_2 + 0x28));
  }
  return;
}

// ---- Function: FUN_180153670 ----
void FUN_180153670(int32_t param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x28) & 1) != 0) {
    *(uint *)(param_2 + 0x28) = *(uint *)(param_2 + 0x28) & 0xfffffffe;
    thunk_FUN_1800a6800(*(longlong **)(param_2 + 0x50));
  }
  return;
}

// ---- Function: FUN_180153910 ----
int32_t FUN_180153910(void)

{
  return 0;
}

// ---- Function: FUN_180153940 ----
void FUN_180153940(int32_t param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x98) & 1) != 0) {
    *(uint *)(param_2 + 0x98) = *(uint *)(param_2 + 0x98) & 0xfffffffe;
    FUN_1800cff00((ios_base *)(*(longlong *)(param_2 + 0x80) + 0xb0));
  }
  return;
}

// ---- Function: FUN_1801539a0 ----
void FUN_1801539a0(int32_t param_1,longlong param_2)

{
  thunk_FUN_18012d5e8(*(LPVOID *)(param_2 + 0xb0));
  return;
}

