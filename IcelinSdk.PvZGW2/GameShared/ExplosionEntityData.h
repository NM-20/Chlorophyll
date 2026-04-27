#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntityData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Entity/MaterialDecl.h>
#include <IcelinSdk.PvZGW2/GameShared/DamageIndicationType.h>
#include <IcelinSdk.PvZGW2/GameShared/DamageType.h>

namespace fb
{

/* TypeInfo (Array): 000000014284ABE8
   RuntimeId:        0ED9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B7F
   VfTable:          00000001422632E8
   Address (Base):   00000001430BF130
*/
#pragma pack(push, 16)
class ExplosionEntityData : public SpatialEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 DetonationEffectOrientationOverride; /* 0x0060 */
  FB_HANDLE(class EffectBlueprint) DetonationEffect; /* 0x0070 */
  FB_HANDLE(class EffectBlueprint) DetonationEffectForFriendlies; /* 0x0078 */
  FB_HANDLE(class MaskVolumeEntityData) MaskVolume; /* 0x0080 */
  FB_HANDLE(class DestructionMaskVolumeEntityData) DestructionMaskVolume; /* 0x0088 */
  MaterialDecl MaterialPair; /* 0x0090 */
  MaterialDecl SecondaryMaterialPair; /* 0x0094 */
  DamageIndicationType DamageIndicationType; /* 0x0098 */
  FB_FLOAT32 EmpTime; /* 0x009C */
  FB_FLOAT32 MaxOcclusionRaycastRadius; /* 0x00A0 */
  FB_FLOAT32 InnerBlastRadius; /* 0x00A4 */
  FB_FLOAT32 BlastDamage; /* 0x00A8 */
  FB_FLOAT32 BlastRadius; /* 0x00AC */
  FB_FLOAT32 BlastImpulse; /* 0x00B0 */
  FB_FLOAT32 ShockwaveDamage; /* 0x00B4 */
  FB_FLOAT32 ShockwaveRadius; /* 0x00B8 */
  FB_FLOAT32 ShockwaveDistanceLimitUp; /* 0x00BC */
  FB_FLOAT32 ShockwaveDistanceLimitDown; /* 0x00C0 */
  FB_FLOAT32 ShockwaveImpulse; /* 0x00C4 */
  FB_FLOAT32 ShockwaveTime; /* 0x00C8 */
  DamageType DamageType; /* 0x00CC */
  FB_FLOAT32 CameraShockwaveRadius; /* 0x00D0 */
  FB_FLOAT32 SpawnDelay; /* 0x00D4 */
  FB_BOOLEAN NoFriendliesEffectOnEnabledFriendlyFire; /* 0x00D8 */
  FB_BOOLEAN UseEntityTransformForDetonationEffect; /* 0x00D9 */
  FB_BOOLEAN SecondaryMaterialsActive; /* 0x00DA */
  FB_BOOLEAN HasStunEffect; /* 0x00DB */
  FB_BOOLEAN UseSphereQueryOnClient; /* 0x00DC */
  FB_BOOLEAN GroupDamage; /* 0x00DD */
  FB_BOOLEAN IgnoreMaterialProtectionThreshold; /* 0x00DE */
  FB_BOOLEAN DoFullDamageOnInside; /* 0x00DF */
  FB_BOOLEAN DisableOcclusion; /* 0x00E0 */
  FB_BOOLEAN DisableStaticEntityOcclusion; /* 0x00E1 */
  FB_BOOLEAN TriggerImpairedHearing; /* 0x00E2 */
  FB_BOOLEAN AlwaysSpawnDetonationEffectUpright; /* 0x00E3 */
  FB_BOOLEAN Enabled; /* 0x00E4 */
  char pad_00E5[0x000B];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00F0 */
#pragma pack(pop)

static_assert(sizeof(ExplosionEntityData) == 240);

}
