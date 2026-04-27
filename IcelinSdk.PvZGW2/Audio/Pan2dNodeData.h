#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>
#include <IcelinSdk.PvZGW2/Audio/Pan2dOutputChannelCount.h>
#include <IcelinSdk.PvZGW2/Audio/SoundGraphPluginRef.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837260
   RuntimeId:        04A0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1257
   VfTable:          00000001421FA320
   Address (Base):   0000000143117C10
*/
#pragma pack(push, 8)
class Pan2dNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort In; /* 0x0010 */
  AudioGraphNodePort Out; /* 0x0018 */
  Pan2dOutputChannelCount OutputChannelCount; /* 0x0020 */
  AudioGraphNodePort PanAngle; /* 0x0024 */
  AudioGraphNodePort PanDistance; /* 0x002C */
  AudioGraphNodePort PanSize; /* 0x0034 */
  AudioGraphNodePort PanTwist; /* 0x003C */
  AudioGraphNodePort CenterAmplitude; /* 0x0044 */
  AudioGraphNodePort MainAmplitude; /* 0x004C */
  AudioGraphNodePort LfeAmplitude; /* 0x0054 */
  SoundGraphPluginRef Plugin; /* 0x005C */
  char pad_005F[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(Pan2dNodeData) == 96);

}
