#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeConfigData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836268
   RuntimeId:        03A5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DFA
   VfTable:          00000001421F4CD8
   Address (Base):   0000000143118F30
*/
#pragma pack(push, 8)
class MixerReceiveNodeConfigData : public AudioGraphNodeConfigData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class MixerEntryConfig) EntryConfigs; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(MixerReceiveNodeConfigData) == 32);

}
