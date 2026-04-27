#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014286BCE0
   RuntimeId:        26A0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07BB
   VfTable:          000000014235A918
   Address (Base):   0000000143106150
*/
#pragma pack(push, 8)
class CommunityPortalAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(CommunityPortalAsset) == 24);

}
