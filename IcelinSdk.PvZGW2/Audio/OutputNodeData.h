#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>
#include <IcelinSdk.PvZGW2/Core/AudioCurve.h>
#include <IcelinSdk.PvZGW2/Audio/OutputTransformSource.h>
#include <IcelinSdk.PvZGW2/Audio/SoundGraphPluginRef.h>

namespace fb
{

/* TypeInfo (Array): 00000001428370C0
   RuntimeId:        0486
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1216
   VfTable:          00000001421FA3D0
   Address (Base):   00000001430D7F30
*/
#pragma pack(push, 8)
class OutputNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort In; /* 0x0010 */
  AudioGraphNodePort BypassHeadroom; /* 0x0018 */
  FB_FLOAT32 MinDistance; /* 0x0020 */
  char pad_0024[0x0004];
  AudioCurve AttenuationCurve; /* 0x0028 */
  FB_FLOAT32 HFDampingDistance; /* 0x0038 */
  FB_FLOAT32 HFDampingObstruction; /* 0x003C */
  FB_FLOAT32 HFDampingOcclusion; /* 0x0040 */
  FB_FLOAT32 Gain; /* 0x0044 */
  FB_HANDLE(class SoundBusData) MainSend; /* 0x0048 */
  FB_FLOAT32 ExpectedPeakAmplitude; /* 0x0050 */
  OutputTransformSource TransformSource; /* 0x0054 */
  FB_CSTRING OutputName; /* 0x0058 */
  FB_UINT32 OutputNameHash; /* 0x0060 */
  char pad_0064[0x0004];
  FB_HANDLE(class MixGroup) MixGroup; /* 0x0068 */
  FB_BOOLEAN Solo; /* 0x0070 */
  FB_BOOLEAN EnableHdr; /* 0x0071 */
  SoundGraphPluginRef LowPassPlugin; /* 0x0072 */
  SoundGraphPluginRef VuPlugin; /* 0x0075 */
  SoundGraphPluginRef MainSendPlugin; /* 0x0078 */
  char pad_007B[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(OutputNodeData) == 128);

}
