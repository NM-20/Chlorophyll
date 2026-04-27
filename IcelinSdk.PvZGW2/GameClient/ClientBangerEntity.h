#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientPhysicsEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        09EA
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02BA
   VfTable:          0000000000000000
   Address (Base):   00000001430DFD60
*/
class ClientBangerEntity : public ClientPhysicsEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0070[0x0180];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x01F0 */

static_assert(sizeof(ClientBangerEntity) == 496);

}
