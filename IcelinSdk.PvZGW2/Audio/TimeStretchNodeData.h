#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>
#include <IcelinSdk.PvZGW2/Audio/TimeStretchMultiChannelMode.h>
#include <IcelinSdk.PvZGW2/Audio/TimeStretchEfficiency.h>
#include <IcelinSdk.PvZGW2/Audio/SoundGraphPluginRef.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837400
   RuntimeId:        04BA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          125F
   VfTable:          00000001421FA2B0
   Address (Base):   0000000143117AF0
*/
#pragma pack(push, 8)
class TimeStretchNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort In; /* 0x0010 */
  AudioGraphNodePort Out; /* 0x0018 */
  FB_FLOAT32 WindowSize; /* 0x0020 */
  TimeStretchMultiChannelMode MultiChannelMode; /* 0x0024 */
  TimeStretchEfficiency Efficiency; /* 0x0028 */
  AudioGraphNodePort StretchRatio; /* 0x002C */
  SoundGraphPluginRef Plugin; /* 0x0034 */
  char pad_0037[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(TimeStretchNodeData) == 56);

}
