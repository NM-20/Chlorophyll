#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePortGroup.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>

namespace fb
{

/* TypeInfo (Array): 0000000142859590
   RuntimeId:        1B26
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          119A
   VfTable:          00000001422DC1B8
   Address (Base):   000000014310C570
*/
#pragma pack(push, 8)
class SequencerEntry : public AudioGraphNodePortGroup
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort Event; /* 0x0010 */
  AudioGraphNodePort Delay; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(SequencerEntry) == 32);

}
