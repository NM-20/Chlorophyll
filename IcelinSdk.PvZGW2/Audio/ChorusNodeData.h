#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>
#include <IcelinSdk.PvZGW2/Audio/SoundGraphPluginRef.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836C60
   RuntimeId:        0440
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          122D
   VfTable:          00000001421FA598
   Address (Base):   00000001431183F0
*/
#pragma pack(push, 8)
class ChorusNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort In; /* 0x0010 */
  AudioGraphNodePort Out; /* 0x0018 */
  FB_FLOAT32 MaxDelay; /* 0x0020 */
  FB_FLOAT32 MaxModulationDepth; /* 0x0024 */
  AudioGraphNodePort TapCount; /* 0x0028 */
  AudioGraphNodePort DelayTime; /* 0x0030 */
  AudioGraphNodePort ModulationDepth; /* 0x0038 */
  AudioGraphNodePort ModulationFrequency; /* 0x0040 */
  SoundGraphPluginRef Plugin; /* 0x0048 */
  char pad_004B[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(ChorusNodeData) == 80);

}
