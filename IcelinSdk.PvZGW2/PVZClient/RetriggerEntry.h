#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePortGroup.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>

namespace fb
{

/* TypeInfo (Array): 00000001428595F0
   RuntimeId:        1B2C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11A2
   VfTable:          00000001422DC140
   Address (Base):   000000014310C510
*/
#pragma pack(push, 8)
class RetriggerEntry : public AudioGraphNodePortGroup
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort TriggerOut; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(RetriggerEntry) == 24);

}
