#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Blueprint.h>
#include <IcelinSdk.PvZGW2/Morph/ModelAssetType.h>

namespace fb
{

/* TypeInfo (Array): 000000014284FD38
   RuntimeId:        1347
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07A3
   VfTable:          0000000142277070
   Address (Base):   0000000143110170
*/
#pragma pack(push, 8)
class MorphTargetsBlueprint : public Blueprint
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class MeshAsset) Mesh; /* 0x0040 */
  ModelAssetType ModelAssetType; /* 0x0048 */
  char pad_004C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(MorphTargetsBlueprint) == 80);

}
