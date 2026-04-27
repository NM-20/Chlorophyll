#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientCharacterEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1B9B
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02D4
   VfTable:          0000000000000000
   Address (Base):   00000001430B4DD0
*/
class ClientPVZCharacterEntity : public ClientCharacterEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0308[0x0C88];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0F90 */

static_assert(sizeof(ClientPVZCharacterEntity) == 3984);

}
