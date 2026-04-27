#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/CharacterEntityData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Core/Vec4.h>
#include <IcelinSdk.PvZGW2/Entity/MaterialDecl.h>
#include <IcelinSdk.PvZGW2/Entity/GameplayBones.h>

namespace fb
{

/* TypeInfo (Array): 0000000142862B90
   RuntimeId:        20BC
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B28
   VfTable:          0000000142354120
   Address (Base):   00000001430D01A0
*/
#pragma pack(push, 16)
class PVZCharacterEntityData : public CharacterEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 WepAnimOffset; /* 0x00E0 */
  Vec4 TargetHighlightColor; /* 0x00F0 */
  Vec3 SecondaryExitOffset; /* 0x0100 */
  MaterialDecl FootMaterialPair; /* 0x0110 */
  MaterialDecl HeadMaterialPair; /* 0x0114 */
  GameplayBones AuthoritativeBone; /* 0x0118 */
  char pad_011C[0x0004];
  FB_REFARRAY(class BoneFakePhysicsData) BoneFakePhysics; /* 0x0120 */
  FB_CSTRING AnimatedBoundingBoxRoot; /* 0x0128 */
  FB_HANDLE(class SoldierAutoAimData) AutoAim; /* 0x0130 */
  FB_HANDLE(class SoldierAimingConstraintsData) AimingConstraints; /* 0x0138 */
  FB_HANDLE(class SoldierHeadCollisionData) HeadCollision; /* 0x0140 */
  FB_HANDLE(class CharacterPhysicsData) CharacterPhysics; /* 0x0148 */
  FB_FLOAT32 ImpulseReactionTime; /* 0x0150 */
  char pad_0154[0x0004];
  FB_HANDLE(class SoldierHealthModuleData) HealthModule; /* 0x0158 */
  FB_STDARRAY(FB_INT32) AbortSpawnInvisibilityInputs; /* 0x0160 */
  FB_HANDLE(class CollisionData) CollisionInfo; /* 0x0168 */
  FB_FLOAT32 ExplosionDamageModifier; /* 0x0170 */
  FB_FLOAT32 RegenerationDelayModifier; /* 0x0174 */
  FB_FLOAT32 FallDamageThreshold; /* 0x0178 */
  char pad_017C[0x0004];
  FB_CSTRING Identifier; /* 0x0180 */
  FB_HANDLE(class BuffData) DeserterBuff; /* 0x0188 */
  FB_FLOAT32 HudIconOffset; /* 0x0190 */
  FB_FLOAT32 KilledValueMultiplier; /* 0x0194 */
  FB_FLOAT32 ReviveHealthMultiplierOverride; /* 0x0198 */
  char pad_019C[0x0004];
  FB_REFARRAY(class ProjectileValue) ProjectileSpawnArray; /* 0x01A0 */
  FB_FLOAT32 HealthOverrideValue; /* 0x01A8 */
  char pad_01AC[0x0004];
  FB_CSTRING SecondaryTargetBone; /* 0x01B0 */
  FB_FLOAT32 SecondaryDelayBeforeExit; /* 0x01B8 */
  FB_INT32 SecondaryExitWeaponSlotId; /* 0x01BC */
  FB_FLOAT32 ServerPrimaryInSecondaryForwardAdjust; /* 0x01C0 */
  FB_FLOAT32 ServerPrimaryInSecondaryUpAdjust; /* 0x01C4 */
  FB_BOOLEAN UseAnimatedBoundingBoxRoot; /* 0x01C8 */
  FB_BOOLEAN UseSpineXRotation; /* 0x01C9 */
  FB_BOOLEAN ShowWeaponWhenDead; /* 0x01CA */
  FB_BOOLEAN EnableGroundmapLighting; /* 0x01CB */
  FB_BOOLEAN WepAnimEnable; /* 0x01CC */
  FB_BOOLEAN ProximityCheck; /* 0x01CD */
  FB_BOOLEAN FreeSpaceCheck; /* 0x01CE */
  FB_BOOLEAN CollisionEnabled; /* 0x01CF */
  FB_BOOLEAN PhysicsControlled; /* 0x01D0 */
  FB_BOOLEAN IsPushable; /* 0x01D1 */
  FB_BOOLEAN HumanPlayerControlled; /* 0x01D2 */
  FB_BOOLEAN UseLargeAABBWhenNotAlive; /* 0x01D3 */
  FB_BOOLEAN InteractiveManDownAllowed; /* 0x01D4 */
  FB_BOOLEAN ShowNametag; /* 0x01D5 */
  FB_BOOLEAN TeleportImmortal; /* 0x01D6 */
  FB_BOOLEAN SupportsSecondaryAttachment; /* 0x01D7 */
  char pad_01D8[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x01E0 */
#pragma pack(pop)

static_assert(sizeof(PVZCharacterEntityData) == 480);

}
