#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142853740
   RuntimeId:        168E
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C7F48
*/
enum ShaderBlendMode
{
  ShaderBlendMode_Lerp = 0,
  ShaderBlendMode_DecalMultiplyBaseColorMetalMaskReflectance = 20,
  ShaderBlendMode_DecalLerpBaseColorMetalMaskReflectance = 19,
  ShaderBlendMode_DecalAddBaseColor = 18,
  ShaderBlendMode_DecalMultiplyBaseColor = 17,
  ShaderBlendMode_DecalLerpBaseColor = 16,
  ShaderBlendMode_DecalAddMetalMask = 15,
  ShaderBlendMode_DecalMultiplyMetalMask = 14,
  ShaderBlendMode_DecalLerpMetalMask = 13,
  ShaderBlendMode_DecalAddReflectance = 12,
  ShaderBlendMode_DecalLerpNormalSmoothnessMultiplyOthers = 21,
  ShaderBlendMode_DecalMultiplyReflectance = 11,
  ShaderBlendMode_DecalLerpNormalSmoothness = 9,
  ShaderBlendMode_DecalAddSmoothness = 8,
  ShaderBlendMode_DecalMultiplySmoothness = 7,
  ShaderBlendMode_DecalLerpSmoothness = 6,
  ShaderBlendMode_DecalLerpNormal = 5,
  ShaderBlendMode_PremultipliedColor = 4,
  ShaderBlendMode_LerpPremultiplied = 3,
  ShaderBlendMode_Multiply = 2,
  ShaderBlendMode_Additive = 1,
  ShaderBlendMode_DecalLerpReflectance = 10,
  ShaderBlendMode_DecalLerpEverything = 22,
};

}
