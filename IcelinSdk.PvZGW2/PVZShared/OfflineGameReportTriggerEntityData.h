#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864F58
   RuntimeId:        2272
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A9D
   VfTable:          0000000142351AD0
   Address (Base):   00000001430E7060
*/
#pragma pack(push, 8)
class OfflineGameReportTriggerEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(OfflineGameReportTriggerEntityData) == 24);

}
