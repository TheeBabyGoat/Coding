#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_18011d240 ----
void FUN_18011d240(void)

{
  ulonglong uVar1;
  uint uVar2;
  
  uVar2 = 0x13371231;
  _DAT_1801fe364 = 0xffffffff;
  _DAT_1801fcfe4 = 0x13371231;
  uVar1 = 1;
  do {
    uVar2 = (uVar2 >> 0x1e ^ uVar2) * 0x6c078965 + (int)uVar1;
    *(uint *)(&DAT_1801fcfe4 + uVar1 * 4) = uVar2;
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x270);
  _DAT_1801fcfe0 = 0x270;
  return;
}

// ---- Function: FUN_18011d2a0 ----
uint FUN_18011d2a0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  longlong lVar4;
  
  uVar2 = *param_1;
  lVar4 = 0x270;
  if (uVar2 == 0x270) {
    puVar3 = param_1 + 2;
    do {
      uVar2 = (puVar3[-1] ^ *puVar3) & 0x7fffffff ^ puVar3[-1];
      puVar3[0x26f] = -(uint)((uVar2 & 1) != 0) & 0x9908b0df ^ puVar3[0x18c] ^ uVar2 >> 1;
      lVar4 = lVar4 + -1;
      puVar3 = puVar3 + 1;
    } while (lVar4 != 0);
    uVar2 = *param_1;
  }
  else if (0x4df < uVar2) {
    lVar4 = 0xe3;
    puVar3 = param_1 + 0x272;
    do {
      uVar2 = (puVar3[-1] ^ *puVar3) & 0x7fffffff ^ puVar3[-1];
      puVar3[-0x271] = -(uint)((uVar2 & 1) != 0) & 0x9908b0df ^ puVar3[0x18c] ^ uVar2 >> 1;
      lVar4 = lVar4 + -1;
      puVar3 = puVar3 + 1;
    } while (lVar4 != 0);
    lVar4 = 0x18c;
    puVar3 = param_1 + 0x355;
    do {
      uVar2 = (puVar3[-1] ^ *puVar3) & 0x7fffffff ^ puVar3[-1];
      puVar3[-0x271] = -(uint)((uVar2 & 1) != 0) & 0x9908b0df ^ puVar3[-0x354] ^ uVar2 >> 1;
      lVar4 = lVar4 + -1;
      puVar3 = puVar3 + 1;
    } while (lVar4 != 0);
    uVar1 = (param_1[0x4e0] ^ param_1[1]) & 0x7fffffff ^ param_1[0x4e0];
    uVar2 = 0;
    param_1[0x270] = -(uint)((uVar1 & 1) != 0) & 0x9908b0df ^ uVar1 >> 1 ^ param_1[0x18d];
    *param_1 = 0;
  }
  uVar1 = param_1[(ulonglong)uVar2 + 1];
  *param_1 = uVar2 + 1;
  uVar1 = uVar1 >> 0xb & param_1[0x4e1] ^ uVar1;
  uVar1 = (uVar1 & 0xff3a58ad) << 7 ^ uVar1;
  uVar1 = (uVar1 & 0xffffdf8c) << 0xf ^ uVar1;
  return uVar1 >> 0x12 ^ uVar1;
}

// ---- Function: FUN_18011d420 ----
void FUN_18011d420(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  __uint64 _Var3;
  __uint64 _Var4;
  __uint64 _Var5;
  __uint64 _Var6;
  __uint64 _Var7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  __uint64 *p_Var11;
  uint uVar12;
  ulonglong local_res10;
  
  cVar8 = DAT_1801f53d0;
  if ((DAT_1801f39e9 == '\0') && (DAT_1801f39e8 == '\0')) {
    uVar12 = 0;
  }
  else {
    uVar12 = 1;
  }
  nativeInit(0xd80958fc74e988a6);
  p_Var11 = nativeCall();
  uVar9 = DAT_1801fe3b0;
  uVar10 = (uint)*p_Var11;
  if (cVar8 == '\0') {
    nativeInit(0xa7a932170592b50e);
    local_res10 = (ulonglong)uVar9;
    nativePush64(local_res10);
    p_Var11 = nativeCall();
    uVar12 = DAT_1801fe3b0;
    if ((int)*p_Var11 != 0) {
      nativeInit(0x5ee29b4d7d5df897);
      local_res10 = (ulonglong)uVar12;
      nativePush64(local_res10);
      nativePush64(0);
      nativeCall();
      uVar12 = DAT_1801fe3b0;
      nativeInit(0x16a96863a17552bb);
      local_res10 = (ulonglong)uVar12;
      nativePush64(local_res10);
      nativePush64(0);
      nativeCall();
      uVar12 = DAT_1801fe3b0;
      nativeInit(0xc669eea5d031b7de);
      local_res10 = (ulonglong)uVar12;
      nativePush64(local_res10);
      nativePush64(0x43480000);
      nativeCall();
      uVar12 = DAT_1801fe3b0;
      nativeInit(0x865908c81a2c22e9);
      local_res10 = (ulonglong)uVar12;
      nativePush64(local_res10);
      nativePush64(1);
      nativeCall();
      nativeInit(0x7e5b515db0636fc);
      nativePush64(0);
      nativePush64(0);
      nativePush64(1000);
      nativePush64(1);
      nativePush64(1);
      nativePush64(0);
      nativeCall();
      nativeInit(0x3882114bde571ad4);
      local_res10 = (ulonglong)uVar10;
      nativePush64(local_res10);
      nativePush64(0);
      nativeCall();
      nativeInit(0x428ca6dbd1094446);
      local_res10 = (ulonglong)uVar10;
      nativePush64(local_res10);
      nativePush64(0);
      nativeCall();
    }
    DAT_1801f53d8 = 0;
    DAT_1801f3aec = 0;
  }
  else {
    nativeInit(0xc3981dce61d9e13f);
    nativePush64(0x1801d8dc8);
    nativePush64(1);
    p_Var11 = nativeCall();
    DAT_1801fe3b0 = (uint)*p_Var11;
    nativeInit(0xd80958fc74e988a6);
    p_Var11 = nativeCall();
    _Var3 = *p_Var11;
    nativeInit(0x3fef770d40960d5a);
    local_res10 = (ulonglong)(uint)_Var3;
    nativePush64(local_res10);
    nativePush64(1);
    p_Var11 = nativeCall();
    _Var3 = *p_Var11;
    _Var4 = p_Var11[1];
    uVar1 = p_Var11[2];
    nativeInit(0x837765a25378f0bb);
    nativePush64(2);
    p_Var11 = nativeCall();
    _Var5 = *p_Var11;
    _Var6 = p_Var11[1];
    uVar2 = p_Var11[2];
    nativeInit(0x65019750a0324133);
    p_Var11 = nativeCall();
    uVar9 = DAT_1801fe3b0;
    _Var7 = *p_Var11;
    nativeInit(0x4d41783fb745e42e);
    local_res10 = (ulonglong)uVar9;
    nativePush64(local_res10);
    local_res10 = (ulonglong)(uint)_Var3;
    nativePush64(local_res10);
    local_res10 = (ulonglong)(uint)_Var4;
    nativePush64(local_res10);
    local_res10 = uVar1 & 0xffffffff;
    nativePush64(local_res10);
    nativeCall();
    uVar9 = DAT_1801fe3b0;
    nativeInit(0x85973643155d0b07);
    local_res10 = (ulonglong)uVar9;
    nativePush64(local_res10);
    local_res10 = (ulonglong)(uint)_Var5;
    nativePush64(local_res10);
    local_res10 = (ulonglong)(uint)_Var6;
    nativePush64(local_res10);
    local_res10 = uVar2 & 0xffffffff;
    nativePush64(local_res10);
    nativePush64(2);
    nativeCall();
    uVar9 = DAT_1801fe3b0;
    nativeInit(0xb13c14f66a00d047);
    local_res10 = (ulonglong)uVar9;
    nativePush64(local_res10);
    local_res10 = (ulonglong)(uint)_Var7;
    nativePush64(local_res10);
    nativeCall();
    nativeInit(0x3882114bde571ad4);
    local_res10 = (ulonglong)uVar10;
    nativePush64(local_res10);
    nativePush64(1);
    nativeCall();
    nativeInit(0x428ca6dbd1094446);
    local_res10 = (ulonglong)uVar10;
    nativePush64(local_res10);
    nativePush64(1);
    nativeCall();
    DAT_1801ebdbc = (uint)_Var7;
    nativeInit(0x7e5b515db0636fc);
    nativePush64(1);
    local_res10 = (ulonglong)uVar12;
    nativePush64(local_res10);
    uVar10 = 1000;
    if ((char)uVar12 != '\0') {
      uVar10 = 0;
    }
    local_res10 = (ulonglong)uVar10;
    nativePush64(local_res10);
    nativePush64(1);
    nativePush64(1);
    nativePush64(0);
    nativeCall();
    DAT_1801f53d8 = 1;
    DAT_1801f3aec = 1;
  }
  return;
}

// ---- Function: FUN_18011dbe0 ----
void FUN_18011dbe0(uint param_1,uint *param_2,int32_t param_3,char param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  ulonglong local_58;
  
  uVar3 = DAT_1801fe3b4;
  nativeInit(0xea1c610a04db6bbb);
  local_58 = (ulonglong)param_1;
  nativePush64(local_58);
  nativePush64(0);
  nativePush64(0);
  nativeCall();
  if (param_4 != '\0') {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    fVar4 = (float)param_2[2] + DAT_1801d8e98;
    nativeInit(0x6843da7060a026b);
    local_58 = (ulonglong)param_1;
    nativePush64(local_58);
    local_58 = (ulonglong)uVar1;
    nativePush64(local_58);
    local_58 = (ulonglong)uVar2;
    nativePush64(local_58);
    local_58 = (ulonglong)(uint)fVar4;
    nativePush64(local_58);
    nativePush64(0);
    nativePush64(0);
    nativePush64(0);
    nativePush64(0);
    nativeCall();
    nativeInit(0x8f993d26e0ca5e8e);
    nativePush64(0);
    nativePush64(0);
    nativeCall();
    nativeInit(0x8e2530aa8ada980e);
    local_58 = (ulonglong)param_1;
    nativePush64(local_58);
    local_58 = (ulonglong)uVar3;
    nativePush64(local_58);
    nativeCall();
  }
  return;
}

// ---- Function: FUN_18011ddc0 ----
void FUN_18011ddc0(uint param_1,uint *param_2,char param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  __uint64 _Var4;
  __uint64 *p_Var5;
  ulonglong local_res20;
  
  nativeInit(0xd80958fc74e988a6);
  p_Var5 = nativeCall();
  _Var4 = *p_Var5;
  nativeInit(0x9ebc85ed0fffe51c);
  local_res20 = (ulonglong)(uint)_Var4;
  nativePush64(local_res20);
  nativePush64(1);
  nativePush64(0);
  nativeCall();
  nativeInit(0xea1c610a04db6bbb);
  local_res20 = (ulonglong)param_1;
  nativePush64(local_res20);
  nativePush64(1);
  nativePush64(0);
  nativeCall();
  if (param_3 != '\0') {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    nativeInit(0x6843da7060a026b);
    local_res20 = (ulonglong)param_1;
    nativePush64(local_res20);
    local_res20 = (ulonglong)uVar1;
    nativePush64(local_res20);
    local_res20 = (ulonglong)uVar2;
    nativePush64(local_res20);
    local_res20 = (ulonglong)uVar3;
    nativePush64(local_res20);
    nativePush64(0);
    nativePush64(0);
    nativePush64(0);
    nativePush64(0);
    nativeCall();
    nativeInit(0x58a850eaee20faa3);
    local_res20 = (ulonglong)param_1;
    nativePush64(local_res20);
    nativeCall();
    nativeInit(0x8f993d26e0ca5e8e);
    nativePush64(0);
    nativePush64(0);
    nativeCall();
    uVar1 = DAT_1801fe3b4;
    nativeInit(0x8e2530aa8ada980e);
    local_res20 = (ulonglong)param_1;
    nativePush64(local_res20);
    local_res20 = (ulonglong)uVar1;
    nativePush64(local_res20);
    nativeCall();
  }
  nativeInit(0x997abd671d25ca0b);
  local_res20 = (ulonglong)param_1;
  nativePush64(local_res20);
  nativePush64(1);
  p_Var5 = nativeCall();
  if ((int)*p_Var5 != 0) {
    nativeInit(0x9a9112a0fe9a4713);
    local_res20 = (ulonglong)param_1;
    nativePush64(local_res20);
    nativePush64(0);
    p_Var5 = nativeCall();
    _Var4 = *p_Var5;
    nativeInit(0xea1c610a04db6bbb);
    local_res20 = (ulonglong)(uint)_Var4;
    nativePush64(local_res20);
    nativePush64(1);
    nativePush64(0);
    nativeCall();
  }
  return;
}

