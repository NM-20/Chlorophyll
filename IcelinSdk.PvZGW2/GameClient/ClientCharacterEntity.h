#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientControllableEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0A37
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02D3
   VfTable:          0000000000000000
   Address (Base):   00000001430B5420
*/
class ClientCharacterEntity : public ClientControllableEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_01D8[0x0130];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0308 */

static_assert(sizeof(ClientCharacterEntity) == 776);

}
