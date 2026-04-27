#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZCommanderActionBaseData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863288
   RuntimeId:        2106
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A6A
   VfTable:          0000000142353DA0
   Address (Base):   00000001430E6B80
*/
#pragma pack(push, 8)
class PVZDefenseActivationActionData : public PVZCommanderActionBaseData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(PVZDefenseActivationActionData) == 48);

}
