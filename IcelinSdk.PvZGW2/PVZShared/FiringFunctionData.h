#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/GameDataContainer.h>
#include <IcelinSdk.PvZGW2/PVZShared/WeaponDispersion.h>
#include <IcelinSdk.PvZGW2/PVZShared/ShotConfigData.h>
#include <IcelinSdk.PvZGW2/PVZShared/ReloadData.h>
#include <IcelinSdk.PvZGW2/PVZShared/OverHeatData.h>
#include <IcelinSdk.PvZGW2/PVZShared/FireLogicData.h>
#include <IcelinSdk.PvZGW2/PVZShared/AmmoConfigData.h>
#include <IcelinSdk.PvZGW2/PVZShared/RumbleLoopData.h>
#include <IcelinSdk.PvZGW2/Entity/GameplayBones.h>

namespace fb
{

/* TypeInfo (Array): 000000014286B3A0
   RuntimeId:        2616
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DD2
   VfTable:          000000014235AC60
   Address (Base):   0000000143106990
*/
#pragma pack(push, 16)
class FiringFunctionData : public GameDataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  WeaponDispersion WeaponDispersion; /* 0x0010 */
  char pad_0078[0x0008];
  ShotConfigData Shot; /* 0x0080 */
  ReloadData Reload; /* 0x0130 */
  OverHeatData OverHeat; /* 0x0160 */
  FB_STDARRAY(struct FireEffectData) FireEffects1p; /* 0x01E0 */
  FB_STDARRAY(struct FireEffectData) FireEffects3p; /* 0x01E8 */
  FB_HANDLE(class EffectBlueprint) PredictionLineEffect; /* 0x01F0 */
  FB_HANDLE(class EffectBlueprint) PredictionEndEffect; /* 0x01F8 */
  FB_HANDLE(class SoundAsset) Sound; /* 0x0200 */
  FB_HANDLE(class SoundAsset) Sound1p; /* 0x0208 */
  FireLogicData FireLogic; /* 0x0210 */
  AmmoConfigData Ammo; /* 0x02F0 */
  char pad_030C[0x0004];
  FB_STDARRAY(struct ChargeShotConfigData) ChargeShots; /* 0x0310 */
  RumbleLoopData ChargingRumbleWhenFull; /* 0x0318 */
  FB_FLOAT32 ChargingEffectDelay; /* 0x0328 */
  FB_FLOAT32 SelfHealTimeWhenDeployed; /* 0x032C */
  FB_STDARRAY(struct ProjectileConfigData) Projectiles; /* 0x0330 */
  GameplayBones ProjectileSpawnBone; /* 0x0338 */
  GameplayBones ProjectileSpawnBone_Second; /* 0x033C */
  GameplayBones ProjectileSpawnBone_Third; /* 0x0340 */
  GameplayBones ProjectileSpawnBoneAlt; /* 0x0344 */
  GameplayBones ProjectileSpawnBoneAlt_Second; /* 0x0348 */
  GameplayBones ProjectileSpawnBoneAlt_Third; /* 0x034C */
  GameplayBones OverrideFireEffectSpawnBone; /* 0x0350 */
  GameplayBones OverrideFireEffectSpawnBone_Second; /* 0x0354 */
  GameplayBones OverrideFireEffectSpawnBone_Third; /* 0x0358 */
  FB_BOOLEAN ApplyCharacterScale; /* 0x035C */
  FB_BOOLEAN UsePrimaryAmmo; /* 0x035D */
  FB_BOOLEAN UnlimitedAmmoForAI; /* 0x035E */
  char pad_035F[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0360 */
#pragma pack(pop)

static_assert(sizeof(FiringFunctionData) == 864);

}
