#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 00000001428644D8
   RuntimeId:        21E7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FD5
   VfTable:          0000000142352800
   Address (Base):   00000001430E52C0
*/
#pragma pack(push, 8)
class CustomizationWeaponUpgradeInfo : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class CustomizationUnlockInfo) UnlockInfo; /* 0x0010 */
  FB_CSTRING WeaponUpgradeName; /* 0x0018 */
  FB_UINT32 WeaponUpgradeId; /* 0x0020 */
  FB_INT32 SelectedByCategoryIndex; /* 0x0024 */
  FB_CSTRING WeaponUpgradeDescription; /* 0x0028 */
  FB_CSTRING ImageUrl; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(CustomizationWeaponUpgradeInfo) == 56);

}
