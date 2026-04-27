#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836108
   RuntimeId:        038F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1272
   VfTable:          00000001421F14F8
   Address (Base):   00000001430FFF10
*/
#pragma pack(push, 8)
class MixerInputNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class MixerInputEntry) Entries; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(MixerInputNodeData) == 24);

}
