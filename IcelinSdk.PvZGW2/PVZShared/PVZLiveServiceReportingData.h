#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865758
   RuntimeId:        22EB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07F8
   VfTable:          00000001423512B8
   Address (Base):   0000000143107FB0
*/
#pragma pack(push, 8)
class PVZLiveServiceReportingData : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PVZLiveServiceReportingData) == 24);

}
