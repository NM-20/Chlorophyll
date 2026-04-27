#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/WeaponUpgradeUnlockAsset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869368
   RuntimeId:        2483
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          073B
   VfTable:          0000000142355F38
   Address (Base):   00000001430DA070
*/
#pragma pack(push, 8)
class LockOnTargetWeaponUpgradeUnlockAsset : public WeaponUpgradeUnlockAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 MaxDistanceMultiplier; /* 0x0050 */
  FB_FLOAT32 AngleMultiplier; /* 0x0054 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(LockOnTargetWeaponUpgradeUnlockAsset) == 88);

}
