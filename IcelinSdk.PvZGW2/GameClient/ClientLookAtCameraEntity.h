#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientCameraEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0A04
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0583
   VfTable:          0000000000000000
   Address (Base):   000000014313D850
*/
class ClientLookAtCameraEntity : public ClientCameraEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0068 */

static_assert(sizeof(ClientLookAtCameraEntity) == 104);

}
