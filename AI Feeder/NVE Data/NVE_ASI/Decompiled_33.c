#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_1800ecea0 ----
void FUN_1800ecea0(int32_t *param_1,ulonglong param_2)

{
  int32_t auVar1 [16];
  int32_t *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  
  if (param_2 == 0) {
                    
                    
    (*(code *)**(int32_t **)*param_1)((int32_t *)*param_1,0x30);
    return;
  }
  uVar5 = 1;
  if ((longlong)param_2 < 0) {
    *(int32_t *)(param_1 + 2) = 0x2d;
    param_2 = -param_2;
    for (uVar3 = param_2; 9 < uVar3; uVar3 = uVar3 / 10000) {
      if (uVar3 < 100) {
        uVar5 = uVar5 + 1;
        break;
      }
      if (uVar3 < 1000) {
        uVar5 = uVar5 + 2;
        break;
      }
      if (uVar3 < 10000) {
        uVar5 = uVar5 + 3;
        break;
      }
      uVar5 = uVar5 + 4;
    }
LAB_1800ecf38:
    uVar5 = uVar5 + 1;
  }
  else {
    uVar3 = param_2;
    if (9 < param_2) {
      do {
        if (uVar3 < 100) goto LAB_1800ecf38;
        if (uVar3 < 1000) {
          uVar5 = uVar5 + 2;
          break;
        }
        if (uVar3 < 10000) {
          uVar5 = uVar5 + 3;
          break;
        }
        uVar5 = uVar5 + 4;
        uVar3 = uVar3 / 10000;
      } while (9 < uVar3);
    }
  }
  puVar2 = (int32_t *)((longlong)param_1 + (ulonglong)uVar5 + 0x10);
  while (99 < param_2) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_2;
    lVar4 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar1,8);
    uVar3 = (param_2 - lVar4 >> 1) + lVar4 >> 6;
    lVar4 = (param_2 + uVar3 * -100 & 0xffffffff) * 2;
    puVar2[-1] = "0010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                 [lVar4];
    puVar2 = puVar2 + -2;
    *puVar2 = (&DAT_1801d7dd0)[lVar4];
    param_2 = uVar3;
  }
  if (param_2 < 10) {
    puVar2[-1] = (char)param_2 + '0';
  }
  else {
    lVar4 = (param_2 & 0xffffffff) * 2;
    puVar2[-1] = "0010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                 [lVar4];
    puVar2[-2] = (&DAT_1801d7dd0)[lVar4];
  }
                    
                    
  (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,param_1 + 2,(ulonglong)uVar5);
  return;
}

// ---- Function: FUN_1800ed070 ----
longlong *
FUN_1800ed070(longlong *param_1,int32_t param_2,int32_t *param_3,int32_t param_4,
             int32_t *param_5)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(int32_t *)param_1 = 0;
  uVar2 = param_5[2] + 0x20 + param_3[2];
  if (0xf < uVar2) {
    FUN_1800b9630(param_1,uVar2);
    param_1[2] = 0;
  }
  FUN_1800b9910(param_1,(int32_t *)"invalid UTF-8 byte at index ",0x1c);
  puVar1 = param_3 + 2;
  if (0xf < (ulonglong)param_3[3]) {
    param_3 = (int32_t *)*param_3;
  }
  FUN_1800b9910(param_1,param_3,*puVar1);
  FUN_1800b9910(param_1,(int32_t *)&DAT_1801d6844,4);
  puVar1 = param_5 + 2;
  if (0xf < (ulonglong)param_5[3]) {
    param_5 = (int32_t *)*param_5;
  }
  FUN_1800b9910(param_1,param_5,*puVar1);
  return param_1;
}

// ---- Function: FUN_1800ed150 ----
void FUN_1800ed150(int32_t *param_1,uint param_2,int32_t *param_3)

