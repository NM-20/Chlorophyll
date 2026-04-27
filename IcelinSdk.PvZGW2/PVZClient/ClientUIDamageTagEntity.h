#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1C21
   TypeInfo Kind:    EntityClassInfo
   ClassId:          03EE
   VfTable:          0000000000000000
   Address (Base):   0000000143134750
*/
class ClientUIDamageTagEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x0C60];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0C80 */

static_assert(sizeof(ClientUIDamageTagEntity) == 3200);

}
