#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/ServerResurrectionAction.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1F19
   TypeInfo Kind:    EntityClassInfo
   ClassId:          027B
   VfTable:          0000000000000000
   Address (Base):   000000014312DA90
*/
class ServerHealingAction : public ServerResurrectionAction
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0590 */

static_assert(sizeof(ServerHealingAction) == 1424);

}
