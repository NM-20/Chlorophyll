#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>
#include <IcelinSdk.PvZGW2/Audio/ExpanderChannelMode.h>
#include <IcelinSdk.PvZGW2/Audio/SoundGraphPluginRef.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836D80
   RuntimeId:        0452
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1274
   VfTable:          00000001421FA528
   Address (Base):   00000001430FED10
*/
#pragma pack(push, 8)
class ExpanderNodeData : public AudioGraphNodeData
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
  ExpanderChannelMode ChannelMode; /* 0x0050 */
  SoundGraphPluginRef Plugin; /* 0x0054 */
  char pad_0057[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(ExpanderNodeData) == 88);

}
