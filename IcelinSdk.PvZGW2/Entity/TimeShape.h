#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014283A848
   RuntimeId:        07FF
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BB960
*/
enum TimeShape
{
  TimeShape_Step = 0,
  TimeShape_Sine = 1,
  TimeShape_SemiCircle = 2,
  TimeShape_Triangle = 3,
  TimeShape_Ramps = 4,
};

}
