#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834038
   RuntimeId:        018B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D5C
   VfTable:          00000001421EA950
   Address (Base):   00000001430DCEF0
*/
#pragma pack(push, 16)
class BaseAIComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class BehaviorTreeData) BehaviorTree; /* 0x0070 */
  char pad_0078[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(BaseAIComponentData) == 128);

}
