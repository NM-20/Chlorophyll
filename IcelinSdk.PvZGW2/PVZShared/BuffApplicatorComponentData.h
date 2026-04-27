#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>
#include <IcelinSdk.PvZGW2/Entity/MaterialDecl.h>

namespace fb
{

/* TypeInfo (Array): 000000014286BF68
   RuntimeId:        26AE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DA6
   VfTable:          0000000142366A68
   Address (Base):   00000001430E4720
*/
#pragma pack(push, 16)
class BuffApplicatorComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class BuffData) Buff; /* 0x0070 */
  FB_REFARRAY(class BuffParameterOverride) BuffParameterOverrides; /* 0x0078 */
  FB_FLOAT32 ApplyOnWeaponChargingDelay; /* 0x0080 */
  MaterialDecl Material; /* 0x0084 */
  FB_FLOAT32 CollisionSpeedThreshold; /* 0x0088 */
  FB_BOOLEAN ApplyOnWeaponFire; /* 0x008C */
  FB_BOOLEAN ApplyOnWeaponFireOnlyWhileBuffActive; /* 0x008D */
  FB_BOOLEAN ApplyOnWeaponFireAutomatic; /* 0x008E */
  FB_BOOLEAN ApplyOnWeaponCharging; /* 0x008F */
  FB_BOOLEAN ApplyOnWeaponPriming; /* 0x0090 */
  FB_BOOLEAN ApplyOnWeaponActive; /* 0x0091 */
  FB_BOOLEAN ApplyOnWeaponActiveForceSwitchDisabled; /* 0x0092 */
  FB_BOOLEAN RefreshOnWeaponActive; /* 0x0093 */
  FB_BOOLEAN ApplyOnAnyKillToOwner; /* 0x0094 */
  FB_BOOLEAN ApplyToSelfOnWeaponDirectDamage; /* 0x0095 */
  FB_BOOLEAN KillOnOutOfAmmo; /* 0x0096 */
  FB_BOOLEAN ApplyOnCollision; /* 0x0097 */
  FB_BOOLEAN ApplyOnShockwave; /* 0x0098 */
  FB_BOOLEAN ApplyOnPotentialHit; /* 0x0099 */
  FB_BOOLEAN ApplyOnAnyMeleeKillToOwner; /* 0x009A */
  FB_BOOLEAN KillOnMeleeAttackerDiedToVictim; /* 0x009B */
  FB_BOOLEAN KillOnMeleeAttackerDied; /* 0x009C */
  FB_BOOLEAN KillOnMeleeVictimDefended; /* 0x009D */
  FB_BOOLEAN KillOnMeleeDefended; /* 0x009E */
  FB_BOOLEAN ApplyOnMeleeAttackToOwner; /* 0x009F */
  FB_BOOLEAN ApplyOnMeleeAttackToVictim; /* 0x00A0 */
  FB_BOOLEAN ApplyOnMeleeKillToOwner; /* 0x00A1 */
  FB_BOOLEAN ApplyOnMeleeKillToVictim; /* 0x00A2 */
  FB_BOOLEAN ApplyOnMeleeDefendToOwner; /* 0x00A3 */
  FB_BOOLEAN ApplyOnMeleeDefendToVictim; /* 0x00A4 */
  FB_BOOLEAN KillOnMeleeAttackEndedToVictim; /* 0x00A5 */
  FB_BOOLEAN ApplyOnMeleeRecoveryStarted; /* 0x00A6 */
  FB_BOOLEAN KillOnMeleeRecoveryStarted; /* 0x00A7 */
  FB_BOOLEAN ApplyOnMeleeRecoveryFinished; /* 0x00A8 */
  FB_BOOLEAN KillOnMeleeRecoveryFinished; /* 0x00A9 */
  FB_BOOLEAN ApplyOnCharacterPhysicsCollision; /* 0x00AA */
  char pad_00AB[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B0 */
#pragma pack(pop)

static_assert(sizeof(BuffApplicatorComponentData) == 176);

}
