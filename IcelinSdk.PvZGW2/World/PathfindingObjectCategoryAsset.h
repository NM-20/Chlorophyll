#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142855568
   RuntimeId:        1820
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          082E
   VfTable:          00000001422B97E8
   Address (Base):   000000014310D9B0
*/
#pragma pack(push, 8)
class PathfindingObjectCategoryAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PathfindingObjectCategoryAsset) == 24);

}
