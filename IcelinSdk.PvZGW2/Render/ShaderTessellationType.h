#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142853270
   RuntimeId:        164A
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BA0A0
*/
enum ShaderTessellationType
{
  ShaderTessellationType_None = 0,
  ShaderTessellationType_Phong = 1,
  ShaderTessellationType_DisplacementMappingPhong = 2,
  ShaderTessellationType_DisplacementMapping = 3,
};

}
