#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerHumanPlayerProxyEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0CE7
   TypeInfo Kind:    EntityClassInfo
   ClassId:          03C4
   VfTable:          0000000000000000
   Address (Base):   0000000143126FB0
*/
class ServerHumanPlayerEntity : public ServerHumanPlayerProxyEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */

static_assert(sizeof(ServerHumanPlayerEntity) == 48);

}
