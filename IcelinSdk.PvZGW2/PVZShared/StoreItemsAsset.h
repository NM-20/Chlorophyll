#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869F08
   RuntimeId:        2537
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          082F
   VfTable:          0000000142355800
   Address (Base):   0000000143106E10
*/
#pragma pack(push, 8)
class StoreItemsAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(StoreItemsAsset) == 24);

}
