#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientSpawnEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0B00
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0309
   VfTable:          0000000000000000
   Address (Base):   0000000143102310
*/
class ClientCharacterSpawnEntity : public ClientSpawnEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0160[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0170 */

static_assert(sizeof(ClientCharacterSpawnEntity) == 368);

}
