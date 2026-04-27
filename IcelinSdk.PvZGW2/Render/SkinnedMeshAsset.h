#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Render/MeshAsset.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 0000000142852C40
   RuntimeId:        15EC
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0623
   VfTable:          00000001422A17A0
   Address (Base):   00000001430FB6B0
*/
#pragma pack(push, 16)
class SkinnedMeshAsset : public MeshAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 BoundingBoxPositionOffset; /* 0x0070 */
  Vec3 BoundingBoxSizeOffset; /* 0x0080 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(SkinnedMeshAsset) == 144);

}
