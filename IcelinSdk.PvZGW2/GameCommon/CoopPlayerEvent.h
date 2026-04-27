#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142845D20
   RuntimeId:        0BD0
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430CAAC8
*/
enum CoopPlayerEvent
{
  CoopPlayerEvent_Connecting = 0,
  CoopPlayerEvent_Connected = 1,
  CoopPlayerEvent_Disconnected = 2,
  CoopPlayerEvent_Stats = 3,
  CoopPlayerEvent_StatsFailed = 4,
};

}
