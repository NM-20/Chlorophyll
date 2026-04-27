#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835798
   RuntimeId:        02F9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          122C
   VfTable:          00000001421F1908
   Address (Base):   0000000143100B10
*/
#pragma pack(push, 8)
class ConditionNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class ConditionGroup) Conditions; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(ConditionNodeData) == 24);

}
