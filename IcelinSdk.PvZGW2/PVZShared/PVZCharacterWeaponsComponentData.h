#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>
#include <IcelinSdk.PvZGW2/Core/LinearTransform.h>
#include <IcelinSdk.PvZGW2/PVZShared/AnimatedWeaponBinding.h>
#include <IcelinSdk.PvZGW2/PVZShared/Animated1pOnlyWeaponBinding.h>
#include <IcelinSdk.PvZGW2/PVZShared/Animated3pOnlyWeaponBinding.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZWeaponsBinding.h>

namespace fb
{

/* TypeInfo (Array): 000000014286D800
   RuntimeId:        281A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DBA
   VfTable:          000000014236F198
   Address (Base):   00000001430D3130
*/
#pragma pack(push, 16)
class PVZCharacterWeaponsComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  LinearTransform AimDir; /* 0x0070 */
  FB_INT32 PrimaryWeaponId; /* 0x00B0 */
  FB_INT32 AltPrimaryWeaponId; /* 0x00B4 */
  FB_HANDLE(class SoldierAimingSimulationData) DefaultAimingController; /* 0x00B8 */
  AnimatedWeaponBinding AnimatedWeaponBinding; /* 0x00C0 */
  Animated1pOnlyWeaponBinding Animated1pOnlyWeaponBinding; /* 0x064C */
  Animated3pOnlyWeaponBinding Animated3pOnlyWeaponBinding; /* 0x069C */
  FB_HANDLE(class SkeletonAsset) WeaponSkeleton; /* 0x06D8 */
  FB_STDARRAY(FB_INT32) SharedAmmoSlots; /* 0x06E0 */
  FB_FLOAT32 AmmoClipIncreaseMultiplier; /* 0x06E8 */
  FB_INT32 GrenadeIncrease; /* 0x06EC */
  FB_INT32 UnderslungGrenadeIncrease; /* 0x06F0 */
  FB_FLOAT32 ExplosiveIncreaseMultiplier; /* 0x06F4 */
  FB_FLOAT32 OverheatingValue; /* 0x06F8 */
  PVZWeaponsBinding PVZWeaponsAnimationBinding; /* 0x06FC */
  FB_INT32 SwitchToWeaponId; /* 0x0788 */
  FB_BOOLEAN UseExternalAimDir; /* 0x078C */
  FB_BOOLEAN UnlimitedAmmo; /* 0x078D */
  FB_BOOLEAN UnlimitedMags; /* 0x078E */
  char pad_078F[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0790 */
#pragma pack(pop)

static_assert(sizeof(PVZCharacterWeaponsComponentData) == 1936);

}
