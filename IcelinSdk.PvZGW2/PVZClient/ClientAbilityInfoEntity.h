#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1C7C
   TypeInfo Kind:    EntityClassInfo
   ClassId:          04DA
   VfTable:          0000000000000000
   Address (Base):   0000000143102770
*/
class ClientAbilityInfoEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x00D8];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00F8 */

static_assert(sizeof(ClientAbilityInfoEntity) == 248);

}
