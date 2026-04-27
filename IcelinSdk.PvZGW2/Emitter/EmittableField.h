#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014283A018
   RuntimeId:        073C
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BBAA0
*/
enum EmittableField
{
  EfZero = 0,
  EfUserDefined = 22,
  EfSpeed = 21,
  EfRotation = 20,
  EfParameters = 19,
  EfVelocity = 18,
  EfSpawnAnimationFrameIndex = 17,
  EfSpawnAnimationSpeed = 16,
  EfCount = 15,
  EfNone = 14,
  EfMeshNormal = 13,
  EfConstantFloat = 23,
  EfMeshUV = 12,
  EfEmitterNormTravelledDistance = 10,
  EfEmitterNormMicroVariation = 9,
  EfEmitterNormWindSpeed = 8,
  EfEmitterNormTime = 7,
  EfCameraFacing = 6,
  EfNormMicroVariation = 5,
  EfNormWindSpeed = 4,
  EfNormSpeed = 3,
  EfNormTime = 2,
  EfOne = 1,
  EfMeshPosition = 11,
  EfConstantVec = 24,
};

}
