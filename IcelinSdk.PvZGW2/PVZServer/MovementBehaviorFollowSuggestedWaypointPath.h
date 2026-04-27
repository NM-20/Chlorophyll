#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZMovementBehavior.h>

namespace fb
{

/* TypeInfo (Array): 000000014285F9D8
   RuntimeId:        1DE1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          085D
   VfTable:          000000014231D678
   Address (Base):   00000001430F9670
*/
#pragma pack(push, 8)
class MovementBehaviorFollowSuggestedWaypointPath : public PVZMovementBehavior
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(MovementBehaviorFollowSuggestedWaypointPath) == 48);

}
