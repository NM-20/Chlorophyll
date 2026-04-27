#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849D48
   RuntimeId:        0E0E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          082A
   VfTable:          000000014225F6E8
   Address (Base):   0000000143114310
*/
#pragma pack(push, 8)
class PathfindingTypeAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 Index; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(PathfindingTypeAsset) == 32);

}
