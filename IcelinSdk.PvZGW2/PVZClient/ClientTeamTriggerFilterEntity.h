#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/TeamTriggerFilterEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1C7B
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0529
   VfTable:          0000000000000000
   Address (Base):   0000000143131370
*/
class ClientTeamTriggerFilterEntity : public TeamTriggerFilterEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */

static_assert(sizeof(ClientTeamTriggerFilterEntity) == 72);

}
