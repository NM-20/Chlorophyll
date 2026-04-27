#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/WeaponUpgradeUnlockAsset.h>

namespace fb
{

/* TypeInfo (Array): 00000001428691E8
   RuntimeId:        246B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          073D
   VfTable:          0000000142355FF0
   Address (Base):   00000001430DA1F0
*/
#pragma pack(push, 8)
class RateOfFireWeaponUpgradeUnlockAsset : public WeaponUpgradeUnlockAsset
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

static_assert(sizeof(RateOfFireWeaponUpgradeUnlockAsset) == 88);

}
