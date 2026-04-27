#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1C8A
   TypeInfo Kind:    EntityClassInfo
   ClassId:          03AF
   VfTable:          0000000000000000
   Address (Base):   0000000143130B50
*/
class ClientFlyingHeightOverrideEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */

static_assert(sizeof(ClientFlyingHeightOverrideEntity) == 48);

}
