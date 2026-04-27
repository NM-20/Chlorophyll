#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientGameComponentEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0AF8
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02D6
   VfTable:          0000000000000000
   Address (Base):   00000001431274B0
*/
class ClientDynamicFireEntity : public ClientGameComponentEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0060[0x0350];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x03B0 */

static_assert(sizeof(ClientDynamicFireEntity) == 944);

}
