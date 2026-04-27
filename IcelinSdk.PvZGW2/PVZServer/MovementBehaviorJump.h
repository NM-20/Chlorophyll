#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZMovementBehavior.h>
#include <IcelinSdk.PvZGW2/PVZServer/MovementBehaviorOrientationType.h>

namespace fb
{

/* TypeInfo (Array): 000000014285F7F8
   RuntimeId:        1DC3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0867
   VfTable:          000000014231D838
   Address (Base):   00000001430F9C10
*/
#pragma pack(push, 8)
class MovementBehaviorJump : public PVZMovementBehavior
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  MovementBehaviorOrientationType OrientationType; /* 0x0030 */
  FB_FLOAT32 JumpHeight; /* 0x0034 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(MovementBehaviorJump) == 56);

}
