#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836DC0
   RuntimeId:        0456
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1233
   VfTable:          00000001421FA500
   Address (Base):   00000001430FECB0
*/
#pragma pack(push, 8)
class DivisibleLoopPlayerNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort Start; /* 0x0010 */
  AudioGraphNodePort Stop; /* 0x0018 */
  AudioGraphNodePort Amplitude; /* 0x0020 */
  AudioGraphNodePort FreezeSegment; /* 0x0028 */
  AudioGraphNodePort Output; /* 0x0030 */
  FB_HANDLE(class SoundWaveAsset) Wave; /* 0x0038 */
  AudioGraphNodePort ExternalWave; /* 0x0040 */
  FB_STDARRAY(struct DivisibleLoopPlayerPlugins) Plugins; /* 0x0048 */
  FB_FLOAT32 CrossFadeLength; /* 0x0050 */
  FB_BOOLEAN StartAtRandomPosition; /* 0x0054 */
  char pad_0055[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(DivisibleLoopPlayerNodeData) == 88);

}
