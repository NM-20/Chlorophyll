#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142853250
   RuntimeId:        1648
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BA0C0
*/
enum ShaderParameterType
{
  ShaderParameterType_Bool = 0,
  ShaderParameterType_Int = 1,
  ShaderParameterType_Scalar = 2,
  ShaderParameterType_Vec2 = 3,
  ShaderParameterType_Vec3 = 4,
  ShaderParameterType_Vec4 = 5,
  ShaderParameterType_Color = 6,
  ShaderParameterType_TextureSlice = 7,
  ShaderParameterTypeCount = 8,
};

}
