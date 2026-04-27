#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientGameComponentEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1BAB
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02B4
   VfTable:          0000000000000000
   Address (Base):   00000001430D12E0
*/
class ClientPVZCharacterWeapon : public ClientGameComponentEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0060[0x0210];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0270 */

static_assert(sizeof(ClientPVZCharacterWeapon) == 624);

}
