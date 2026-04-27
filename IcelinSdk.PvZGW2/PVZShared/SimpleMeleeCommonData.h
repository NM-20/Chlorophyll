#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/DataContainerPolicyAsset.h>
#include <IcelinSdk.PvZGW2/PVZShared/SimpleMeleeComponentBinding.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Entity/GameplayBones.h>

namespace fb
{

/* TypeInfo (Array): 000000014286FE28
   RuntimeId:        2944
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          074D
   VfTable:          000000014236DCC0
   Address (Base):   0000000143105310
*/
#pragma pack(push, 16)
class SimpleMeleeCommonData : public DataContainerPolicyAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  SimpleMeleeComponentBinding MeleeBinding; /* 0x0018 */
  char pad_01BC[0x0004];
  Vec3 DefensibleEscapeSpeed; /* 0x01C0 */
  FB_FLOAT32 PrepareTime; /* 0x01D0 */
  FB_FLOAT32 MeleeStrikeTime; /* 0x01D4 */
  FB_FLOAT32 KillTime; /* 0x01D8 */
  FB_FLOAT32 RecoveryTime; /* 0x01DC */
  FB_FLOAT32 EndRecoveryAnimationTime; /* 0x01E0 */
  FB_FLOAT32 MeleeDefendZone; /* 0x01E4 */
  FB_FLOAT32 MeleeAttackZone; /* 0x01E8 */
  FB_FLOAT32 MeleeAttackDistance; /* 0x01EC */
  FB_FLOAT32 SpecialModeExtraDistance; /* 0x01F0 */
  FB_FLOAT32 TemptingRangeTime; /* 0x01F4 */
  FB_FLOAT32 MaxAttackHeightDifference; /* 0x01F8 */
  FB_FLOAT32 KillDamage; /* 0x01FC */
  GameplayBones DefenderNormalAttachBone; /* 0x0200 */
  GameplayBones DefenderSpecialAttachBone; /* 0x0204 */
  FB_FLOAT32 EscapeTimeDelay; /* 0x0208 */
  FB_FLOAT32 EscapeHeightOffset; /* 0x020C */
  FB_BOOLEAN KillOnDamage; /* 0x0210 */
  char pad_0211[0x000F];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0220 */
#pragma pack(pop)

static_assert(sizeof(SimpleMeleeCommonData) == 544);

}
