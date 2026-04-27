#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/IndexRange.h>

namespace fb
{

/* TypeInfo (Array): 000000014284AE28
   RuntimeId:        0EFD
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C94A8
   Default Value:    000000014284AE40
*/
#pragma pack(push, 8)
struct StaticModelGroupMemberData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_STDARRAY(struct LinearTransform) InstanceTransforms; /* 0x0000 */
  FB_STDARRAY(FB_UINT32) InstanceObjectVariation; /* 0x0008 */
  FB_STDARRAY(struct RenderingOverrides) InstanceRenderingOverrides; /* 0x0010 */
  FB_STDARRAY(enum RadiosityTypeOverride) InstanceRadiosityTypeOverride; /* 0x0018 */
  FB_STDARRAY(FB_BOOLEAN) InstanceTerrainShaderNodesEnable; /* 0x0020 */
  FB_HANDLE(class GamePhysicsEntityData) MemberType; /* 0x0028 */
  FB_HANDLE(class MeshAsset) MeshAsset; /* 0x0030 */
  FB_UINT32 InstanceCount; /* 0x0038 */
  FB_UINT32 HealthStateEntityManagerId; /* 0x003C */
  IndexRange PhysicsPartRange; /* 0x0040 */
  FB_UINT32 PhysicsPartCountPerInstance; /* 0x0048 */
  IndexRange NetworkIdRange; /* 0x004C */
  FB_UINT32 NetworkIdCountPerInstance; /* 0x0054 */
  FB_UINT32 PartComponentCount; /* 0x0058 */
  char pad_005C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(StaticModelGroupMemberData) == 96);

}