{
  code *pcVar1;
  int32_t *puVar2;
  int32_t ***pppuVar3;
  LPVOID pvVar4;
  int32_t auStack_c8 [40];
  int32_t ***local_a0;
  ulonglong uStack_98;
  int32_t local_90;
  ulonglong uStack_88;
  LPVOID local_80;
  int32_t uStack_78;
  int32_t local_70;
  ulonglong uStack_68;
  int32_t ***local_60 [3];
  ulonglong local_48;
  longlong local_40 [4];
  ulonglong local_20;
  
  local_20 = DAT_1801eb080 ^ (ulonglong)auStack_c8;
  uStack_78 = 0;
  local_70 = _DAT_1801d8f70;
  uStack_68 = _UNK_1801d8f78;
  local_80 = (LPVOID)0x0;
  local_90 = _DAT_1801d8ff0;
  uStack_88 = _UNK_1801d8ff8;
  local_a0 = (int32_t ***)s_type_error_1801d7db8._0_8_;
  uStack_98 = (ulonglong)(ushort)s_type_error_1801d7db8._8_2_;
  puVar2 = (int32_t *)FUN_1800f8dd0(local_40,&local_a0,param_2);
  FUN_1800f8bc0((longlong *)local_60,puVar2,&local_80,param_3);
  FUN_1800a6800(local_40);
  if (0xf < uStack_88) {
    pppuVar3 = local_a0;
    if ((0xfff < uStack_88 + 1) &&
       (pppuVar3 = (int32_t ***)local_a0[-1],
       0x1f < (ulonglong)((longlong)local_a0 + (-8 - (longlong)pppuVar3)))) goto LAB_1800ed2f4;
    thunk_FUN_18012d5e8(pppuVar3);
  }
  if (0xf < uStack_68) {
    pvVar4 = local_80;
    if ((0xfff < uStack_68 + 1) &&
       (pvVar4 = *(LPVOID *)((longlong)local_80 + -8),
       0x1f < (ulonglong)((longlong)local_80 + (-8 - (longlong)pvVar4)))) {
      FUN_18012b7b4();
LAB_1800ed2f4:
      FUN_18012b7b4();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    thunk_FUN_18012d5e8(pvVar4);
  }
  local_a0 = local_60;
  if (0xf < local_48) {
    local_a0 = local_60[0];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1801d69e0;
  *(uint *)(param_1 + 3) = param_2;
  param_1[4] = std::exception::vftable;
  param_1[5] = 0;
  param_1[6] = 0;
  uStack_98 = CONCAT71(uStack_98._1_7_,1);
  __std_exception_copy((longlong *)&local_a0,param_1 + 5);
  param_1[4] = std::runtime_error::vftable;
  *param_1 = &PTR_FUN_1801d69e0;
  FUN_1800a6800((longlong *)local_60);
  FUN_1801252c0(local_20 ^ (ulonglong)auStack_c8);
  return;
}

// ---- Function: FUN_1800ed300 ----
longlong * FUN_1800ed300(longlong *param_1,int32_t param_2,int32_t *param_3)

{
  ulonglong *puVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(int32_t *)param_1 = 0;
  if (0xf < param_3[2] + 0x26) {
    FUN_1800b9630(param_1,param_3[2] + 0x26);
    param_1[2] = 0;
  }
  FUN_1800b9910(param_1,(int32_t *)"incomplete UTF-8 string; last byte: 0x",0x26);
  puVar1 = param_3 + 2;
  if (0xf < (ulonglong)param_3[3]) {
    param_3 = (int32_t *)*param_3;
  }
  FUN_1800b9910(param_1,param_3,*puVar1);
  return param_1;
}

// ---- Function: FUN_1800ed3a0 ----
char * FUN_1800ed3a0(int32_t *param_1,ulonglong param_2,double param_3)

{
  longlong lVar1;
  ushort uVar2;
  int32_t extraout_var;
  char *pcVar3;
  char cVar4;
  ulonglong uVar5;
  ulonglong local_res10;
  int local_res18 [4];
  ulonglong local_78;
  int32_t uStack_70;
  ulonglong local_68;
  int32_t uStack_60;
  ulonglong local_58;
  int32_t uStack_50;
  ulonglong local_48;
  int iStack_40;
  int32_t uStack_3c;
  ulonglong local_38;
  int iStack_30;
  int32_t uStack_2c;
  ulonglong local_28;
  int iStack_20;
  int32_t uStack_1c;
  
  local_res10 = param_2;
  uVar2 = FUN_18012d654(param_3);
  if ((int)CONCAT62(extraout_var,uVar2) != 0) {
    param_3 = (double)CONCAT44((uint)((ulonglong)param_3 >> 0x20) ^ DAT_1801d9d50._4_4_,
                               SUB84(param_3,0) ^ (uint)DAT_1801d9d50);
    *(int32_t *)param_1 = 0x2d;
    param_1 = (int32_t *)((longlong)param_1 + 1);
  }
  if (param_3 == 0.0) {
    *(int32_t *)param_1 = 0x2e30;
    pcVar3 = (char *)((longlong)param_1 + 3);
    *(int32_t *)((longlong)param_1 + 2) = 0x30;
  }
  else {
    local_res18[0] = 0;
    local_res10 = local_res10 & 0xffffffff00000000;
    uVar5 = (ulonglong)param_3 & 0xfffffffffffff;
    if ((ulonglong)param_3 >> 0x34 == 0) {
      iStack_40 = -0x432;
      local_68 = uVar5;
    }
    else {
      iStack_40 = (uint)((ulonglong)param_3 >> 0x34) - 0x433;
      local_68 = uVar5 + 0x10000000000000;
    }
    if ((uVar5 == 0) && (1 < (ulonglong)param_3 >> 0x34)) {
      cVar4 = (char)iStack_40 + -2;
      lVar1 = local_68 * 4;
    }
    else {
      cVar4 = (char)iStack_40 + -1;
      lVar1 = local_68 * 2;
    }
    iStack_30 = iStack_40 + -1;
    local_78 = local_68 * 2 + 1;
    do {
      iStack_30 = iStack_30 + -1;
      local_78 = local_78 * 2;
    } while (-1 < (longlong)local_78);
    local_58 = lVar1 + -1 << (cVar4 - (char)iStack_30 & 0x3fU);
    do {
      iStack_40 = iStack_40 + -1;
      local_68 = local_68 * 2;
    } while (-1 < (longlong)local_68);
    uStack_3c = uStack_50._4_4_;
    uStack_2c = uStack_50._4_4_;
    uStack_1c = uStack_50._4_4_;
    uStack_70 = CONCAT44(uStack_50._4_4_,iStack_30);
    uStack_60 = CONCAT44(uStack_50._4_4_,iStack_40);
    uStack_50 = CONCAT44(uStack_50._4_4_,iStack_30);
    local_48 = local_68;
    local_38 = local_58;
    local_28 = local_78;
    iStack_20 = iStack_30;
    FUN_1800f7360((longlong)param_1,local_res18,(int *)&local_res10,&local_58,&local_68,&local_78);
    pcVar3 = FUN_1800f8570(param_1,local_res18[0],(int)local_res10);
  }
  return pcVar3;
}

// ---- Function: FUN_1800ed520 ----
void FUN_1800ed520(longlong *param_1)

{
  longlong *plVar1;
  
  FUN_1800ed560((longlong)(param_1 + 9));
  plVar1 = (longlong *)param_1[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1);
    param_1[7] = 0;
  }
  return;
}

// ---- Function: FUN_1800ed560 ----
void FUN_1800ed560(longlong param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  LPVOID pvVar3;
  
  FUN_1800a6800((longlong *)(param_1 + 0x48));
  pvVar1 = *(LPVOID *)(param_1 + 0x30);
  if (pvVar1 != (LPVOID)0x0) {
    pvVar3 = pvVar1;
    if ((0xfff < (ulonglong)(*(longlong *)(param_1 + 0x40) - (longlong)pvVar1)) &&
       (pvVar3 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3)))) {
      FUN_18012b7b4();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    thunk_FUN_18012d5e8(pvVar3);
    *(int32_t *)(param_1 + 0x30) = 0;
    *(int32_t *)(param_1 + 0x38) = 0;
    *(int32_t *)(param_1 + 0x40) = 0;
  }
  return;
}

// ---- Function: FUN_1800ed5d0 ----
void FUN_1800ed5d0(longlong param_1)

{
                    
                    
  (**(code **)(*(longlong *)(param_1 + 0x10) + 0x10))(param_1 + 0x10,0);
  return;
}

// ---- Function: FUN_1800ed5e0 ----
void FUN_1800ed5e0(longlong param_1,int32_t param_2,int32_t **param_3,int32_t *param_4)

