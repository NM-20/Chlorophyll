#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerMeshComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0C72
   TypeInfo Kind:    ClassInfo
   ClassId:          01D7
   VfTable:          0000000000000000
   Address (Base):   00000001430D2650
*/
class ServerTrackComponent : public ServerMeshComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0030[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */

static_assert(sizeof(ServerTrackComponent) == 56);

}
