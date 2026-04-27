#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZMovementBehavior.h>
#include <IcelinSdk.PvZGW2/PVZServer/MovementBehaviorOrientationType.h>
#include <IcelinSdk.PvZGW2/PVZShared/AITypeFilterWrapper.h>

namespace fb
{

/* TypeInfo (Array): 000000014285F8F8
   RuntimeId:        1DD3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0859
   VfTable:          000000014231D768
   Address (Base):   00000001430F9910
*/
#pragma pack(push, 8)
class MovementBehaviorFallback : public PVZMovementBehavior
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 UpdatePeriod; /* 0x0030 */
  MovementBehaviorOrientationType OrientationType; /* 0x0034 */
  AITypeFilterWrapper AvoidThreatFilter; /* 0x0038 */
  FB_FLOAT32 StopThreshold; /* 0x003C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(MovementBehaviorFallback) == 64);

}
