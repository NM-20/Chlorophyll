#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142853430
   RuntimeId:        165E
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C81A8
*/
enum ShaderPortType
{
  SptBool = 0,
  SptInteger = 1,
  SptScalar = 2,
  SptVec2 = 3,
  SptVec3 = 4,
  SptVec4 = 5,
  SptColor = 6,
};

}
