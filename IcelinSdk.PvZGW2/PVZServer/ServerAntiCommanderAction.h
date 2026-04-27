#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/ServerPVZCommanderAction.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1F15
   TypeInfo Kind:    EntityClassInfo
   ClassId:          027C
   VfTable:          0000000000000000
   Address (Base):   000000014312DD10
*/
class ServerAntiCommanderAction : public ServerPVZCommanderAction
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */

static_assert(sizeof(ServerAntiCommanderAction) == 128);

}
