#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835EC8
   RuntimeId:        036B
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BC220
*/
enum EventSequencerPlayback
{
  EventSequencerPlayback_Sequential = 0,
  EventSequencerPlayback_Simultaneous = 1,
  EventSequencerPlayback_Random = 2,
};

}
