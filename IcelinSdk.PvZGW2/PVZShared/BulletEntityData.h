#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/MeshProjectileEntityData.h>
#include <IcelinSdk.PvZGW2/GameShared/DamageType.h>

namespace fb
{

/* TypeInfo (Array): 000000014286AC78
   RuntimeId:        25D6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B12
   VfTable:          000000014235AFF8
   Address (Base):   00000001430BDDD0
*/
#pragma pack(push, 16)
class BulletEntityData : public MeshProjectileEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class ExplosionEntityData) DudExplosion; /* 0x0140 */
  FB_HANDLE(class ExplosionEntityData) ManualExplosion; /* 0x0148 */
  FB_FLOAT32 Gravity; /* 0x0150 */
  FB_FLOAT32 ImpactImpulse; /* 0x0154 */
  FB_FLOAT32 DetonationTimeVariation; /* 0x0158 */
  FB_FLOAT32 VehicleDetonationRadius; /* 0x015C */
  FB_FLOAT32 VehicleDetonationActivationDelay; /* 0x0160 */
  char pad_0164[0x0004];
  FB_HANDLE(class SoundAsset) FlyBySound; /* 0x0168 */
  FB_FLOAT32 FlyBySoundRadius; /* 0x0170 */
  FB_FLOAT32 FlyBySoundSpeed; /* 0x0174 */
  FB_FLOAT32 Stamina; /* 0x0178 */
  FB_FLOAT32 DistributeDamageOverTime; /* 0x017C */
  FB_FLOAT32 StartDamage; /* 0x0180 */
  FB_FLOAT32 EndDamage; /* 0x0184 */
  FB_FLOAT32 DamageFalloffStartDistance; /* 0x0188 */
  FB_FLOAT32 DamageFalloffEndDistance; /* 0x018C */
  DamageType DamageType; /* 0x0190 */
  FB_FLOAT32 OnSpawnSelfDamage; /* 0x0194 */
  FB_FLOAT32 TimeToArmExplosion; /* 0x0198 */
  FB_INT32 HitMultipleCharacterCount; /* 0x019C */
  FB_STDARRAY(struct HitMultipleCharacterModifierData) HitMultipleCharacterModifiers; /* 0x01A0 */
  FB_FLOAT32 FirstFrameTravelDistance; /* 0x01A8 */
  FB_FLOAT32 DespawnDelay; /* 0x01AC */
  FB_FLOAT32 ExplosionDelay; /* 0x01B0 */
  FB_BOOLEAN GroupDamage; /* 0x01B4 */
  FB_BOOLEAN HasVehicleDetonation; /* 0x01B5 */
  FB_BOOLEAN InstantHit; /* 0x01B6 */
  FB_BOOLEAN StopTrailEffectOnUnspawn; /* 0x01B7 */
  FB_BOOLEAN ExplosionDelayHideMesh; /* 0x01B8 */
  char pad_01B9[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x01C0 */
#pragma pack(pop)

static_assert(sizeof(BulletEntityData) == 448);

}
