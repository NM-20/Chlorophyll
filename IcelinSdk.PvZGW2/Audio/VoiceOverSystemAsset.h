#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838BC8
   RuntimeId:        062A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0653
   VfTable:          00000001421F9530
   Address (Base):   0000000143116230
*/
#pragma pack(push, 8)
class VoiceOverSystemAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class VoiceOverInterval) Intervals; /* 0x0018 */
  FB_REFARRAY(class VoiceOverLabel) Labels; /* 0x0020 */
  FB_REFARRAY(class VoiceOverObject) Types; /* 0x0028 */
  FB_REFARRAY(class VoiceOverObject) Objects; /* 0x0030 */
  FB_REFARRAY(class VoiceOverGlobalConstantValue) Constants; /* 0x0038 */
  FB_HANDLE(class AudioLanguage) MasterLanguage; /* 0x0040 */
  FB_HANDLE(class VoiceOverPronunciation) DefaultPronunciation; /* 0x0048 */
  FB_REFARRAY(class VoiceOverPronunciation) Pronunciations; /* 0x0050 */
  FB_REFARRAY(class VoiceOverConversationQueueGroup) QueueGroups; /* 0x0058 */
  FB_HANDLE(class VoiceOverConversationQueueGroup) DefaultPositionedQueueGroup; /* 0x0060 */
  FB_HANDLE(class VoiceOverConversationQueueGroup) DefaultUnpositionedQueueGroup; /* 0x0068 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverSystemAsset) == 112);

}
