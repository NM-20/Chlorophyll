#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>
#include <IcelinSdk.PvZGW2/Audio/SoundGraphPluginRef.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837200
   RuntimeId:        049A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1231
   VfTable:          00000001421FA340
   Address (Base):   0000000143117CD0
*/
#pragma pack(push, 8)
class PeakingIir2NodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort In; /* 0x0010 */
  AudioGraphNodePort Frequency; /* 0x0018 */
  AudioGraphNodePort Amplitude; /* 0x0020 */
  AudioGraphNodePort Q; /* 0x0028 */
  AudioGraphNodePort Out; /* 0x0030 */
  SoundGraphPluginRef Plugin; /* 0x0038 */
  char pad_003B[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(PeakingIir2NodeData) == 64);

}
