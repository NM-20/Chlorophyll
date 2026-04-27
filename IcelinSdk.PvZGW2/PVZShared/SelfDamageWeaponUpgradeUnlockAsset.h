#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/WeaponUpgradeUnlockAsset.h>

namespace fb
{

/* TypeInfo (Array): 00000001428693C8
   RuntimeId:        2489
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0733
   VfTable:          0000000142355DF8
   Address (Base):   00000001430D9F50
*/
#pragma pack(push, 8)
class SelfDamageWeaponUpgradeUnlockAsset : public WeaponUpgradeUnlockAsset
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

static_assert(sizeof(SelfDamageWeaponUpgradeUnlockAsset) == 88);

}
