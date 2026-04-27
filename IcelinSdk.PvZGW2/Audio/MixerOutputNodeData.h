#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836148
   RuntimeId:        0393
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1210
   VfTable:          00000001421F14D8
   Address (Base):   00000001430FFEB0
*/
#pragma pack(push, 8)
class MixerOutputNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class MixerOutputEntry) Entries; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(MixerOutputNodeData) == 24);

}
