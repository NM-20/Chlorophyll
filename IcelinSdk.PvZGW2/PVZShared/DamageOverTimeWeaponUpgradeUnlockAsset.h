#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/WeaponUpgradeUnlockAsset.h>

namespace fb
{

/* TypeInfo (Array): 00000001428692A8
   RuntimeId:        2477
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0732
   VfTable:          0000000142355EB8
   Address (Base):   00000001430F7E70
*/
#pragma pack(push, 8)
class DamageOverTimeWeaponUpgradeUnlockAsset : public WeaponUpgradeUnlockAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Value; /* 0x0050 */
  char pad_0054[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(DamageOverTimeWeaponUpgradeUnlockAsset) == 88);

}
