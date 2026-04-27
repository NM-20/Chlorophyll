#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>
#include <IcelinSdk.PvZGW2/Audio/SoundGraphPluginRef.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836D20
   RuntimeId:        044C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1213
   VfTable:          00000001421FA548
   Address (Base):   00000001430FED70
*/
#pragma pack(push, 8)
class DialogSamplerNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort Pitch; /* 0x0010 */
  AudioGraphNodePort Amplitude; /* 0x0018 */
  AudioGraphNodePort Continue; /* 0x0020 */
  AudioGraphNodePort Output; /* 0x0028 */
  AudioGraphNodePort Triggered; /* 0x0030 */
  AudioGraphNodePort Finished; /* 0x0038 */
  FB_FLOAT32 TailLength; /* 0x0040 */
  char pad_0044[0x0004];
  FB_HANDLE(class OutputNodeData) PitchSource; /* 0x0048 */
  SoundGraphPluginRef SndPlayerPlugin; /* 0x0050 */
  SoundGraphPluginRef ResamplePlugin; /* 0x0053 */
  SoundGraphPluginRef PausePlugin; /* 0x0056 */
  SoundGraphPluginRef GainPlugin; /* 0x0059 */
  char pad_005C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(DialogSamplerNodeData) == 96);

}
