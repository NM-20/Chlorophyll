#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverNodeConfigData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428386A0
   RuntimeId:        05DC
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1183
   VfTable:          00000001421F9740
   Address (Base):   0000000143116950
*/
#pragma pack(push, 8)
class VoiceOverProbabilityNodeConfigData : public VoiceOverNodeConfigData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Probability; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverProbabilityNodeConfigData) == 32);

}
