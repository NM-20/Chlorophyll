#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameCommon/PlayerEventBase.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0C93
   TypeInfo Kind:    ClassInfo
   ClassId:          05CC
   VfTable:          0000000000000000
   Address (Base):   00000001430B4D80
*/
class ServerPlayerEvent : public PlayerEventBase
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0010[0x0018];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */

static_assert(sizeof(ServerPlayerEvent) == 40);

}
