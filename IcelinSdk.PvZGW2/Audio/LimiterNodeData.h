#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>
#include <IcelinSdk.PvZGW2/Audio/LimiterChannelMode.h>
#include <IcelinSdk.PvZGW2/Audio/SoundGraphPluginRef.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836F60
   RuntimeId:        0470
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1225
   VfTable:          00000001421FA460
   Address (Base):   00000001430FEB30
*/
#pragma pack(push, 8)
class LimiterNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort In; /* 0x0010 */
  AudioGraphNodePort Sidechain; /* 0x0018 */
  AudioGraphNodePort Threshold; /* 0x0020 */
  AudioGraphNodePort ReleaseTime; /* 0x0028 */
  AudioGraphNodePort UseSidechain; /* 0x0030 */
  AudioGraphNodePort Out; /* 0x0038 */
  LimiterChannelMode ChannelMode; /* 0x0040 */
  SoundGraphPluginRef Plugin; /* 0x0044 */
  char pad_0047[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(LimiterNodeData) == 72);

}
