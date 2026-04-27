#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865738
   RuntimeId:        22E9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07CC
   VfTable:          0000000142351300
   Address (Base):   0000000143108010
*/
#pragma pack(push, 8)
class PVZInventoryReportingData : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PVZInventoryReportingData) == 24);

}
