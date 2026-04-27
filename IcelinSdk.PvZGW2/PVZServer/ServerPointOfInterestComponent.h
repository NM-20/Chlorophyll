#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerGameComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1F03
   TypeInfo Kind:    ClassInfo
   ClassId:          01F7
   VfTable:          0000000000000000
   Address (Base):   00000001430DD600
*/
class ServerPointOfInterestComponent : public ServerGameComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0030[0x0150];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0180 */

static_assert(sizeof(ServerPointOfInterestComponent) == 384);

}
