#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePortGroup.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836208
   RuntimeId:        039F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          119E
   VfTable:          00000001421F4D08
   Address (Base):   0000000143118FF0
*/
#pragma pack(push, 8)
class MixerSendEntry : public AudioGraphNodePortGroup
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort In; /* 0x0010 */
  FB_HANDLE(class AudioGraphParameter) Target; /* 0x0018 */
  FB_HANDLE(class MixerAsset) Mixer; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(MixerSendEntry) == 40);

}
