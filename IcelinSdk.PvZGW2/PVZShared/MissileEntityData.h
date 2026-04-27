#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/GhostedProjectileEntityData.h>
#include <IcelinSdk.PvZGW2/GameShared/DamageType.h>
#include <IcelinSdk.PvZGW2/GameShared/TeamId.h>
#include <IcelinSdk.PvZGW2/PVZShared/WarnTarget.h>
#include <IcelinSdk.PvZGW2/PVZShared/MissileLockableInfoData.h>
#include <IcelinSdk.PvZGW2/PVZShared/MissileUnguidedData.h>
#include <IcelinSdk.PvZGW2/PVZShared/NearTargetDetonationData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286ADA8
   RuntimeId:        25E8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B1C
   VfTable:          000000014235AE60
   Address (Base):   00000001430BF830
*/
#pragma pack(push, 16)
class MissileEntityData : public GhostedProjectileEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class EffectBlueprint) EngineEffect; /* 0x0150 */
  FB_HANDLE(class ExplosionEntityData) DudExplosion; /* 0x0158 */
  FB_HANDLE(class SoundAsset) FlyBySound; /* 0x0160 */
  FB_FLOAT32 EngineStrength; /* 0x0168 */
  FB_FLOAT32 MaxSpeed; /* 0x016C */
  FB_FLOAT32 EngineTimeToIgnition; /* 0x0170 */
  FB_FLOAT32 EngineTimeToLive; /* 0x0174 */
  FB_FLOAT32 TimeToActivateGuidingSystem; /* 0x0178 */
  FB_FLOAT32 TimeToArm; /* 0x017C */
  FB_FLOAT32 MaxTurnAngle; /* 0x0180 */
  FB_FLOAT32 MinTurnAngle; /* 0x0184 */
  FB_FLOAT32 TurnAngleMultiplier; /* 0x0188 */
  FB_FLOAT32 Drag; /* 0x018C */
  FB_FLOAT32 Gravity; /* 0x0190 */
  FB_FLOAT32 FlyBySoundRadius; /* 0x0194 */
  FB_FLOAT32 FlyBySoundSpeed; /* 0x0198 */
  FB_FLOAT32 ImpactImpulse; /* 0x019C */
  FB_FLOAT32 Damage; /* 0x01A0 */
  DamageType DamageType; /* 0x01A4 */
  FB_FLOAT32 OnSpawnSelfDamage; /* 0x01A8 */
  FB_FLOAT32 OnHitSelfDamageMultiplier; /* 0x01AC */
  TeamId DefaultTeam; /* 0x01B0 */
  WarnTarget WarnTarget; /* 0x01B4 */
  FB_HANDLE(class LockingControllerData) LockingController; /* 0x01B8 */
  MissileLockableInfoData LockableInfo; /* 0x01C0 */
  MissileUnguidedData UnguidedData; /* 0x01C8 */
  NearTargetDetonationData NearTargetDetonation; /* 0x01DC */
  FB_FLOAT32 MaxBankAngle; /* 0x01EC */
  FB_FLOAT32 BankingSpeed; /* 0x01F0 */
  char pad_01F4[0x0004];
  FB_CSTRING Icon; /* 0x01F8 */
  FB_CSTRING TargetIcon; /* 0x0200 */
  FB_CSTRING TargetIconEnemy; /* 0x0208 */
  FB_FLOAT32 MinGhostFrequency; /* 0x0210 */
  char pad_0214[0x0004];
  FB_HANDLE(class DamageFalloffData) ImpactDamageFalloff; /* 0x0218 */
  FB_HANDLE(class DamageFalloffData) ExplosionDamageFalloff; /* 0x0220 */
  FB_FLOAT32 TimeToHandleCollision; /* 0x0228 */
  FB_FLOAT32 ProximityRadius; /* 0x022C */
  FB_FLOAT32 ProximityArmingTime; /* 0x0230 */
  FB_FLOAT32 ProximityTriggeringTime; /* 0x0234 */
  FB_BOOLEAN ForceDetonateNormalUp; /* 0x0238 */
  FB_BOOLEAN ForceDetonateNormalSurface; /* 0x0239 */
  FB_BOOLEAN ApplyGravityWhenUnguided; /* 0x023A */
  FB_BOOLEAN UseDetailedRaycast; /* 0x023B */
  FB_BOOLEAN GroupDamage; /* 0x023C */
  FB_BOOLEAN WarnOnPointingMissile; /* 0x023D */
  FB_BOOLEAN EnableBanking; /* 0x023E */
  FB_BOOLEAN StartEffectsOnSpawn; /* 0x023F */
  FB_BOOLEAN GhostedDetonateAtCharacterCenter; /* 0x0240 */
  FB_BOOLEAN DestroyOnPlayerRespawn; /* 0x0241 */
  char pad_0242[0x000E];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0250 */
#pragma pack(pop)

static_assert(sizeof(MissileEntityData) == 592);

}
