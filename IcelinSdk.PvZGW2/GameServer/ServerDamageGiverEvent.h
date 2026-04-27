#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerPlayerEvent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0C91
   TypeInfo Kind:    ClassInfo
   ClassId:          05CE
   VfTable:          0000000000000000
   Address (Base):   000000014311F480
*/
class ServerDamageGiverEvent : public ServerPlayerEvent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0028[0x0070];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0098 */

static_assert(sizeof(ServerDamageGiverEvent) == 152);

}
