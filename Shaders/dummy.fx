void VS_Dummy(in uint id: SV_VertexID, out float4 position: SV_Position, out float2 texcoord: TEXCOORD)
{
    position = 0.0;
}

float4 PS_Dummy(float4 fragcoord: SV_Position, float2 uv: TexCoord): SV_Target
{
    return 0.0;
}

technique RealityV_VolumetricClouds_DUMMY <
    string ui_label = "PulseV Dummy Effect";
    string ui_tooltip = "Allows preprocessor definitions to be set on first run";
    bool enabled = true;
    int timeout = 1;
>
{
    pass
    {
        VertexShader = VS_Dummy;
        PixelShader = PS_Dummy;
    }
}