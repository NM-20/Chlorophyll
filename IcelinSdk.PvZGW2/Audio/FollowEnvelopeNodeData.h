#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835958
   RuntimeId:        0315
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1264
   VfTable:          00000001421F1838
   Address (Base):   0000000143100810
*/
#pragma pack(push, 8)
class FollowEnvelopeNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort X; /* 0x0010 */
  AudioGraphNodePort Y; /* 0x0018 */
  FB_FLOAT32 Base; /* 0x0020 */
  FB_FLOAT32 Scale; /* 0x0024 */
  FB_FLOAT32 Pivot; /* 0x0028 */
  char pad_002C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(FollowEnvelopeNodeData) == 48);

}
