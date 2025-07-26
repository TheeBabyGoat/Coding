local M = {}
local events = require('timeEvents').create()

local cloudPostFx
local cloudIDs

local windOffset = math.random(10000)
local frame = 0

local screenWidth = 2560
local screenHeight = 1440

-- Update this when you change the shader code so it will recompile
local cloudVersion = "0.53b"

local function onExtensionLoaded()
  if readFile("temp/shaders/cloudInit.dat") ~= cloudVersion then
    log('D', "onExtensionLoaded", "Volumetric clouds detected new version, clearing shader cache.")
    writeFile("temp/shaders/shaders.db", "")
    writeFile("temp/shaders/shaders.vk.db", "")
    writeFile("temp/shaders/cloudInit.dat", cloudVersion)
    messageBox("Volumetric Clouds: " .. cloudVersion, "Please restart BeamNG.Drive to finish installing Volumetric Clouds. This is necessary for shaders to recompile, and will happen after installation/updates. The game will now close automatically.", 0, 0)
    events:addEvent( 1, function() quit() end)
  end
  
  rerequire("client/volumetricPrecipitation")
end

local function onClientPostStartMission()
  log('I', "onMissionLoaded", "Clearing any previous cloud references.")
  cloudPostFx = nil
  cloudIDs = nil

  if not scenetree.findObject("CloudPostFx") then
    rerequire("client/postFx/volumetricClouds")
    cloudPostFx = scenetree.findObject("CloudPostFx")
  end
end

local function onSettingsChanged()
  local vm = GFXDevice.getVideoMode()
  screenWidth = vm.width
  screenHeight = vm.height
end

local function onUpdate(dt)
  events:process(dt)

  if cloudPostFx == nil then
    cloudPostFx = scenetree.findObject("CloudPostFx")
    return
  end

  if not cloudIDs then
    cloudIDs = {}

    -- Search for cloud object
    local objNames = scenetree.findClassObjects('CloudLayer')
    if objNames and not tableIsEmpty(objNames) then
      for objIndex = 1, #objNames do
        local obj = scenetree.findObject(objNames[objIndex])
        obj.isRenderEnabled = false -- disable rendering cloudLayers, we only need them for the environment tab
        cloudIDs[objIndex] = obj:getID()
      end
    end
  end

  local coverage = 0.3
  local exposure = 1.6
  local foundLayer = false
  for layer = 1, #cloudIDs do
    if cloudIDs[layer] == 0 then
      table.remove(cloudIDs, layer)
    else
      local cloudLayer = scenetree.findObjectById(cloudIDs[layer])

      if cloudLayer == nil then
        table.remove(cloudIDs, layer)
      else
        coverage = math.max(coverage, cloudLayer.coverage)
        exposure = math.max(exposure, cloudLayer.exposure)

        windOffset = windOffset + (dt * cloudLayer.windSpeed)

        foundLayer = true
      end
    end
  end

  if not foundLayer then
    cloudIDs = nil
  end

  frame = frame + 1

  -- TODO: Only set consts if they have changed!
  cloudPostFx:setShaderConst("$frame", frame)
  cloudPostFx:setShaderConst("$cloudCoverage", coverage)
  cloudPostFx:setShaderConst("$cloudExposure", exposure)
  cloudPostFx:setShaderConst("$windOffset", windOffset .. " " .. windOffset)
  cloudPostFx:setShaderConst("$farPlane", scenetree.theLevelInfo.visibleDistance)
  cloudPostFx:setShaderConst("$screenResolution", screenWidth .. " " .. screenHeight)
  --cloudPostFx:setShaderConst("$cloudBaseColor", "1.0 1.0 1.0")
end

M.onClientPostStartMission = onClientPostStartMission
M.onExtensionLoaded = onExtensionLoaded
M.onSettingsChanged = onSettingsChanged
M.onUpdate = onUpdate
return M