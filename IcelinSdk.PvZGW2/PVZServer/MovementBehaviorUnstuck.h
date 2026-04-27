#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZMovementBehavior.h>

namespace fb
{

/* TypeInfo (Array): 000000014285FA18
   RuntimeId:        1DE5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          085E
   VfTable:          000000014231D6E8
   Address (Base):   00000001430F95B0
*/
#pragma pack(push, 8)
class MovementBehaviorUnstuck : public PVZMovementBehavior
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(MovementBehaviorUnstuck) == 48);

}
