#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerGameComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1EF7
   TypeInfo Kind:    ClassInfo
   ClassId:          01D0
   VfTable:          0000000000000000
   Address (Base):   00000001430DD6F0
*/
class ServerBuffApplicatorComponent : public ServerGameComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0030[0x0020];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */

static_assert(sizeof(ServerBuffApplicatorComponent) == 80);

}
