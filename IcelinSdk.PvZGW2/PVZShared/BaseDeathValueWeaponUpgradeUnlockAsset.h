#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/WeaponUpgradeUnlockAsset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869308
   RuntimeId:        247D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          073F
   VfTable:          0000000142355F68
   Address (Base):   00000001430F7D50
*/
#pragma pack(push, 8)
class BaseDeathValueWeaponUpgradeUnlockAsset : public WeaponUpgradeUnlockAsset
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

static_assert(sizeof(BaseDeathValueWeaponUpgradeUnlockAsset) == 88);

}
