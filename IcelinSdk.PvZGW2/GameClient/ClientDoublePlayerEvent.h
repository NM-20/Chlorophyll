#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientPlayerEvent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0A4F
   TypeInfo Kind:    ClassInfo
   ClassId:          05CB
   VfTable:          0000000000000000
   Address (Base):   00000001430D2AB0
*/
class ClientDoublePlayerEvent : public ClientPlayerEvent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0018[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */

static_assert(sizeof(ClientDoublePlayerEvent) == 32);

}
