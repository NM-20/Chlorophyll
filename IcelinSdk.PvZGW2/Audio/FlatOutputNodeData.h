#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/OutputNodeData.h>
#include <IcelinSdk.PvZGW2/Core/AudioCurve.h>
#include <IcelinSdk.PvZGW2/Audio/OutputReverbMode.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>
#include <IcelinSdk.PvZGW2/Audio/SoundGraphPluginRef.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837140
   RuntimeId:        048E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1217
   VfTable:          00000001421FA3A0
   Address (Base):   00000001430FEA10
*/
#pragma pack(push, 8)
class FlatOutputNodeData : public OutputNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 WorldAngle; /* 0x0080 */
  FB_FLOAT32 Angle; /* 0x0084 */
  AudioCurve ReverbAttenuationCurve; /* 0x0088 */
  FB_FLOAT32 ReverbGain; /* 0x0098 */
  OutputReverbMode ReverbMode; /* 0x009C */
  FB_HANDLE(class SoundBusData) ReverbSend; /* 0x00A0 */
  AudioGraphNodePort CenterLevel; /* 0x00A8 */
  AudioGraphNodePort LfeLevel; /* 0x00B0 */
  FB_BOOLEAN IsWorldAligned; /* 0x00B8 */
  SoundGraphPluginRef PanPlugin; /* 0x00B9 */
  SoundGraphPluginRef ReverbSendPlugin; /* 0x00BC */
  char pad_00BF[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00C0 */
#pragma pack(pop)

static_assert(sizeof(FlatOutputNodeData) == 192);

}
