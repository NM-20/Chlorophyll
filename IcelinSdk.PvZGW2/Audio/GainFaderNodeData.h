#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>
#include <IcelinSdk.PvZGW2/Audio/GainFaderFadeType.h>
#include <IcelinSdk.PvZGW2/Audio/SoundGraphPluginRef.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836E80
   RuntimeId:        0462
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1228
   VfTable:          00000001421FA4C0
   Address (Base):   00000001430FEBF0
*/
#pragma pack(push, 8)
class GainFaderNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort In; /* 0x0010 */
  AudioGraphNodePort Start; /* 0x0018 */
  AudioGraphNodePort StartTime; /* 0x0020 */
  AudioGraphNodePort FadeTime; /* 0x0028 */
  AudioGraphNodePort Amplitude; /* 0x0030 */
  AudioGraphNodePort Out; /* 0x0038 */
  GainFaderFadeType FadeType; /* 0x0040 */
  SoundGraphPluginRef Plugin; /* 0x0044 */
  char pad_0047[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(GainFaderNodeData) == 72);

}
