#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1ECA
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0558
   VfTable:          0000000000000000
   Address (Base):   000000014312EE90
*/
class ServerPVZIndoorAreaTriggerEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x0050];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */

static_assert(sizeof(ServerPVZIndoorAreaTriggerEntity) == 112);

}
