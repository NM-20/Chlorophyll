#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835818
   RuntimeId:        0301
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1248
   VfTable:          00000001421F18D8
   Address (Base):   0000000143100A50
*/
#pragma pack(push, 8)
class ValueDebugNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class DebugValueInput) Values; /* 0x0010 */
  FB_BOOLEAN Enabled; /* 0x0018 */
  char pad_0019[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(ValueDebugNodeData) == 32);

}
