#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/PVZShared/UIStickerBookWeapon.h>

namespace fb
{

/* TypeInfo (Array): 00000001428711D0
   RuntimeId:        2A33
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1188
   VfTable:          000000014236CC18
   Address (Base):   00000001430E2620
*/
#pragma pack(push, 8)
class UIStickerBookCostume : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Label; /* 0x0010 */
  FB_CSTRING Desc; /* 0x0018 */
  FB_CSTRING TextureID; /* 0x0020 */
  FB_INT32 Rarity; /* 0x0028 */
  char pad_002C[0x0004];
  FB_STDARRAY(struct UIStickerBookStat) Stats; /* 0x0030 */
  FB_STDARRAY(struct UIStickerBookUnlock) ProgressParts; /* 0x0038 */
  UIStickerBookWeapon Weapon; /* 0x0040 */
  FB_STDARRAY(struct UIStickerBookUnlock) WeaponUpgrades; /* 0x0098 */
  FB_STDARRAY(struct UIStickerBookUnlock) WeaponSkins; /* 0x00A0 */
  FB_INT32 CostumeProgressCount; /* 0x00A8 */
  char pad_00AC[0x0004];
  FB_CSTRING CostumeBlueprintPath; /* 0x00B0 */
  FB_INT32 Level; /* 0x00B8 */
  FB_INT32 UpgradesUnlocked; /* 0x00BC */
  FB_INT32 PrestigeIndex; /* 0x00C0 */
  FB_BOOLEAN IsBaseCostume; /* 0x00C4 */
  FB_BOOLEAN IsLocked; /* 0x00C5 */
  FB_BOOLEAN IsAtMaxLevel; /* 0x00C6 */
  char pad_00C7[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00C8 */
#pragma pack(pop)

static_assert(sizeof(UIStickerBookCostume) == 200);

}
