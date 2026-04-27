#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428361E8
   RuntimeId:        039D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1240
   VfTable:          00000001421F4D18
   Address (Base):   00000001430FFD90
*/
#pragma pack(push, 8)
class MixerReceiveNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class MixerReceiveEntry) Entries; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(MixerReceiveNodeData) == 24);

}
