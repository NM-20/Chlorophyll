#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014285EB78
   RuntimeId:        1CFB
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B98A0
*/
enum PressureCheckType
{
  PressureCheck_None = 0,
  PressureCheck_ApplyingWeight = 1,
  PressureCheck_AllowedWeight = 2,
  PressureCheck_ApplyingPressure = 3,
  PressureCheck_AllowedPressure = 4,
};

}
