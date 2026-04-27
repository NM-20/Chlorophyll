#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePortGroup.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835AB8
   RuntimeId:        032B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          119C
   VfTable:          00000001421F1798
   Address (Base):   0000000143119530
*/
#pragma pack(push, 8)
class MinMaxValueSelectorEntry : public AudioGraphNodePortGroup
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort Input; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(MinMaxValueSelectorEntry) == 24);

}
