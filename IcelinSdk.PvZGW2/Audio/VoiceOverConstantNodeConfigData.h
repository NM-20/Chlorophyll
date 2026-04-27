#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverNodeConfigData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838480
   RuntimeId:        05BA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          117F
   VfTable:          00000001421F9830
   Address (Base):   0000000143116C50
*/
#pragma pack(push, 8)
class VoiceOverConstantNodeConfigData : public VoiceOverNodeConfigData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class VoiceOverConstantValue) Source; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverConstantNodeConfigData) == 32);

}
