#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverNodeConfigData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428389D0
   RuntimeId:        060C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          117C
   VfTable:          00000001421F95F8
   Address (Base):   0000000143116590
*/
#pragma pack(push, 8)
class VoiceOverTriggerNodeConfigData : public VoiceOverNodeConfigData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Delay; /* 0x0018 */
  char pad_001C[0x0004];
  FB_REFARRAY(class VoiceOverTriggerParameter) Parameters; /* 0x0020 */
  FB_HANDLE(class VoiceOverEvent) Event; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverTriggerNodeConfigData) == 48);

}
