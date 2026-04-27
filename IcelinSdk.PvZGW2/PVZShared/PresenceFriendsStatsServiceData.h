#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/PresenceServiceData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286BBC0
   RuntimeId:        268E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06DE
   VfTable:          000000014235A990
   Address (Base):   00000001431062D0
*/
#pragma pack(push, 8)
class PresenceFriendsStatsServiceData : public PresenceServiceData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PresenceFriendsStatsServiceData) == 24);

}
