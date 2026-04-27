#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142853920
   RuntimeId:        16AC
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C7D88
*/
enum ShaderDepthBiasGroup
{
  ShaderDepthBiasGroup_Default = 0,
  ShaderDepthBiasGroup_Decal = 1,
  ShaderDepthBiasGroup_EmitterOcclusion = 2,
  ShaderDepthBiasGroup_EdgeModel = 3,
  ShaderDepthBiasGroup_TerrainDecal = 4,
  ShaderDepthBiasGroup_TerrainDecalZPass = 5,
  ShaderDepthBiasGroup_Shadow16Bit = 6,
  ShaderDepthBiasGroup_Shadow24Bit = 7,
  ShaderDepthBiasGroup_Shadow32Bit = 8,
  ShaderDepthBiasGroup_ZPass = 9,
  ShaderDepthBiasGroup_Emissive = 10,
  ShaderDepthBiasGroup_VelocityVector = 11,
  ShaderDepthBiasGroupCount = 12,
};

}
