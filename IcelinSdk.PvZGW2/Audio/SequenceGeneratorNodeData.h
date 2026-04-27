#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835D28
   RuntimeId:        0351
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          124D
   VfTable:          00000001421F16B0
   Address (Base):   0000000143100330
*/
#pragma pack(push, 8)
class SequenceGeneratorNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort Trigger; /* 0x0010 */
  AudioGraphNodePort Reset; /* 0x0018 */
  AudioGraphNodePort Min; /* 0x0020 */
  AudioGraphNodePort Max; /* 0x0028 */
  AudioGraphNodePort Step; /* 0x0030 */
  AudioGraphNodePort Value; /* 0x0038 */
  FB_BOOLEAN UpdateValueOnEvents; /* 0x0040 */
  char pad_0041[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(SequenceGeneratorNodeData) == 72);

}
