#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/OBBData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142850AD8
   RuntimeId:        13E9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          096D
   VfTable:          000000014227C500
   Address (Base):   000000014310F930
*/
#pragma pack(push, 16)
class PathfindingNavMeshVolumeData : public OBBData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class PathfindingObjectCategoryAsset) Category; /* 0x0070 */
  char pad_0078[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(PathfindingNavMeshVolumeData) == 128);

}
