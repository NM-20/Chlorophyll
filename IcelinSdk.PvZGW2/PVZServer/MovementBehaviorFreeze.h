#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZMovementBehavior.h>

namespace fb
{

/* TypeInfo (Array): 000000014285F9F8
   RuntimeId:        1DE3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0858
   VfTable:          000000014231D668
   Address (Base):   00000001430F9610
*/
#pragma pack(push, 8)
class MovementBehaviorFreeze : public PVZMovementBehavior
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN AllowRotation; /* 0x0030 */
  char pad_0031[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(MovementBehaviorFreeze) == 56);

}
