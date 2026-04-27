#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityEvent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0BEE
   TypeInfo Kind:    ClassInfo
   ClassId:          05D2
   VfTable:          0000000000000000
   Address (Base):   00000001430D27E0
*/
class MoveParameterEvent : public EntityEvent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0010[0x0180];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0190 */

static_assert(sizeof(MoveParameterEvent) == 400);

}
