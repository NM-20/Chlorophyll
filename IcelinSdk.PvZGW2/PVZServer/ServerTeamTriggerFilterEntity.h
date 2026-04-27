#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/TeamTriggerFilterEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1F47
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0528
   VfTable:          0000000000000000
   Address (Base):   000000014312C2D0
*/
class ServerTeamTriggerFilterEntity : public TeamTriggerFilterEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */

static_assert(sizeof(ServerTeamTriggerFilterEntity) == 72);

}
