#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837460
   RuntimeId:        04C0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1252
   VfTable:          00000001421FA280
   Address (Base):   00000001430FE770
*/
#pragma pack(push, 8)
class WaveSwitcherNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort Index; /* 0x0010 */
  AudioGraphNodePort Advance; /* 0x0018 */
  AudioGraphNodePort Wave; /* 0x0020 */
  AudioGraphNodePort IndexChanged; /* 0x0028 */
  FB_REFARRAY(class SoundWaveAsset) Waves; /* 0x0030 */
  FB_FLOAT32 DefaultIndex; /* 0x0038 */
  FB_BOOLEAN IsRandom; /* 0x003C */
  FB_BOOLEAN RandomStartIndex; /* 0x003D */
  char pad_003E[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(WaveSwitcherNodeData) == 64);

}
