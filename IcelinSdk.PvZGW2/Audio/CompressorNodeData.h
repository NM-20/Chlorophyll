#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>
#include <IcelinSdk.PvZGW2/Audio/CompressorChannelMode.h>
#include <IcelinSdk.PvZGW2/Audio/SoundGraphPluginRef.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836CA0
   RuntimeId:        0444
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          124B
   VfTable:          00000001421FA588
   Address (Base):   0000000143118390
*/
#pragma pack(push, 8)
class CompressorNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort In; /* 0x0010 */
  AudioGraphNodePort Sidechain; /* 0x0018 */
  AudioGraphNodePort Threshold; /* 0x0020 */
  AudioGraphNodePort Ratio; /* 0x0028 */
  AudioGraphNodePort AttackTime; /* 0x0030 */
  AudioGraphNodePort ReleaseTime; /* 0x0038 */
  AudioGraphNodePort UseSidechain; /* 0x0040 */
  AudioGraphNodePort Out; /* 0x0048 */
  CompressorChannelMode ChannelMode; /* 0x0050 */
  SoundGraphPluginRef Plugin; /* 0x0054 */
  char pad_0057[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(CompressorNodeData) == 88);

}
