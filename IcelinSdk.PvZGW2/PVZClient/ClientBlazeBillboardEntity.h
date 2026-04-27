#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1C98
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0477
   VfTable:          0000000000000000
   Address (Base):   00000001431308D0
*/
class ClientBlazeBillboardEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x0090];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B0 */

static_assert(sizeof(ClientBlazeBillboardEntity) == 176);

}
