#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerStaticModelEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0BFF
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02E8
   VfTable:          0000000000000000
   Address (Base):   000000014313AA10
*/
class ServerInteractableStaticModelEntity : public ServerStaticModelEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0100 */

static_assert(sizeof(ServerInteractableStaticModelEntity) == 256);

}
