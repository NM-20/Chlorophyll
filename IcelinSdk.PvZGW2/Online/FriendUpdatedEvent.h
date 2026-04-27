#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/PresenceEvent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1ACE
   TypeInfo Kind:    ClassInfo
   ClassId:          005C
   VfTable:          0000000000000000
   Address (Base):   00000001430D2330
*/
class FriendUpdatedEvent : public PresenceEvent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0010[0x0018];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */

static_assert(sizeof(FriendUpdatedEvent) == 40);

}
