#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZResurrectionActionData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863228
   RuntimeId:        2100
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A66
   VfTable:          0000000142353E48
   Address (Base):   00000001430E6CA0
*/
#pragma pack(push, 8)
class PVZSupplyDropsActionData : public PVZResurrectionActionData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(PVZSupplyDropsActionData) == 56);

}
