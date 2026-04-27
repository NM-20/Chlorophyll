#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1C07
   TypeInfo Kind:    EntityClassInfo
   ClassId:          032D
   VfTable:          0000000000000000
   Address (Base):   00000001431356F0
*/
class ClientNISViewModeSetterEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */

static_assert(sizeof(ClientNISViewModeSetterEntity) == 48);

}
