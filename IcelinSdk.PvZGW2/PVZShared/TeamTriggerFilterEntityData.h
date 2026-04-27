#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/TriggerFilterEntityData.h>
#include <IcelinSdk.PvZGW2/PVZShared/TeamTriggerFilterData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286D2D8
   RuntimeId:        27BB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C45
   VfTable:          0000000142365D60
   Address (Base):   00000001430D36D0
*/
#pragma pack(push, 8)
class TeamTriggerFilterEntityData : public TriggerFilterEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  TeamTriggerFilterData TeamFilterData; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(TeamTriggerFilterEntityData) == 32);

}
