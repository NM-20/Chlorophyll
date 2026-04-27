#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/OutputNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Core/AudioCurve.h>
#include <IcelinSdk.PvZGW2/Audio/OutputReverbMode.h>
#include <IcelinSdk.PvZGW2/Audio/SoundGraphPluginRef.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837180
   RuntimeId:        0492
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1218
   VfTable:          00000001421FA380
   Address (Base):   00000001430F2640
*/
#pragma pack(push, 16)
class ConeOutputNodeData : public OutputNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort PositionX; /* 0x0080 */
  char pad_0088[0x0008];
  Vec3 Direction; /* 0x0090 */
  AudioGraphNodePort PositionY; /* 0x00A0 */
  AudioGraphNodePort PositionZ; /* 0x00A8 */
  AudioGraphNodePort InnerAngle; /* 0x00B0 */
  AudioGraphNodePort OuterAngle; /* 0x00B8 */
  FB_FLOAT32 OutsideGain; /* 0x00C0 */
  FB_FLOAT32 PanSize; /* 0x00C4 */
  FB_FLOAT32 BleedMinDistance; /* 0x00C8 */
  FB_FLOAT32 BleedMaxDistance; /* 0x00CC */
  AudioGraphNodePort CenterLevel; /* 0x00D0 */
  AudioGraphNodePort LfeLevel; /* 0x00D8 */
  FB_FLOAT32 HFDampingAngle; /* 0x00E0 */
  char pad_00E4[0x0004];
  AudioCurve ReverbAttenuationCurve; /* 0x00E8 */
  FB_FLOAT32 ReverbGain; /* 0x00F8 */
  OutputReverbMode ReverbMode; /* 0x00FC */
  FB_HANDLE(class SoundBusData) ReverbSend; /* 0x0100 */
  SoundGraphPluginRef PanPlugin; /* 0x0108 */
  SoundGraphPluginRef ReverbSendPlugin; /* 0x010B */
  char pad_010E[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0110 */
#pragma pack(pop)

static_assert(sizeof(ConeOutputNodeData) == 272);

}
