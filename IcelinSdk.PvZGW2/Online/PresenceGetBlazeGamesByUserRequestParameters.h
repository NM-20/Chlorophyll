#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/PresenceRequestParameters.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1AF3
   TypeInfo Kind:    ClassInfo
   ClassId:          002A
   VfTable:          0000000000000000
   Address (Base):   0000000143120DE0
*/
class PresenceGetBlazeGamesByUserRequestParameters : public PresenceRequestParameters
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0018[0x0048];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */

static_assert(sizeof(PresenceGetBlazeGamesByUserRequestParameters) == 96);

}
