#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836388
   RuntimeId:        03B7
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430CD348
*/
enum MixGroupPropertyType
{
  MixGroupPropertyType_Gain = 0,
  MixGroupPropertyType_Pitch = 1,
  MixGroupPropertyType_Lfe = 2,
  MixGroupPropertyType_Reverb = 3,
  MixGroupPropertyType_Lpf = 4,
  MixGroupPropertyTypeCount = 5,
};

}
