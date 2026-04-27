#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerGameComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0C5A
   TypeInfo Kind:    ClassInfo
   ClassId:          020B
   VfTable:          0000000000000000
   Address (Base):   00000001430BD9E0
*/
class ServerVehicleEntryListenerComponent : public ServerGameComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0030[0x0290];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x02C0 */

static_assert(sizeof(ServerVehicleEntryListenerComponent) == 704);

}
