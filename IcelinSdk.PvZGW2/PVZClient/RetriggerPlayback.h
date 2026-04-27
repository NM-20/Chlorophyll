#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428595D0
   RuntimeId:        1B2A
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B98C0
*/
enum RetriggerPlayback
{
  Sequential = 0,
  Chord = 1,
  TrueRandom = 2,
  RandomNoRepeat = 3,
};

}
