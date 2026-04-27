#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835A18
   RuntimeId:        0321
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1276
   VfTable:          00000001421F17D8
   Address (Base):   00000001431195F0
*/
#pragma pack(push, 8)
class LinkSendNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class LinkSendNodeEntry) Entries; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(LinkSendNodeData) == 24);

}
