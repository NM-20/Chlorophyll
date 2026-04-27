#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142861A90
   RuntimeId:        1FC5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0828
   VfTable:          0000000142344308
   Address (Base):   0000000143109690
*/
#pragma pack(push, 8)
class InventoryExportAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(InventoryExportAsset) == 24);

}
