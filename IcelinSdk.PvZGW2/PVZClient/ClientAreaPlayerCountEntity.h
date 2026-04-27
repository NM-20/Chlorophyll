#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1C6B
   TypeInfo Kind:    EntityClassInfo
   ClassId:          036E
   VfTable:          0000000000000000
   Address (Base):   0000000143131B90
*/
class ClientAreaPlayerCountEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x00D0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00F0 */

static_assert(sizeof(ClientAreaPlayerCountEntity) == 240);

}
