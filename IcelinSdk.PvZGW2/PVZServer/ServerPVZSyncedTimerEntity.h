#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1F28
   TypeInfo Kind:    EntityClassInfo
   ClassId:          055F
   VfTable:          0000000000000000
   Address (Base):   00000001431252F0
*/
class ServerPVZSyncedTimerEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x0068];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0088 */

static_assert(sizeof(ServerPVZSyncedTimerEntity) == 136);

}
