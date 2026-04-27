#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/ServerPVZCommanderAction.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1F1D
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0275
   VfTable:          0000000000000000
   Address (Base):   000000014312D8B0
*/
class ServerSpotTargetsAction : public ServerPVZCommanderAction
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0080[0x0510];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0590 */

static_assert(sizeof(ServerSpotTargetsAction) == 1424);

}
