#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0AEB
   TypeInfo Kind:    EntityClassInfo
   ClassId:          05A2
   VfTable:          0000000000000000
   Address (Base):   00000001431029F0
*/
class ClientFbProxyControllerEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x0CB0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0CD0 */

static_assert(sizeof(ClientFbProxyControllerEntity) == 3280);

}
