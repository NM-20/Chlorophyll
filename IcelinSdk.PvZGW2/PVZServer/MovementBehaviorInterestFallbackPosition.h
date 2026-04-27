#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZMovementBehavior.h>
#include <IcelinSdk.PvZGW2/PVZServer/MovementBehaviorOrientationType.h>

namespace fb
{

/* TypeInfo (Array): 000000014285F9B8
   RuntimeId:        1DDF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          085A
   VfTable:          000000014231D688
   Address (Base):   00000001430F96D0
*/
#pragma pack(push, 8)
class MovementBehaviorInterestFallbackPosition : public PVZMovementBehavior
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 Interest; /* 0x0030 */
  FB_FLOAT32 UpdatePeriod; /* 0x0034 */
  MovementBehaviorOrientationType OrientationType; /* 0x0038 */
  FB_FLOAT32 StopThreshold; /* 0x003C */
  FB_FLOAT32 DelayBetweenMovement; /* 0x0040 */
  char pad_0044[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(MovementBehaviorInterestFallbackPosition) == 72);

}
