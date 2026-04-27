#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientGameComponentEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1C71
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02D8
   VfTable:          0000000000000000
   Address (Base):   00000001431317D0
*/
class ClientPlayerTransformEntity : public ClientGameComponentEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0060[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */

static_assert(sizeof(ClientPlayerTransformEntity) == 112);

}
