#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/BoneComponentData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/GameShared/WeaponClassification.h>

namespace fb
{

/* TypeInfo (Array): 000000014286B590
   RuntimeId:        262C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D17
   VfTable:          000000014235ABB0
   Address (Base):   00000001430CFFC0
*/
#pragma pack(push, 16)
class WeaponComponentData : public BoneComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 ProjectileSpawnOffset; /* 0x0070 */
  FB_HANDLE(class WeaponFiringData) WeaponFiring; /* 0x0080 */
  FB_HANDLE(class WeaponUnlockAsset) WeaponUnlockAsset; /* 0x0088 */
  FB_CSTRING DamageGiverName; /* 0x0090 */
  FB_HANDLE(class GameAIWeaponData) AIData; /* 0x0098 */
  FB_HANDLE(class WeaponData) CustomWeaponType; /* 0x00A0 */
  FB_FLOAT32 ImpulseStrength; /* 0x00A8 */
  WeaponClassification Classification; /* 0x00AC */
  FB_FLOAT32 ReloadTimeMultiplier; /* 0x00B0 */
  FB_FLOAT32 DamageMultiplier; /* 0x00B4 */
  FB_FLOAT32 ExplosionDamageMultiplier; /* 0x00B8 */
  FB_FLOAT32 OverheatDropPerSecondMultiplier; /* 0x00BC */
  FB_FLOAT32 LockTimeMultiplier; /* 0x00C0 */
  FB_FLOAT32 LockingAcceptanceAngleMultiplier; /* 0x00C4 */
  FB_UINT32 WeaponItemHash; /* 0x00C8 */
  FB_BOOLEAN SequentialFiring; /* 0x00CC */
  FB_BOOLEAN Activate3pTargeting; /* 0x00CD */
  FB_BOOLEAN UseBoneFor3pTargeting; /* 0x00CE */
  char pad_00CF[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00D0 */
#pragma pack(pop)

static_assert(sizeof(WeaponComponentData) == 208);

}
