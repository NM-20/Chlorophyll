#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZMovementBehavior.h>
#include <IcelinSdk.PvZGW2/PVZServer/StayAtType.h>
#include <IcelinSdk.PvZGW2/PVZServer/MovementBehaviorOrientationType.h>

namespace fb
{

/* TypeInfo (Array): 000000014285F878
   RuntimeId:        1DCB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0860
   VfTable:          000000014231D708
   Address (Base):   00000001430F9A90
*/
#pragma pack(push, 8)
class MovementBehaviorStayAtRange : public PVZMovementBehavior
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class BTOverrideField_Float) Range; /* 0x0030 */
  FB_FLOAT32 RangeModifier; /* 0x0038 */
  FB_FLOAT32 UpdatePeriod; /* 0x003C */
  StayAtType StayAt; /* 0x0040 */
  MovementBehaviorOrientationType OrientationType; /* 0x0044 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(MovementBehaviorStayAtRange) == 72);

}
