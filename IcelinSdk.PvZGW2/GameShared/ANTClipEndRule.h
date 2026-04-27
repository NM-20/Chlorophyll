#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284D160
   RuntimeId:        10DF
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BAD80
*/
enum ANTClipEndRule
{
  ANTClipEndRule_None = 0,
  ANTClipEndRule_CarryIntoNextTimeline = 1,
  ANTClipEndRule_LoopIndefinitely = 2,
  ANTClipEndRule_PlayIndefinitely = 3,
  ANTClipEndRule_MatchBarLengthToRuntimeLength = 4,
  ANTClipEndRule_LoopToEndOfTimeline = 5,
};

}
