#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>
#include <IcelinSdk.PvZGW2/Audio/SoundGraphPluginRef.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836EA0
   RuntimeId:        0464
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1237
   VfTable:          00000001421FA4B0
   Address (Base):   00000001430FEB90
*/
#pragma pack(push, 8)
class SinePlayerNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 ChannelCount; /* 0x0010 */
  AudioGraphNodePort Start; /* 0x0014 */
  AudioGraphNodePort Stop; /* 0x001C */
  AudioGraphNodePort Frequency; /* 0x0024 */
  AudioGraphNodePort Out; /* 0x002C */
  SoundGraphPluginRef Plugin; /* 0x0034 */
  char pad_0037[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(SinePlayerNodeData) == 56);

}
