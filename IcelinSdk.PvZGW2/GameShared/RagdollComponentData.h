#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/GameShared/RagdollBinding.h>

namespace fb
{

/* TypeInfo (Array): 000000014284E400
   RuntimeId:        11E1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D9A
   VfTable:          0000000142273280
   Address (Base):   00000001430D66D0
*/
#pragma pack(push, 16)
class RagdollComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0070 */
  char pad_0074[0x0004];
  FB_HANDLE(class SkeletonAsset) SkeletonAsset; /* 0x0078 */
  FB_HANDLE(class RagdollAsset) RagdollAsset; /* 0x0080 */
  FB_HANDLE(class SkeletonCollisionData) SkeletonCollisionData; /* 0x0088 */
  RagdollBinding Binding; /* 0x0090 */
  char pad_011C[0x0004];
  FB_STDARRAY(struct RagdollBoneEntry) BonesIgnoredOnCollision; /* 0x0120 */
  FB_STDARRAY(struct MaterialDecl) BoneMaterials; /* 0x0128 */
  FB_STDARRAY(struct BuoyantPartsData) BuoyantParts; /* 0x0130 */
  FB_HANDLE(class ObjectBlueprint) RagdollModel; /* 0x0138 */
  FB_UINT32 PositionPhysicsBodyIndex; /* 0x0140 */
  FB_BOOLEAN UseServerRagdoll; /* 0x0144 */
  FB_BOOLEAN ForceSetAnimTrajectory; /* 0x0145 */
  FB_BOOLEAN AllowClientTriggerOnBlend; /* 0x0146 */
  FB_BOOLEAN ForceSettleOnWorldCollision; /* 0x0147 */
  char pad_0148[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0150 */
#pragma pack(pop)

static_assert(sizeof(RagdollComponentData) == 336);

}
