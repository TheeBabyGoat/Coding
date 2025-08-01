#ifndef _GET_H
#define _GET_H

 _get_stream_buffer_pointers((longlong)p_Var8,(longlong *)&local_res8,&local_48,&local_40);
    *(longlong **)(param_1 + 0x18) = local_res8;
    *(longlong **)(param_1 + 0x20) = local_res8;
    *(longlong *)(param_1 + 0x38) = local_48;
    *(longlong *)(param_1 + 0x40) = local_48;
    *(longlong *)(param_1 + 0x50) = local_40;
    *(longlong *)(param_1 + 0x58) = local_40;
    *(_iobuf **)(param_1 + 0x80) = p_Var8;
    *(int32_t *)(param_1 + 0x74) = DAT_1801fc930;
    *(int32_t *)(param_1 + 0x68) = 0;
    plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x60) + 8);
    local_38 = plVar6;
    (**(code **)(*plVar6 + 8))(plVar6);
    local_res8 = FUN_1800ce6c0((longlong)&local_40);
    cVar7 = (**(code **)(*local_res8 + 0x18))(local_res8);
    if (cVar7 == '\0');
errno_t __cdecl _get_dstbias(long *_Daylight_savings_bias);
int32_t _get_fpsr(void);
int32_t _get_stream_buffer_pointers(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4);

#endif
