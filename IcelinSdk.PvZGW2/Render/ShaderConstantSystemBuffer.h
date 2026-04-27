#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428539A0
   RuntimeId:        16B4
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C7D08
*/
enum ShaderConstantSystemBuffer
{
  ShaderConstantSystemBuffer_TiledForwardLightPunctual = 0,
  ShaderConstantSystemBuffer_TiledForwardLightPunctualShadow = 1,
  ShaderConstantSystemBuffer_TiledForwardLightArea = 2,
  ShaderConstantSystemBuffer_TiledForwardLightAreaShadow = 3,
  ShaderConstantSystemBuffer_TiledForwardLightLRV = 4,
  ShaderConstantSystemBuffer_TiledForwardLightLPR = 5,
  ShaderConstantSystemBuffer_TiledForwardLightGrid = 6,
  ShaderConstantSystemBuffer_TiledForwardLightIndex = 7,
  ShaderConstantSystemBufferCount = 8,
};

}
