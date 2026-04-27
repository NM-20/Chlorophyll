#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        137A
   TypeInfo Kind:    EntityClassInfo
   ClassId:          035D
   VfTable:          0000000000000000
   Address (Base):   00000001431388F0
*/
class ServerSyncedBoolEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x0050];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */

static_assert(sizeof(ServerSyncedBoolEntity) == 112);

}
