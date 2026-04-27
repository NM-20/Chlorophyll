#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZMovementBehavior.h>
#include <IcelinSdk.PvZGW2/PVZServer/StayAtType.h>
#include <IcelinSdk.PvZGW2/PVZServer/MovementBehaviorOrientationType.h>

namespace fb
{

/* TypeInfo (Array): 000000014285F898
   RuntimeId:        1DCD
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0864
   VfTable:          000000014231D6F8
   Address (Base):   00000001430F9A30
*/
#pragma pack(push, 8)
class MovementBehaviorStayAtRangeWithLoS : public PVZMovementBehavior
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class BTOverrideField_Float) Range; /* 0x0030 */
  FB_FLOAT32 RangeModifier; /* 0x0038 */
  FB_FLOAT32 UpdatePeriod; /* 0x003C */
  StayAtType StayAt; /* 0x0040 */
  MovementBehaviorOrientationType OrientationType; /* 0x0044 */
  FB_INT32 MaximumLookupAngle; /* 0x0048 */
  FB_INT32 SubdivisionsOfLookupAngle; /* 0x004C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(MovementBehaviorStayAtRangeWithLoS) == 80);

}
