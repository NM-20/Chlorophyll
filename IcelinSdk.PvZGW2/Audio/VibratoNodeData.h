#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>
#include <IcelinSdk.PvZGW2/Audio/SoundGraphPluginRef.h>

namespace fb
{

/* TypeInfo (Array): 00000001428374A0
   RuntimeId:        04C4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          124E
   VfTable:          00000001421FA260
   Address (Base):   00000001431179D0
*/
#pragma pack(push, 8)
class VibratoNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort In; /* 0x0010 */
  AudioGraphNodePort Out; /* 0x0018 */
  FB_FLOAT32 MaxModulationDepth; /* 0x0020 */
  AudioGraphNodePort ModulationDepth; /* 0x0024 */
  AudioGraphNodePort ModulationFrequency; /* 0x002C */
  SoundGraphPluginRef Plugin; /* 0x0034 */
  char pad_0037[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(VibratoNodeData) == 56);

}
