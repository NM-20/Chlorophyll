#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZMovementBehavior.h>
#include <IcelinSdk.PvZGW2/PVZServer/MovementBehaviorOrientationType.h>

namespace fb
{

/* TypeInfo (Array): 000000014285F818
   RuntimeId:        1DC5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0855
   VfTable:          000000014231D738
   Address (Base):   00000001430F9BB0
*/
#pragma pack(push, 8)
class MovementBehaviorMoveToBuffTarget : public PVZMovementBehavior
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 StopThreshold; /* 0x0030 */
  FB_FLOAT32 UpdatePeriod; /* 0x0034 */
  MovementBehaviorOrientationType OrientationType; /* 0x0038 */
  FB_FLOAT32 YTolerance; /* 0x003C */
  FB_BOOLEAN StopAtGoal; /* 0x0040 */
  FB_BOOLEAN RequiresLineOfSight; /* 0x0041 */
  char pad_0042[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(MovementBehaviorMoveToBuffTarget) == 72);

}
