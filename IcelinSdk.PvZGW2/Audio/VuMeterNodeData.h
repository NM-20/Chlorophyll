#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>
#include <IcelinSdk.PvZGW2/Audio/VuMeterMode.h>
#include <IcelinSdk.PvZGW2/Audio/SoundGraphPluginRef.h>

namespace fb
{

/* TypeInfo (Array): 00000001428374E0
   RuntimeId:        04C8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1253
   VfTable:          00000001421FA250
   Address (Base):   00000001430FE710
*/
#pragma pack(push, 8)
class VuMeterNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort In; /* 0x0010 */
  AudioGraphNodePort Out; /* 0x0018 */
  AudioGraphNodePort FrontLeft; /* 0x0020 */
  AudioGraphNodePort Center; /* 0x0028 */
  AudioGraphNodePort FrontRight; /* 0x0030 */
  AudioGraphNodePort RearLeft; /* 0x0038 */
  AudioGraphNodePort RearRight; /* 0x0040 */
  AudioGraphNodePort FarRearLeft; /* 0x0048 */
  AudioGraphNodePort FarRearRight; /* 0x0050 */
  AudioGraphNodePort Lfe; /* 0x0058 */
  VuMeterMode Mode; /* 0x0060 */
  FB_INT32 Efficiency; /* 0x0064 */
  SoundGraphPluginRef Plugin; /* 0x0068 */
  char pad_006B[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(VuMeterNodeData) == 112);

}
