#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/SoldierHealthModuleData.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZRotateToHitData.h>
#include <IcelinSdk.PvZGW2/PVZShared/SoldierHealthModuleBinding.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZHealthBinding.h>
#include <IcelinSdk.PvZGW2/GameShared/PoseConstraintsData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142862FB0
   RuntimeId:        20DE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          088A
   VfTable:          0000000142353F30
   Address (Base):   00000001431084F0
*/
#pragma pack(push, 8)
class PVZSoldierHealthModuleData : public SoldierHealthModuleData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 TimeForCorpse; /* 0x0010 */
  FB_FLOAT32 InteractiveManDownThreshold; /* 0x0014 */
  FB_FLOAT32 ManDownStateTime; /* 0x0018 */
  FB_INT32 ManDownDelayInputAction; /* 0x001C */
  FB_FLOAT32 ManDownSlowDownTimeMultiplier; /* 0x0020 */
  FB_FLOAT32 ManDownSlowdownIncreasePerPress; /* 0x0024 */
  FB_FLOAT32 ManDownTimeBetweenPressToSustainDelay; /* 0x0028 */
  FB_FLOAT32 ManDownSlowdownDecreaseWithoutPress; /* 0x002C */
  FB_FLOAT32 ManDownStateHealthPoints; /* 0x0030 */
  FB_INT32 ManDownConsumableReviveInputAction; /* 0x0034 */
  FB_FLOAT32 ImmortalTimeAfterSpawn; /* 0x0038 */
  FB_FLOAT32 ImmortalTimeAfterRevive; /* 0x003C */
  FB_FLOAT32 ImmortalTimeAfterTeleport; /* 0x0040 */
  char pad_0044[0x0004];
  FB_STDARRAY(FB_INT32) AbortSpawnImmortalityInputs; /* 0x0048 */
  FB_FLOAT32 PostReviveResponseTime; /* 0x0050 */
  FB_FLOAT32 RegenerationDelay; /* 0x0054 */
  FB_FLOAT32 RegenerationRate; /* 0x0058 */
  FB_FLOAT32 MaxRegenerationHealth; /* 0x005C */
  FB_FLOAT32 RegenerationRateToFullHealth; /* 0x0060 */
  FB_FLOAT32 PostReviveRegenerationDelay; /* 0x0064 */
  FB_FLOAT32 PostReviveRegenerationRate; /* 0x0068 */
  FB_FLOAT32 PostReviveRegenerationTime; /* 0x006C */
  FB_FLOAT32 CriticalFakeImmortalTime; /* 0x0070 */
  PVZRotateToHitData ManDownRotate; /* 0x0074 */
  FB_HANDLE(class AntEnumeration) AnimationId; /* 0x0078 */
  SoldierHealthModuleBinding Binding; /* 0x0080 */
  PVZHealthBinding PvZBinding; /* 0x0260 */
  FB_FLOAT32 TimeUntilRevivable; /* 0x0350 */
  FB_FLOAT32 UserInputDelay; /* 0x0354 */
  FB_FLOAT32 SpawnAnimationTime; /* 0x0358 */
  FB_FLOAT32 SpawnInputRestrictionTime; /* 0x035C */
  FB_BOOLEAN InteractiveManDown; /* 0x0360 */
  FB_BOOLEAN TakeDamageInInteractiveMandown; /* 0x0361 */
  PoseConstraintsData InteractiveManDownPoseConstraints; /* 0x0362 */
  FB_BOOLEAN RegenerateToFullHealth; /* 0x0365 */
  FB_BOOLEAN ResetRegenTimerOnWeaponFire; /* 0x0366 */
  FB_BOOLEAN AllowSpawningWhileStreaming; /* 0x0367 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0368 */
#pragma pack(pop)

static_assert(sizeof(PVZSoldierHealthModuleData) == 872);

}
