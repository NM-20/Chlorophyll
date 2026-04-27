#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePortGroup.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>

namespace fb
{

/* TypeInfo (Array): 00000001428361C8
   RuntimeId:        039B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1197
   VfTable:          00000001421F1498
   Address (Base):   0000000143119050
*/
#pragma pack(push, 8)
class MixerReceiveEntry : public AudioGraphNodePortGroup
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort Out; /* 0x0010 */
  FB_HANDLE(class AudioGraphParameter) Source; /* 0x0018 */
  FB_HANDLE(class MixerAsset) Mixer; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(MixerReceiveEntry) == 40);

}
