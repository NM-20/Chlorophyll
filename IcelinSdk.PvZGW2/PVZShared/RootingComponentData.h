#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Entity/MaterialDecl.h>
#include <IcelinSdk.PvZGW2/PVZShared/RootingComponentBinding.h>

namespace fb
{

/* TypeInfo (Array): 00000001428637E0
   RuntimeId:        2124
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D5E
   VfTable:          00000001423536B8
   Address (Base):   00000001431083D0
*/
#pragma pack(push, 16)
class RootingComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 RootedCamOffset; /* 0x0070 */
  FB_FLOAT32 RootingTime; /* 0x0080 */
  FB_FLOAT32 UnrootingTime; /* 0x0084 */
  FB_FLOAT32 CameraBlendTime; /* 0x0088 */
  FB_FLOAT32 RootingCooldownTime; /* 0x008C */
  FB_HANDLE(class InputRestrictionAsset) RestrictionWhileRooting; /* 0x0090 */
  FB_HANDLE(class InputRestrictionAsset) RestrictionWhileRooted; /* 0x0098 */
  FB_HANDLE(class InputRestrictionAsset) RestrictionWhileUnRooted; /* 0x00A0 */
  FB_FLOAT32 RootedStamina; /* 0x00A8 */
  FB_FLOAT32 RootedStaminaDayDepletionRateNotMoving; /* 0x00AC */
  FB_FLOAT32 RootedStaminaNightDepletionRateNotMoving; /* 0x00B0 */
  FB_FLOAT32 RootedStaminaDayDepletionRateMoving; /* 0x00B4 */
  FB_FLOAT32 RootedStaminaNightDepletionRateMoving; /* 0x00B8 */
  FB_INT32 RootInput; /* 0x00BC */
  FB_INT32 AlternateExitRootingInput; /* 0x00C0 */
  char pad_00C4[0x0004];
  FB_HANDLE(class EffectBlueprint) RootingEffect; /* 0x00C8 */
  FB_HANDLE(class EffectBlueprint) RootedEffect; /* 0x00D0 */
  FB_HANDLE(class EffectBlueprint) UnRootingEffect; /* 0x00D8 */
  FB_FLOAT32 DamageOnUnrooting; /* 0x00E0 */
  FB_FLOAT32 DamageOnUnrootingRadius; /* 0x00E4 */
  MaterialDecl DamageOnUnrootingMaterialPair; /* 0x00E8 */
  RootingComponentBinding RootingAnimationBinding; /* 0x00EC */
  FB_BOOLEAN IsRootingAllowed; /* 0x0128 */
  FB_BOOLEAN UseInputEventsOnly; /* 0x0129 */
  FB_BOOLEAN ExitRootingIfStunned; /* 0x012A */
  FB_BOOLEAN DisableCharacterCollisionWhenRooted; /* 0x012B */
  FB_BOOLEAN IgnoreDamageWhenRooted; /* 0x012C */
  char pad_012D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0130 */
#pragma pack(pop)

static_assert(sizeof(RootingComponentData) == 304);

}
