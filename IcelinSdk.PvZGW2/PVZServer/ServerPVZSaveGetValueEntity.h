#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1EB7
   TypeInfo Kind:    EntityClassInfo
   ClassId:          05A0
   VfTable:          0000000000000000
   Address (Base):   000000014312F250
*/
class ServerPVZSaveGetValueEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x0040];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */

static_assert(sizeof(ServerPVZSaveGetValueEntity) == 96);

}
