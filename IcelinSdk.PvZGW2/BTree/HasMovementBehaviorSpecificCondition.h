#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/BTree/AIBehaviorTreeBoolProvider.h>

namespace fb
{

/* TypeInfo (Array): 0000000142833FB8
   RuntimeId:        0183
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1075
   VfTable:          00000001421EA9D8
   Address (Base):   000000014311C3B0
*/
#pragma pack(push, 8)
class HasMovementBehaviorSpecificCondition : public AIBehaviorTreeBoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class MovementBehavior) MovementBehavior; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(HasMovementBehaviorSpecificCondition) == 24);

}
