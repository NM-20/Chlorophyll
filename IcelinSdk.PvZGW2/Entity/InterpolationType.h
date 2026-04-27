#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014283BD90
   RuntimeId:        0950
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BB820
*/
enum InterpolationType
{
  InterpolationType_None = 0,
  InterpolationType_Linear = 1,
  InterpolationType_CatmullRom = 2,
  InterpolationType_Curves = 3,
};

}
