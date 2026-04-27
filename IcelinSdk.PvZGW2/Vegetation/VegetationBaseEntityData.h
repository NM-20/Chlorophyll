#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentEntityData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428554C8
   RuntimeId:        1818
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B06
   VfTable:          00000001422B8C48
   Address (Base):   00000001430FB2F0
*/
#pragma pack(push, 16)
class VegetationBaseEntityData : public GameComponentEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct LinearTransform) BasePoseTransforms; /* 0x0080 */
  FB_STDARRAY(FB_INT32) Hierarchy; /* 0x0088 */
  FB_STDARRAY(FB_INT32) PartIndirection; /* 0x0090 */
  FB_STDARRAY(FB_INT32) PartHierarchy; /* 0x0098 */
  FB_STDARRAY(FB_FLOAT32) PartInitialHealths; /* 0x00A0 */
  FB_STDARRAY(FB_BOOLEAN) BoneIsStem; /* 0x00A8 */
  FB_HANDLE(class MeshAsset) Mesh; /* 0x00B0 */
  FB_HANDLE(class SkinnedMeshAsset) ShadowMesh; /* 0x00B8 */
  FB_HANDLE(class PhysicsEntityData) PhysicsData; /* 0x00C0 */
  char pad_00C8[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00D0 */
#pragma pack(pop)

static_assert(sizeof(VegetationBaseEntityData) == 208);

}
