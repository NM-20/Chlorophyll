#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZMovementBehavior.h>
#include <IcelinSdk.PvZGW2/PVZServer/MovementBehaviorOrientationType.h>

namespace fb
{

/* TypeInfo (Array): 000000014285F998
   RuntimeId:        1DDD
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          085C
   VfTable:          000000014231D698
   Address (Base):   00000001430F9730
*/
#pragma pack(push, 8)
class MovementBehaviorInterestFlankPosition : public PVZMovementBehavior
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 Interest; /* 0x0030 */
  FB_FLOAT32 UpdatePeriod; /* 0x0034 */
  MovementBehaviorOrientationType OrientationType; /* 0x0038 */
  FB_FLOAT32 StopThreshold; /* 0x003C */
  FB_FLOAT32 AdditionalRadius; /* 0x0040 */
  FB_INT32 FlankInterest; /* 0x0044 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(MovementBehaviorInterestFlankPosition) == 72);

}
