#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1C40
   TypeInfo Kind:    EntityClassInfo
   ClassId:          05A3
   VfTable:          0000000000000000
   Address (Base):   00000001431335D0
*/
class ClientUIInteractionInfoEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x00B0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00D0 */

static_assert(sizeof(ClientUIInteractionInfoEntity) == 208);

}
