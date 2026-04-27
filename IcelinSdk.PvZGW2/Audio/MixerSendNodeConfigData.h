#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeConfigData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836288
   RuntimeId:        03A7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DFD
   VfTable:          00000001421F4CC8
   Address (Base):   0000000143118ED0
*/
#pragma pack(push, 8)
class MixerSendNodeConfigData : public AudioGraphNodeConfigData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class MixerEntryConfig) EntryConfigs; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(MixerSendNodeConfigData) == 32);

}
