#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverNodeConfigData.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverLabelSourceMode.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverLabelCompareMode.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838660
   RuntimeId:        05D8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1180
   VfTable:          00000001421F9760
   Address (Base):   00000001431169B0
*/
#pragma pack(push, 8)
class VoiceOverLabelNodeConfigData : public VoiceOverNodeConfigData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class VoiceOverLabel) WantedLabels; /* 0x0018 */
  FB_REFARRAY(class VoiceOverLabel) UnwantedLabels; /* 0x0020 */
  VoiceOverLabelSourceMode SourceMode; /* 0x0028 */
  VoiceOverLabelCompareMode WantedCompareMode; /* 0x002C */
  VoiceOverLabelCompareMode UnwantedCompareMode; /* 0x0030 */
  char pad_0034[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverLabelNodeConfigData) == 56);

}
