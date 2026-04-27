#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/ControllableEntityData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/GameShared/VehicleHudData.h>
#include <IcelinSdk.PvZGW2/GameShared/VehicleHealthZoneData.h>
#include <IcelinSdk.PvZGW2/GameShared/MPModeData.h>
#include <IcelinSdk.PvZGW2/GameShared/AngleOfImpactData.h>
#include <IcelinSdk.PvZGW2/GameShared/VehicleLockableInfoData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284CFF8
   RuntimeId:        10D0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B26
   VfTable:          00000001422670E0
   Address (Base):   00000001430B5950
*/
#pragma pack(push, 16)
class VehicleEntityData : public ControllableEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 CriticallyDamagedEffectPosition; /* 0x00B0 */
  Vec3 PreExplosionEffectPosition; /* 0x00C0 */
  VehicleHudData HudData; /* 0x00D0 */
  Vec3 FLIRKeyColor; /* 0x0110 */
  Vec3 InteractionOffset; /* 0x0120 */
  FB_CSTRING ControllableType; /* 0x0130 */
  FB_FLOAT32 DisabledDamageThreshold; /* 0x0138 */
  FB_FLOAT32 PreDestructionDamageThreshold; /* 0x013C */
  VehicleHealthZoneData FrontHealthZone; /* 0x0140 */
  VehicleHealthZoneData RearHealthZone; /* 0x0160 */
  VehicleHealthZoneData LeftHealthZone; /* 0x0180 */
  VehicleHealthZoneData RightHealthZone; /* 0x01A0 */
  VehicleHealthZoneData TopHealthZone; /* 0x01C0 */
  FB_FLOAT32 TopHitHeight; /* 0x01E0 */
  FB_FLOAT32 TopHitAngle; /* 0x01E4 */
  FB_FLOAT32 RegenerationDelay; /* 0x01E8 */
  FB_FLOAT32 RegenerationRate; /* 0x01EC */
  FB_FLOAT32 ArmorMultiplier; /* 0x01F0 */
  FB_FLOAT32 RegenerationDelayMultiplier; /* 0x01F4 */
  FB_FLOAT32 RegenerationRateMultiplier; /* 0x01F8 */
  FB_FLOAT32 EmergencyRepairHealth; /* 0x01FC */
  FB_FLOAT32 DecayDelay; /* 0x0200 */
  FB_FLOAT32 DecayRate; /* 0x0204 */
  FB_HANDLE(class EffectBlueprint) CriticallyDamagedEffect; /* 0x0208 */
  FB_FLOAT32 CriticalDamageTime; /* 0x0210 */
  char pad_0214[0x0004];
  FB_HANDLE(class EffectBlueprint) PreExplosionEffect; /* 0x0218 */
  FB_FLOAT32 PreExplosionTime; /* 0x0220 */
  char pad_0224[0x0004];
  FB_HANDLE(class ExplosionEntityData) Explosion; /* 0x0228 */
  FB_HANDLE(class MeshAsset) Mesh; /* 0x0230 */
  FB_UINT32 BoneCount; /* 0x0238 */
  char pad_023C[0x0004];
  FB_STDARRAY(struct LinearTransform) BasePoseTransforms; /* 0x0240 */
  FB_HANDLE(class ObjectBlueprint) CockpitMesh; /* 0x0248 */
  FB_CSTRING NameSid; /* 0x0250 */
  FB_INT32 MaxPlayersInVehicle; /* 0x0258 */
  FB_FLOAT32 MinSpeedForMineActivation; /* 0x025C */
  FB_FLOAT32 UpsideDownDamage; /* 0x0260 */
  FB_FLOAT32 UpsideDownDamageDelay; /* 0x0264 */
  FB_FLOAT32 UpsideDownAngle; /* 0x0268 */
  FB_FLOAT32 WaterDamage; /* 0x026C */
  FB_FLOAT32 BelowWaterDamageDelay; /* 0x0270 */
  FB_FLOAT32 WaterDamageOffset; /* 0x0274 */
  FB_FLOAT32 VelocityDamageThreshold; /* 0x0278 */
  FB_FLOAT32 VelocityDamageMagnifier; /* 0x027C */
  FB_FLOAT32 KillSoldierCollisionSpeedThreshold; /* 0x0280 */
  FB_FLOAT32 ExitSpeedThreshold; /* 0x0284 */
  FB_FLOAT32 ExitDirectionSpeedThreshold; /* 0x0288 */
  FB_FLOAT32 FLIRValue; /* 0x028C */
  MPModeData MPMode; /* 0x0290 */
  FB_FLOAT32 ExitCameraSwitchDelay; /* 0x0294 */
  AngleOfImpactData AngleOfImpact; /* 0x0298 */
  FB_FLOAT32 LockingTimeMultiplier; /* 0x02B0 */
  VehicleLockableInfoData VehicleLockableInfo; /* 0x02B4 */
  FB_FLOAT32 HighAltitudeLockHeight; /* 0x02C4 */
  FB_HANDLE(class VehicleSoundData) Sound; /* 0x02C8 */
  FB_HANDLE(class EntityVoiceOverInfo) VoiceOverInfo; /* 0x02D0 */
  FB_FLOAT32 NametagHeightScale; /* 0x02D8 */
  FB_FLOAT32 SpottingFovScale; /* 0x02DC */
  FB_BOOLEAN AllowVehicleOutsideCombatAreas; /* 0x02E0 */
  FB_BOOLEAN UseTopZone; /* 0x02E1 */
  FB_BOOLEAN HealthZonesShareDamage; /* 0x02E2 */
  FB_BOOLEAN UseProtectedShields; /* 0x02E3 */
  FB_BOOLEAN ShowPlayerHealth; /* 0x02E4 */
  FB_BOOLEAN ForegroundRenderCockpitMesh; /* 0x02E5 */
  FB_BOOLEAN MotionBlurMask; /* 0x02E6 */
  FB_BOOLEAN SuppressDamageByPassengers; /* 0x02E7 */
  FB_BOOLEAN IsAffectedByEMP; /* 0x02E8 */
  FB_BOOLEAN CanTakeDynamicFireDamage; /* 0x02E9 */
  FB_BOOLEAN HasExclusiveEntries; /* 0x02EA */
  FB_BOOLEAN ProhibitEntrySwitching; /* 0x02EB */
  FB_BOOLEAN ThrowOutSoldierInsideOnWaterDamage; /* 0x02EC */
  FB_BOOLEAN IgnoreSoldierCollisionNormal; /* 0x02ED */
  FB_BOOLEAN ChoseExitPointByDirection; /* 0x02EE */
  FB_BOOLEAN ExitAllowed; /* 0x02EF */
  FB_BOOLEAN EnableGroundmapLighting; /* 0x02F0 */
  FB_BOOLEAN UseAsTeamSpawner; /* 0x02F1 */
  FB_BOOLEAN IsLockable; /* 0x02F2 */
  FB_BOOLEAN NeverReportVehicleAsEmpty; /* 0x02F3 */
  FB_BOOLEAN UseLowAltitudeHeatSignature; /* 0x02F4 */
  FB_BOOLEAN UseSpottingTargetComponentForRaycast; /* 0x02F5 */
  FB_BOOLEAN EquipmentFakeVehicle; /* 0x02F6 */
  FB_BOOLEAN ExplosionPacksAttachable; /* 0x02F7 */
  FB_BOOLEAN DamageGiverOverrideOwnerVehicle; /* 0x02F8 */
  char pad_02F9[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0300 */
#pragma pack(pop)

static_assert(sizeof(VehicleEntityData) == 768);

}
