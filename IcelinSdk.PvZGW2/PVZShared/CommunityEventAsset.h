#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014286BC80
   RuntimeId:        269A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07B2
   VfTable:          000000014235A8D8
   Address (Base):   00000001431061B0
*/
#pragma pack(push, 8)
class CommunityEventAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(CommunityEventAsset) == 24);

}
