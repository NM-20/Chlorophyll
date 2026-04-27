#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>
#include <IcelinSdk.PvZGW2/Audio/SoundGraphPluginRef.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836E40
   RuntimeId:        045E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          121B
   VfTable:          00000001421FA4D0
   Address (Base):   0000000143118270
*/
#pragma pack(push, 8)
class GainNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort In; /* 0x0010 */
  AudioGraphNodePort Amplitude; /* 0x0018 */
  AudioGraphNodePort Out; /* 0x0020 */
  SoundGraphPluginRef Plugin; /* 0x0028 */
  char pad_002B[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(GainNodeData) == 48);

}
