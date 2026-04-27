#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014283ABD0
   RuntimeId:        0837
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430CCA88
*/
enum MathEntityType
{
  MathEntityType_Bool = 1,
  MathEntityType_Int = 2,
  MathEntityType_Float = 4,
  MathEntityType_Vec2 = 8,
  MathEntityType_Vec3 = 16,
  MathEntityType_Vec4 = 32,
  MathEntityType_Transform = 64,
};

}
