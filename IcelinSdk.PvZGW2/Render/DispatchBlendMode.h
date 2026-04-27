#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428531A0
   RuntimeId:        163E
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C8268
*/
enum DispatchBlendMode
{
  DispatchBlendMode_NoBlend = 0,
  DispatchBlendMode_DecalLerpNormalSmoothnessMultiplyOthers = 24,
  DispatchBlendMode_DecalMultiplyBaseColorMetalMaskReflectance = 23,
  DispatchBlendMode_DecalLerpBaseColorMetalMaskReflectance = 22,
  DispatchBlendMode_DecalAddBaseColor = 21,
  DispatchBlendMode_DecalMultiplyBaseColor = 20,
  DispatchBlendMode_DecalLerpBaseColor = 19,
  DispatchBlendMode_DecalAddMetalMask = 18,
  DispatchBlendMode_DecalMultiplyMetalMask = 17,
  DispatchBlendMode_DecalLerpMetalMask = 16,
  DispatchBlendMode_DecalAddReflectance = 15,
  DispatchBlendMode_DecalMultiplyReflectance = 14,
  DispatchBlendMode_DecalLerpEverything = 25,
  DispatchBlendMode_DecalLerpReflectance = 13,
  DispatchBlendMode_DecalAddSmoothness = 11,
  DispatchBlendMode_DecalMultiplySmoothness = 10,
  DispatchBlendMode_DecalLerpSmoothness = 9,
  DispatchBlendMode_DecalLerpNormal = 8,
  DispatchBlendMode_DualSourceColor = 7,
  DispatchBlendMode_Multiply = 6,
  DispatchBlendMode_Additive = 5,
  DispatchBlendMode_Lerp = 4,
  DispatchBlendMode_DebugShaderCost = 3,
  DispatchBlendMode_DebugOverdraw = 2,
  DispatchBlendMode_ZOnly = 1,
  DispatchBlendMode_DecalLerpNormalSmoothness = 12,
  DispatchBlendModeCount = 26,
};

}
