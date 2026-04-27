#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZCommanderActionBaseData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863268
   RuntimeId:        2104
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A69
   VfTable:          0000000142353E10
   Address (Base):   00000001430E6BE0
*/
#pragma pack(push, 8)
class PVZCaptureActionData : public PVZCommanderActionBaseData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(PVZCaptureActionData) == 48);

}
