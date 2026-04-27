#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityEvent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0BEF
   TypeInfo Kind:    ClassInfo
   ClassId:          05C9
   VfTable:          0000000000000000
   Address (Base):   00000001430F3DD0
*/
class PlayerEventBase : public EntityEvent
{
public:
  typedef struct ClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */

static_assert(sizeof(PlayerEventBase) == 16);

}
