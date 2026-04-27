#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientCameraEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1B9A
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0584
   VfTable:          0000000000000000
   Address (Base):   0000000143137310
*/
class ClientPVZCameraEntity : public ClientCameraEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0068 */

static_assert(sizeof(ClientPVZCameraEntity) == 104);

}
