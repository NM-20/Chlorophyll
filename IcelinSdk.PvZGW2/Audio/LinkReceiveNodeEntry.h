#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePortGroup.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>

namespace fb
{

/* TypeInfo (Array): 00000001428359B8
   RuntimeId:        031B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11B2
   VfTable:          00000001421F1808
   Address (Base):   0000000143119710
*/
#pragma pack(push, 8)
class LinkReceiveNodeEntry : public AudioGraphNodePortGroup
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort Output; /* 0x0010 */
  FB_HANDLE(class LinkSendNodeEntry) Sender; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(LinkReceiveNodeEntry) == 32);

}
