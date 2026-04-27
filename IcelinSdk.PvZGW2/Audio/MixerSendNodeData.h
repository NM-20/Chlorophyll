#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836228
   RuntimeId:        03A1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          124A
   VfTable:          00000001421F4CF8
   Address (Base):   00000001430FFD30
*/
#pragma pack(push, 8)
class MixerSendNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class MixerSendEntry) Entries; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(MixerSendNodeData) == 24);

}
