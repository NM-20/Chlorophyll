#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerGameComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1EDB
   TypeInfo Kind:    ClassInfo
   ClassId:          0201
   VfTable:          0000000000000000
   Address (Base):   00000001430CDA00
*/
class ServerPVZCharacterRollingComponent : public ServerGameComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0030[0x0090];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00C0 */

static_assert(sizeof(ServerPVZCharacterRollingComponent) == 192);

}
