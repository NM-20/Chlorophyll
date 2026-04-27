#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerControllableEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0C5C
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02E2
   VfTable:          0000000000000000
   Address (Base):   00000001430B4B00
*/
class ServerCharacterEntity : public ServerControllableEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_01F0[0x0290];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0480 */

static_assert(sizeof(ServerCharacterEntity) == 1152);

}
