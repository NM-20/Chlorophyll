#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerCharacterHealthComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1ED9
   TypeInfo Kind:    ClassInfo
   ClassId:          023C
   VfTable:          0000000000000000
   Address (Base):   00000001430B5560
*/
class ServerPVZCharacterHealthComponent : public ServerCharacterHealthComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0078[0x13C8];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x1440 */

static_assert(sizeof(ServerPVZCharacterHealthComponent) == 5184);

}
