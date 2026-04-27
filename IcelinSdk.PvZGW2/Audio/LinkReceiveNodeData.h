#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428359D8
   RuntimeId:        031D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          126F
   VfTable:          00000001421F17F8
   Address (Base):   00000001431196B0
*/
#pragma pack(push, 8)
class LinkReceiveNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class LinkReceiveNodeEntry) Entries; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(LinkReceiveNodeData) == 24);

}
