#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0D0E
   TypeInfo Kind:    EntityClassInfo
   ClassId:          03E0
   VfTable:          0000000000000000
   Address (Base):   0000000143124260
*/
class ServerFbProxyControllerEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x0C80];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0CA0 */

static_assert(sizeof(ServerFbProxyControllerEntity) == 3232);

}
