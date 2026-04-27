#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntityData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 0000000142855C48
   RuntimeId:        187A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B87
   VfTable:          00000001422BB7E8
   Address (Base):   00000001430BFA70
*/
#pragma pack(push, 16)
class MeshProxyEntityData : public SpatialEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 BoundingBoxSizeOffsetMax; /* 0x0060 */
  Vec3 BoundingBoxSizeOffsetMin; /* 0x0070 */
  Vec3 BoundingBoxPositionOffset; /* 0x0080 */
  FB_HANDLE(class MeshAsset) Mesh; /* 0x0090 */
  FB_STDARRAY(struct LinearTransform) BasePoseTransforms; /* 0x0098 */
  FB_BOOLEAN Visible; /* 0x00A0 */
  char pad_00A1[0x000F];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B0 */
#pragma pack(pop)

static_assert(sizeof(MeshProxyEntityData) == 176);

}
