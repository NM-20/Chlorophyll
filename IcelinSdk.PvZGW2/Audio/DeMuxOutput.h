#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePortGroup.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>

namespace fb
{

/* TypeInfo (Array): 00000001428358B8
   RuntimeId:        030B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11A6
   VfTable:          00000001421F1888
   Address (Base):   00000001431197D0
*/
#pragma pack(push, 8)
class DeMuxOutput : public AudioGraphNodePortGroup
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort Trigger; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(DeMuxOutput) == 24);

}
