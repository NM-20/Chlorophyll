#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZMovementBehavior.h>
#include <IcelinSdk.PvZGW2/PVZServer/MovementBehaviorOrientationType.h>

namespace fb
{

/* TypeInfo (Array): 000000014285F938
   RuntimeId:        1DD7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0866
   VfTable:          000000014231D748
   Address (Base):   00000001430F9850
*/
#pragma pack(push, 8)
class MovementBehaviorEscapeThreat : public PVZMovementBehavior
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 UpdatePeriod; /* 0x0030 */
  FB_FLOAT32 StopDistance; /* 0x0034 */
  FB_FLOAT32 ContinueThreat; /* 0x0038 */
  MovementBehaviorOrientationType OrientationType; /* 0x003C */
  FB_BOOLEAN StopAtGoal; /* 0x0040 */
  char pad_0041[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(MovementBehaviorEscapeThreat) == 72);

}
