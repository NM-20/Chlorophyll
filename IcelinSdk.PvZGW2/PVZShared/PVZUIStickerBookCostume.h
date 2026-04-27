#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZUIStickerBookWeapon.h>

namespace fb
{

/* TypeInfo (Array): 00000001428702B0
   RuntimeId:        2977
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C1A28
   Default Value:    00000001428702E0
*/
#pragma pack(push, 8)
struct PVZUIStickerBookCostume
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING Label; /* 0x0000 */
  FB_CSTRING Description; /* 0x0008 */
  FB_STDARRAY(struct PVZUIStickerBookUnlockGroup) ProgressParts; /* 0x0010 */
  PVZUIStickerBookWeapon Weapon; /* 0x0018 */
  FB_STDARRAY(struct PVZUIStickerBookUnlockGroup) WeaponUpgrades; /* 0x0048 */
  FB_STDARRAY(struct PVZUIStickerBookUnlockGroup) WeaponSkins; /* 0x0050 */
  FB_STDARRAY(struct PVZUIDisplayStat) Stats; /* 0x0058 */
  FB_HANDLE(class UIWidgetBlueprint) CostumeBlueprint; /* 0x0060 */
  FB_BOOLEAN IsBaseCostume; /* 0x0068 */
  FB_BOOLEAN HideIfLocked; /* 0x0069 */
  char pad_006A[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(PVZUIStickerBookCostume) == 112);

}
