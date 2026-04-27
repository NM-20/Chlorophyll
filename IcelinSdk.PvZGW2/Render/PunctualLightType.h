#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428529A0
   RuntimeId:        15C2
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C8488
*/
enum PunctualLightType
{
  PunctualLightType_Point = 0,
  PunctualLightType_Line = 1,
  PunctualLightType_Cone = 2,
  PunctualLightType_Spot = 3,
  PunctualLightTypeCount = 4,
};

}
