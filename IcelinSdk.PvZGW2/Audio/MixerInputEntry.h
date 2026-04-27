#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePortGroup.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>
#include <IcelinSdk.PvZGW2/Audio/MixerValueAccumulateMode.h>

namespace fb
{

/* TypeInfo (Array): 00000001428360E8
   RuntimeId:        038D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          119B
   VfTable:          00000001421F1508
   Address (Base):   0000000143119170
*/
#pragma pack(push, 8)
class MixerInputEntry : public AudioGraphNodePortGroup
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort Out; /* 0x0010 */
  FB_HANDLE(class AudioGraphParameter) Source; /* 0x0018 */
  MixerValueAccumulateMode AccumulateMode; /* 0x0020 */
  FB_BOOLEAN KeepValue; /* 0x0024 */
  char pad_0025[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(MixerInputEntry) == 40);

}
