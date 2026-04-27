#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428361A8
   RuntimeId:        0399
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1271
   VfTable:          00000001421F14A8
   Address (Base):   00000001430FFDF0
*/
#pragma pack(push, 8)
class MixerSetPropertyNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class MixerSetPropertyEntry) Entries; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(MixerSetPropertyNodeData) == 24);

}
