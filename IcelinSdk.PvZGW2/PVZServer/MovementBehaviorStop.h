#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZMovementBehavior.h>

namespace fb
{

/* TypeInfo (Array): 000000014285F798
   RuntimeId:        1DBD
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0868
   VfTable:          000000014231D868
   Address (Base):   00000001430F9D30
*/
#pragma pack(push, 8)
class MovementBehaviorStop : public PVZMovementBehavior
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN StopFiring; /* 0x0030 */
  FB_BOOLEAN ForceWeaponAiming; /* 0x0031 */
  char pad_0032[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(MovementBehaviorStop) == 56);

}
