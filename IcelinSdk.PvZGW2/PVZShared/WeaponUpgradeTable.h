#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869128
   RuntimeId:        245F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          086A
   VfTable:          0000000142355F78
   Address (Base):   00000001431078F0
*/
#pragma pack(push, 8)
class WeaponUpgradeTable : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class WeaponUpgradeUnlockAsset) SelectableUpgrades; /* 0x0010 */
  FB_REFARRAY(class WeaponUpgradeUnlockAsset) NonSelectableUpgrades; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(WeaponUpgradeTable) == 32);

}
