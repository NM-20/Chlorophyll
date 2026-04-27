#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/PresenceEvent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1AD4
   TypeInfo Kind:    ClassInfo
   ClassId:          0060
   VfTable:          0000000000000000
   Address (Base):   0000000143124AD0
*/
class PartyEvent : public PresenceEvent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0010[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */

static_assert(sizeof(PartyEvent) == 32);

}
