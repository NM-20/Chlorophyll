#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836308
   RuntimeId:        03AF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1223
   VfTable:          00000001421F4CB8
   Address (Base):   00000001430FFCD0
*/
#pragma pack(push, 8)
class MixerValueNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort Out; /* 0x0010 */
  FB_FLOAT32 DefaultValue; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(MixerValueNodeData) == 32);

}
