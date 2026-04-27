#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Vegetation/VegetationBaseEntityData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Vegetation/VegetationEffectSlot.h>

namespace fb
{

/* TypeInfo (Array): 0000000142855520
   RuntimeId:        181C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B07
   VfTable:          00000001422B8AB8
   Address (Base):   00000001430EA2A0
*/
#pragma pack(push, 16)
class VegetationTreeEntityData : public VegetationBaseEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 InertiaModifier; /* 0x00D0 */
  Vec3 TranslucencyVolumeCenter; /* 0x00E0 */
  FB_FLOAT32 Stiffness; /* 0x00F0 */
  FB_FLOAT32 Damping; /* 0x00F4 */
  FB_FLOAT32 StemMass; /* 0x00F8 */
  FB_FLOAT32 StiffnessSpread; /* 0x00FC */
  FB_FLOAT32 DampingSpread; /* 0x0100 */
  FB_FLOAT32 MassSpread; /* 0x0104 */
  FB_FLOAT32 StemLockedUpTo; /* 0x0108 */
  FB_INT32 StemBoneCount; /* 0x010C */
  FB_FLOAT32 BreakableJointThreshold; /* 0x0110 */
  FB_FLOAT32 BoundingBoxScaleFactor; /* 0x0114 */
  FB_FLOAT32 PartsTimeToLive; /* 0x0118 */
  FB_FLOAT32 LinearVelocityDamping; /* 0x011C */
  FB_FLOAT32 AngularVelocityDamping; /* 0x0120 */
  FB_FLOAT32 Friction; /* 0x0124 */
  FB_FLOAT32 Restitution; /* 0x0128 */
  FB_FLOAT32 StemPhysicsWidth; /* 0x012C */
  FB_FLOAT32 StemPhysicsHeightScale; /* 0x0130 */
  FB_FLOAT32 BranchPhysicsWidth; /* 0x0134 */
  FB_FLOAT32 BranchPhysicsHeightScale; /* 0x0138 */
  FB_FLOAT32 DestructionMassScale; /* 0x013C */
  FB_FLOAT32 CenterOfMassVerticalScale; /* 0x0140 */
  char pad_0144[0x0004];
  VegetationEffectSlot StemBreakEffect; /* 0x0148 */
  VegetationEffectSlot BranchBreakEffect; /* 0x0160 */
  VegetationEffectSlot ImpactEffect; /* 0x0178 */
  FB_HANDLE(class EffectBlueprint) WindEffect; /* 0x0190 */
  FB_FLOAT32 MinRespawnTime; /* 0x0198 */
  FB_UINT32 StemEffectNodeThreshold; /* 0x019C */
  FB_UINT32 ShadowLODOffset; /* 0x01A0 */
  FB_BOOLEAN ConstantFalloff; /* 0x01A4 */
  FB_BOOLEAN Indestructable; /* 0x01A5 */
  FB_BOOLEAN TranslucencyEnabled; /* 0x01A6 */
  char pad_01A7[0x0009];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x01B0 */
#pragma pack(pop)

static_assert(sizeof(VegetationTreeEntityData) == 432);

}
