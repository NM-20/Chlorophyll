#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePortGroup.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835EE8
   RuntimeId:        036D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11AF
   VfTable:          00000001421F1610
   Address (Base):   0000000143119290
*/
#pragma pack(push, 8)
class EventSequencerOutEvent : public AudioGraphNodePortGroup
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort Out; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(EventSequencerOutEvent) == 24);

}
