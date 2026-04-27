#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836E60
   RuntimeId:        0460
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BC060
*/
enum GainFaderFadeType
{
  GainFaderFadeType_LinearAmplitude = 0,
  GainFaderFadeType_LinearPower = 1,
  GainFaderFadeType_SineAmplitude = 2,
};

}
