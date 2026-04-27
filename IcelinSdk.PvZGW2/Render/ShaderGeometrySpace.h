#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142853880
   RuntimeId:        16A2
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C7E28
*/
enum ShaderGeometrySpace
{
  ShaderGeometrySpace_Object = 0,
  ShaderGeometrySpace_ObjectScaled = 1,
  ShaderGeometrySpace_World = 2,
  ShaderGeometrySpace_Screen = 3,
  ShaderGeometrySpace_Manual = 4,
  ShaderGeometrySpaceCount = 5,
};

}
