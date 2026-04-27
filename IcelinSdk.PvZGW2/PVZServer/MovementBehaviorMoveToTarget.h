#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZMovementBehavior.h>
#include <IcelinSdk.PvZGW2/PVZServer/MovementBehaviorOrientationType.h>
#include <IcelinSdk.PvZGW2/PVZShared/AITypeFilterWrapper.h>

namespace fb
{

/* TypeInfo (Array): 000000014285F7B8
   RuntimeId:        1DBF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0863
   VfTable:          000000014231D858
   Address (Base):   00000001430F9CD0
*/
#pragma pack(push, 8)
class MovementBehaviorMoveToTarget : public PVZMovementBehavior
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 StopThreshold; /* 0x0030 */
  FB_FLOAT32 UpdatePeriod; /* 0x0034 */
  MovementBehaviorOrientationType OrientationType; /* 0x0038 */
  FB_FLOAT32 UpdateTime; /* 0x003C */
  FB_FLOAT32 UpdateDistance; /* 0x0040 */
  char pad_0044[0x0004];
  FB_HANDLE(class MoverTuneOverride) AdditionalMoverTune; /* 0x0048 */
  AITypeFilterWrapper PositionBehindTargetFilter; /* 0x0050 */
  FB_BOOLEAN StopAtGoal; /* 0x0054 */
  FB_BOOLEAN RequiresLineOfSight; /* 0x0055 */
  FB_BOOLEAN StopFiring; /* 0x0056 */
  FB_BOOLEAN UpdateTargetPosition; /* 0x0057 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(MovementBehaviorMoveToTarget) == 88);

}
