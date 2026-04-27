#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverNodeConfigData.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverContainerConditionMode.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838780
   RuntimeId:        05EA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1182
   VfTable:          00000001421F96F0
   Address (Base):   0000000143116890
*/
#pragma pack(push, 8)
class VoiceOverContainerNodeConfigData : public VoiceOverNodeConfigData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  VoiceOverContainerConditionMode ConditionMode; /* 0x0018 */
  FB_FLOAT32 Probability; /* 0x001C */
  FB_BOOLEAN AlwaysResetInterval; /* 0x0020 */
  char pad_0021[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverContainerNodeConfigData) == 40);

}
