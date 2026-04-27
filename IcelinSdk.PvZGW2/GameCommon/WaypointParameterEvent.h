#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityEvent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0BF1
   TypeInfo Kind:    ClassInfo
   ClassId:          05D1
   VfTable:          0000000000000000
   Address (Base):   0000000143124B20
*/
class WaypointParameterEvent : public EntityEvent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0010[0x0020];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */

static_assert(sizeof(WaypointParameterEvent) == 48);

}
