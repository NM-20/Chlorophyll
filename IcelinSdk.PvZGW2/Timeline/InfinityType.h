#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142854BA8
   RuntimeId:        17A9
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B9FA0
*/
enum InfinityType
{
  InfinityType_Constant = 0,
  InfinityType_Linear = 1,
  InfinityType_Cycle = 2,
  InfinityType_CycleWithOffset = 3,
  InfinityType_Oscillate = 4,
  InfinityType_None = 5,
};

}
