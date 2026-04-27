#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1C18
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0513
   VfTable:          0000000000000000
   Address (Base):   0000000143134C50
*/
class ClientPVZUICustomize3DModelEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x0078];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0098 */

static_assert(sizeof(ClientPVZUICustomize3DModelEntity) == 152);

}
