log('I','postfx','Loading volumetric clouds PostFX')

local cloudPassShader = scenetree.findObject("CloudPassShader")
if not cloudPassShader then
    cloudPassShader = createObject("ShaderData")
    cloudPassShader.DXVertexShaderFile    = "shaders/common/postFx/volumetricClouds.hlsl"
    cloudPassShader.DXPixelShaderFile     = "shaders/common/postFx/volumetricClouds.hlsl"
    cloudPassShader:setField("samplerNames", 0, "$prepassTex")
    cloudPassShader.pixVersion = 5.0
    cloudPassShader:registerObject("CloudPassShader")
end

local pfxDefaultStateBlock = scenetree.findObject("PFX_DefaultStateBlock")

local cloudPassStateBlock = scenetree.findObject("CloudPassStateBlock")
if not cloudPassStateBlock then
    cloudPassStateBlock = createObject("GFXStateBlockData")
    cloudPassStateBlock:inheritParentFields(pfxDefaultStateBlock)
    cloudPassStateBlock.blendDefined = true
    cloudPassStateBlock.blendEnable = true
    cloudPassStateBlock:setField("blendSrc", 0, "GFXBlendSrcAlpha")
    cloudPassStateBlock:setField("blendDest", 0, "GFXBlendInvSrcAlpha")
    cloudPassStateBlock:registerObject("CloudPassStateBlock")
end

local cloudPostFx = scenetree.findObject("CloudPostFx")
if not cloudPostFx then
    log('I','postfx','Creating Cloud PostFX')
    cloudPostFx = createObject("PostEffect")
    cloudPostFx.isEnabled = true
    cloudPostFx.allowReflectPass = true -- What does this even do??
    cloudPostFx:setField("renderTime", 0, "PFXBeforeBin")
    cloudPostFx:setField("renderBin", 0, "RenderBinFoliage")
    --cloudPostFx:setField("targetClear", 0, "PFXTargetClear_None")
    cloudPostFx:setField("shader", 0, "CloudPassShader")
    cloudPostFx:setField("stateBlock", 0, "CloudPassStateBlock")
    --cloudPostFx:setField("texture", 0, "$backBuffer")
    cloudPostFx:setField("texture", 0, "#prepass[RT0]")
    cloudPostFx:setField("texture", 1, "#prepass[Depth]")
    cloudPostFx:setField("texture", 2, "art/skies/volumetric/baseShape.png")
    cloudPostFx:setField("texture", 3, "art/skies/volumetric/detail.jpg")
    cloudPostFx:setField("texture", 4, "art/skies/volumetric/densityGradient.jpg")
    cloudPostFx:setField("texture", 5, "art/skies/volumetric/blueNoise.jpg")
    --cloudPostFx:setShaderConst("$cloudCoverage", 0.8)
    cloudPostFx.renderPriority = 4 -- right after fog
    cloudPostFx:registerObject("CloudPostFx")
    log('I','postfx','Enabling volumetric clouds PostFX')
    cloudPostFx:enable()
end