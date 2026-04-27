#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>
#include <IcelinSdk.PvZGW2/Audio/SoundGraphPluginRef.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836D00
   RuntimeId:        044A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          125D
   VfTable:          00000001421FA558
   Address (Base):   00000001430FEDD0
*/
#pragma pack(push, 8)
class DelayNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort In; /* 0x0010 */
  AudioGraphNodePort DelayTime; /* 0x0018 */
  AudioGraphNodePort Feedback; /* 0x0020 */
  AudioGraphNodePort Out; /* 0x0028 */
  FB_FLOAT32 MaxDelayTime; /* 0x0030 */
  SoundGraphPluginRef Plugin; /* 0x0034 */
  char pad_0037[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(DelayNodeData) == 56);

}
