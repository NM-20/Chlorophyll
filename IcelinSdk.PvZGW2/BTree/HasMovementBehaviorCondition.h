#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/BTree/AIBehaviorTreeBoolProvider.h>

namespace fb
{

/* TypeInfo (Array): 0000000142833F98
   RuntimeId:        0181
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1076
   VfTable:          00000001421EA9F8
   Address (Base):   000000014311C410
*/
#pragma pack(push, 8)
class HasMovementBehaviorCondition : public AIBehaviorTreeBoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(HasMovementBehaviorCondition) == 16);

}
