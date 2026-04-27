#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014283A0B8
   RuntimeId:        0746
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430CCC48
*/
enum ProcessorType
{
  PtBaseEmitter = 0,
  PtUpdateSizeX = 31,
  PtUpdateSizeY = 32,
  PtUpdateSizeZ = 33,
  PtUpdateSize = 34,
  PtUpdateAlphaLevelMin = 35,
  PtUpdateAlphaLevelMax = 36,
  PtUpdateAlphaLevelScale = 37,
  PtUpdateClipScale = 38,
  PtUpdateCameraProximity = 39,
  PtUpdateRibbonFade = 40,
  PtUpdateRibbonTexture = 41,
  PtWorldWind = 42,
  PtWorldForces = 43,
  PtUpdateCollision = 44,
  PtUpdateQuadBendingAngle = 45,
  PtUpdateBeamSource = 46,
  PtUpdateBeamTarget = 47,
  PtUpdateBeamPoint = 48,
  PtUpdateCustomParams = 49,
  PtUpdateVertexAnim = 50,
  PtUpdateMeshEmitterSource = 51,
  PtUpdateMeshEmitterMask = 52,
  PtUpdateVolumetric = 53,
  PtUpdateVolumeMask = 54,
  PtUpdateLightWrapAround = 55,
  PtUpdateRotation = 30,
  PtUpdateTextureCoords = 29,
  PtUpdateTransparencySecondary = 28,
  PtUpdateTransparency = 27,
  PtPreRoll = 1,
  PtSpawnRate = 2,
  PtSpawnRibbonRate = 3,
  PtSpawnPointCloud = 4,
  PtSpawnSpeed = 5,
  PtSpawnPosition = 6,
  PtSpawnDirection = 7,
  PtSpawnSize = 8,
  PtSpawnAnimation = 9,
  PtSpawnAnimationFrame = 10,
  PtSpawnRotation = 11,
  PtSpawnOrientation = 12,
  PtUpdateTrapezoidShape = 56,
  PtSpawnRotationSpeed = 13,
  PtUpdatePosition = 15,
  PtUpdateAge = 16,
  PtTurbulance = 17,
  PtGravity = 18,
  PtLocalForce = 19,
  PtAirResistance = 20,
  PtUpdateLinearVelocity = 21,
  PtUpdateOrientation = 22,
  PtEmitter = 23,
  PtUpdateColor = 24,
  PtUpdateColorSecondary = 25,
  PtUpdateColorLeaf = 26,
  PtSpawnColorRandom = 14,
  ProcessorTypeCount = 57,
};

}
