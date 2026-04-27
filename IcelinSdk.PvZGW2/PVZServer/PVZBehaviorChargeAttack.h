#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZBehavior.h>

namespace fb
{

/* TypeInfo (Array): 000000014285FB48
   RuntimeId:        1DF7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10F6
   VfTable:          000000014231D658
   Address (Base):   00000001430F92B0
*/
#pragma pack(push, 8)
class PVZBehaviorChargeAttack : public PVZBehavior
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class BuffData) ChargeBuff; /* 0x0030 */
  FB_FLOAT32 TauntTime; /* 0x0038 */
  FB_FLOAT32 MaxChargeTime; /* 0x003C */
  FB_INT32 WeaponSlot; /* 0x0040 */
  FB_FLOAT32 ForceAttackDist; /* 0x0044 */
  FB_FLOAT32 PostAttackTime; /* 0x0048 */
  char pad_004C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(PVZBehaviorChargeAttack) == 80);

}
