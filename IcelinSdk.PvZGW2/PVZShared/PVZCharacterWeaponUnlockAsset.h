#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/WeaponUnlockAsset.h>
#include <IcelinSdk.PvZGW2/GameShared/BlueprintBundleReference.h>
#include <IcelinSdk.PvZGW2/PVZShared/StoredWeaponData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428690E8
   RuntimeId:        245B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0724
   VfTable:          0000000142355F88
   Address (Base):   00000001430B57D0
*/
#pragma pack(push, 8)
class PVZCharacterWeaponUnlockAsset : public WeaponUnlockAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  BlueprintBundleReference WeaponBlueprintBundleReference; /* 0x0048 */
  BlueprintBundleReference Weapon1pBlueprintBundleReference; /* 0x0080 */
  FB_HANDLE(class Blueprint) NonStreamedBlueprint; /* 0x00B8 */
  FB_HANDLE(class UnlockAssetBase) Extra; /* 0x00C0 */
  FB_UINT32 WeaponIdentifier; /* 0x00C8 */
  FB_UINT32 Category; /* 0x00CC */
  StoredWeaponData WeaponData; /* 0x00D0 */
  FB_STDARRAY(struct UnlockToBlueprintBundle) UnlockToBlueprintBundle; /* 0x00E0 */
  FB_HANDLE(class WeaponUpgradeTable) WeaponUpgrades; /* 0x00E8 */
  FB_HANDLE(class VoiceOverLabel) VoiceOverLabel; /* 0x00F0 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00F8 */
#pragma pack(pop)

static_assert(sizeof(PVZCharacterWeaponUnlockAsset) == 248);

}
