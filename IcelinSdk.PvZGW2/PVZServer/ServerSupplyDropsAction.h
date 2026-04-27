#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/ServerPVZCommanderAction.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1F1E
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0274
   VfTable:          0000000000000000
   Address (Base):   000000014312D810
*/
class ServerSupplyDropsAction : public ServerPVZCommanderAction
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0080[0x0510];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0590 */

static_assert(sizeof(ServerSupplyDropsAction) == 1424);

}
