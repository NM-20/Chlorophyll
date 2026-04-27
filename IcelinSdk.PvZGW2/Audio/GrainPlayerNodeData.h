#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837520
   RuntimeId:        04CC
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1222
   VfTable:          00000001421FA228
   Address (Base):   00000001430FE6B0
*/
#pragma pack(push, 8)
class GrainPlayerNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort Start; /* 0x0010 */
  AudioGraphNodePort Stop; /* 0x0018 */
  AudioGraphNodePort Amplitude; /* 0x0020 */
  AudioGraphNodePort Pitch; /* 0x0028 */
  AudioGraphNodePort GrainSize; /* 0x0030 */
  AudioGraphNodePort WindowSize; /* 0x0038 */
  AudioGraphNodePort Position; /* 0x0040 */
  AudioGraphNodePort CrossFadeLength; /* 0x0048 */
  AudioGraphNodePort Output; /* 0x0050 */
  FB_HANDLE(class SoundWaveAsset) Wave; /* 0x0058 */
  AudioGraphNodePort ExternalWave; /* 0x0060 */
  FB_HANDLE(class OutputNodeData) PitchSource; /* 0x0068 */
  FB_STDARRAY(struct GrainPlayerPlugins) Plugins; /* 0x0070 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0078 */
#pragma pack(pop)

static_assert(sizeof(GrainPlayerNodeData) == 120);

}
