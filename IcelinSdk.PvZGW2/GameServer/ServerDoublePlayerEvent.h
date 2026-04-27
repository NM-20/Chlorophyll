#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerPlayerEvent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0C92
   TypeInfo Kind:    ClassInfo
   ClassId:          05CD
   VfTable:          0000000000000000
   Address (Base):   00000001430BEA90
*/
class ServerDoublePlayerEvent : public ServerPlayerEvent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0028[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */

static_assert(sizeof(ServerDoublePlayerEvent) == 48);

}
