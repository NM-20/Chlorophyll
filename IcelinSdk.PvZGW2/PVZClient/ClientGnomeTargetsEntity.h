#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1C8B
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0493
   VfTable:          0000000000000000
   Address (Base):   0000000143130AB0
*/
class ClientGnomeTargetsEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x0018];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */

static_assert(sizeof(ClientGnomeTargetsEntity) == 56);

}
