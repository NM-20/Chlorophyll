#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>
#include <IcelinSdk.PvZGW2/Audio/SoundGraphPluginRef.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836F20
   RuntimeId:        046C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1238
   VfTable:          00000001421FA470
   Address (Base):   00000001431180F0
*/
#pragma pack(push, 8)
class HighShelfIir2NodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort In; /* 0x0010 */
  AudioGraphNodePort Frequency; /* 0x0018 */
  AudioGraphNodePort Amplitude; /* 0x0020 */
  AudioGraphNodePort Out; /* 0x0028 */
  SoundGraphPluginRef Plugin; /* 0x0030 */
  char pad_0033[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(HighShelfIir2NodeData) == 56);

}
