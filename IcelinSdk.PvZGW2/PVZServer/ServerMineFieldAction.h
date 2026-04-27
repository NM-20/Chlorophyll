#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/ServerPVZCommanderAction.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1F1A
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0276
   VfTable:          0000000000000000
   Address (Base):   000000014312D9F0
*/
class ServerMineFieldAction : public ServerPVZCommanderAction
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */

static_assert(sizeof(ServerMineFieldAction) == 128);

}
