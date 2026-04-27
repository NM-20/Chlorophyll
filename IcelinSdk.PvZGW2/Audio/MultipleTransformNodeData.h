#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835DC8
   RuntimeId:        035B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1249
   VfTable:          00000001421F1680
   Address (Base):   0000000143100270
*/
#pragma pack(push, 8)
class MultipleTransformNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort X; /* 0x0010 */
  FB_REFARRAY(class MultipleTransformEntry) Transforms; /* 0x0018 */
  AudioGraphNodePort Result; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(MultipleTransformNodeData) == 40);

}
