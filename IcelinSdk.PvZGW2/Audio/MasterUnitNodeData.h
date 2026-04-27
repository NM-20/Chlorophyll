#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837000
   RuntimeId:        047A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1263
   VfTable:          00000001421FA410
   Address (Base):   00000001430FEAD0
*/
#pragma pack(push, 8)
class MasterUnitNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort SettingsIndex; /* 0x0010 */
  AudioGraphNodePort Amplitude; /* 0x0018 */
  AudioGraphNodePort MasterGain; /* 0x0020 */
  AudioGraphNodePort MasterLfeGain; /* 0x0028 */
  AudioGraphNodePort MasterDialogGain; /* 0x0030 */
  AudioGraphNodePort MainMixGain; /* 0x0038 */
  AudioGraphNodePort PostEffectsGain; /* 0x0040 */
  AudioGraphNodePort ReverbGain; /* 0x0048 */
  AudioGraphNodePort FadeTime; /* 0x0050 */
  AudioGraphNodePort HighPassFreq; /* 0x0058 */
  AudioGraphNodePort LowShelfFreq; /* 0x0060 */
  AudioGraphNodePort LowShelfGain; /* 0x0068 */
  AudioGraphNodePort HighShelfFreq; /* 0x0070 */
  AudioGraphNodePort HighShelfGain; /* 0x0078 */
  AudioGraphNodePort CompThreshold; /* 0x0080 */
  AudioGraphNodePort CompRatio; /* 0x0088 */
  AudioGraphNodePort CompAttack; /* 0x0090 */
  AudioGraphNodePort CompRelease; /* 0x0098 */
  AudioGraphNodePort DistClipLevel; /* 0x00A0 */
  AudioGraphNodePort ParallelDistortionGain; /* 0x00A8 */
  FB_REFARRAY(class MasterUnitSettings) Settings; /* 0x00B0 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B8 */
#pragma pack(pop)

static_assert(sizeof(MasterUnitNodeData) == 184);

}
