#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014283BFD0
   RuntimeId:        0974
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BB7E0
*/
enum CurveInfinityType
{
  CurveInfinityType_Constant = 0,
  CurveInfinityType_Linear = 1,
  CurveInfinityType_Cycle = 2,
  CurveInfinityType_CycleWithOffset = 3,
  CurveInfinityType_Oscillate = 4,
};

}
