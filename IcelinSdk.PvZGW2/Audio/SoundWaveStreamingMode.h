#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836B70
   RuntimeId:        0433
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430CD108
*/
enum SoundWaveStreamingMode
{
  SoundWaveStreamingMode_Normal = 0,
  SoundWaveStreamingMode_ZeroLatency = 1,
  SoundWaveStreamingMode_LowLatency = 2,
};

}
