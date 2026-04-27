#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/ServerPVZCommanderAction.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1F1C
   TypeInfo Kind:    EntityClassInfo
   ClassId:          027A
   VfTable:          0000000000000000
   Address (Base):   0000000143125570
*/
class ServerResurrectionAction : public ServerPVZCommanderAction
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0080[0x0510];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0590 */

static_assert(sizeof(ServerResurrectionAction) == 1424);

}
