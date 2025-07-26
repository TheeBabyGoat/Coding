log('D', "volumetricPrecipitation", "Creating Volumetric Precipitation")

local VPShaderData = createObject("ShaderData")
VPShaderData.DXVertexShaderFile = "shaders/common/particles/volumetricPrecipitationV.hlsl"
VPShaderData.DXPixelShaderFile  = "shaders/common/particles/volumetricPrecipitationP.hlsl"
VPShaderData.pixVersion = 5.0;
VPShaderData:registerObject("VolumetricPrecipitationShaderData")

-- local shaders = scenetree.findClassObjects('ShaderData') for shaderIndex = 1, #shaders do print(shaders[shaderIndex]) end