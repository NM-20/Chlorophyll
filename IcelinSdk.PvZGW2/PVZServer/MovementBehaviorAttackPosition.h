#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZMovementBehavior.h>
#include <IcelinSdk.PvZGW2/PVZServer/MovementBehaviorOrientationType.h>

namespace fb
{

/* TypeInfo (Array): 000000014285F8D8
   RuntimeId:        1DD1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0856
   VfTable:          000000014231D778
   Address (Base):   00000001430F9970
*/
#pragma pack(push, 8)
class MovementBehaviorAttackPosition : public PVZMovementBehavior
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class BTOverrideField_Float) Range; /* 0x0030 */
  FB_FLOAT32 UpdatePeriod; /* 0x0038 */
  FB_FLOAT32 UpdateDistance; /* 0x003C */
  MovementBehaviorOrientationType OrientationType; /* 0x0040 */
  FB_FLOAT32 StopThreshold; /* 0x0044 */
  FB_INT32 HighAttackInterest; /* 0x0048 */
  char pad_004C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(MovementBehaviorAttackPosition) == 80);

}
