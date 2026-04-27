#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142873A78
   RuntimeId:        2C12
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0998
   VfTable:          0000000142378E70
   Address (Base):   00000001430E1780
*/
#pragma pack(push, 8)
class AISetBehaviorEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class BehaviorTreeData) Behavior; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(AISetBehaviorEntityData) == 32);

}