{
  longlong lVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  int32_t *puVar5;
  ulonglong uVar6;
  LPVOID pvVar7;
  longlong *plVar8;
  int32_t **ppuVar9;
  int32_t auStack_2b8 [48];
  char local_288 [8];
  longlong *local_280;
  int32_t *puStack_278;
  int32_t local_270;
  int32_t **local_268;
  LPVOID local_260;
  int32_t uStack_258;
  longlong local_250;
  int32_t **ppuStack_248;
  char local_240;
  char local_23f;
  longlong *local_228;
  longlong local_220 [7];
  longlong *local_1e8;
  int32_t **local_1e0;
  int32_t local_1d8 [3];
  int32_t **local_1c0;
  int32_t local_1b8 [3];
  longlong local_1a0 [8];
  int32_t local_160;
  int32_t uStack_158;
  int32_t local_150;
  ulonglong uStack_148;
  int32_t **local_138;
  LPVOID local_130;
  int32_t local_128;
  longlong lStack_120;
  LPVOID local_118;
  int32_t uStack_110;
  longlong local_108;
  int32_t uStack_100;
  LPVOID local_f8;
  int32_t uStack_f0;
  longlong local_e8;
  int32_t uStack_e0;
  int32_t local_d8;
  char local_d0;
  longlong local_c8 [7];
  longlong *local_90;
  char local_88;
  char local_80;
  longlong local_78 [2];
  longlong local_68 [4];
  longlong local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_1801eb080 ^ (ulonglong)auStack_2b8;
  puVar5 = *(int32_t **)(param_1 + 0x38);
  cVar2 = *(char *)(param_1 + 0xd8);
  if (puVar5 == (int32_t *)0x0) {
    local_260 = (LPVOID)0x0;
    uStack_258 = 0;
    local_250 = 0;
    ppuStack_248 = (int32_t **)0x0;
    local_240 = '\0';
    local_268 = param_3;
    local_23f = cVar2;
    FUN_1800f1730(param_1,(longlong *)&local_268);
    iVar4 = FUN_1800ee520(param_1);
    if (iVar4 != 0xf) {
      uStack_158 = 0;
      local_150 = _DAT_1801d8fa0;
      uStack_148 = _UNK_1801d8fa8;
      local_160._0_5_ = CONCAT14(s_value_1801d7d24[4],s_value_1801d7d24._0_4_);
      local_160 = (LPVOID)(ulonglong)(uint5)local_160;
      plVar8 = local_68;
      puVar5 = (int32_t *)FUN_1800ee000(param_1,plVar8,0xf,&local_160);
      lVar1 = param_1 + 0x48;
      local_280 = *(longlong **)(param_1 + 0x60);
      puStack_278 = *(int32_t **)(param_1 + 0x68);
      local_270 = *(int32_t *)(param_1 + 0x70);
      param_1 = FUN_1800f7c00(&local_1e0,plVar8,&local_280,puVar5);
      FUN_1800ee7b0(lVar1,local_48);
      local_240 = '\x01';
      if (local_23f != '\0') goto LAB_1800edd65;
      FUN_1800a6800(local_48);
      local_1c0 = std::exception::vftable;
      __std_exception_destroy(local_1b8);
      local_1e0 = (int32_t **)std::exception::vftable;
      __std_exception_destroy(local_1d8);
      FUN_1800a6800(local_68);
      if (0xf < uStack_148) {
        pvVar7 = local_160;
        if ((0xfff < uStack_148 + 1) &&
           (pvVar7 = *(LPVOID *)((longlong)local_160 + -8),
           0x1f < (ulonglong)((longlong)local_160 + (-8 - (longlong)pvVar7)))) {
          FUN_18012b7b4();
          goto LAB_1800edd3c;
        }
        thunk_FUN_18012d5e8(pvVar7);
      }
    }
    if (local_240 == '\0') {
      if (local_260 == (LPVOID)0x0) goto LAB_1800ed986;
      pvVar7 = local_260;
      if (0xfff < (local_250 - (longlong)local_260 & 0xfffffffffffffff8U)) {
        pvVar7 = *(LPVOID *)((longlong)local_260 + -8);
        uVar6 = (longlong)local_260 + (-8 - (longlong)pvVar7);
        goto joined_r0x0001800edd2f;
      }
    }
    else {
      local_280._0_1_ = 9;
      FUN_1800f8a10(&puStack_278,'\t');
      cVar2 = *(char *)param_3;
      *(int32_t *)param_3 = local_280._0_1_;
      local_280 = (longlong *)CONCAT71(local_280._1_7_,cVar2);
      puVar5 = param_3[1];
      param_3[1] = puStack_278;
      puStack_278 = puVar5;
      FUN_1800f9a90((longlong *)&puStack_278,cVar2);
      if (local_260 == (LPVOID)0x0) goto LAB_1800ed986;
      pvVar7 = local_260;
      if (0xfff < (local_250 - (longlong)local_260 & 0xfffffffffffffff8U)) {
        pvVar7 = *(LPVOID *)((longlong)local_260 + -8);
        uVar6 = (longlong)local_260 + (-8 - (longlong)pvVar7);
joined_r0x0001800edd2f:
        if (0x1f < uVar6) {
          FUN_18012b7b4();
          goto LAB_1800edd48;
        }
      }
    }
  }
  else {
    local_228 = local_220;
    local_1e8 = (longlong *)0x0;
    ppuVar9 = param_3;
    local_1e8 = (longlong *)(**(code **)*puVar5)(puVar5,local_220);
    local_228 = local_220;
    local_130 = (LPVOID)0x0;
    local_128 = 0;
    lStack_120 = 0;
    local_118 = (LPVOID)0x0;
    uStack_110 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_f8 = (LPVOID)0x0;
    uStack_f0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0;
    local_d0 = '\0';
    local_280 = local_c8;
    local_90 = (longlong *)0x0;
    local_138 = param_3;
    if (local_1e8 != (longlong *)0x0) {
      local_90 = (longlong *)(**(code **)*local_1e8)(local_1e8,local_c8);
    }
    local_80 = '\t';
    local_88 = cVar2;
    FUN_1800f8a10(local_78,'\t');
    local_288[0] = '\x01';
    FUN_1800f8400((longlong *)&local_118,local_288);
    if (local_1e8 != (longlong *)0x0) {
      (**(code **)(*local_1e8 + 0x20))(local_1e8,local_1e8 != local_220);
      local_1e8 = (longlong *)0x0;
    }
    FUN_1800f0950(param_1,&local_138,(byte *)ppuVar9,param_4);
    iVar4 = FUN_1800ee520(param_1);
    if (iVar4 != 0xf) {
      uStack_158 = 0;
      local_150 = _DAT_1801d8fa0;
      uStack_148 = _UNK_1801d8fa8;
      local_160._0_5_ = CONCAT14(s_value_1801d7d24[4],s_value_1801d7d24._0_4_);
      local_160 = (LPVOID)(ulonglong)(uint5)local_160;
      plVar8 = local_48;
      puVar5 = (int32_t *)FUN_1800ee000(param_1,plVar8,0xf,&local_160);
      lVar1 = param_1 + 0x48;
      local_280 = *(longlong **)(param_1 + 0x60);
      puStack_278 = *(int32_t **)(param_1 + 0x68);
      local_270 = *(int32_t *)(param_1 + 0x70);
      param_1 = FUN_1800f7c00(&local_268,plVar8,&local_280,puVar5);
      FUN_1800ee7b0(lVar1,local_68);
      local_d0 = '\x01';
      if (local_88 != '\0') {
LAB_1800edd48:
        FUN_1800f7e80(&local_1e0,param_1);
        FUN_1801279a8((longlong *)&local_1e0,&DAT_1801e9198);
LAB_1800edd65:
        FUN_1800f7e80(local_1a0,param_1);
        FUN_1801279a8(local_1a0,&DAT_1801e9198);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FUN_1800a6800(local_68);
      ppuStack_248 = std::exception::vftable;
      __std_exception_destroy((int32_t *)&local_240);
      local_268 = (int32_t **)std::exception::vftable;
      __std_exception_destroy(&local_260);
      FUN_1800a6800(local_48);
      FUN_1800a6800(&local_160);
    }
    if (local_d0 == '\0') {
      if (*(char *)param_3 == '\t') {
        local_280 = (longlong *)((ulonglong)local_280._1_7_ << 8);
        FUN_1800f8a10(&puStack_278,'\0');
        cVar2 = *(char *)param_3;
        *(int32_t *)param_3 = local_280._0_1_;
        local_280 = (longlong *)CONCAT71(local_280._1_7_,cVar2);
        puVar5 = param_3[1];
        param_3[1] = puStack_278;
        puStack_278 = puVar5;
        FUN_1800f9a90((longlong *)&puStack_278,cVar2);
      }
      FUN_1800f9a90(local_78,local_80);
      if (local_90 != (longlong *)0x0) {
        (**(code **)(*local_90 + 0x20))(local_90,local_90 != local_c8);
        local_90 = (longlong *)0x0;
      }
      if (local_f8 != (LPVOID)0x0) {
        pvVar7 = local_f8;
        if ((0xfff < (local_e8 - (longlong)local_f8 & 0xfffffffffffffffcU)) &&
           (pvVar7 = *(LPVOID *)((longlong)local_f8 + -8),
           0x1f < (ulonglong)((longlong)local_f8 + (-8 - (longlong)pvVar7)))) goto LAB_1800edd3c;
        thunk_FUN_18012d5e8(pvVar7);
        local_f8 = (LPVOID)0x0;
        uStack_f0 = 0;
        local_e8 = 0;
      }
      if (local_118 != (LPVOID)0x0) {
        pvVar7 = local_118;
        if ((0xfff < (local_108 - (longlong)local_118 & 0xfffffffffffffffcU)) &&
           (pvVar7 = *(LPVOID *)((longlong)local_118 + -8),
           0x1f < (ulonglong)((longlong)local_118 + (-8 - (longlong)pvVar7)))) goto LAB_1800edd3c;
        thunk_FUN_18012d5e8(pvVar7);
        local_118 = (LPVOID)0x0;
        uStack_110 = 0;
        local_108 = 0;
      }
      if (local_130 == (LPVOID)0x0) goto LAB_1800ed986;
      pvVar7 = local_130;
      if (0xfff < (lStack_120 - (longlong)local_130 & 0xfffffffffffffff8U)) {
        pvVar7 = *(LPVOID *)((longlong)local_130 + -8);
        uVar6 = (longlong)local_130 + (-8 - (longlong)pvVar7);
        goto joined_r0x0001800edb16;
      }
    }
    else {
      local_280._0_1_ = 9;
      FUN_1800f8a10(&puStack_278,'\t');
      cVar2 = *(char *)param_3;
      *(int32_t *)param_3 = local_280._0_1_;
      local_280 = (longlong *)CONCAT71(local_280._1_7_,cVar2);
      puVar5 = param_3[1];
      param_3[1] = puStack_278;
      puStack_278 = puVar5;
      FUN_1800f9a90((longlong *)&puStack_278,cVar2);
      FUN_1800f9a90(local_78,local_80);
      if (local_90 != (longlong *)0x0) {
        (**(code **)(*local_90 + 0x20))(local_90,local_90 != local_c8);
        local_90 = (longlong *)0x0;
      }
      if (local_f8 != (LPVOID)0x0) {
        pvVar7 = local_f8;
        if ((0xfff < (local_e8 - (longlong)local_f8 & 0xfffffffffffffffcU)) &&
           (pvVar7 = *(LPVOID *)((longlong)local_f8 + -8),
           0x1f < (ulonglong)((longlong)local_f8 + (-8 - (longlong)pvVar7)))) goto LAB_1800edd3c;
        thunk_FUN_18012d5e8(pvVar7);
        local_f8 = (LPVOID)0x0;
        uStack_f0 = 0;
        local_e8 = 0;
      }
      if (local_118 != (LPVOID)0x0) {
        pvVar7 = local_118;
        if ((0xfff < (local_108 - (longlong)local_118 & 0xfffffffffffffffcU)) &&
           (pvVar7 = *(LPVOID *)((longlong)local_118 + -8),
           0x1f < (ulonglong)((longlong)local_118 + (-8 - (longlong)pvVar7)))) goto LAB_1800edd3c;
        thunk_FUN_18012d5e8(pvVar7);
        local_118 = (LPVOID)0x0;
        uStack_110 = 0;
        local_108 = 0;
      }
      if (local_130 == (LPVOID)0x0) goto LAB_1800ed986;
      pvVar7 = local_130;
      if (0xfff < (lStack_120 - (longlong)local_130 & 0xfffffffffffffff8U)) {
        pvVar7 = *(LPVOID *)((longlong)local_130 + -8);
        uVar6 = (longlong)local_130 + (-8 - (longlong)pvVar7);
joined_r0x0001800edb16:
        if (0x1f < uVar6) {
LAB_1800edd3c:
          FUN_18012b7b4();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
  }
  thunk_FUN_18012d5e8(pvVar7);
LAB_1800ed986:
  FUN_1801252c0(local_28 ^ (ulonglong)auStack_2b8);
  return;
}

// ---- Function: FUN_1800edd90 ----
void FUN_1800edd90(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  longlong *plVar6;
  byte bVar7;
  int32_t *puVar8;
  void *pvVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  int32_t auStack_d8 [32];
  longlong local_b8;
  longlong *local_b0;
  int32_t *local_a8;
  longlong local_a0 [7];
  longlong *local_68;
  int32_t uStack_60;
  longlong *local_58;
  int32_t uStack_50;
  int32_t uStack_4c;
  ulonglong local_38;
  
  local_38 = DAT_1801eb080 ^ (ulonglong)auStack_d8;
  plVar11 = param_2;
  local_68 = param_2;
  if ((char)*param_1 == '\0') {
    *(int32_t *)param_1 = 1;
    puVar8 = (int32_t *)operator_new(0x10);
    local_b0 = &local_b8;
    *puVar8 = 0;
    puVar8[1] = 0;
    local_a8 = puVar8;
    pvVar9 = operator_new(0x50);
    *(void **)pvVar9 = pvVar9;
    *(void **)((longlong)pvVar9 + 8) = pvVar9;
    *(void **)((longlong)pvVar9 + 0x10) = pvVar9;
    *(int32_t *)((longlong)pvVar9 + 0x18) = 0x101;
    *puVar8 = pvVar9;
    param_1[1] = (longlong)puVar8;
  }
  if ((char)*param_1 == '\x01') {
    plVar2 = (longlong *)param_1[1];
    plVar13 = (longlong *)*plVar2;
    plVar12 = (longlong *)plVar13[1];
    cVar1 = *(char *)((longlong)plVar12 + 0x19);
    local_58 = plVar12;
    plVar11 = (longlong *)0x0;
    while (plVar6 = plVar12, cVar1 == '\0') {
      uVar10 = FUN_1800f5180(plVar6 + 4,param_2);
      bVar7 = (byte)uVar10;
      plVar11 = (longlong *)(ulonglong)((byte)~bVar7 >> 7);
      if (-1 < (char)bVar7) {
        plVar13 = plVar6;
      }
      plVar12 = plVar6 + 2;
      if (-1 < (char)bVar7) {
        plVar12 = plVar6;
      }
      param_1 = (longlong *)*plVar12;
      plVar12 = param_1;
      local_58 = plVar6;
      cVar1 = *(char *)((longlong)param_1 + 0x19);
    }
    uStack_50 = SUB84(plVar11,0);
    if (*(char *)((longlong)plVar13 + 0x19) == '\0') {
      plVar11 = plVar13 + 4;
      uVar10 = FUN_1800f5180(param_2,plVar11);
      if (-1 < (char)uVar10) goto LAB_1800edf44;
    }
    if (plVar2[1] != 0x333333333333333) {
      lVar3 = *plVar2;
      local_a8 = (int32_t *)0x0;
      local_b0 = plVar2;
      plVar11 = (longlong *)operator_new(0x50);
      plVar11[4] = 0;
      plVar11[5] = 0;
      plVar11[6] = 0;
      plVar11[7] = 0;
      lVar5 = param_2[1];
      plVar11[4] = *param_2;
      plVar11[5] = lVar5;
      lVar5 = param_2[3];
      plVar11[6] = param_2[2];
      plVar11[7] = lVar5;
      *(int32_t *)param_2 = 0;
      param_2[2] = 0;
      param_2[3] = 0xf;
      *(int32_t *)(plVar11 + 8) = 0;
      FUN_1800f8a10(plVar11 + 9,'\0');
      *plVar11 = lVar3;
      plVar11[1] = lVar3;
      plVar11[2] = lVar3;
      *(int32_t *)(plVar11 + 3) = 0;
      uStack_60 = CONCAT44(uStack_4c,uStack_50);
      local_68 = local_58;
      FUN_1800d86d0(plVar2,(longlong *)&local_68,plVar11);
LAB_1800edf44:
      FUN_1800a6800(param_2);
      FUN_1801252c0(local_38 ^ (ulonglong)auStack_d8);
      return;
    }
    FUN_1800d8950();
  }
  local_b0 = (longlong *)FUN_1800f7810((int32_t *)param_1);
  plVar11 = FUN_1800f23e0((longlong *)&local_58,plVar11,(longlong *)&local_b0);
  FUN_1800ed150(local_a0,0x131,plVar11);
  FUN_1801279a8(local_a0,&DAT_1801e9200);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// ---- Function: FUN_1800edfd0 ----
int32_t * FUN_1800edfd0(int32_t *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1801d7d98;
  if ((param_2 & 1) != 0) {
    thunk_FUN_18012d5e8(param_1);
  }
  return param_1;
}

// ---- Function: FUN_1800ee000 ----
void FUN_1800ee000(longlong param_1,longlong *param_2,int param_3,int32_t *param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int32_t *puVar3;
  int32_t *puVar4;
  code *pcVar5;
  int32_t *puVar6;
  int32_t ****ppppuVar7;
  char *pcVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  int32_t auStack_b8 [32];
  byte local_98;
  int32_t local_94;
  longlong *local_90;
  int32_t ***local_88;
  int32_t uStack_80;
  ulonglong local_78;
  ulonglong local_70;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_1801eb080 ^ (ulonglong)auStack_b8;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0xd;
  param_2[3] = 0xf;
  *param_2 = s_syntax_error_1801d7cd8._0_8_;
  *(int32_t *)(param_2 + 1) = s_syntax_error_1801d7cd8._8_4_;
  *(char *)((longlong)param_2 + 0xc) = s_syntax_error_1801d7cd8[0xc];
  *(int32_t *)((longlong)param_2 + 0xd) = 0;
  local_94 = 1;
  local_90 = param_2;
  if (param_4[2] != 0) {
    uStack_80 = 0;
    local_78 = 0;
    local_70 = 0xf;
    local_88 = (int32_t ****)0x0;
    local_94 = 3;
    uVar11 = param_4[2] + 0xf;
    if (0xf < uVar11) {
      FUN_1800b9630(&local_88,uVar11);
    }
    local_78 = 0;
    FUN_1800b9910((longlong *)&local_88,(int32_t *)"while parsing ",0xe);
    puVar1 = param_4 + 2;
    if (0xf < (ulonglong)param_4[3]) {
      param_4 = (int32_t *)*param_4;
    }
    FUN_1800b9910((longlong *)&local_88,param_4,*puVar1);
    if (local_78 < local_70) {
      ppppuVar7 = &local_88;
      if (0xf < local_70) {
        ppppuVar7 = (int32_t ****)local_88;
      }
      puVar3 = (int32_t *)((longlong)ppppuVar7 + local_78);
      local_78 = local_78 + 1;
      *puVar3 = 0x20;
    }
    else {
      FUN_1800b99a0(&local_88,1,(ulonglong)local_98,0x20);
    }
    ppppuVar7 = &local_88;
    if (0xf < local_70) {
      ppppuVar7 = (int32_t ****)local_88;
    }
    FUN_1800b9910(param_2,ppppuVar7,local_78);
    local_94 = 1;
    if (local_70 < 0x10) goto LAB_1800ee188;
    ppppuVar7 = (int32_t ****)local_88;
    if ((local_70 + 1 < 0x1000) ||
       (ppppuVar7 = (int32_t ****)local_88[-1],
       (ulonglong)((longlong)local_88 + (-8 - (longlong)ppppuVar7)) < 0x20)) {
      thunk_FUN_18012d5e8(ppppuVar7);
      goto LAB_1800ee188;
    }
    FUN_18012b7b4();
LAB_1800ee507:
    FUN_18012b7b4();
LAB_1800ee50d:
    FUN_18012b7b4();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_1800ee188:
  FUN_1800b9910(param_2,(int32_t *)&DAT_1801d7cc0,2);
  if (*(int *)(param_1 + 0x40) != 0xe) {
    pcVar8 = FUN_1800f7720(*(int *)(param_1 + 0x40));
    uStack_80 = 0;
    local_78 = 0;
    local_70 = 0xf;
    local_88 = (int32_t ****)0x0;
    local_94 = 9;
    lVar10 = -1;
    do {
      lVar9 = lVar10;
      lVar10 = lVar9 + 1;
    } while (pcVar8[lVar10] != '\0');
    uVar11 = lVar9 + 0xc;
    if (0xf < uVar11) {
      FUN_1800b9630(&local_88,uVar11);
    }
    local_78 = 0;
    FUN_1800b9910((longlong *)&local_88,(int32_t *)"unexpected ",0xb);
    uVar11 = 0xffffffffffffffff;
    do {
      uVar11 = uVar11 + 1;
    } while (pcVar8[uVar11] != '\0');
    FUN_1800b9910((longlong *)&local_88,(int32_t *)pcVar8,uVar11);
    ppppuVar7 = &local_88;
    if (0xf < local_70) {
      ppppuVar7 = (int32_t ****)local_88;
    }
    FUN_1800b9910(param_2,ppppuVar7,local_78);
    if (0xf < local_70) {
      ppppuVar7 = (int32_t ****)local_88;
      if ((local_70 + 1 < 0x1000) ||
         (ppppuVar7 = (int32_t ****)local_88[-1],
         (ulonglong)((longlong)local_88 + (-8 - (longlong)ppppuVar7)) < 0x20)) {
        thunk_FUN_18012d5e8(ppppuVar7);
        goto LAB_1800ee3fc;
      }
      goto LAB_1800ee50d;
    }
    goto LAB_1800ee3fc;
  }
  puVar6 = (int32_t *)FUN_1800ee7b0(param_1 + 0x48,local_68);
  puVar4 = *(int32_t **)(param_1 + 0xb0);
  uStack_80 = 0;
  local_78 = 0;
  local_70 = 0xf;
  local_88 = (int32_t ****)0x0;
  local_94 = 5;
  lVar10 = -1;
  do {
    lVar10 = lVar10 + 1;
  } while (*(char *)((longlong)puVar4 + lVar10) != '\0');
  uVar11 = puVar6[2] + 0xf + lVar10;
  if (0xf < uVar11) {
    FUN_1800b9630(&local_88,uVar11);
  }
  local_78 = 0;
  uVar11 = 0xffffffffffffffff;
  do {
    uVar11 = uVar11 + 1;
  } while (*(char *)((longlong)puVar4 + uVar11) != '\0');
  FUN_1800b9910((longlong *)&local_88,puVar4,uVar11);
  FUN_1800b9910((longlong *)&local_88,(int32_t *)"; last read: \'",0xe);
  puVar1 = puVar6 + 2;
  if (0xf < (ulonglong)puVar6[3]) {
    puVar6 = (int32_t *)*puVar6;
  }
  FUN_1800b9910((longlong *)&local_88,puVar6,*puVar1);
  if (local_78 < local_70) {
    ppppuVar7 = &local_88;
    if (0xf < local_70) {
      ppppuVar7 = (int32_t ****)local_88;
    }
    puVar3 = (int32_t *)((longlong)ppppuVar7 + local_78);
    local_78 = local_78 + 1;
    *puVar3 = 0x27;
  }
  else {
    FUN_1800b99a0(&local_88,1,(ulonglong)local_98,0x27);
  }
  ppppuVar7 = &local_88;
  if (0xf < local_70) {
    ppppuVar7 = (int32_t ****)local_88;
  }
  FUN_1800b9910(param_2,ppppuVar7,local_78);
  if (0xf < local_70) {
    ppppuVar7 = (int32_t ****)local_88;
    if ((0xfff < local_70 + 1) &&
       (ppppuVar7 = (int32_t ****)local_88[-1],
       0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)ppppuVar7)))) goto LAB_1800ee507;
    thunk_FUN_18012d5e8(ppppuVar7);
  }
  local_78 = 0;
  local_70 = 0xf;
  local_88 = (int32_t ***)((ulonglong)local_88 & 0xffffffffffffff00);
  FUN_1800a6800(local_68);
LAB_1800ee3fc:
  uVar11 = 0xffffffffffffffff;
  if (param_3 != 0) {
    pcVar8 = FUN_1800f7720(param_3);
    uStack_80 = 0;
    local_78 = 0;
    local_70 = 0xf;
    local_88 = (int32_t ****)0x0;
    local_94 = 0x11;
    lVar10 = -1;
    do {
      lVar9 = lVar10;
      lVar10 = lVar9 + 1;
    } while (pcVar8[lVar10] != '\0');
    uVar2 = lVar9 + 0xc;
    if (0xf < uVar2) {
      FUN_1800b9630(&local_88,uVar2);
    }
    local_78 = 0;
    FUN_1800b9910((longlong *)&local_88,(int32_t *)"; expected ",0xb);
    do {
      uVar11 = uVar11 + 1;
    } while (pcVar8[uVar11] != '\0');
    FUN_1800b9910((longlong *)&local_88,(int32_t *)pcVar8,uVar11);
    ppppuVar7 = &local_88;
    if (0xf < local_70) {
      ppppuVar7 = (int32_t ****)local_88;
    }
    FUN_1800b9910(param_2,ppppuVar7,local_78);
    if (0xf < local_70) {
      ppppuVar7 = (int32_t ****)local_88;
      if ((0xfff < local_70 + 1) &&
         (ppppuVar7 = (int32_t ****)local_88[-1],
         0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)ppppuVar7)))) {
        FUN_18012b7b4();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      thunk_FUN_18012d5e8(ppppuVar7);
    }
  }
  FUN_1801252c0(local_48 ^ (ulonglong)auStack_b8);
  return;
}

// ---- Function: FUN_1800ee520 ----
void FUN_1800ee520(longlong param_1)

{
  char cVar1;
  int32_t extraout_EAX;
  int32_t extraout_EAX_00;
  int32_t uVar2;
  ulonglong uVar3;
  char *pcVar4;
  int32_t uVar5;
  int32_t local_18;
  int32_t local_14;
  
  if ((*(longlong *)(param_1 + 0x60) == 0) &&
     (uVar3 = FUN_1800ee970((int32_t *)(param_1 + 0x48)), (char)uVar3 == '\0')) {
    pcVar4 = "invalid BOM; must be 0xEF 0xBB 0xBF if given";
LAB_1800ee6e0:
    *(char **)(param_1 + 0xb0) = pcVar4;
LAB_1800ee6e7:
    *(int32_t *)(param_1 + 0x40) = 0xe;
    return;
  }
  FUN_1800ee8e0((int32_t *)(param_1 + 0x48));
  cVar1 = *(char *)(param_1 + 0x50);
  while ((cVar1 != '\0' && (*(int *)(param_1 + 0x54) == 0x2f))) {
    cVar1 = FUN_1800ef650(param_1 + 0x48);
    if (cVar1 == '\0') goto LAB_1800ee6e7;
    FUN_1800ee8e0((int32_t *)(param_1 + 0x48));
    cVar1 = *(char *)(param_1 + 0x50);
  }
  switch(*(int32_t *)(param_1 + 0x54)) {
  default:
    pcVar4 = "invalid literal";
    goto LAB_1800ee6e0;
  case 0x22:
    uVar2 = FUN_1800ef8c0((int32_t *)(param_1 + 0x48));
    *(int32_t *)(param_1 + 0x40) = uVar2;
    return;
  case 0x2c:
    *(int32_t *)(param_1 + 0x40) = 0xd;
    return;
  case 0x2d:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
    uVar5 = FUN_1800eec10((int32_t *)(param_1 + 0x48));
    *(int *)(param_1 + 0x40) = (int)uVar5;
    return;
  case 0x3a:
    *(int32_t *)(param_1 + 0x40) = 0xc;
    return;
  case 0x5b:
    *(int32_t *)(param_1 + 0x40) = 8;
    return;
  case 0x5d:
    *(int32_t *)(param_1 + 0x40) = 10;
    return;
  case 0x66:
    local_18 = 0x736c6166;
    local_14 = 0x65;
    FUN_1800eeb30((int32_t *)(param_1 + 0x48),(longlong)&local_18,5,2);
    *(int32_t *)(param_1 + 0x40) = extraout_EAX_00;
    return;
  case 0x6e:
    local_18 = 0x6c6c756e;
    uVar2 = 3;
    break;
  case 0x74:
    local_18 = 0x65757274;
    uVar2 = 1;
    break;
  case 0x7b:
    *(int32_t *)(param_1 + 0x40) = 9;
    return;
  case 0x7d:
    *(int32_t *)(param_1 + 0x40) = 0xb;
    return;
  case 0xffffffff:
  case 0:
    *(int32_t *)(param_1 + 0x40) = 0xf;
    return;
  }
  FUN_1800eeb30((int32_t *)(param_1 + 0x48),(longlong)&local_18,4,uVar2);
  *(int32_t *)(param_1 + 0x40) = extraout_EAX;
  return;
}

// ---- Function: FUN_1800ee7b0 ----
void FUN_1800ee7b0(longlong param_1,longlong *param_2)

{
  byte bVar1;
  byte *pbVar2;
  longlong lVar3;
  longlong *plVar4;
  byte *pbVar5;
  ulonglong uVar6;
  int32_t auStack_68 [32];
  byte local_48;
  int32_t local_44;
  longlong *local_40;
  int32_t local_38;
  int32_t local_30;
  ulonglong local_28;
  ulonglong uVar7;
  
  local_28 = DAT_1801eb080 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(int32_t *)param_2 = 0;
  local_44 = 1;
  pbVar2 = *(byte **)(param_1 + 0x38);
  local_40 = param_2;
  for (pbVar5 = *(byte **)(param_1 + 0x30); pbVar5 != pbVar2; pbVar5 = pbVar5 + 1) {
    bVar1 = *pbVar5;
    if (bVar1 < 0x20) {
      local_38 = 0;
      local_30 = 0;
      FUN_1800f87d0((int32_t *)&local_38,9,0x1801d7bc0,(ulonglong)bVar1);
      uVar7 = 0xffffffffffffffff;
      do {
        uVar6 = uVar7 + 1;
        lVar3 = uVar7 + 1;
        uVar7 = uVar6;
      } while (*(char *)((longlong)&local_38 + lVar3) != '\0');
      FUN_1800b9910(param_2,&local_38,uVar6);
    }
    else {
      uVar7 = param_2[2];
      if (uVar7 < (ulonglong)param_2[3]) {
        param_2[2] = uVar7 + 1;
        plVar4 = param_2;
        if (0xf < (ulonglong)param_2[3]) {
          plVar4 = (longlong *)*param_2;
        }
        *(byte *)((longlong)plVar4 + uVar7) = bVar1;
        *(int32_t *)((longlong)plVar4 + uVar7 + 1) = 0;
      }
      else {
        FUN_1800b99a0(param_2,1,(ulonglong)local_48,bVar1);
      }
    }
  }
  FUN_1801252c0(local_28 ^ (ulonglong)auStack_68);
  return;
}

// ---- Function: FUN_1800ee8e0 ----
void FUN_1800ee8e0(int32_t *param_1)

{
  int32_t *puVar1;
  int iVar2;
  ulonglong uVar3;
  int32_t local_res8 [8];
  
  iVar2 = *(int *)((longlong)param_1 + 0xc);
  do {
    while( true ) {
      param_1[3] = param_1[3] + 1;
      param_1[4] = param_1[4] + 1;
      if (*(char *)(param_1 + 2) == '\0') {
        uVar3 = FUN_18012e8b0((int32_t *)*param_1);
        iVar2 = (int)uVar3;
        *(int *)((longlong)param_1 + 0xc) = iVar2;
      }
      else {
        *(int32_t *)(param_1 + 2) = 0;
      }
      if (iVar2 != -1) {
        puVar1 = (int32_t *)param_1[7];
        local_res8[0] = (int32_t)iVar2;
        if (puVar1 == (int32_t *)param_1[8]) {
          FUN_1800f75a0(param_1 + 6,puVar1,local_res8);
        }
        else {
          *(int32_t *)puVar1 = local_res8[0];
          param_1[7] = param_1[7] + 1;
        }
      }
      iVar2 = *(int *)((longlong)param_1 + 0xc);
      if (iVar2 != 10) break;
      param_1[5] = param_1[5] + 1;
      param_1[4] = 0;
    }
  } while (((iVar2 == 0x20) || (iVar2 == 9)) || (iVar2 == 0xd));
  return;
}

// ---- Function: FUN_1800ee970 ----
ulonglong FUN_1800ee970(int32_t *param_1)

{
  ulonglong *puVar1;
  int iVar2;
  uint uVar3;
  int32_t *puVar4;
  int32_t uVar5;
  ulonglong uVar6;
  longlong lVar7;
  int32_t local_res8 [8];
  
  param_1[3] = param_1[3] + 1;
  param_1[4] = param_1[4] + 1;
  if (*(char *)(param_1 + 2) == '\0') {
    uVar6 = FUN_18012e8b0((int32_t *)*param_1);
    *(int *)((longlong)param_1 + 0xc) = (int)uVar6;
  }
  else {
    *(int32_t *)(param_1 + 2) = 0;
  }
  if (*(int *)((longlong)param_1 + 0xc) != -1) {
    puVar4 = (int32_t *)param_1[7];
    local_res8[0] = (int32_t)*(int *)((longlong)param_1 + 0xc);
    if (puVar4 == (int32_t *)param_1[8]) {
      FUN_1800f75a0(param_1 + 6,puVar4,local_res8);
    }
    else {
      *(int32_t *)puVar4 = local_res8[0];
      param_1[7] = param_1[7] + 1;
    }
  }
  iVar2 = *(int *)((longlong)param_1 + 0xc);
  puVar1 = param_1 + 5;
  if (iVar2 == 10) {
    *puVar1 = *puVar1 + 1;
    param_1[4] = 0;
    lVar7 = param_1[4];
  }
  else {
    lVar7 = param_1[4];
    if (iVar2 == 0xef) {
      param_1[3] = param_1[3] + 1;
      param_1[4] = lVar7 + 1;
      if (*(char *)(param_1 + 2) == '\0') {
        uVar6 = FUN_18012e8b0((int32_t *)*param_1);
        *(int *)((longlong)param_1 + 0xc) = (int)uVar6;
        uVar5 = (char)uVar6;
        if ((int)uVar6 != -1) goto LAB_1800eea5d;
      }
      else {
        *(int32_t *)(param_1 + 2) = 0;
        uVar5 = 0xef;
LAB_1800eea5d:
        local_res8[0] = uVar5;
        puVar4 = (int32_t *)param_1[7];
        if (puVar4 == (int32_t *)param_1[8]) {
          FUN_1800f75a0(param_1 + 6,puVar4,local_res8);
        }
        else {
          *(int32_t *)puVar4 = local_res8[0];
          param_1[7] = param_1[7] + 1;
        }
      }
      uVar3 = *(uint *)((longlong)param_1 + 0xc);
      uVar6 = (ulonglong)uVar3;
      if (uVar3 == 10) goto LAB_1800eeae7;
      if (uVar3 != 0xbb) goto LAB_1800eeafe;
      param_1[3] = param_1[3] + 1;
      param_1[4] = param_1[4] + 1;
      if (*(char *)(param_1 + 2) == '\0') {
        uVar6 = FUN_18012e8b0((int32_t *)*param_1);
        *(int *)((longlong)param_1 + 0xc) = (int)uVar6;
        local_res8[0] = (int32_t)uVar6;
        if ((int)uVar6 != -1) goto LAB_1800eeabb;
      }
      else {
        *(int32_t *)(param_1 + 2) = 0;
        local_res8[0] = 0xbb;
LAB_1800eeabb:
        puVar4 = (int32_t *)param_1[7];
        if (puVar4 == (int32_t *)param_1[8]) {
          FUN_1800f75a0(param_1 + 6,puVar4,local_res8);
        }
        else {
          *(int32_t *)puVar4 = local_res8[0];
          param_1[7] = param_1[7] + 1;
        }
      }
      uVar3 = *(uint *)((longlong)param_1 + 0xc);
      uVar6 = (ulonglong)uVar3;
      if (uVar3 == 10) {
LAB_1800eeae7:
        param_1[5] = param_1[5] + 1;
        param_1[4] = 0;
        return uVar6 & 0xffffffffffffff00;
      }
      if (uVar3 != 0xbf) {
LAB_1800eeafe:
        return uVar6 & 0xffffffffffffff00;
      }
      goto LAB_1800eeb14;
    }
  }
  *(int32_t *)(param_1 + 2) = 1;
  param_1[3] = param_1[3] + -1;
  if (lVar7 == 0) {
    uVar6 = *puVar1;
    if (uVar6 != 0) {
      uVar6 = uVar6 - 1;
      *puVar1 = uVar6;
    }
  }
  else {
    uVar6 = lVar7 - 1;
    param_1[4] = uVar6;
  }
  if (iVar2 != -1) {
    param_1[7] = param_1[7] + -1;
  }
LAB_1800eeb14:
  return CONCAT71((int7)(uVar6 >> 8),1);
}

// ---- Function: FUN_1800eeb30 ----
int32_t FUN_1800eeb30(int32_t *param_1,longlong param_2,ulonglong param_3,int32_t param_4)

{
  int32_t *puVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int32_t local_res18 [8];
  
  uVar4 = 1;
  if (1 < param_3) {
    iVar2 = *(int *)((longlong)param_1 + 0xc);
    do {
      param_1[3] = param_1[3] + 1;
      param_1[4] = param_1[4] + 1;
      if (*(char *)(param_1 + 2) == '\0') {
        uVar3 = FUN_18012e8b0((int32_t *)*param_1);
        iVar2 = (int)uVar3;
        *(int *)((longlong)param_1 + 0xc) = iVar2;
      }
      else {
        *(int32_t *)(param_1 + 2) = 0;
      }
      if (iVar2 != -1) {
        puVar1 = (int32_t *)param_1[7];
        local_res18[0] = (int32_t)iVar2;
        if (puVar1 == (int32_t *)param_1[8]) {
          FUN_1800f75a0(param_1 + 6,puVar1,local_res18);
        }
        else {
          *(int32_t *)puVar1 = local_res18[0];
          param_1[7] = param_1[7] + 1;
        }
      }
      iVar2 = *(int *)((longlong)param_1 + 0xc);
      if (iVar2 == 10) {
        param_1[5] = param_1[5] + 1;
        param_1[4] = 0;
      }
      if ((char)iVar2 != *(char *)(uVar4 + param_2)) {
        param_1[0xd] = "invalid literal";
        return param_4;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_3);
  }
  return param_4;
}

