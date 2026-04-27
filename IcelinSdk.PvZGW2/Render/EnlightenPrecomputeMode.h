#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428528C0
   RuntimeId:        15B4
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C84A8
*/
enum EnlightenPrecomputeMode
{
  EnlightenPrecomputeMode_Full = 0,
  EnlightenPrecomputeMode_Input = 1,
  EnlightenPrecomputeMode_Output = 2,
  EnlightenPrecomputeMode_Debug = 3,
};

}
