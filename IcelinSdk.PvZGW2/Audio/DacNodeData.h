#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>
#include <IcelinSdk.PvZGW2/Audio/SoundGraphPluginRef.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836CE0
   RuntimeId:        0448
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1258
   VfTable:          00000001421FA568
   Address (Base):   00000001430FEE30
*/
#pragma pack(push, 8)
class DacNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort In; /* 0x0010 */
  AudioGraphNodePort SpeakerCount; /* 0x0018 */
  AudioGraphNodePort Hrtf; /* 0x0020 */
  SoundGraphPluginRef DelayPlugin; /* 0x0028 */
  SoundGraphPluginRef VuPlugin; /* 0x002B */
  SoundGraphPluginRef GainPlugin; /* 0x002E */
  SoundGraphPluginRef DacPlugin; /* 0x0031 */
  char pad_0034[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(DacNodeData) == 56);

}
