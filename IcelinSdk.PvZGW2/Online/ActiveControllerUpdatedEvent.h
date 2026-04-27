#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/PresenceEvent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1AD0
   TypeInfo Kind:    ClassInfo
   ClassId:          0061
   VfTable:          0000000000000000
   Address (Base):   000000014311EC10
*/
class ActiveControllerUpdatedEvent : public PresenceEvent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0010[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */

static_assert(sizeof(ActiveControllerUpdatedEvent) == 24);

}
