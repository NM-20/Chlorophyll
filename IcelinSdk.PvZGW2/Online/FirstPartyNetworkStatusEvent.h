#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/PresenceEvent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1AD1
   TypeInfo Kind:    ClassInfo
   ClassId:          005A
   VfTable:          0000000000000000
   Address (Base):   00000001430DE230
*/
class FirstPartyNetworkStatusEvent : public PresenceEvent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0010[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */

static_assert(sizeof(FirstPartyNetworkStatusEvent) == 24);

}
