#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837080
   RuntimeId:        0482
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1235
   VfTable:          00000001421FA3E0
   Address (Base):   0000000143117E50
*/
#pragma pack(push, 8)
class MixerNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class MixerEntry) Entries; /* 0x0010 */
  AudioGraphNodePort Out; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(MixerNodeData) == 32);

}
