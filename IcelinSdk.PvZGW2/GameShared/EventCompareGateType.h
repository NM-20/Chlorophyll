#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849640
   RuntimeId:        0DA4
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BB580
*/
enum EventCompareGateType
{
  EventCompareGate_Equals = 0,
  EventCompareGate_NotEquals = 1,
  EventCompareGate_Less = 2,
  EventCompareGate_LessEquals = 3,
  EventCompareGate_Greater = 4,
  EventCompareGate_GreaterEquals = 5,
};

}
