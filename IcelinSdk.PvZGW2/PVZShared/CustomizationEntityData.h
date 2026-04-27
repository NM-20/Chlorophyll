#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/GameShared/TeamId.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864D98
   RuntimeId:        2256
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C18
   VfTable:          0000000142351F60
   Address (Base):   00000001430E60A0
*/
#pragma pack(push, 8)
class CustomizationEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 SelectedClassIndex; /* 0x0018 */
  FB_INT32 SelectedCostumeId; /* 0x001C */
  FB_INT32 SelectedCostumeIndex; /* 0x0020 */
  FB_UINT32 HighlightedCategoryId; /* 0x0024 */
  FB_UINT32 HighlightedAccessoryId; /* 0x0028 */
  FB_UINT32 HighlightedAbilityCategoryId; /* 0x002C */
  FB_UINT32 HighlightedAbilityId; /* 0x0030 */
  FB_UINT32 HighlightedGestureCategoryId; /* 0x0034 */
  FB_UINT32 HighlightedGestureId; /* 0x0038 */
  FB_UINT32 HighlightedWeaponUpgradeCategoryId; /* 0x003C */
  FB_UINT32 HighlightedWeaponUpgradeId; /* 0x0040 */
  TeamId TeamToSelect; /* 0x0044 */
  FB_BOOLEAN SpawnWithUniqueCostume; /* 0x0048 */
  FB_BOOLEAN IsAccessoryPreviewActive; /* 0x0049 */
  FB_BOOLEAN IsGesturePreviewActive; /* 0x004A */
  FB_BOOLEAN SetSelectionsOnPropertyChanged; /* 0x004B */
  FB_BOOLEAN SetSelectionsOnSpawnSoldier; /* 0x004C */
  FB_BOOLEAN UsePlayerEvents; /* 0x004D */
  FB_BOOLEAN AllowTeamSwitchWhileSpawned; /* 0x004E */
  char pad_004F[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(CustomizationEntityData) == 80);

}
