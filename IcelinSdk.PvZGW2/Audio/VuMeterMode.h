#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428374C0
   RuntimeId:        04C6
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BBF40
*/
enum VuMeterMode
{
  VuMeterMode_Rms = 0,
  VuMeterMode_Peak = 1,
  VuMeterMode_LargestPeak = 2,
};

}
