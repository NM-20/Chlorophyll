#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverNodeConfigData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428385C0
   RuntimeId:        05CE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1181
   VfTable:          00000001421F9790
   Address (Base):   0000000143116A70
*/
#pragma pack(push, 8)
class VoiceOverIntervalNodeConfigData : public VoiceOverNodeConfigData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class VoiceOverInterval) Interval; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverIntervalNodeConfigData) == 32);

}
