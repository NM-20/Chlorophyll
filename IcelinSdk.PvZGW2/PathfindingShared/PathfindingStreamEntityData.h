#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 000000014287A058
   RuntimeId:        2E74
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C0D
   VfTable:          00000001423E4458
   Address (Base):   0000000143102B50
*/
#pragma pack(push, 8)
class PathfindingStreamEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class PathfindingBlobAsset) PathfindingBlobs; /* 0x0018 */
  FB_BOOLEAN Autoload; /* 0x0020 */
  char pad_0021[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(PathfindingStreamEntityData) == 40);

}
