#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/GamePhysicsEntityData.h>
#include <IcelinSdk.PvZGW2/PVZShared/MaxCountCooldownStart.h>
#include <IcelinSdk.PvZGW2/Entity/MaterialDecl.h>
#include <IcelinSdk.PvZGW2/PVZShared/AntHitReactionWeaponType.h>

namespace fb
{

/* TypeInfo (Array): 000000014286ABB8
   RuntimeId:        25CA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B0F
   VfTable:          000000014235AF78
   Address (Base):   00000001430E4C00
*/
#pragma pack(push, 16)
class ProjectileEntityData : public GamePhysicsEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 InitialSpeed; /* 0x0090 */
  FB_FLOAT32 TimeToLive; /* 0x0094 */
  FB_FLOAT32 TimeToLiveAfterAttached; /* 0x0098 */
  FB_UINT32 MaxCount; /* 0x009C */
  FB_FLOAT32 MaxCountCoolDownTime; /* 0x00A0 */
  FB_FLOAT32 MaxCountInitialCoolDownTime; /* 0x00A4 */
  MaxCountCooldownStart CooldownStart; /* 0x00A8 */
  FB_FLOAT32 InitMeshHideTime; /* 0x00AC */
  FB_FLOAT32 VisualConvergeDistance; /* 0x00B0 */
  FB_FLOAT32 VisualConvergenceDelay; /* 0x00B4 */
  FB_FLOAT32 VisualConvergenceDuration; /* 0x00B8 */
  FB_FLOAT32 ProxyVisualConvergenceDelay; /* 0x00BC */
  FB_FLOAT32 ProxyVisualConvergenceDuration; /* 0x00C0 */
  FB_FLOAT32 UnspawnAfterDetonationDelay; /* 0x00C4 */
  FB_UINT32 WeaponHashKey; /* 0x00C8 */
  char pad_00CC[0x0004];
  FB_HANDLE(class ExplosionEntityData) Explosion; /* 0x00D0 */
  FB_HANDLE(class WeaponSuppressionData) SuppressionData; /* 0x00D8 */
  FB_CSTRING AmmunitionType; /* 0x00E0 */
  MaterialDecl MaterialPair; /* 0x00E8 */
  AntHitReactionWeaponType HitReactionWeaponType; /* 0x00EC */
  FB_BOOLEAN AllowHeadAttach; /* 0x00F0 */
  FB_BOOLEAN AllowNeckAttach; /* 0x00F1 */
  FB_BOOLEAN DetonateOnTimeout; /* 0x00F2 */
  FB_BOOLEAN HideOnDetonation; /* 0x00F3 */
  FB_BOOLEAN UseMissileDamageMultiplier; /* 0x00F4 */
  FB_BOOLEAN ServerProjectileDisabled; /* 0x00F5 */
  char pad_00F6[0x000A];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0100 */
#pragma pack(pop)

static_assert(sizeof(ProjectileEntityData) == 256);

}
