#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZMovementBehavior.h>
#include <IcelinSdk.PvZGW2/PVZServer/MovementBehaviorOrientationType.h>

namespace fb
{

/* TypeInfo (Array): 000000014285F858
   RuntimeId:        1DC9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0854
   VfTable:          000000014231D718
   Address (Base):   00000001430F9AF0
*/
#pragma pack(push, 8)
class MovementBehaviorMoveToInterest : public PVZMovementBehavior
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 Interest; /* 0x0030 */
  FB_INT32 CaptureInterest; /* 0x0034 */
  FB_FLOAT32 UpdatePeriod; /* 0x0038 */
  MovementBehaviorOrientationType OrientationType; /* 0x003C */
  FB_FLOAT32 StopThreshold; /* 0x0040 */
  FB_BOOLEAN AnyPositionInRadius; /* 0x0044 */
  char pad_0045[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(MovementBehaviorMoveToInterest) == 72);

}
