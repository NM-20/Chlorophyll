#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerGameComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1F00
   TypeInfo Kind:    ClassInfo
   ClassId:          01DD
   VfTable:          0000000000000000
   Address (Base):   00000001430CD9B0
*/
class ServerAIAttractorComponent : public ServerGameComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0030[0x0068];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0098 */

static_assert(sizeof(ServerAIAttractorComponent) == 152);

}
