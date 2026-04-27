#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0A59
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0401
   VfTable:          0000000000000000
   Address (Base):   000000014313CC70
*/
class ClientObjectiveEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x00D8];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00F8 */

static_assert(sizeof(ClientObjectiveEntity) == 248);

}
