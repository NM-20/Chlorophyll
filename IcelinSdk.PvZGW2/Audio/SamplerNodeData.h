#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>
#include <IcelinSdk.PvZGW2/Audio/SamplerNodeVersion.h>

namespace fb
{

/* TypeInfo (Array): 00000001428373A0
   RuntimeId:        04B4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          122A
   VfTable:          00000001421FA2C0
   Address (Base):   00000001430FE830
*/
#pragma pack(push, 8)
class SamplerNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort ExternalWave; /* 0x0010 */
  AudioGraphNodePort Variation; /* 0x0018 */
  AudioGraphNodePort Offset; /* 0x0020 */
  AudioGraphNodePort Delay; /* 0x0028 */
  AudioGraphNodePort Pitch; /* 0x0030 */
  AudioGraphNodePort Amplitude; /* 0x0038 */
  AudioGraphNodePort EnableStep; /* 0x0040 */
  AudioGraphNodePort ShuffleSegments; /* 0x0048 */
  AudioGraphNodePort Buffer; /* 0x0050 */
  AudioGraphNodePort Trigger; /* 0x0058 */
  AudioGraphNodePort Release; /* 0x0060 */
  AudioGraphNodePort Step; /* 0x0068 */
  AudioGraphNodePort Output; /* 0x0070 */
  AudioGraphNodePort Finished; /* 0x0078 */
  AudioGraphNodePort Buffered; /* 0x0080 */
  AudioGraphNodePort Position; /* 0x0088 */
  AudioGraphNodePort Length; /* 0x0090 */
  FB_HANDLE(class SoundWaveAsset) Wave; /* 0x0098 */
  FB_STDARRAY(struct SamplerPlugins) Plugins; /* 0x00A0 */
  FB_HANDLE(class OutputNodeData) PitchSource; /* 0x00A8 */
  SamplerNodeVersion Version; /* 0x00B0 */
  FB_BOOLEAN Looping; /* 0x00B4 */
  FB_BOOLEAN InstantRelease; /* 0x00B5 */
  FB_UINT8 LeadOut; /* 0x00B6 */
  char pad_00B7[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B8 */
#pragma pack(pop)

static_assert(sizeof(SamplerNodeData) == 184);

}
