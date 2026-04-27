#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZMovementBehavior.h>
#include <IcelinSdk.PvZGW2/PVZServer/MovementBehaviorOrientationType.h>

namespace fb
{

/* TypeInfo (Array): 000000014285F8B8
   RuntimeId:        1DCF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          085B
   VfTable:          000000014231D788
   Address (Base):   00000001430F99D0
*/
#pragma pack(push, 8)
class MovementBehaviorRandom : public PVZMovementBehavior
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Range; /* 0x0030 */
  FB_FLOAT32 UpdatePeriod; /* 0x0034 */
  MovementBehaviorOrientationType OrientationType; /* 0x0038 */
  FB_FLOAT32 StopThreshold; /* 0x003C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(MovementBehaviorRandom) == 64);

}
