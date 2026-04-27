#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/GamePhysicsEntityData.h>
#include <IcelinSdk.PvZGW2/GameShared/StaticModelNetworkInfo.h>

namespace fb
{

/* TypeInfo (Array): 000000014284B910
   RuntimeId:        0F8E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B2A
   VfTable:          00000001422686A0
   Address (Base):   00000001430BD6C0
*/
#pragma pack(push, 16)
class StaticModelEntityData : public GamePhysicsEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class PartLinkData) PartLinks; /* 0x0090 */
  FB_HANDLE(class MeshAsset) Mesh; /* 0x0098 */
  FB_UINT32 BoneCount; /* 0x00A0 */
  char pad_00A4[0x0004];
  FB_STDARRAY(struct LinearTransform) BasePoseTransforms; /* 0x00A8 */
  FB_STDARRAY(struct PhysicsPartInfo) PhysicsPartInfos; /* 0x00B0 */
  StaticModelNetworkInfo NetworkInfo; /* 0x00B8 */
  FB_FLOAT32 ExplosionSensitiveDistance; /* 0x00D8 */
  FB_BOOLEAN ExcludeFromNearbyObjectDestruction; /* 0x00DC */
  FB_BOOLEAN AnimatePhysics; /* 0x00DD */
  FB_BOOLEAN TerrainShaderNodesEnable; /* 0x00DE */
  FB_BOOLEAN ExplosionSensitive; /* 0x00DF */
  FB_BOOLEAN Visible; /* 0x00E0 */
  char pad_00E1[0x000F];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00F0 */
#pragma pack(pop)

static_assert(sizeof(StaticModelEntityData) == 240);

}
