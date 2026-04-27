#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142852510
   RuntimeId:        157A
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C85C8
*/
enum ShaderStageType
{
  ShaderStageType_Vertex = 0,
  ShaderStageType_Pixel = 1,
  ShaderStageType_Hull = 2,
  ShaderStageType_Domain = 3,
  ShaderStageType_Geometry = 4,
  ShaderStageType_Compute = 5,
  ShaderStageTypeCount = 6,
};

}
