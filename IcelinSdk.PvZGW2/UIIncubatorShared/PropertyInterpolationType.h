#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142876468
   RuntimeId:        2DB6
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B7CC0
*/
enum PropertyInterpolationType
{
  PropertyInterpolationType_Linear = 0,
  PropertyInterpolationType_Quad = 1,
  PropertyInterpolationType_Cubic = 2,
  PropertyInterpolationType_Quart = 3,
  PropertyInterpolationType_Quint = 4,
  PropertyInterpolationType_Expo = 5,
  PropertyInterpolationType_Sine = 6,
  PropertyInterpolationType_Circ = 7,
  PropertyInterpolationType_Back = 8,
  PropertyInterpolationType_Elastic = 9,
  PropertyInterpolationType_Bounce = 10,
  PropertyInterpolationType_Count = 11,
};

}
