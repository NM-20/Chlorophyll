#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePortGroup.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>

namespace fb
{

/* TypeInfo (Array): 00000001428359F8
   RuntimeId:        031F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11A5
   VfTable:          00000001421F17E8
   Address (Base):   0000000143119650
*/
#pragma pack(push, 8)
class LinkSendNodeEntry : public AudioGraphNodePortGroup
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort Input; /* 0x0010 */
  FB_CSTRING SendName; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(LinkSendNodeEntry) == 32);

}
