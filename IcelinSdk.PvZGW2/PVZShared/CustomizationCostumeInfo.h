#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 00000001428643D8
   RuntimeId:        21D7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          100B
   VfTable:          00000001423527D0
   Address (Base):   00000001430E55C0
*/
#pragma pack(push, 8)
class CustomizationCostumeInfo : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class CustomizationUnlockInfo) UnlockInfo; /* 0x0010 */
  FB_CSTRING CostumeName; /* 0x0018 */
  FB_CSTRING CostumeURL; /* 0x0020 */
  FB_INT32 CostumeId; /* 0x0028 */
  char pad_002C[0x0004];
  FB_CSTRING Description; /* 0x0030 */
  FB_FLOAT32 Health; /* 0x0038 */
  FB_FLOAT32 Damage; /* 0x003C */
  FB_FLOAT32 Speed; /* 0x0040 */
  char pad_0044[0x0004];
  FB_REFARRAY(class CustomizationVisualCategoryInfo) SelectableVisualCategories; /* 0x0048 */
  FB_REFARRAY(class CustomizationVisualCategoryInfo) NonSelectableVisualCategories; /* 0x0050 */
  FB_REFARRAY(class CustomizationAbilityCategoryInfo) AbilityCategories; /* 0x0058 */
  FB_REFARRAY(class CustomizationAbilityCategoryInfo) NonSelectableAbilityCategories; /* 0x0060 */
  FB_REFARRAY(class CustomizationGestureCategoryInfo) GestureCategories; /* 0x0068 */
  FB_REFARRAY(class CustomizationGestureInfo) Gestures; /* 0x0070 */
  FB_REFARRAY(class CustomizationWeaponUpgradeCategoryInfo) WeaponUpgradeCategories; /* 0x0078 */
  FB_REFARRAY(class CustomizationWeaponUpgradeInfo) WeaponUpgrades; /* 0x0080 */
  FB_REFARRAY(class CustomizationWeaponUpgradeInfo) NonSelectableWeaponUpgrades; /* 0x0088 */
  FB_BOOLEAN IsHidden; /* 0x0090 */
  FB_BOOLEAN ContainsNewAbilities; /* 0x0091 */
  FB_BOOLEAN ContainsNewAccessories; /* 0x0092 */
  FB_BOOLEAN ContainsNewGestures; /* 0x0093 */
  FB_BOOLEAN ContainsNewWeaponUpgrades; /* 0x0094 */
  char pad_0095[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0098 */
#pragma pack(pop)

static_assert(sizeof(CustomizationCostumeInfo) == 152);

}
