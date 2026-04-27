#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428388A0
   RuntimeId:        05FC
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BBCA0
*/
enum VoiceOverConversationQueueMode
{
  VoiceOverConversationQueueMode_Always = 0,
  VoiceOverConversationQueueMode_Never = 1,
  VoiceOverConversationQueueMode_SamePriority = 2,
};

}
