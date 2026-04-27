#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284A4F8
   RuntimeId:        0E80
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BB440
*/
enum VoiceChannel
{
  VoiceChannel_Off = 0,
  VoiceChannel_Team = 1,
  VoiceChannel_Squad = 2,
  VoiceChannel_Loopback = 3,
  VoiceChannel_Count = 4,
};

}
