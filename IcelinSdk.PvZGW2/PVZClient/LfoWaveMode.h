#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142859470
   RuntimeId:        1B14
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B9900
*/
enum LfoWaveMode
{
  LfoWaveMode_Saw = 0,
  LfoWaveMode_Ramp = 1,
  LfoWaveMode_Sine = 2,
  LfoWaveMode_Square = 3,
  LfoWaveMode_Triangle = 4,
};

}
