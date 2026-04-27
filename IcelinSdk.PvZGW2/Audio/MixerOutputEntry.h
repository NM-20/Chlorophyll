#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePortGroup.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836128
   RuntimeId:        0391
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          119D
   VfTable:          00000001421F14E8
   Address (Base):   0000000143119110
*/
#pragma pack(push, 8)
class MixerOutputEntry : public AudioGraphNodePortGroup
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort In; /* 0x0010 */
  FB_HANDLE(class AudioGraphParameter) Target; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(MixerOutputEntry) == 32);

}
