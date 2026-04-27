#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142862AD0
   RuntimeId:        20B2
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C4F68
   Default Value:    0000000142862AE8
*/
#pragma pack(push, 8)
struct HidableSoldierMeshWeaponPart
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_HANDLE(class SkinnedMeshAsset) WeaponMesh; /* 0x0000 */
  FB_HANDLE(class ObjectBlueprint) WeaponMeshBlueprint; /* 0x0008 */
  FB_CSTRING BoneName; /* 0x0010 */
  FB_BOOLEAN HideAlways; /* 0x0018 */
  FB_BOOLEAN HideInVehicleEntries; /* 0x0019 */
  char pad_001A[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(HidableSoldierMeshWeaponPart) == 32);

}
