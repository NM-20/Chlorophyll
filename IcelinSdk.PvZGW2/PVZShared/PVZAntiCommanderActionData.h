#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZCommanderActionBaseData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863248
   RuntimeId:        2102
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A63
   VfTable:          0000000142353E80
   Address (Base):   00000001430E6C40
*/
#pragma pack(push, 8)
class PVZAntiCommanderActionData : public PVZCommanderActionBaseData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(PVZAntiCommanderActionData) == 48);

}
