#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientStaticModelEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        01D0
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02BE
   VfTable:          0000000000000000
   Address (Base):   00000001431420D0
*/
class ClientCableEntity : public ClientStaticModelEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0140 */

static_assert(sizeof(ClientCableEntity) == 320);

}
