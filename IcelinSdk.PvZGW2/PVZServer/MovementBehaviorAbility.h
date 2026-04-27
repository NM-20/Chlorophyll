#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZMovementBehavior.h>

namespace fb
{

/* TypeInfo (Array): 000000014285F918
   RuntimeId:        1DD5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0862
   VfTable:          000000014231D758
   Address (Base):   00000001430F98B0
*/
#pragma pack(push, 8)
class MovementBehaviorAbility : public PVZMovementBehavior
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN StopAtGoal; /* 0x0030 */
  char pad_0031[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(MovementBehaviorAbility) == 56);

}
