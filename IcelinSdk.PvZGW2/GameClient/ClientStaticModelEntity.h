#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientPhysicsEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        09EE
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02BC
   VfTable:          0000000000000000
   Address (Base):   00000001430BCC90
*/
class ClientStaticModelEntity : public ClientPhysicsEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0070[0x00D0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0140 */

static_assert(sizeof(ClientStaticModelEntity) == 320);

}
