#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142853800
   RuntimeId:        169A
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C7E88
*/
enum ShaderObjectLighting
{
  ShaderObjectLighting_None = 0,
  ShaderObjectLighting_LightProbe = 1,
  ShaderObjectLighting_LightMap = 2,
  ShaderObjectLighting_RgbDirLightMap = 3,
  ShaderObjectLightingCount = 4,
};

}
