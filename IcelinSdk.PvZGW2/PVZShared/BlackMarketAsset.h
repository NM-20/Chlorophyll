#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014286BC20
   RuntimeId:        2694
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06F8
   VfTable:          000000014235A8E8
   Address (Base):   0000000143106270
*/
#pragma pack(push, 8)
class BlackMarketAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(BlackMarketAsset) == 24);

}