// ---- Function: FUN_18011e1a0 ----
void FUN_18011e1a0(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  __uint64 _Var4;
  int32_t *puVar5;
  byte bVar6;
  char cVar7;
  SHORT SVar8;
  __uint64 *p_Var9;
  ulonglong uVar10;
  char *pcVar11;
  float *pfVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  ulonglong local_res8;
  short local_res10 [4];
  float local_res18;
  float local_res20;
  int32_t local_1a8;
  float fStack_1a0;
  float fStack_19c;
  int32_t local_198 [4];
  float local_188;
  float fStack_184;
  float fStack_180;
  int32_t uStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  int32_t local_168;
  int32_t local_160;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  __uint64 local_138;
  __uint64 _Stack_130;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  __uint64 local_f8;
  
  nativeInit(0xd80958fc74e988a6);
  p_Var9 = nativeCall();
  uVar2 = (uint)*p_Var9;
  nativeInit(0x9cd27b0045628463);
  p_Var9 = nativeCall();
  if ((int)*p_Var9 - _DAT_1801f53d4 < 5000) {
    nativeInit(0x3882114bde571ad4);
    local_res8 = (ulonglong)uVar2;
    nativePush64(local_res8);
    local_res8 = 1;
    nativePush64(1);
    nativeCall();
    DAT_1801f53cf = '\x01';
  }
  else if (DAT_1801f53cf != '\0') {
    nativeInit(0x3882114bde571ad4);
    local_res8 = (ulonglong)uVar2;
    nativePush64(local_res8);
    nativePush64(0);
    nativeCall();
    DAT_1801f53cf = '\0';
  }
  if ((DAT_1801f53d9 == '\0') && (DAT_1801f3ad8 != (longlong *)0x0)) {
    plVar15 = DAT_1801f3ad8;
    uVar10 = FUN_1800de890(DAT_1801ebdac);
    cVar7 = (**(code **)(*plVar15 + 0x68))(plVar15,uVar10 & 0xffffffff);
    if (cVar7 != '\0') {
      DAT_1801f53d0 = DAT_1801f53d0 == '\0';
      if ((bool)DAT_1801f53d0) {
LAB_18011e35a:
        DAT_1801f53cd = 1;
        DAT_1801f53ce = '\x01';
      }
      else {
        local_1a8 = CONCAT44(DAT_1801ec740._4_4_,(float)DAT_1801ec740);
        fStack_1a0 = (float)DAT_1801ec748;
        FUN_18011ddc0(uVar2,(uint *)&local_1a8,'\x01');
        nativeInit(0x9cd27b0045628463);
        p_Var9 = nativeCall();
        _DAT_1801f53d4 = (int)*p_Var9;
        if (DAT_1801f53d0 != '\0') goto LAB_18011e35a;
      }
      FUN_18011d420();
      if (DAT_1801f53d0 == '\0') {
        nativeInit(0x31b73d1ea9f01da2);
        nativeCall();
        DAT_1801f53cc = '\0';
        nativeInit(0x1d408577d440e81e);
        local_res8 = 0x3f800000;
        nativePush64(0x3f800000);
        nativeCall();
        nativeInit(0xf07e7745a236711);
        nativeCall();
      }
    }
  }
  if ((DAT_1801f53d9 == '\0') && (DAT_1801f3ad8 != (longlong *)0x0)) {
    plVar15 = DAT_1801f3ad8;
    uVar10 = FUN_1800de890(DAT_1801ebda8);
    cVar7 = (**(code **)(*plVar15 + 0x68))(plVar15,uVar10 & 0xffffffff);
    if (cVar7 != '\0') {
      DAT_1801f53cc = DAT_1801f53cc == '\0';
      if ((bool)DAT_1801f53cc) {
        nativeInit(0x1d408577d440e81e);
        local_res8 = 0;
      }
      else {
        nativeInit(0x1d408577d440e81e);
        local_res8 = 0x3f800000;
      }
      nativePush64(local_res8);
      nativeCall();
    }
  }
  if (DAT_1801f53d0 != '\0') {
    if ((DAT_1801f53d9 == '\0') && (DAT_1801f3ad8 != (longlong *)0x0)) {
      plVar15 = DAT_1801f3ad8;
      uVar10 = FUN_1800de890(0x291);
      cVar7 = (**(code **)(*plVar15 + 0x68))(plVar15,uVar10 & 0xffffffff);
      if (cVar7 == '\0') goto LAB_18011e493;
    }
    else {
LAB_18011e493:
      if (DAT_1801f39e4 == '\0') goto LAB_18011e561;
    }
    DAT_1801f53cd = DAT_1801f53cd == 0;
    DAT_1801f39e4 = '\0';
    nativeInit(0xd80958fc74e988a6);
    p_Var9 = nativeCall();
    bVar6 = DAT_1801f53cd;
    _Var4 = *p_Var9;
    nativeInit(0x3882114bde571ad4);
    local_res8 = (ulonglong)(uint)_Var4;
    nativePush64(local_res8);
    local_res8 = (ulonglong)bVar6;
    nativePush64(local_res8);
    nativeCall();
    bVar6 = DAT_1801f53cd;
    nativeInit(0x428ca6dbd1094446);
    local_res8 = (ulonglong)(uint)_Var4;
    nativePush64(local_res8);
    local_res8 = (ulonglong)bVar6;
    nativePush64(local_res8);
    nativeCall();
  }
LAB_18011e561:
  puVar5 = PTR_DAT_1801ebdc0;
  plVar15 = (longlong *)(PTR_DAT_1801ec2c0 + -(longlong)PTR_DAT_1801ebdc0);
  pcVar11 = PTR_DAT_1801ebdc0;
  do {
    cVar7 = *pcVar11;
    cVar1 = pcVar11[(longlong)plVar15];
    if (cVar7 != cVar1) break;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  if (cVar7 == cVar1) {
    if ((DAT_1801f39e7 == '\0') && (DAT_1801f53d8 == '\0')) goto LAB_18011e637;
    plVar15 = (longlong *)&DAT_180182c84;
    lVar13 = 0;
    do {
      lVar14 = lVar13 + 1;
      if (PTR_DAT_1801ebdc0[lVar13] != (&DAT_180182c84)[lVar13]) {
        nativeInit(0x2c933abf17a1df41);
        nativePush64((__uint64)puVar5);
        goto LAB_18011e69a;
      }
      lVar13 = lVar14;
    } while (lVar14 != 5);
    nativeInit(0xf07e7745a236711);
LAB_18011e69a:
    nativeCall();
  }
  else if ((DAT_1801f53d8 == '\0') && (DAT_1801f39e7 == '\0')) {
LAB_18011e637:
    if (DAT_1801ec2b8 != '\0') {
      nativeInit(0xf07e7745a236711);
      nativeCall();
      DAT_1801ec2b8 = '\0';
    }
  }
  else {
    plVar15 = (longlong *)&DAT_180182c84;
    lVar13 = 0;
    do {
      lVar14 = lVar13 + 1;
      if (PTR_DAT_1801ebdc0[lVar13] != (&DAT_180182c84)[lVar13]) {
        nativeInit(0x2c933abf17a1df41);
        nativePush64((__uint64)puVar5);
        goto LAB_18011e608;
      }
      lVar13 = lVar14;
    } while (lVar14 != 5);
    nativeInit(0xf07e7745a236711);
LAB_18011e608:
    nativeCall();
    PTR_DAT_1801ec2c0 = PTR_DAT_1801ebdc0;
    DAT_1801ec2b8 = '\x01';
  }
  uVar3 = DAT_1801fe3b0;
  fVar20 = DAT_1801d8e38;
  if (DAT_1801f39e5 != '\0') {
    fVar20 = DAT_1801ebdb4;
  }
  nativeInit(0x47b595d60664cffa);
  local_res8 = (ulonglong)uVar3;
  nativePush64(local_res8);
  local_res8 = (ulonglong)(uint)fVar20;
  nativePush64(local_res8);
  nativeCall();
  if (DAT_1801f53d8 == '\0') {
    return;
  }
  SVar8 = GetAsyncKeyState(0xa2);
  if (((SVar8 < 0) || (SVar8 = GetAsyncKeyState(0xa3), SVar8 < 0)) &&
     (plVar15 = DAT_1801f3ad8, DAT_1801f3ad8 != (longlong *)0x0)) {
    uVar10 = FUN_1800de890(0x20b);
    cVar7 = (**(code **)(*plVar15 + 0x68))(plVar15,uVar10 & 0xffffffff);
    if (cVar7 != '\0') {
      DAT_1801f53d9 = DAT_1801f53d9 == '\0';
    }
  }
  if (DAT_1801f53cd != 0) {
    nativeInit(0xfe99b66d079cf6bc);
    local_res8 = 2;
    nativePush64(2);
    local_res8 = 0xe;
    nativePush64(0xe);
    local_res8 = 1;
    nativePush64(1);
    nativeCall();
    nativeInit(0xfe99b66d079cf6bc);
    local_res8 = 2;
    nativePush64(2);
    local_res8 = 0xf;
    nativePush64(0xf);
    local_res8 = 1;
    nativePush64(1);
    nativeCall();
    nativeInit(0xfe99b66d079cf6bc);
    local_res8 = 2;
    nativePush64(2);
    local_res8 = 0x10;
    nativePush64(0x10);
    local_res8 = 1;
    nativePush64(1);
    nativeCall();
    nativeInit(0xfe99b66d079cf6bc);
    local_res8 = 2;
    nativePush64(2);
    local_res8 = 0x11;
    nativePush64(0x11);
    local_res8 = 1;
    nativePush64(1);
    nativeCall();
    nativeInit(0xfe99b66d079cf6bc);
    local_res8 = 2;
    nativePush64(2);
    local_res8 = 0xb4;
    nativePush64(0xb4);
    local_res8 = 1;
    nativePush64(1);
    nativeCall();
    nativeInit(0xfe99b66d079cf6bc);
    local_res8 = 2;
    nativePush64(2);
    local_res8 = 0xb5;
    nativePush64(0xb5);
    local_res8 = 1;
    nativePush64(1);
    nativeCall();
    nativeInit(0xfe99b66d079cf6bc);
    local_res8 = 2;
    nativePush64(2);
    local_res8 = 0x105;
    nativePush64(0x105);
    local_res8 = 1;
    nativePush64(1);
    nativeCall();
    nativeInit(0xfe99b66d079cf6bc);
    local_res8 = 2;
    nativePush64(2);
    local_res8 = 0x106;
    nativePush64(0x106);
    local_res8 = 1;
    nativePush64(1);
    nativeCall();
    nativeInit(0xfe99b66d079cf6bc);
    local_res8 = 2;
    nativePush64(2);
    local_res8 = 0x15;
    nativePush64(0x15);
    local_res8 = 1;
    nativePush64(1);
    nativeCall();
    nativeInit(0xfe99b66d079cf6bc);
    local_res8 = 2;
    nativePush64(2);
    local_res8 = 0x17;
    nativePush64(0x17);
    local_res8 = 1;
    nativePush64(1);
    nativeCall();
    nativeInit(0xfe99b66d079cf6bc);
    local_res8 = 2;
    nativePush64(2);
    local_res8 = 0x18;
    nativePush64(0x18);
    local_res8 = 1;
    nativePush64(1);
    nativeCall();
    nativeInit(0xfe99b66d079cf6bc);
    local_res8 = 2;
    nativePush64(2);
    local_res8 = 0x19;
    nativePush64(0x19);
    local_res8 = 1;
    nativePush64(1);
    nativeCall();
    nativeInit(0xfe99b66d079cf6bc);
    local_res8 = 2;
    nativePush64(2);
    local_res8 = 0x1b;
    nativePush64(0x1b);
    local_res8 = 1;
    nativePush64(1);
    nativeCall();
    nativeInit(0xfe99b66d079cf6bc);
    local_res8 = 2;
    nativePush64(2);
    local_res8 = 0x2c;
    nativePush64(0x2c);
    local_res8 = 1;
    nativePush64(1);
    nativeCall();
    nativeInit(0xfe99b66d079cf6bc);
    local_res8 = 2;
    nativePush64(2);
    local_res8 = 0x1e;
    nativePush64(0x1e);
    local_res8 = 1;
    nativePush64(1);
    nativeCall();
    nativeInit(0xfe99b66d079cf6bc);
    local_res8 = 2;
    nativePush64(2);
    local_res8 = 0x1f;
    nativePush64(0x1f);
    local_res8 = 1;
    nativePush64(1);
    nativeCall();
    nativeInit(0xfe99b66d079cf6bc);
    local_res8 = 2;
    nativePush64(2);
    local_res8 = 0x10a;
    nativePush64(0x10a);
    local_res8 = 1;
    nativePush64(1);
    nativeCall();
    nativeInit(0xfe99b66d079cf6bc);
    local_res8 = 2;
    nativePush64(2);
    local_res8 = 0x10b;
    nativePush64(0x10b);
    local_res8 = 1;
    nativePush64(1);
    nativeCall();
    nativeInit(0xfe99b66d079cf6bc);
    local_res8 = 2;
    nativePush64(2);
    local_res8 = 0x20;
    nativePush64(0x20);
    local_res8 = 1;
    nativePush64(1);
    nativeCall();
    nativeInit(0xfe99b66d079cf6bc);
    local_res8 = 2;
    nativePush64(2);
    local_res8 = 0x21;
    nativePush64(0x21);
    local_res8 = 1;
    nativePush64(1);
    nativeCall();
    nativeInit(0xfe99b66d079cf6bc);
    local_res8 = 2;
    nativePush64(2);
    local_res8 = 0x22;
    nativePush64(0x22);
    local_res8 = 1;
    nativePush64(1);
    nativeCall();
    nativeInit(0xfe99b66d079cf6bc);
    local_res8 = 2;
    nativePush64(2);
    local_res8 = 0x23;
    nativePush64(0x23);
    local_res8 = 1;
    nativePush64(1);
    nativeCall();
    nativeInit(0xfe99b66d079cf6bc);
    local_res8 = 2;
    nativePush64(2);
    local_res8 = 0x47;
    nativePush64(0x47);
    local_res8 = 1;
    nativePush64(1);
    nativeCall();
    nativeInit(0xfe99b66d079cf6bc);
    local_res8 = 2;
    nativePush64(2);
    local_res8 = 0x48;
    nativePush64(0x48);
    local_res8 = 1;
    nativePush64(1);
    nativeCall();
    nativeInit(0xfe99b66d079cf6bc);
    local_res8 = 2;
    nativePush64(2);
    local_res8 = 0x3f;
    nativePush64(0x3f);
    local_res8 = 1;
    nativePush64(1);
    nativeCall();
    nativeInit(0xfe99b66d079cf6bc);
    local_res8 = 2;
    nativePush64(2);
    local_res8 = 0x40;
    nativePush64(0x40);
    local_res8 = 1;
    nativePush64(1);
    nativeCall();
    nativeInit(0xfe99b66d079cf6bc);
    local_res8 = 2;
    nativePush64(2);
    local_res8 = 0x59;
    nativePush64(0x59);
    local_res8 = 1;
    nativePush64(1);
    nativeCall();
    nativeInit(0xfe99b66d079cf6bc);
    local_res8 = 2;
    nativePush64(2);
    local_res8 = 0x5a;
    nativePush64(0x5a);
    local_res8 = 1;
    nativePush64(1);
    nativeCall();
    nativeInit(0xfe99b66d079cf6bc);
    local_res8 = 2;
    nativePush64(2);
    local_res8 = 0x85;
    nativePush64(0x85);
    local_res8 = 1;
    nativePush64(1);
    nativeCall();
    nativeInit(0xfe99b66d079cf6bc);
    local_res8 = 2;
    nativePush64(2);
    local_res8 = 0x86;
    nativePush64(0x86);
    local_res8 = 1;
    nativePush64(1);
    nativeCall();
    nativeInit(0xfe99b66d079cf6bc);
    local_res8 = 2;
    nativePush64(2);
    local_res8 = 0x116;
    nativePush64(0x116);
    local_res8 = 1;
    nativePush64(1);
    nativeCall();
    nativeInit(0xfe99b66d079cf6bc);
    local_res8 = 2;
    nativePush64(2);
    local_res8 = 0x117;
    nativePush64(0x117);
    local_res8 = 1;
    nativePush64(1);
    nativeCall();
    nativeInit(0xfe99b66d079cf6bc);
    local_res8 = 2;
    nativePush64(2);
    local_res8 = 0xac;
    nativePush64(0xac);
    local_res8 = 1;
    nativePush64(1);
    nativeCall();
    nativeInit(0xfe99b66d079cf6bc);
    local_res8 = 2;
    nativePush64(2);
    local_res8 = 0xad;
    nativePush64(0xad);
    local_res8 = 1;
    nativePush64(1);
    nativeCall();
    nativeInit(0xfe99b66d079cf6bc);
    local_res8 = 2;
    nativePush64(2);
    local_res8 = 0xae;
    nativePush64(0xae);
    local_res8 = 1;
    nativePush64(1);
    nativeCall();
    nativeInit(0xfe99b66d079cf6bc);
    local_res8 = 2;
    nativePush64(2);
    local_res8 = 0xaf;
    nativePush64(0xaf);
    local_res8 = 1;
    nativePush64(1);
    nativeCall();
    nativeInit(0xfe99b66d079cf6bc);
    local_res8 = 2;
    nativePush64(2);
    local_res8 = 0x55;
    nativePush64(0x55);
    local_res8 = 1;
    nativePush64(1);
    nativeCall();
    nativeInit(0xfe99b66d079cf6bc);
    local_res8 = 2;
    nativePush64(2);
    local_res8 = 0x56;
    nativePush64(0x56);
    local_res8 = 1;
    nativePush64(1);
    nativeCall();
    nativeInit(0xfe99b66d079cf6bc);
    local_res8 = 2;
    nativePush64(2);
    local_res8 = 1;
    nativePush64(1);
    local_res8 = 1;
    nativePush64(1);
    nativeCall();
    nativeInit(0xfe99b66d079cf6bc);
    local_res8 = 2;
    nativePush64(2);
    local_res8 = 2;
    nativePush64(2);
    local_res8 = 1;
    nativePush64(1);
    nativeCall();
    nativeInit(0xfe99b66d079cf6bc);
    local_res8 = 2;
    nativePush64(2);
    local_res8 = 3;
    nativePush64(3);
    local_res8 = 1;
    nativePush64(1);
    nativeCall();
    nativeInit(0xfe99b66d079cf6bc);
    local_res8 = 2;
    nativePush64(2);
    local_res8 = 4;
    nativePush64(4);
    local_res8 = 1;
    nativePush64(1);
    nativeCall();
    nativeInit(0xfe99b66d079cf6bc);
    local_res8 = 2;
    nativePush64(2);
    local_res8 = 5;
    nativePush64(5);
    local_res8 = 1;
    nativePush64(1);
    nativeCall();
    nativeInit(0xfe99b66d079cf6bc);
    local_res8 = 2;
    nativePush64(2);
    local_res8 = 6;
    nativePush64(6);
    local_res8 = 1;
    nativePush64(1);
    nativeCall();
    nativeInit(0xfe99b66d079cf6bc);
    local_res8 = 2;
    nativePush64(2);
    local_res8 = 0x122;
    nativePush64(0x122);
    local_res8 = 1;
    nativePush64(1);
    nativeCall();
    nativeInit(0xfe99b66d079cf6bc);
    local_res8 = 2;
    nativePush64(2);
    local_res8 = 0x123;
    nativePush64(0x123);
    local_res8 = 1;
    nativePush64(1);
    nativeCall();
    nativeInit(0xfe99b66d079cf6bc);
    local_res8 = 2;
    nativePush64(2);
    local_res8 = 0x124;
    nativePush64(0x124);
    local_res8 = 1;
    nativePush64(1);
    nativeCall();
    nativeInit(0xfe99b66d079cf6bc);
    local_res8 = 2;
    nativePush64(2);
    local_res8 = 0x125;
    nativePush64(0x125);
    local_res8 = 1;
    nativePush64(1);
    nativeCall();
    nativeInit(0xfe99b66d079cf6bc);
    local_res8 = 2;
    nativePush64(2);
    local_res8 = 0x126;
    nativePush64(0x126);
    local_res8 = 1;
    nativePush64(1);
    nativeCall();
    nativeInit(0xfe99b66d079cf6bc);
    local_res8 = 2;
    nativePush64(2);
    local_res8 = 0x127;
    nativePush64(0x127);
    local_res8 = 1;
    nativePush64(1);
    nativeCall();
  }
  uVar3 = DAT_1801fe3b0;
  nativeInit(0x7d304c1c955e3e12);
  local_res8 = (ulonglong)uVar3;
  nativePush64(local_res8);
  nativePush64(0);
  p_Var9 = nativeCall();
  uVar3 = DAT_1801fe3b0;
  local_138 = *p_Var9;
  _Stack_130 = p_Var9[1];
  local_f8 = p_Var9[2];
  nativeInit(0xbac038f7459ae5ae);
  local_res8 = (ulonglong)uVar3;
  nativePush64(local_res8);
  pfVar12 = (float *)nativeCall();
  fVar20 = *pfVar12;
  fStack_124 = pfVar12[1];
  fVar21 = pfVar12[2];
  fStack_11c = pfVar12[3];
  local_res8 = *(ulonglong *)(pfVar12 + 4);
  fVar24 = (float)local_res8;
  local_128 = fVar20;
  fStack_120 = fVar21;
  local_118 = fVar21;
  fStack_114 = fVar21;
  fStack_110 = fVar21;
  fStack_10c = fVar21;
  lVar13 = FUN_1800a6750();
  fVar25 = *(float *)(lVar13 + 0x30);
  fVar26 = *(float *)(lVar13 + 0x34);
  fVar19 = *(float *)(lVar13 + 0x38);
  local_1a8 = CONCAT44(fVar19,fVar19);
  fVar17 = fVar26 * fVar26 + fVar25 * fVar25 + fVar19 * fVar19;
  fStack_1a0 = fVar19;
  fStack_19c = fVar19;
  if (fVar17 < 0.0) {
    fVar17 = FUN_1801501f8(fVar17);
  }
  else {
    fVar17 = SQRT(fVar17);
  }
  fVar23 = fVar19;
  if (0.0 < fVar17) {
    fVar23 = fVar19 / fVar17;
    fVar25 = fVar25 / fVar17;
    local_1a8 = CONCAT44(fVar19,fVar23);
    fVar26 = fVar26 / fVar17;
    fStack_1a0 = fVar19;
    fStack_19c = fVar19;
  }
  lVar13 = FUN_1800a6750();
  local_188 = *(float *)(lVar13 + 0x20);
  fStack_184 = *(float *)(lVar13 + 0x24);
  fStack_180 = *(float *)(lVar13 + 0x28);
  uStack_17c = *(int32_t *)(lVar13 + 0x2c);
  fVar19 = fStack_184 * fStack_184 + local_188 * local_188 + fStack_180 * fStack_180;
  local_178 = fStack_184;
  fStack_174 = fStack_184;
  fStack_170 = fStack_184;
  fStack_16c = fStack_184;
  local_158 = fStack_180;
  fStack_154 = fStack_180;
  fStack_150 = fStack_180;
  fStack_14c = fStack_180;
  if (fVar19 < 0.0) {
    fVar19 = FUN_1801501f8(fVar19);
  }
  else {
    fVar19 = SQRT(fVar19);
  }
  if (0.0 < fVar19) {
    local_188 = local_188 / fVar19;
    local_178 = local_178 / fVar19;
    local_158 = local_158 / fVar19;
  }
  lVar13 = FUN_1800a6750();
  fVar19 = *(float *)(lVar13 + 0x10);
  fVar17 = *(float *)(lVar13 + 0x14);
  fVar22 = *(float *)(lVar13 + 0x18);
  fVar18 = fVar17 * fVar17 + fVar19 * fVar19 + fVar22 * fVar22;
  if (fVar18 < 0.0) {
    fVar18 = FUN_1801501f8(fVar18);
  }
  else {
    fVar18 = SQRT(fVar18);
  }
  if (0.0 < fVar18) {
    fVar19 = fVar19 / fVar18;
    fVar17 = fVar17 / fVar18;
    fVar22 = fVar22 / fVar18;
  }
  nativeInit(0x15c40837039ffaf7);
  pfVar12 = (float *)nativeCall();
  uVar3 = DAT_1801fe3b0;
  fVar18 = *pfVar12;
  if (DAT_1801f3af8 != '\0') {
    DAT_1801f3af8 = '\0';
    fVar20 = (float)DAT_1801ec730;
    fVar21 = DAT_1801ec730._4_4_;
    fVar24 = DAT_1801ec738;
  }
  if (DAT_1801f3af9 != '\0') {
    DAT_1801f3af9 = '\0';
    DAT_1801ec720 = fVar20;
    DAT_1801ec724 = fVar21;
    DAT_1801ec728 = fVar24;
    DAT_1801ec730._0_4_ = fVar20;
    DAT_1801ec730._4_4_ = fVar21;
    DAT_1801ec738 = fVar24;
  }
  if (DAT_1801f3aed != '\0') {
    fVar20 = fVar19 * DAT_1801ec718 + DAT_1801ec720 + fVar25 * DAT_1801ec71c;
    fVar21 = fVar17 * DAT_1801ec718 + DAT_1801ec724 + fVar26 * DAT_1801ec71c;
    fVar25 = fVar22 * DAT_1801ec718 + DAT_1801ec728 + fVar23 * DAT_1801ec71c;
    DAT_1801ec720 = fVar20;
    DAT_1801ec724 = fVar21;
    DAT_1801ec728 = fVar25;
    nativeInit(0x4d41783fb745e42e);
    local_res8 = (ulonglong)uVar3;
    nativePush64(local_res8);
    local_res8 = (ulonglong)(uint)fVar20;
    nativePush64(local_res8);
    local_res8 = (ulonglong)(uint)fVar21;
    nativePush64(local_res8);
    local_res8 = (ulonglong)(uint)fVar25;
    nativePush64(local_res8);
    nativeCall();
    uVar2 = DAT_1801fe3b0;
    nativeInit(0x85973643155d0b07);
    local_res8 = (ulonglong)uVar2;
    nativePush64(local_res8);
    _Var4 = _Stack_130;
    local_res8 = local_138 & 0xffffffff;
    nativePush64(local_res8);
    local_res8 = _Var4 & 0xffffffff;
    nativePush64(local_res8);
    local_res8 = local_f8 & 0xffffffff;
    nativePush64(local_res8);
    nativePush64(0);
    nativeCall();
    _DAT_1801ec718 = 0;
    return;
  }
  if (DAT_1801f53ce != '\0') {
    DAT_1801f53ce = '\0';
    DAT_1801ec758 = (float)local_res8;
    DAT_1801ec750 = local_128;
    DAT_1801ec754 = local_118;
  }
  if (DAT_1801f53cc != '\0') {
    fVar18 = fVar18 * DAT_1801d8edc;
  }
  if (DAT_1801f3ad8 != (longlong *)0x0) {
    plVar15 = &local_168;
    (**(code **)(*DAT_1801f3ad8 + 0x90))(DAT_1801f3ad8,(longlong)&local_168 + 4,plVar15,&local_res8)
    ;
    if (0 < (short)local_res8) {
      DAT_1801ebdd0 = DAT_1801ebdd0 + DAT_1801d8e60;
    }
    if (DAT_1801f3ad8 != (longlong *)0x0) {
      plVar15 = &local_160;
      (**(code **)(*DAT_1801f3ad8 + 0x90))
                (DAT_1801f3ad8,(longlong)&local_160 + 4,plVar15,local_res10);
      if ((local_res10[0] < 0) &&
         (DAT_1801ebdd0 = DAT_1801ebdd0 + _DAT_1801d8f3c, DAT_1801ebdd0 < DAT_1801d8e38)) {
        DAT_1801ebdd0 = 1.0;
      }
    }
  }
  fVar23 = DAT_1801ebdd0;
  local_res20 = DAT_1801ebdc8;
  local_res18 = 0.0;
  if (DAT_1801f53d9 == '\0') {
    if (DAT_1801f3ad8 != (longlong *)0x0) {
      plVar16 = DAT_1801f3ad8;
      uVar10 = FUN_1800de890(DAT_1801ebd84);
      cVar7 = (**(code **)(*plVar16 + 0x60))(plVar16,uVar10 & 0xffffffff);
      if ((cVar7 != '\0') && (DAT_1801f53cd != 0)) {
        local_res20 = local_res20 * DAT_1801d8e88;
        fVar23 = fVar23 * DAT_1801d8e88;
      }
    }
    if (DAT_1801f53d9 != '\0') goto LAB_18012056b;
    if (DAT_1801f3ad8 != (longlong *)0x0) {
      plVar16 = DAT_1801f3ad8;
      uVar10 = FUN_1800de890(DAT_1801ebd80);
      cVar7 = (**(code **)(*plVar16 + 0x60))(plVar16,uVar10 & 0xffffffff);
      if (((cVar7 != '\0') && (DAT_1801f53cd != 0)) &&
         (local_res18 = 0.0 - local_res20 * fVar18, local_res18 <= DAT_1801d8f44)) {
        local_res18 = 0.0;
      }
    }
    if (DAT_1801f53d9 != '\0') goto LAB_18012056b;
    if (DAT_1801f3ad8 != (longlong *)0x0) {
      plVar16 = DAT_1801f3ad8;
      uVar10 = FUN_1800de890(DAT_1801ebd7c);
      cVar7 = (**(code **)(*plVar16 + 0x60))(plVar16,uVar10 & 0xffffffff);
      if (((cVar7 != '\0') && (DAT_1801f53cd != 0)) &&
         (local_res18 = local_res18 + local_res20 * fVar18, _DAT_1801d8f0c <= local_res18)) {
        local_res18 = 0.0;
      }
    }
    if (DAT_1801f53d9 != '\0') goto LAB_18012056b;
    if (DAT_1801f3ad8 != (longlong *)0x0) {
      plVar16 = DAT_1801f3ad8;
      uVar10 = FUN_1800de890(DAT_1801ebda4);
      cVar7 = (**(code **)(*plVar16 + 0x60))(plVar16,uVar10 & 0xffffffff);
      if ((cVar7 != '\0') && (DAT_1801f53cd != 0)) {
        fVar20 = fVar20 + local_188 * fVar23 * fVar18;
        fVar21 = fVar21 + local_178 * fVar23 * fVar18;
        fVar24 = fVar24 + local_158 * fVar23 * fVar18;
      }
    }
    if (DAT_1801f53d9 != '\0') goto LAB_18012056b;
    if (DAT_1801f3ad8 != (longlong *)0x0) {
      plVar16 = DAT_1801f3ad8;
      uVar10 = FUN_1800de890(DAT_1801ebda0);
      cVar7 = (**(code **)(*plVar16 + 0x60))(plVar16,uVar10 & 0xffffffff);
      if ((cVar7 != '\0') && (DAT_1801f53cd != 0)) {
        fVar20 = fVar20 - local_188 * fVar23 * fVar18;
        fVar21 = fVar21 - local_178 * fVar23 * fVar18;
        fVar24 = fVar24 - local_158 * fVar23 * fVar18;
      }
    }
    if (DAT_1801f53d9 != '\0') goto LAB_18012056b;
    if (DAT_1801f3ad8 != (longlong *)0x0) {
      plVar16 = DAT_1801f3ad8;
      uVar10 = FUN_1800de890(DAT_1801ebd9c);
      cVar7 = (**(code **)(*plVar16 + 0x60))(plVar16,uVar10 & 0xffffffff);
      if ((cVar7 != '\0') && (DAT_1801f53cd != 0)) {
        fVar20 = fVar20 - fVar19 * fVar23 * fVar18;
        fVar21 = fVar21 - fVar17 * fVar23 * fVar18;
        fVar24 = fVar24 - fVar22 * fVar23 * fVar18;
      }
    }
    if (DAT_1801f53d9 != '\0') goto LAB_18012056b;
    if (DAT_1801f3ad8 != (longlong *)0x0) {
      plVar16 = DAT_1801f3ad8;
      uVar10 = FUN_1800de890(DAT_1801ebd98);
      cVar7 = (**(code **)(*plVar16 + 0x60))(plVar16,uVar10 & 0xffffffff);
      if ((cVar7 != '\0') && (DAT_1801f53cd != 0)) {
        fVar20 = fVar20 + fVar19 * fVar23 * fVar18;
        fVar21 = fVar21 + fVar17 * fVar23 * fVar18;
        fVar24 = fVar24 + fVar22 * fVar23 * fVar18;
      }
    }
    if ((DAT_1801f53d9 != '\0') || (DAT_1801f3ad8 == (longlong *)0x0)) goto LAB_18012056b;
    plVar16 = DAT_1801f3ad8;
    uVar10 = FUN_1800de890(DAT_1801ebd94);
    cVar7 = (**(code **)(*plVar16 + 0x60))(plVar16,uVar10 & 0xffffffff);
    if ((cVar7 == '\0') || (DAT_1801f53cd == 0)) goto LAB_18012056b;
    fVar20 = fVar20 + fVar25 * fVar23 * fVar18;
    fVar21 = fVar21 + fVar26 * fVar23 * fVar18;
    fVar24 = fVar24 + (float)local_1a8 * fVar23 * fVar18;
    fVar19 = (float)local_1a8;
  }
  else {
LAB_18012056b:
    fVar19 = (float)local_1a8;
  }
  if ((DAT_1801f53d9 == '\0') && (DAT_1801f3ad8 != (longlong *)0x0)) {
    plVar16 = DAT_1801f3ad8;
    uVar10 = FUN_1800de890(DAT_1801ebd90);
    cVar7 = (**(code **)(*plVar16 + 0x60))(plVar16,uVar10 & 0xffffffff);
    if ((cVar7 != '\0') && (DAT_1801f53cd != 0)) {
      fVar20 = fVar20 - fVar25 * fVar23 * fVar18;
      fVar21 = fVar21 - fVar26 * fVar23 * fVar18;
      fVar24 = fVar24 - fVar19 * fVar23 * fVar18;
    }
  }
  fVar25 = DAT_1801d8ea8;
  if ((DAT_1801f53d9 == '\0') && (DAT_1801f3ad8 != (longlong *)0x0)) {
    plVar16 = DAT_1801f3ad8;
    uVar10 = FUN_1800de890(DAT_1801ebd8c);
    cVar7 = (**(code **)(*plVar16 + 0x60))(plVar16,uVar10 & 0xffffffff);
    if ((cVar7 != '\0') && (DAT_1801f53cd != 0)) {
      DAT_1801ebdbc = DAT_1801ebdbc - fVar18 * fVar25;
    }
  }
  if (DAT_1801ebdbc < DAT_1801d8e98) {
    DAT_1801ebdbc = 5.0;
  }
  if ((DAT_1801f53d9 == '\0') && (DAT_1801f3ad8 != (longlong *)0x0)) {
    plVar16 = DAT_1801f3ad8;
    uVar10 = FUN_1800de890(DAT_1801ebd88);
    cVar7 = (**(code **)(*plVar16 + 0x60))(plVar16,uVar10 & 0xffffffff);
    if ((cVar7 != '\0') && (DAT_1801f53cd != 0)) {
      DAT_1801ebdbc = DAT_1801ebdbc + fVar18 * fVar25;
    }
  }
  if (DAT_1801d8ef8 < DAT_1801ebdbc) {
    DAT_1801ebdbc = 160.0;
  }
  nativeInit(0x1a31fe0049e542f6);
  nativeCall();
  uVar3 = DAT_1801fe3b0;
  nativeInit(0x8c1dc7770c51dc8d);
  local_res8 = (ulonglong)uVar3;
  nativePush64(local_res8);
  nativePush64(0);
  nativeCall();
  nativeInit(0x11e65974a982637c);
  local_res8 = 2;
  nativePush64(2);
  local_res8 = 1;
  nativePush64(1);
  pfVar12 = (float *)nativeCall();
  fVar25 = *pfVar12;
  nativeInit(0x11e65974a982637c);
  local_res8 = 2;
  nativePush64(2);
  local_res8 = 2;
  nativePush64(2);
  pfVar12 = (float *)nativeCall();
  fVar19 = 0.0;
  fVar26 = *pfVar12;
  if (DAT_1801f53d9 != '\0') {
    fVar25 = 0.0;
    fVar26 = 0.0;
  }
  fVar17 = fVar25 * DAT_1801d8f38 * _DAT_1801ebdcc;
  fVar26 = fVar26 * DAT_1801d8f38 * _DAT_1801ebdcc;
  nativeInit(0x997abd671d25ca0b);
  local_res8 = (ulonglong)uVar2;
  nativePush64(local_res8);
  nativePush64(0);
  p_Var9 = nativeCall();
  _Var4 = *p_Var9;
  nativeInit(0x9a9112a0fe9a4713);
  local_res8 = (ulonglong)uVar2;
  nativePush64(local_res8);
  nativePush64(0);
  p_Var9 = nativeCall();
  uVar3 = (uint)*p_Var9;
  local_198[0] = 0;
  nativeInit(0xc906a7dab05c8d2b);
  local_res8 = (ulonglong)(uint)fVar20;
  nativePush64(local_res8);
  local_res8 = (ulonglong)(uint)fVar21;
  nativePush64(local_res8);
  local_res8 = (ulonglong)(uint)fVar24;
  nativePush64(local_res8);
  nativePush64((__uint64)local_198);
  nativePush64(0);
  nativePush64(0);
  nativeCall();
  fVar25 = (DAT_1801ec754 - fVar21) * (DAT_1801ec754 - fVar21) +
           (DAT_1801ec750 - fVar20) * (DAT_1801ec750 - fVar20) +
           (DAT_1801ec758 - fVar24) * (DAT_1801ec758 - fVar24);
  if (fVar25 < 0.0) {
    fVar25 = FUN_1801501f8(fVar25);
  }
  else {
    fVar25 = SQRT(fVar25);
  }
  if (DAT_1801d8ef4 < fVar25) {
    DAT_1801ec750 = fVar20;
    DAT_1801ec754 = fVar21;
    DAT_1801ec758 = fVar24;
  }
  DAT_1801fe3b4 = fVar17 * fVar18 + (float)local_f8;
  DAT_1801ec748 = local_198[0];
  DAT_1801ec740._0_4_ = fVar20;
  DAT_1801ec740._4_4_ = fVar21;
  if ((DAT_1801f39e9 == '\0') && (DAT_1801f39e8 == '\0')) {
LAB_180120ea1:
    local_1a8 = CONCAT44(fVar21,fVar20);
    fStack_1a0 = (float)local_198[0];
    FUN_18011ddc0(uVar2,(uint *)&local_1a8,'\0');
    if ((int)_Var4 == 0) {
LAB_180120a16:
      nativeInit(0x7239b21a38f536ba);
      local_res8 = (ulonglong)uVar3;
      nativePush64(local_res8);
      p_Var9 = nativeCall();
      if ((int)*p_Var9 != 0) {
        local_1a8 = CONCAT44(DAT_1801ec740._4_4_,(float)DAT_1801ec740);
        fStack_1a0 = (float)DAT_1801ec748;
        FUN_18011ddc0(uVar3,(uint *)&local_1a8,'\0');
      }
      goto LAB_180120a72;
    }
  }
  else {
    if ((int)_Var4 == 0) {
      if (DAT_1801f39e9 == '\0') goto LAB_180120ea1;
      local_1a8 = CONCAT44(fVar21,fVar20);
      fStack_1a0 = (float)local_198[0];
      FUN_18011dbe0(uVar2,(uint *)&local_1a8,plVar15,DAT_1801d8ef4 < fVar25);
      goto LAB_180120a16;
    }
    local_1a8 = CONCAT44(fVar21,fVar20);
    fStack_1a0 = (float)local_198[0];
    FUN_18011dbe0(uVar3,(uint *)&local_1a8,plVar15,DAT_1801d8ef4 < fVar25);
  }
  nativeInit(0x42a8ec77d5150cbe);
  local_res8 = (ulonglong)uVar3;
  nativePush64(local_res8);
  local_res8 = 0;
  nativePush64(0);
  nativeCall();
LAB_180120a72:
  fVar25 = DAT_1801fe3b4;
  uVar2 = DAT_1801fe3b0;
  fVar17 = (float)local_138;
  if (DAT_1801f39ea == '\0') {
    fVar19 = local_res18 + (float)_Stack_130;
  }
  nativeInit(0x85973643155d0b07);
  local_res8 = (ulonglong)uVar2;
  nativePush64(local_res8);
  local_res8 = (ulonglong)(uint)(fVar26 * fVar18 + fVar17);
  nativePush64(local_res8);
  local_res8 = (ulonglong)(uint)fVar19;
  nativePush64(local_res8);
  local_res8 = (ulonglong)(uint)fVar25;
  nativePush64(local_res8);
  nativePush64(0);
  nativeCall();
  uVar2 = DAT_1801fe3b0;
  nativeInit(0x4d41783fb745e42e);
  local_res8 = (ulonglong)uVar2;
  nativePush64(local_res8);
  local_res8 = (ulonglong)(uint)fVar20;
  nativePush64(local_res8);
  local_res8 = (ulonglong)(uint)fVar21;
  nativePush64(local_res8);
  local_res8 = (ulonglong)(uint)fVar24;
  nativePush64(local_res8);
  nativeCall();
  uVar2 = DAT_1801fe3b0;
  fVar25 = DAT_1801ebdbc;
  nativeInit(0xb13c14f66a00d047);
  local_res8 = (ulonglong)uVar2;
  nativePush64(local_res8);
  local_res8 = (ulonglong)(uint)fVar25;
  nativePush64(local_res8);
  nativeCall();
  nativeInit(0xbb7454baff08fe25);
  local_res8 = (ulonglong)(uint)fVar20;
  nativePush64(local_res8);
  local_res8 = (ulonglong)(uint)fVar21;
  nativePush64(local_res8);
  local_res8 = (ulonglong)(uint)fVar24;
  nativePush64(local_res8);
  local_res8 = 0;
  nativePush64(0);
  local_res8 = 0;
  nativePush64(0);
  local_res8 = 0;
  nativePush64(0);
  nativeCall();
  uVar2 = DAT_1801fe3b0;
  if (DAT_1801f39e5 != '\0') {
    nativeInit(0x5ee29b4d7d5df897);
    local_res8 = (ulonglong)uVar2;
    nativePush64(local_res8);
    local_res8 = 0x3f800000;
    nativePush64(0x3f800000);
    nativeCall();
    uVar2 = DAT_1801fe3b0;
    nativeInit(0x16a96863a17552bb);
    local_res8 = (ulonglong)uVar2;
    nativePush64(local_res8);
    local_res8 = 1;
    nativePush64(1);
    nativeCall();
    uVar2 = DAT_1801fe3b0;
    fVar20 = DAT_1801ebdb0 - _DAT_1801d8ed8;
    nativeInit(0xc669eea5d031b7de);
    local_res8 = (ulonglong)uVar2;
    nativePush64(local_res8);
    local_res8 = (ulonglong)(uint)fVar20;
    nativePush64(local_res8);
    nativeCall();
  }
  uVar2 = DAT_1801ebdb8;
  if (DAT_1801f39e6 != '\0') {
    nativeInit(0xa76359fc80b2438e);
    local_res8 = (ulonglong)uVar2;
    nativePush64(local_res8);
    nativeCall();
  }
  DAT_1801f39ea = 0;
  return;
}

// ---- Function: FUN_180120f20 ----
void FUN_180120f20(HANDLE param_1,uint param_2,int param_3)

{
  BOOL BVar1;
  DWORD64 DVar2;
  byte bVar3;
  uint uVar4;
  ulonglong uVar5;
  DWORD64 *pDVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  DWORD64 DVar10;
  int32_t auStack_508 [32];
  _CONTEXT local_4e8;
  ulonglong local_18;
  
  local_18 = DAT_1801eb080 ^ (ulonglong)auStack_508;
  local_4e8.ContextFlags = 0x100001;
  BVar1 = GetThreadContext(param_1,&local_4e8);
  if (BVar1 != 0) {
    uVar9 = DAT_1801fe3dc;
    if (param_2 != 0xffffffff) {
      uVar9 = param_2 + 1;
    }
    uVar4 = 0;
    if (param_2 != 0xffffffff) {
      uVar4 = param_2;
    }
    if (uVar4 < uVar9) {
      lVar7 = (ulonglong)uVar4 * 0x38;
      uVar8 = (ulonglong)(uVar9 - uVar4);
      DVar10 = local_4e8.Rip;
      do {
        pDVar6 = (DWORD64 *)(DAT_1801fe3d0 + lVar7);
        if (param_3 == 0) {
          bVar3 = 0;
        }
        else if (param_3 == 1) {
          bVar3 = 1;
        }
        else {
          bVar3 = (byte)pDVar6[4] >> 2 & 1;
        }
        if (((byte)pDVar6[4] >> 1 & 1) != bVar3) {
          if (bVar3 == 0) {
            if ((((byte)pDVar6[4] & 1) == 0) || (DVar2 = *pDVar6, DVar10 != DVar2 - 5)) {
              uVar5 = 0;
              uVar9 = *(uint *)((longlong)pDVar6 + 0x24) & 0xf;
              if (uVar9 != 0) {
                do {
                  if (DVar10 == (ulonglong)*(byte *)(uVar5 + 0x30 + (longlong)pDVar6) + pDVar6[2]) {
                    DVar2 = (ulonglong)*(byte *)(uVar5 + 0x28 + (longlong)pDVar6) + *pDVar6;
                    goto LAB_180121008;
                  }
                  uVar4 = (int)uVar5 + 1;
                  uVar5 = (ulonglong)uVar4;
                } while (uVar4 < uVar9);
              }
              if (DVar10 != pDVar6[1]) goto LAB_180121006;
              DVar2 = *pDVar6;
            }
          }
          else {
            uVar5 = 0;
            uVar9 = *(uint *)((longlong)pDVar6 + 0x24) & 0xf;
            if (uVar9 != 0) {
              do {
                if (DVar10 == (ulonglong)*(byte *)(uVar5 + 0x28 + (longlong)pDVar6) + *pDVar6) {
                  DVar2 = (ulonglong)*(byte *)(uVar5 + 0x30 + (longlong)pDVar6) + pDVar6[2];
                  goto LAB_180121008;
                }
                uVar4 = (int)uVar5 + 1;
                uVar5 = (ulonglong)uVar4;
              } while (uVar4 < uVar9);
            }
LAB_180121006:
            DVar2 = 0;
          }
LAB_180121008:
          if (DVar2 != 0) {
            local_4e8.Rip = DVar2;
            SetThreadContext(param_1,&local_4e8);
            DVar10 = local_4e8.Rip;
          }
        }
        lVar7 = lVar7 + 0x38;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  FUN_1801252c0(local_18 ^ (ulonglong)auStack_508);
  return;
}

// ---- Function: FUN_1801210d0 ----
void FUN_1801210d0(int32_t *param_1)

{
  uint uVar1;
  HANDLE hHeap;
  int iVar2;
  DWORD DVar3;
  HANDLE hObject;
  LPVOID lpMem;
  uint *puVar4;
  int32_t auStack_58 [32];
  uint local_38 [2];
  DWORD local_30;
  DWORD local_2c;
  ulonglong local_18;
  
  local_18 = DAT_1801eb080 ^ (ulonglong)auStack_58;
  hObject = (HANDLE)CreateToolhelp32Snapshot(4,0);
  if (hObject != (HANDLE)0xffffffffffffffff) {
    local_38[0] = 0x1c;
    iVar2 = Thread32First(hObject,local_38);
    if (iVar2 != 0) {
      do {
        if (((0xf < local_38[0]) && (DVar3 = GetCurrentProcessId(), local_2c == DVar3)) &&
           (DVar3 = GetCurrentThreadId(), hHeap = DAT_1801ee920, local_30 != DVar3)) {
          lpMem = (LPVOID)*param_1;
          if (lpMem == (LPVOID)0x0) {
            *(int32_t *)(param_1 + 1) = 0x80;
            lpMem = HeapAlloc(hHeap,0,0x200);
            *param_1 = lpMem;
            if (lpMem == (LPVOID)0x0) goto LAB_1801211f7;
          }
          else if (*(uint *)(param_1 + 1) <= *(uint *)((longlong)param_1 + 0xc)) {
            uVar1 = *(uint *)(param_1 + 1) * 2;
            *(uint *)(param_1 + 1) = uVar1;
            lpMem = HeapReAlloc(hHeap,0,lpMem,(ulonglong)uVar1 << 2);
            if (lpMem == (LPVOID)0x0) goto LAB_1801211f7;
            *param_1 = lpMem;
          }
          puVar4 = (uint *)((longlong)param_1 + 0xc);
          *(DWORD *)((longlong)lpMem + (ulonglong)*puVar4 * 4) = local_30;
          *puVar4 = *puVar4 + 1;
        }
        local_38[0] = 0x1c;
        iVar2 = Thread32Next(hObject,local_38);
      } while (iVar2 != 0);
      DVar3 = GetLastError();
      if (DVar3 != 0x12) {
LAB_1801211f7:
        if ((LPVOID)*param_1 != (LPVOID)0x0) {
          HeapFree(DAT_1801ee920,0,(LPVOID)*param_1);
          *param_1 = 0;
        }
      }
    }
    CloseHandle(hObject);
  }
  FUN_1801252c0(local_18 ^ (ulonglong)auStack_58);
  return;
}

// ---- Function: FUN_180121240 ----
int32_t FUN_180121240(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  HANDLE hThread;
  uint uVar2;
  ulonglong uVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  iVar1 = FUN_1801210d0(param_1);
  if (iVar1 == 0) {
    return 9;
  }
  if (*param_1 == 0) {
    return 0;
  }
  uVar3 = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    do {
      hThread = OpenThread(0x5a,0,*(DWORD *)(*param_1 + uVar3 * 4));
      if (hThread != (HANDLE)0x0) {
        SuspendThread(hThread);
        FUN_180120f20(hThread,param_2,param_3);
        CloseHandle(hThread);
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < *(uint *)((longlong)param_1 + 0xc));
  }
  return 0;
}

// ---- Function: FUN_180121320 ----
int32_t FUN_180121320(ulonglong param_1,DWORD param_2)

{
  SIZE_T dwSize;
  BOOL BVar1;
  HANDLE hProcess;
  int32_t *puVar2;
  int32_t *lpAddress;
  DWORD local_res10 [2];
  
  puVar2 = (int32_t *)((param_1 & 0xffffffff) * 0x38 + DAT_1801fe3d0);
  lpAddress = (int32_t *)*puVar2 + -5;
  if ((*(byte *)(puVar2 + 4) & 1) == 0) {
    lpAddress = (int32_t *)*puVar2;
  }
  dwSize = (ulonglong)(*(byte *)(puVar2 + 4) & 1) * 2 + 5;
  local_res10[0] = param_2;
  BVar1 = VirtualProtect(lpAddress,dwSize,0x40,local_res10);
  if (BVar1 == 0) {
    return 10;
  }
  *lpAddress = 0xe9;
  *(int *)(lpAddress + 1) = (*(int *)(puVar2 + 1) - (int)lpAddress) + -5;
  if ((*(byte *)(puVar2 + 4) & 1) != 0) {
    *(int32_t *)*puVar2 = 0xf9eb;
  }
  VirtualProtect(lpAddress,dwSize,local_res10[0],local_res10);
  hProcess = GetCurrentProcess();
  FlushInstructionCache(hProcess,lpAddress,dwSize);
  *(byte *)(puVar2 + 4) = *(byte *)(puVar2 + 4) | 6;
  return 0;
}

// ---- Function: FUN_1801213f0 ----
ulonglong FUN_1801213f0(void)

{
  uint uVar1;
  ulonglong uVar2;
  HANDLE hThread;
  byte *pbVar3;
  uint uVar4;
  DWORD *pDVar5;
  ulonglong uVar6;
  DWORD *local_18;
  uint local_c;
  
  uVar4 = 0;
  if (DAT_1801fe3dc != 0) {
    pbVar3 = (byte *)(DAT_1801fe3d0 + 0x20);
    do {
      if ((*pbVar3 & 2) == 0) {
        if (uVar4 == 0xffffffff) {
          return 0;
        }
        uVar2 = FUN_180121240((longlong *)&local_18,0xffffffff,1);
        uVar6 = uVar2 & 0xffffffff;
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        uVar1 = DAT_1801fe3dc;
        if (DAT_1801fe3dc <= uVar4) goto LAB_18012148d;
        goto LAB_180121460;
      }
      uVar4 = uVar4 + 1;
      pbVar3 = pbVar3 + 0x38;
    } while (uVar4 < DAT_1801fe3dc);
  }
  return 0;
LAB_180121460:
  do {
    if ((*(byte *)((ulonglong)uVar4 * 0x38 + 0x20 + DAT_1801fe3d0) & 2) == 0) {
      uVar2 = FUN_180121320((ulonglong)uVar4,(DWORD)((ulonglong)uVar4 * 0x38));
      uVar6 = uVar2 & 0xffffffff;
      uVar1 = DAT_1801fe3dc;
      if ((int)uVar2 != 0) break;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < uVar1);
LAB_18012148d:
  if (local_18 != (DWORD *)0x0) {
    if (local_c != 0) {
      uVar2 = (ulonglong)local_c;
      pDVar5 = local_18;
      do {
        hThread = OpenThread(0x5a,0,*pDVar5);
        if (hThread != (HANDLE)0x0) {
          ResumeThread(hThread);
          CloseHandle(hThread);
        }
        pDVar5 = pDVar5 + 1;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    HeapFree(DAT_1801ee920,0,local_18);
  }
  return uVar6;
}

// ---- Function: FUN_180121510 ----
void FUN_180121510(int32_t *param_1,LPCVOID param_2,longlong *param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int32_t *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  bool bVar8;
  int32_t auStack_98 [32];
  int32_t local_78 [24];
  SIZE_T local_60;
  DWORD local_58;
  uint local_54;
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_1801eb080 ^ (ulonglong)auStack_98;
  uVar7 = 0;
  LOCK();
  bVar8 = DAT_1801ee918 == 0;
  if (bVar8) {
    DAT_1801ee918 = 1;
  }
  UNLOCK();
  while (!bVar8) {
    Sleep((uint)(0x1f < uVar7));
    uVar7 = uVar7 + 1;
    LOCK();
    bVar8 = DAT_1801ee918 == 0;
    if (bVar8) {
      DAT_1801ee918 = 1;
    }
    UNLOCK();
  }
  if ((((DAT_1801ee920 == (HANDLE)0x0) ||
       (VirtualQuery(param_1,(PMEMORY_BASIC_INFORMATION)local_78,0x30), local_58 != 0x1000)) ||
      ((local_54 & 0xf0) == 0)) ||
     ((VirtualQuery(param_2,(PMEMORY_BASIC_INFORMATION)local_78,0x30), local_58 != 0x1000 ||
      ((local_54 & 0xf0) == 0)))) goto LAB_1801217bd;
  uVar2 = 0;
  plVar6 = DAT_1801fe3d0;
  if (DAT_1801fe3dc != 0) {
    do {
      if (param_1 == (int32_t *)*plVar6) {
        if (uVar2 != 0xffffffff) goto LAB_1801217bd;
        break;
      }
      uVar2 = uVar2 + 1;
      plVar6 = plVar6 + 7;
    } while (uVar2 < DAT_1801fe3dc);
  }
  puVar4 = FUN_180121db0(param_1);
  if (puVar4 == (int32_t *)0x0) goto LAB_1801217bd;
  plVar6 = (longlong *)puVar4[1];
  lVar1 = *plVar6;
  *(int *)(puVar4 + 2) = *(int *)(puVar4 + 2) + 1;
  puVar4[1] = lVar1;
  if (plVar6 == (longlong *)0x0) goto LAB_1801217bd;
  local_78._0_8_ = param_1;
  local_78._8_8_ = param_2;
  local_78._16_8_ = plVar6;
  iVar3 = FUN_180121970((ulonglong *)local_78);
  if (iVar3 == 0) {
    FUN_180122010(plVar6);
    goto LAB_1801217bd;
  }
  if (DAT_1801fe3d0 == (longlong *)0x0) {
    DAT_1801fe3d8 = 0x20;
    DAT_1801fe3d0 = (longlong *)HeapAlloc(DAT_1801ee920,0,0x700);
    if (DAT_1801fe3d0 != (longlong *)0x0) goto LAB_1801216f8;
  }
  else {
    if (DAT_1801fe3d8 <= DAT_1801fe3dc) {
      plVar5 = (longlong *)
               HeapReAlloc(DAT_1801ee920,0,DAT_1801fe3d0,(ulonglong)(DAT_1801fe3d8 * 2) * 0x38);
      if (plVar5 == (longlong *)0x0) goto LAB_180121684;
      DAT_1801fe3d8 = DAT_1801fe3d8 * 2;
      DAT_1801fe3d0 = plVar5;
    }
LAB_1801216f8:
    uVar7 = (ulonglong)DAT_1801fe3dc;
    DAT_1801fe3dc = DAT_1801fe3dc + 1;
    plVar5 = DAT_1801fe3d0 + uVar7 * 7;
    if (plVar5 != (longlong *)0x0) {
      *(uint *)((longlong)plVar5 + 0x24) = *(uint *)((longlong)plVar5 + 0x24) & 0xfffffff0;
      *plVar5 = local_78._0_8_;
      plVar5[1] = local_60;
      plVar5[2] = local_78._16_8_;
      *(byte *)(plVar5 + 4) = (byte)local_58 & 1 | *(byte *)(plVar5 + 4) & 0xf8;
      *(uint *)((longlong)plVar5 + 0x24) = *(uint *)((longlong)plVar5 + 0x24) | local_54 & 0xf;
      plVar5[5] = local_50;
      plVar5[6] = local_48;
      if (local_58 == 0) {
        *(int32_t *)(plVar5 + 3) = *(int32_t *)param_1;
        *(int32_t *)((longlong)plVar5 + 0x1c) = *(int32_t *)((longlong)param_1 + 4);
      }
      else {
        *(int32_t *)(plVar5 + 3) = *(int32_t *)((longlong)param_1 + -5);
        *(int32_t *)((longlong)plVar5 + 0x1c) = *(int32_t *)((longlong)param_1 + -1);
        *(int32_t *)((longlong)plVar5 + 0x1e) = *(int32_t *)((longlong)param_1 + 1);
      }
      if (param_3 != (longlong *)0x0) {
        *param_3 = local_78._16_8_;
      }
      goto LAB_1801217bd;
    }
  }
LAB_180121684:
  FUN_180122010(plVar6);
LAB_1801217bd:
  LOCK();
  DAT_1801ee918 = 0;
  UNLOCK();
  FUN_1801252c0(local_40 ^ (ulonglong)auStack_98);
  return;
}

// ---- Function: FUN_1801217f0 ----
ulonglong FUN_1801217f0(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  HANDLE hThread;
  DWORD DVar3;
  ulonglong uVar4;
  DWORD *pDVar5;
  ulonglong uVar6;
  bool bVar7;
  DWORD *local_18;
  uint local_c;
  
  uVar6 = 0;
  LOCK();
  bVar7 = DAT_1801ee918 == 0;
  if (bVar7) {
    DAT_1801ee918 = 1;
  }
  UNLOCK();
  uVar4 = uVar6;
  while (!bVar7) {
    Sleep((uint)(0x1f < uVar4));
    uVar4 = uVar4 + 1;
    LOCK();
    bVar7 = DAT_1801ee918 == 0;
    if (bVar7) {
      DAT_1801ee918 = 1;
    }
    UNLOCK();
  }
  if (DAT_1801ee920 == (HANDLE)0x0) {
    uVar4 = 2;
  }
  else if (param_1 == 0) {
    uVar4 = FUN_1801213f0();
    uVar4 = uVar4 & 0xffffffff;
  }
  else {
    plVar1 = DAT_1801fe3d0;
    if (DAT_1801fe3dc != 0) {
      do {
        DVar3 = (DWORD)uVar6;
        if (param_1 == *plVar1) {
          if (DVar3 != 0xffffffff) {
            if ((*(byte *)(DAT_1801fe3d0 + uVar6 * 7 + 4) & 2) == 0) {
              uVar2 = FUN_180121240((longlong *)&local_18,DVar3,1);
              uVar4 = uVar2 & 0xffffffff;
              if ((int)uVar2 == 0) {
                uVar4 = FUN_180121320(uVar6,DVar3);
                uVar4 = uVar4 & 0xffffffff;
                if (local_18 != (DWORD *)0x0) {
                  if (local_c != 0) {
                    uVar6 = (ulonglong)local_c;
                    pDVar5 = local_18;
                    do {
                      hThread = OpenThread(0x5a,0,*pDVar5);
                      if (hThread != (HANDLE)0x0) {
                        ResumeThread(hThread);
                        CloseHandle(hThread);
                      }
                      pDVar5 = pDVar5 + 1;
                      uVar6 = uVar6 - 1;
                    } while (uVar6 != 0);
                  }
                  HeapFree(DAT_1801ee920,0,local_18);
                }
              }
            }
            else {
              uVar4 = 5;
            }
            goto LAB_18012194b;
          }
          break;
        }
        uVar6 = (ulonglong)(DVar3 + 1);
        plVar1 = plVar1 + 7;
      } while (DVar3 + 1 < DAT_1801fe3dc);
    }
    uVar4 = 4;
  }
LAB_18012194b:
  LOCK();
  DAT_1801ee918 = 0;
  UNLOCK();
  return uVar4;
}

// ---- Function: FUN_180121970 ----
void FUN_180121970(ulonglong *param_1)

{
  char cVar1;
  byte bVar2;
  int32_t extraout_var;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  int32_t *puVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  ulonglong *puVar12;
  byte *pbVar13;
  char *pcVar14;
  uint uVar15;
  ulonglong *puVar16;
  int32_t auStack_d8 [32];
  byte local_b8;
  byte local_b7;
  ulonglong local_b0;
  _MEMORY_BASIC_INFORMATION local_a8;
  int32_t local_78;
  int32_t uStack_76;
  int32_t uStack_72;
  int32_t uStack_70;
  int32_t uStack_6c;
  ulonglong local_68;
  ulonglong *local_60;
  int32_t local_58;
  int32_t local_56;
  int32_t local_52;
  int32_t local_50;
  ulonglong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_1801eb080 ^ (ulonglong)auStack_d8;
  puVar16 = (ulonglong *)0x0;
  local_58 = 0x15ff;
  local_56 = 2;
  local_52 = 0x8eb;
  local_b8 = 0;
  local_50 = (byte *)0x0;
  local_78 = 0x25ff;
  uStack_76 = 0;
  uStack_72 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  local_68 = 0x25ff0e70;
  local_60 = (ulonglong *)0x0;
  local_b7 = 0;
  param_1[4] = 0;
  puVar11 = puVar16;
  do {
    uVar10 = (ulonglong)local_b8;
    uVar7 = param_1[2];
    uVar3 = (uint)local_b8;
    puVar9 = (ulonglong *)((ulonglong)local_b7 + *param_1);
    local_b0 = uVar10;
    bVar2 = FUN_180122090((byte *)puVar9,(byte *)&local_a8);
    uVar4 = CONCAT71(extraout_var,bVar2) & 0xffffffff;
    uVar15 = (uint)CONCAT71(extraout_var,bVar2);
    if (((uint)local_a8._33_4_ >> 0xc & 1) != 0) goto LAB_180121d75;
    puVar6 = puVar11;
    if (local_b7 < 5) {
      if ((local_a8.AllocationBase._5_1_ & 199) == 5) {
        puVar11 = puVar9;
        puVar12 = local_48;
        for (; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(byte *)puVar12 = (byte)*puVar11;
          puVar11 = (ulonglong *)((longlong)puVar11 + 1);
          puVar12 = (ulonglong *)((longlong)puVar12 + 1);
        }
        *(uint *)((longlong)local_48 +
                 ((ulonglong)(byte)local_a8.BaseAddress -
                 (ulonglong)((uint)local_a8._33_4_ >> 2 & 0xf)) + -4) =
             ((int)puVar9 - ((int)uVar7 + uVar3)) + local_a8._29_4_;
        uVar10 = local_b0;
        puVar12 = local_48;
        if ((local_a8.AllocationBase._3_1_ == 0xff) && (local_a8.AllocationBase._7_1_ == '\x04')) {
          puVar16 = (ulonglong *)0x1;
        }
      }
      else if (local_a8.AllocationBase._3_1_ == 0xe8) {
        uVar15 = 0x10;
        local_50 = (byte *)((longlong)puVar9 +
                           (ulonglong)(byte)local_a8.BaseAddress + (longlong)(int)local_a8._21_4_);
        puVar12 = (ulonglong *)&local_58;
      }
      else {
        puVar12 = puVar9;
        if ((local_a8.AllocationBase._3_1_ & 0xfd) == 0xe9) {
          lVar5 = (longlong)(char)local_a8._21_1_;
          if (local_a8.AllocationBase._3_1_ != 0xeb) {
            lVar5 = (longlong)(int)local_a8._21_4_;
          }
          puVar6 = (ulonglong *)((longlong)puVar9 + lVar5 + (ulonglong)(byte)local_a8.BaseAddress);
          if ((puVar6 < (ulonglong *)*param_1) || ((ulonglong *)((longlong)*param_1 + 5U) <= puVar6)
             ) {
            uStack_72 = SUB82(puVar6,0);
            uStack_70 = (int32_t)((ulonglong)puVar6 >> 0x10);
            uStack_6c = (int32_t)((ulonglong)puVar6 >> 0x30);
            puVar16 = (ulonglong *)(ulonglong)(puVar11 <= puVar9);
            uVar15 = 0xe;
            puVar12 = (ulonglong *)&local_78;
            puVar6 = puVar11;
          }
          else if (puVar6 <= puVar11) {
            puVar6 = puVar11;
          }
        }
        else if ((((local_a8.AllocationBase._3_1_ & 0xf0) == 0x70) ||
                 ((local_a8.AllocationBase._3_1_ & 0xfc) == 0xe0)) ||
                ((local_a8.AllocationBase._4_1_ & 0xf0) == 0x80)) {
          if (((local_a8.AllocationBase._3_1_ & 0xf0) == 0x70) ||
             (lVar5 = (longlong)(int)local_a8._21_4_, (local_a8.AllocationBase._3_1_ & 0xfc) == 0xe0
             )) {
            lVar5 = (longlong)(char)local_a8._21_1_;
          }
          puVar6 = (ulonglong *)((longlong)puVar9 + lVar5 + (ulonglong)(byte)local_a8.BaseAddress);
          if ((puVar6 < (ulonglong *)*param_1) || ((ulonglong *)((longlong)*param_1 + 5U) <= puVar6)
             ) {
            if ((local_a8.AllocationBase._3_1_ & 0xfc) == 0xe0) goto LAB_180121d75;
            bVar2 = local_a8.AllocationBase._3_1_;
            if (local_a8.AllocationBase._3_1_ == 0xf) {
              bVar2 = local_a8.AllocationBase._4_1_;
            }
            local_60 = puVar6;
            local_68 = CONCAT71(local_68._1_7_,bVar2) & 0xffffffffffffff0f ^ 0x71;
            uVar15 = 0x10;
            uVar10 = local_b0;
            puVar12 = &local_68;
            puVar6 = puVar11;
          }
          else {
            uVar10 = local_b0;
            if (puVar6 <= puVar11) {
              puVar6 = puVar11;
            }
          }
        }
        else {
          uVar10 = local_b0;
          if ((local_a8.AllocationBase._3_1_ & 0xfe) == 0xc2) {
            puVar16 = (ulonglong *)(ulonglong)(puVar11 <= puVar9);
          }
        }
      }
    }
    else {
      uStack_72 = SUB82(puVar9,0);
      uStack_70 = (int32_t)((ulonglong)puVar9 >> 0x10);
      uStack_6c = (int32_t)((ulonglong)puVar9 >> 0x30);
      uVar15 = 0xe;
      puVar16 = (ulonglong *)0x1;
      puVar12 = (ulonglong *)&local_78;
    }
    if ((((puVar9 < puVar6) && (uVar15 != (byte)local_a8.BaseAddress)) || (0x32 < uVar15 + local_b8)
        ) || (7 < *(uint *)((longlong)param_1 + 0x24))) goto LAB_180121d75;
    *(byte *)((ulonglong)*(uint *)((longlong)param_1 + 0x24) + 0x28 + (longlong)param_1) = local_b7;
    *(byte *)((ulonglong)*(uint *)((longlong)param_1 + 0x24) + 0x30 + (longlong)param_1) = local_b8;
    bVar2 = local_b8 + (char)uVar15;
    *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + 1;
    pbVar13 = (byte *)(param_1[2] + uVar10);
    for (uVar7 = (ulonglong)uVar15; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pbVar13 = (byte)*puVar12;
      puVar12 = (ulonglong *)((longlong)puVar12 + 1);
      pbVar13 = pbVar13 + 1;
    }
    local_b7 = local_b7 + (byte)local_a8.BaseAddress;
    puVar11 = puVar6;
    local_b8 = bVar2;
  } while ((int)puVar16 == 0);
  if (local_b7 < 5) {
    pcVar14 = (char *)((ulonglong)local_b7 + *param_1);
    cVar1 = *pcVar14;
    if (((cVar1 == '\0') || (cVar1 == -0x70)) || (cVar1 == -0x34)) {
      uVar7 = 1;
      if (1 < 5 - local_b7) {
        do {
          if (pcVar14[uVar7] != cVar1) goto LAB_180121c71;
          uVar3 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar3;
        } while (uVar3 < 5 - local_b7);
      }
    }
    else {
LAB_180121c71:
      if (local_b7 < 2) {
        if (((cVar1 != '\0') && (cVar1 != -0x70)) && (cVar1 != -0x34)) goto LAB_180121d75;
        uVar7 = 1;
        if (1 < 2 - local_b7) {
          do {
            if (pcVar14[uVar7] != cVar1) goto LAB_180121d75;
            uVar3 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar3;
          } while (uVar3 < 2 - local_b7);
        }
      }
      VirtualQuery((LPCVOID)(*param_1 - 5),&local_a8,0x30);
      if ((CONCAT31(local_a8.State._1_3_,(int32_t)local_a8.State) != 0x1000) ||
         ((local_a8._33_4_ & 0xf0000000) == 0)) goto LAB_180121d75;
      cVar1 = *(char *)(*param_1 - 5);
      if ((cVar1 != '\0') && ((cVar1 != -0x70 && (cVar1 != -0x34)))) goto LAB_180121d75;
      uVar3 = 1;
      pcVar14 = (char *)(*param_1 - 4);
      do {
        if (*pcVar14 != cVar1) goto LAB_180121d75;
        uVar3 = uVar3 + 1;
        pcVar14 = pcVar14 + 1;
      } while (uVar3 < 5);
      *(int32_t *)(param_1 + 4) = 1;
    }
  }
  uVar7 = param_1[1];
  uStack_72 = (int32_t)uVar7;
  uStack_70 = (int32_t)(uVar7 >> 0x10);
  uStack_6c = (int32_t)(uVar7 >> 0x30);
  puVar8 = (int32_t *)((ulonglong)bVar2 + param_1[2]);
  param_1[3] = (ulonglong)puVar8;
  *puVar8 = CONCAT26(uStack_72,CONCAT42(uStack_76,local_78));
  *(int32_t *)(puVar8 + 1) = uStack_70;
  *(int32_t *)((longlong)puVar8 + 0xc) = uStack_6c;
LAB_180121d75:
  FUN_1801252c0(local_38 ^ (ulonglong)auStack_d8);
  return;
}

// ---- Function: FUN_180121db0 ----
int32_t * FUN_180121db0(int32_t *param_1)

{
  DWORD DVar1;
  SIZE_T SVar2;
  int32_t *puVar3;
  int32_t *puVar4;
  PVOID pvVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int32_t *puVar9;
  int32_t *puVar10;
  _SYSTEM_INFO local_78;
  _MEMORY_BASIC_INFORMATION local_48;
  
  GetSystemInfo(&local_78);
  puVar9 = (int32_t *)local_78.lpMinimumApplicationAddress;
  if (((int32_t *)0x40000000 < param_1) &&
     (local_78.lpMinimumApplicationAddress < param_1 + -0x8000000)) {
    puVar9 = param_1 + -0x8000000;
  }
  puVar10 = param_1 + 0x8000000;
  if (local_78.lpMaximumApplicationAddress <= param_1 + 0x8000000) {
    puVar10 = (int32_t *)local_78.lpMaximumApplicationAddress;
  }
  puVar10 = (int32_t *)((longlong)puVar10 - 0xfff);
  for (puVar4 = DAT_1801fe3c0; puVar4 != (int32_t *)0x0; puVar4 = (int32_t *)*puVar4) {
    if (((puVar9 <= puVar4) && (puVar4 < puVar10)) && (puVar4[1] != 0)) {
      return puVar4;
    }
  }
  uVar8 = 0x40;
  puVar3 = (int32_t *)0x0;
  puVar4 = param_1;
  if (puVar9 <= param_1) {
    do {
      pvVar5 = (PVOID)(ulonglong)local_78.dwAllocationGranularity;
      puVar4 = (int32_t *)
               ((longlong)puVar4 + (-(longlong)pvVar5 - (ulonglong)puVar4 % (ulonglong)pvVar5));
      while( true ) {
        if ((puVar4 < puVar9) || (SVar2 = VirtualQuery(puVar4,&local_48,0x30), SVar2 == 0))
        goto LAB_180121eb9;
        if (local_48.State == 0x10000) break;
        if (local_48.AllocationBase < pvVar5) goto LAB_180121eb9;
        puVar4 = (int32_t *)((longlong)local_48.AllocationBase - (longlong)pvVar5);
      }
      if (puVar4 == (int32_t *)0x0) {
LAB_180121eb9:
        if (puVar3 != (int32_t *)0x0) goto LAB_180121fa0;
        break;
      }
      puVar3 = (int32_t *)VirtualAlloc(puVar4,0x1000,0x3000,0x40);
      if (puVar3 != (int32_t *)0x0) goto LAB_180121f9b;
    } while (puVar9 <= puVar4);
  }
  if (param_1 <= puVar10) {
    do {
      DVar1 = local_78.dwAllocationGranularity;
      uVar6 = (ulonglong)local_78.dwAllocationGranularity;
      param_1 = (int32_t *)
                (((ulonglong)local_78.dwAllocationGranularity - (ulonglong)param_1 % uVar6) +
                (longlong)param_1);
      while( true ) {
        if ((puVar10 < param_1) || (SVar2 = VirtualQuery(param_1,&local_48,0x30), SVar2 == 0))
        goto LAB_180121f9b;
        if (local_48.State == 0x10000) break;
        uVar7 = (DVar1 - 1) + local_48.RegionSize + (longlong)local_48.BaseAddress;
        param_1 = (int32_t *)(uVar7 - uVar7 % uVar6);
      }
    } while (((param_1 != (int32_t *)0x0) &&
             (puVar3 = (int32_t *)VirtualAlloc(param_1,0x1000,0x3000,0x40),
             puVar3 == (int32_t *)0x0)) && (param_1 <= puVar10));
LAB_180121f9b:
    if (puVar3 != (int32_t *)0x0) {
LAB_180121fa0:
      *(int32_t *)(puVar3 + 2) = 0;
      puVar10 = (int32_t *)0x0;
      puVar9 = puVar3;
      do {
        puVar9 = puVar9 + 8;
        *puVar9 = puVar10;
        puVar3[1] = puVar9;
        uVar8 = uVar8 + 0x40;
        puVar10 = puVar9;
      } while (uVar8 < 0xfc1);
      *puVar3 = DAT_1801fe3c0;
      DAT_1801fe3c0 = puVar3;
    }
  }
  return puVar3;
}

// ---- Function: FUN_180122010 ----
void FUN_180122010(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)0x0;
  plVar1 = DAT_1801fe3c0;
  if (DAT_1801fe3c0 != (longlong *)0x0) {
    while (plVar2 = plVar1, plVar2 != (longlong *)((ulonglong)param_1 & 0xfffffffffffff000)) {
      plVar1 = (longlong *)*plVar2;
      plVar3 = plVar2;
      if ((longlong *)*plVar2 == (longlong *)0x0) {
        return;
      }
    }
    *param_1 = plVar2[1];
    plVar1 = plVar2 + 2;
    *(int *)plVar1 = (int)*plVar1 + -1;
    plVar2[1] = (longlong)param_1;
    if ((int)*plVar1 == 0) {
      if (plVar3 == (longlong *)0x0) {
        DAT_1801fe3c0 = (longlong *)*plVar2;
                    
                    
        VirtualFree(plVar2,0,0x8000);
        return;
      }
      *plVar3 = *plVar2;
                    
                    
      VirtualFree(plVar2,0,0x8000);
      return;
    }
  }
  return;
}

// ---- Function: FUN_180122090 ----
byte FUN_180122090(byte *param_1,byte *param_2)

{
  byte bVar1;
  ushort uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  int32_t *puVar12;
  byte bVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulonglong uVar16;
  char cVar17;
  byte bVar18;
  uint uVar19;
  byte bVar20;
  char cVar21;
  char local_res8;
  byte local_res18;
  
  puVar12 = &DAT_1801ebe70;
  bVar6 = 0;
  cVar21 = false;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  cVar17 = '\x10';
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  pbVar14 = param_1;
  do {
    pbVar15 = pbVar14;
    bVar1 = *pbVar15;
    uVar16 = (ulonglong)bVar1;
    pbVar14 = pbVar15 + 1;
    switch(bVar1) {
    case 0x26:
    case 0x2e:
    case 0x36:
    case 0x3e:
    case 100:
    case 0x65:
      param_2[3] = bVar1;
      bVar6 = bVar6 | 0x40;
      break;
    default:
      goto switchD_180122116_caseD_27;
    case 0x66:
      param_2[4] = bVar1;
      bVar6 = bVar6 | 8;
      break;
    case 0x67:
      param_2[5] = bVar1;
      bVar6 = bVar6 | 0x10;
      break;
    case 0xf0:
      param_2[2] = bVar1;
      bVar6 = bVar6 | 0x20;
      break;
    case 0xf2:
      param_2[1] = bVar1;
      bVar6 = bVar6 | 2;
      break;
    case 0xf3:
      param_2[1] = bVar1;
      bVar6 = bVar6 | 4;
    }
    cVar17 = cVar17 + -1;
  } while (cVar17 != '\0');
switchD_180122116_caseD_27:
  uVar19 = (uint)bVar6 << 0x17;
  bVar13 = 1;
  if (bVar6 != 0) {
    bVar13 = bVar6;
  }
  *(uint *)(param_2 + 0x21) = uVar19;
  if ((bVar1 & 0xf0) == 0x40) {
    uVar19 = uVar19 | 0x40000000;
    bVar6 = bVar1 >> 3 & 1;
    *(uint *)(param_2 + 0x21) = uVar19;
    param_2[7] = bVar6;
    if (bVar6 != 0) {
      cVar21 = (*pbVar14 & 0xf8) == 0xb8;
    }
    param_2[8] = bVar1 >> 2 & 1;
    param_2[10] = bVar1 & 1;
    param_2[9] = bVar1 >> 1 & 1;
    bVar6 = *pbVar14;
    pbVar14 = pbVar15 + 2;
    uVar16 = (ulonglong)bVar6;
    if ((bVar6 & 0xf0) != 0x40) goto LAB_1801221ed;
LAB_180122256:
    uVar19 = uVar19 | 0x3000;
    local_res18 = (byte)uVar16;
    *(uint *)(param_2 + 0x21) = uVar19;
    uVar10 = 0;
    if ((local_res18 & 0xfd) != 0x24) goto LAB_18012227a;
    uVar10 = 1;
    cVar17 = '\0';
  }
  else {
LAB_1801221ed:
    bVar6 = (byte)uVar16;
    param_2[0xb] = bVar6;
    if (bVar6 == 0xf) {
      puVar12 = (int32_t *)&DAT_1801ebeba;
      uVar16 = (ulonglong)*pbVar14;
      param_2[0xc] = *pbVar14;
      pbVar14 = pbVar14 + 1;
    }
    else if ((0x9f < bVar6) && (bVar6 < 0xa4)) {
      cVar21 = cVar21 + '\x01';
      if ((bVar13 & 0x10) == 0) {
        bVar13 = bVar13 & 0xf7;
      }
      else {
        bVar13 = bVar13 | 8;
      }
    }
    bVar6 = (byte)uVar16;
    bVar1 = *(byte *)((longlong)puVar12 +
                     (ulonglong)((uint)uVar16 & 3) +
                     (ulonglong)*(byte *)((uVar16 >> 2) + (longlong)puVar12));
    uVar10 = (uint)bVar1;
    if (bVar1 == 0xff) goto LAB_180122256;
LAB_18012227a:
    cVar17 = '\0';
    local_res18 = (byte)uVar16;
    if ((char)uVar10 < '\0') {
      uVar2 = *(ushort *)((ulonglong)(uVar10 & 0x7f) + (longlong)puVar12);
      uVar10 = (uint)uVar2;
      cVar17 = (char)(uVar2 >> 8);
    }
  }
  bVar1 = param_2[0xc];
  if ((bVar1 != 0) &&
     ((s_____AI____LB________ODS___DWC____1801ebfac
       [(ulonglong)(byte)s_____AI____LB________ODS___DWC____1801ebfac[uVar16 >> 2] +
        (ulonglong)((uint)uVar16 & 3)] & bVar13) != 0)) {
    uVar19 = uVar19 | 0x3000;
    *(uint *)(param_2 + 0x21) = uVar19;
  }
  if ((uVar10 & 1) == 0) {
    if ((bVar13 & 0x20) != 0) {
      *(uint *)(param_2 + 0x21) = uVar19 | 0x9000;
    }
  }
  else {
    bVar18 = *pbVar14;
    uVar11 = uVar19 | 1;
    param_2[0xd] = bVar18;
    bVar20 = bVar18 >> 6;
    bVar7 = bVar18 & 7;
    bVar18 = bVar18 >> 3 & 7;
    *(uint *)(param_2 + 0x21) = uVar11;
    param_2[0xe] = bVar20;
    param_2[0x10] = bVar7;
    param_2[0xf] = bVar18;
    if ((cVar17 != '\0') && ((char)(cVar17 << bVar18) < '\0')) {
      uVar11 = uVar19 | 0x3001;
      *(uint *)(param_2 + 0x21) = uVar11;
    }
    if (((bVar1 == 0) && (0xd8 < bVar6)) && (bVar6 < 0xe0)) {
      if (bVar20 == 3) {
        cVar17 = (&DAT_1801ebf74)[(ulonglong)bVar18 + (ulonglong)(byte)(bVar6 + 0x27) * 8];
        bVar8 = bVar7;
      }
      else {
        cVar17 = (&DAT_1801ebf6d)[(byte)(bVar6 + 0x27)];
        bVar8 = bVar18;
      }
      if ((char)(cVar17 << bVar8) < '\0') {
        uVar11 = uVar11 | 0x3000;
        *(uint *)(param_2 + 0x21) = uVar11;
      }
    }
    if ((bVar13 & 0x20) != 0) {
      if (bVar20 == 3) {
        *(uint *)(param_2 + 0x21) = uVar11 | 0x9000;
      }
      else {
        if (bVar1 == 0) {
          pbVar9 = &DAT_1801ec036;
          pbVar15 = &DAT_1801ec01e;
          bVar8 = bVar6 & 0xfe;
        }
        else {
          pbVar9 = &DAT_1801ec048;
          pbVar15 = &DAT_1801ec036;
          bVar8 = bVar6;
        }
        do {
          if (*pbVar15 == bVar8) {
            if (-1 < (char)(pbVar15[1] << bVar18)) goto LAB_180122405;
            break;
          }
          pbVar15 = pbVar15 + 2;
        } while (pbVar15 != pbVar9);
        *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 0x9000;
      }
    }
LAB_180122405:
    if (bVar1 == 0) {
      if (local_res18 == 0x8c) {
LAB_1801224ea:
        if (5 < bVar18) goto LAB_1801224f0;
      }
      else {
        if (local_res18 == 0x8e) {
          if (bVar18 != 1) goto LAB_1801224ea;
          goto LAB_1801224f0;
        }
LAB_180122466:
        if (bVar20 == 3) {
          pbVar9 = &DAT_1801ec057;
          pbVar15 = &DAT_1801ec081;
          if (bVar1 == 0) {
            pbVar15 = &DAT_1801ec057;
            pbVar9 = &DAT_1801ec048;
          }
          for (; pbVar9 != pbVar15; pbVar9 = pbVar9 + 3) {
            if (*pbVar9 == bVar6) {
              if (((pbVar9[1] & bVar13) != 0) && (-1 < (char)(pbVar9[2] << bVar18)))
              goto LAB_1801224f0;
              break;
            }
          }
        }
        else if (bVar1 != 0) {
          if (local_res18 == 0x50) {
LAB_1801224d4:
            bVar1 = bVar13 & 9;
          }
          else {
            if (local_res18 == 0xc5) goto LAB_1801224f0;
            if (local_res18 != 0xd6) {
              if ((local_res18 != 0xd7) && (local_res18 != 0xf7)) goto LAB_1801224f8;
              goto LAB_1801224d4;
            }
            bVar1 = bVar13 & 6;
          }
          if (bVar1 != 0) goto LAB_1801224f0;
        }
      }
    }
    else if (local_res18 == 0x20) {
LAB_180122439:
      bVar20 = 3;
      if ((4 < bVar18) || (bVar18 == 1)) goto LAB_1801224f0;
    }
    else {
      if (local_res18 != 0x21) {
        if (local_res18 == 0x22) goto LAB_180122439;
        if (local_res18 != 0x23) goto LAB_180122466;
      }
      bVar20 = 3;
      if ((byte)(bVar18 - 4) < 2) {
LAB_1801224f0:
        *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 0x11000;
      }
    }
LAB_1801224f8:
    bVar1 = pbVar14[1];
    pbVar15 = pbVar14 + 2;
    if (bVar18 < 2) {
      if (bVar6 == 0xf6) {
        uVar10 = (uint)(byte)((byte)uVar10 | 2);
      }
      else if (bVar6 == 0xf7) {
        uVar10 = (uint)(byte)((byte)uVar10 | 0x10);
      }
    }
    if (bVar20 == 0) {
      if ((bVar13 & 0x10) == 0) {
        bVar6 = 0;
        if (bVar7 == 5) {
          bVar6 = 4;
        }
      }
      else {
        bVar6 = 2;
        if (bVar7 != 6) {
          bVar6 = 0;
        }
      }
    }
    else if (bVar20 == 1) {
      bVar6 = 1;
    }
    else {
      bVar6 = 0;
      if ((bVar20 == 2) && (bVar6 = 2, (bVar13 & 0x10) == 0)) {
        bVar6 = 4;
      }
    }
    if ((bVar20 != 3) && (bVar7 == 4)) {
      *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 2;
      pbVar15 = pbVar14 + 3;
      param_2[0x12] = bVar1 >> 6;
      param_2[0x11] = bVar1;
      param_2[0x13] = bVar1 >> 3 & 7;
      param_2[0x14] = bVar1 & 7;
      if (((bVar1 & 7) == 5) && ((bVar20 & 1) == 0)) {
        bVar6 = 4;
      }
    }
    pbVar9 = pbVar15 + -1;
    if (bVar6 == 1) {
      bVar1 = *pbVar9;
      *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 0x40;
      param_2[0x1d] = bVar1;
LAB_18012261e:
      pbVar14 = pbVar9 + bVar6;
    }
    else if (bVar6 == 2) {
      *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 0x80;
      *(int32_t *)(param_2 + 0x1d) = *(int32_t *)pbVar9;
      pbVar14 = pbVar15 + 1;
    }
    else {
      if (bVar6 != 4) goto LAB_18012261e;
      *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 0x100;
      pbVar14 = pbVar15 + 3;
      *(int32_t *)(param_2 + 0x1d) = *(int32_t *)pbVar9;
    }
  }
  if ((uVar10 & 0x10) == 0) goto LAB_1801226ac;
  if ((uVar10 & 0x40) == 0) {
    if (cVar21 == '\0') {
      if ((bVar13 & 8) == 0) {
        uVar4 = *(int32_t *)pbVar14;
        *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 0x10;
        pbVar14 = pbVar14 + 4;
        *(int32_t *)(param_2 + 0x15) = uVar4;
        goto LAB_1801226ac;
      }
LAB_1801226b1:
      uVar3 = *(int32_t *)pbVar14;
      *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 8;
      *(int32_t *)(param_2 + 0x15) = uVar3;
      pbVar14 = pbVar14 + 2;
    }
    else {
      uVar5 = *(int32_t *)pbVar14;
      *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 0x20;
      *(int32_t *)(param_2 + 0x15) = uVar5;
      pbVar14 = pbVar14 + 8;
LAB_1801226ac:
      if ((uVar10 & 4) != 0) goto LAB_1801226b1;
    }
    if ((uVar10 & 2) != 0) {
      bVar6 = *pbVar14;
      *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 4;
      param_2[0x15] = bVar6;
      pbVar14 = pbVar14 + 1;
    }
    if ((uVar10 & 0x40) == 0) {
      if ((uVar10 & 0x20) != 0) {
        bVar6 = *pbVar14;
        *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 0x204;
        param_2[0x15] = bVar6;
        pbVar14 = pbVar14 + 1;
      }
      goto LAB_18012270a;
    }
  }
  else if ((bVar13 & 8) != 0) {
    uVar3 = *(int32_t *)pbVar14;
    *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 0x208;
    *(int32_t *)(param_2 + 0x15) = uVar3;
    pbVar14 = pbVar14 + 2;
    goto LAB_18012270a;
  }
  uVar4 = *(int32_t *)pbVar14;
  *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 0x210;
  pbVar14 = pbVar14 + 4;
  *(int32_t *)(param_2 + 0x15) = uVar4;
LAB_18012270a:
  local_res8 = (char)param_1;
  bVar6 = (char)pbVar14 - local_res8;
  *param_2 = bVar6;
  if (0xf < bVar6) {
    *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 0x5000;
    *param_2 = 0xf;
    return 0xf;
  }
  return bVar6;
}

