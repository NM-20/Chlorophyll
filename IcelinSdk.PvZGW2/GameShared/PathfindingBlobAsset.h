#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 00000001428490C0
   RuntimeId:        0D4E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          070B
   VfTable:          00000001422604E8
   Address (Base):   0000000143114850
*/
#pragma pack(push, 8)
class PathfindingBlobAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct PathfindingBlob) Blobs; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(PathfindingBlobAsset) == 32);

}
