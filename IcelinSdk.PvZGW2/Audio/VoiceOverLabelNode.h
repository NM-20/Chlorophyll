#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverExpressionNode.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverLabelSourceMode.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverLabelCompareMode.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838640
   RuntimeId:        05D6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DDE
   VfTable:          00000001421F9770
   Address (Base):   00000001430FF310
*/
#pragma pack(push, 8)
class VoiceOverLabelNode : public VoiceOverExpressionNode
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class VoiceOverLabelSource) Sources; /* 0x0010 */
  FB_HANDLE(class VoiceOverValue) False; /* 0x0018 */
  FB_HANDLE(class VoiceOverValue) True; /* 0x0020 */
  FB_REFARRAY(class VoiceOverLabel) WantedLabels; /* 0x0028 */
  FB_REFARRAY(class VoiceOverLabel) UnwantedLabels; /* 0x0030 */
  VoiceOverLabelSourceMode SourceMode; /* 0x0038 */
  VoiceOverLabelCompareMode WantedCompareMode; /* 0x003C */
  VoiceOverLabelCompareMode UnwantedCompareMode; /* 0x0040 */
  char pad_0044[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverLabelNode) == 72);

}
