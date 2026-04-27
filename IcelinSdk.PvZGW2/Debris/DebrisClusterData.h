#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentEntityData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838FA8
   RuntimeId:        0656
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B32
   VfTable:          00000001421FD528
   Address (Base):   00000001430F25E0
*/
#pragma pack(push, 16)
class DebrisClusterData : public GameComponentEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 PushVelocityMul; /* 0x0080 */
  Vec3 PushVelocityRndMul; /* 0x0090 */
  Vec3 InitRotationRndMul; /* 0x00A0 */
  FB_UINT32 MaxActivePartsCount; /* 0x00B0 */
  FB_FLOAT32 RuntimeClusterLifetime; /* 0x00B4 */
  FB_HANDLE(class MeshAsset) Mesh; /* 0x00B8 */
  FB_UINT32 CompositePartCount; /* 0x00C0 */
  char pad_00C4[0x0004];
  FB_STDARRAY(struct DebrisClusterPartInfoData) PartHierarchy; /* 0x00C8 */
  FB_HANDLE(class PhysicsEntityData) PhysicsData; /* 0x00D0 */
  FB_FLOAT32 ActivationPushForceMul; /* 0x00D8 */
  FB_FLOAT32 ProjectileForceTransferMul; /* 0x00DC */
  FB_HANDLE(class EffectBlueprint) ActivationEffect; /* 0x00E0 */
  FB_FLOAT32 OnPartCollisionSpeedThreshold; /* 0x00E8 */
  char pad_00EC[0x0004];
  FB_HANDLE(class EffectBlueprint) Effect; /* 0x00F0 */
  FB_HANDLE(class SpatialEntityData) Explosion; /* 0x00F8 */
  FB_BOOLEAN PartialDestruction; /* 0x0100 */
  FB_BOOLEAN ClientSideOnly; /* 0x0101 */
  FB_BOOLEAN ActivateOnSpawn; /* 0x0102 */
  FB_BOOLEAN InEffectWorldOnly; /* 0x0103 */
  FB_BOOLEAN NoCollision; /* 0x0104 */
  FB_BOOLEAN OnPartCollisionEnable; /* 0x0105 */
  FB_BOOLEAN KillPartsOnCollision; /* 0x0106 */
  FB_BOOLEAN DeactivatePartsOnSleep; /* 0x0107 */
  FB_BOOLEAN SpawnExplosionOnFirstImpactOnly; /* 0x0108 */
  char pad_0109[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0110 */
#pragma pack(pop)

static_assert(sizeof(DebrisClusterData) == 272);

}
