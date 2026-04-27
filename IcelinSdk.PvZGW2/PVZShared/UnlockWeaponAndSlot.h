#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/WeaponSlot.h>

namespace fb
{

/* TypeInfo (Array): 000000014286A0B8
   RuntimeId:        245D
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C37E8
   Default Value:    0000000142869100
*/
#pragma pack(push, 8)
struct UnlockWeaponAndSlot
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_HANDLE(class PVZCharacterWeaponUnlockAsset) Weapon; /* 0x0000 */
  WeaponSlot Slot; /* 0x0008 */
  char pad_000C[0x0004];
  FB_REFARRAY(class UnlockAssetBase) CustomizationUnlockAssets; /* 0x0010 */
  FB_REFARRAY(class UnlockAssetBase) UnlockAssets; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(UnlockWeaponAndSlot) == 32);

}
