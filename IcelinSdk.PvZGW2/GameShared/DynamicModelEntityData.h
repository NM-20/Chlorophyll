#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/DynamicGamePhysicsEntityData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284A7A0
   RuntimeId:        0EA8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B21
   VfTable:          0000000142264398
   Address (Base):   00000001430D0DA0
*/
#pragma pack(push, 16)
class DynamicModelEntityData : public DynamicGamePhysicsEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class MeshAsset) Mesh; /* 0x0090 */
  FB_UINT32 DestructiblePartCount; /* 0x0098 */
  FB_UINT32 BoneCount; /* 0x009C */
  FB_STDARRAY(struct LinearTransform) BasePoseTransforms; /* 0x00A0 */
  FB_BOOLEAN NoCollision; /* 0x00A8 */
  FB_BOOLEAN ShouldUpdate; /* 0x00A9 */
  FB_BOOLEAN AutoDestroyAllowed; /* 0x00AA */
  char pad_00AB[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B0 */
#pragma pack(pop)

static_assert(sizeof(DynamicModelEntityData) == 176);

}
