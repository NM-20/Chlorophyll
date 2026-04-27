#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverConversationInterruptMode.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverConversationQueueMode.h>

namespace fb
{

/* TypeInfo (Array): 00000001428388C0
   RuntimeId:        05FE
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B6A18
   Default Value:    00000001428388D8
*/
#pragma pack(push, 8)
struct VoiceOverConversationInfo
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_REFARRAY(class VoiceOverDialogGroup) Groups; /* 0x0000 */
  FB_REFARRAY(class VoiceOverDialogTrack) Tracks; /* 0x0008 */
  FB_REFARRAY(class VoiceOverPronunciation) Pronunciations; /* 0x0010 */
  VoiceOverConversationInterruptMode InterruptMode; /* 0x0018 */
  FB_INT32 Priority; /* 0x001C */
  VoiceOverConversationQueueMode QueueMode; /* 0x0020 */
  FB_FLOAT32 Relevancy; /* 0x0024 */
  FB_UINT8 LastSequenceIndex; /* 0x0028 */
  char pad_0029[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverConversationInfo) == 48);

}
