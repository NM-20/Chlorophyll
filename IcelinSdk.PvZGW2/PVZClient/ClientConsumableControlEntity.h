#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1C83
   TypeInfo Kind:    EntityClassInfo
   ClassId:          05AF
   VfTable:          0000000000000000
   Address (Base):   0000000143125D90
*/
class ClientConsumableControlEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x1070];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x1090 */

static_assert(sizeof(ClientConsumableControlEntity) == 4240);

}
