#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849ED8
   RuntimeId:        0E24
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C9708
*/
enum StatPeriod
{
  StatPeriod_AllTime = 0,
  StatPeriod_Monthly = 1,
  StatPeriod_Weekly = 2,
  StatPeriod_Daily = 3,
  StatPeriod_Size = 4,
  StatPeriod_Error = 5,
};

}
