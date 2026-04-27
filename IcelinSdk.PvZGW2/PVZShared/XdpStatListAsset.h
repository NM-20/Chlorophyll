#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014286A008
   RuntimeId:        2547
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07E2
   VfTable:          0000000142355760
   Address (Base):   0000000143106CF0
*/
#pragma pack(push, 8)
class XdpStatListAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(XdpStatListAsset) == 24);

}
