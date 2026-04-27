#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverValueConnection.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverDialogTakeBehavior.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838840
   RuntimeId:        05F6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          100A
   VfTable:          00000001421F9690
   Address (Base):   0000000143116770
*/
#pragma pack(push, 8)
class VoiceOverDialogTrack : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  VoiceOverValueConnection Source; /* 0x0010 */
  VoiceOverValueConnection TakeControl; /* 0x0020 */
  FB_STDARRAY(struct VoiceOverDialogTakeMapping) TakeIndexMapping; /* 0x0030 */
  VoiceOverDialogTakeBehavior TakeSwitching; /* 0x0038 */
  char pad_003C[0x0004];
  FB_HANDLE(class AudioGraphNodeData) Output; /* 0x0040 */
  FB_HANDLE(class AudioGraphNodeData) SamplerNode; /* 0x0048 */
  FB_HANDLE(class VoiceOverConversationQueueGroup) QueueGroup; /* 0x0050 */
  FB_REFARRAY(class VoiceOverDialogClip) Clips; /* 0x0058 */
  FB_BOOLEAN TakeSwitchingOnResume; /* 0x0060 */
  FB_UINT8 ParentTrackIndex; /* 0x0061 */
  FB_UINT8 GroupIndex; /* 0x0062 */
  char pad_0063[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0068 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverDialogTrack) == 104);

}
