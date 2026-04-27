#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>
#include <IcelinSdk.PvZGW2/Audio/SoundGraphPluginRef.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836DE0
   RuntimeId:        0458
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          125E
   VfTable:          00000001421FA4F0
   Address (Base):   00000001431182D0
*/
#pragma pack(push, 8)
class FlangerNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort In; /* 0x0010 */
  AudioGraphNodePort Out; /* 0x0018 */
  FB_FLOAT32 MaxDelay; /* 0x0020 */
  FB_FLOAT32 MaxModulationDepth; /* 0x0024 */
  AudioGraphNodePort DelayTime; /* 0x0028 */
  AudioGraphNodePort ModulationDepth; /* 0x0030 */
  AudioGraphNodePort ModulationFrequency; /* 0x0038 */
  SoundGraphPluginRef Plugin; /* 0x0040 */
  char pad_0043[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(FlangerNodeData) == 72);

}
