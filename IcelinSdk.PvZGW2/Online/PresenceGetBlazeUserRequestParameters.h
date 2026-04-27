#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/PresenceRequestParameters.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1AF4
   TypeInfo Kind:    ClassInfo
   ClassId:          004D
   VfTable:          0000000000000000
   Address (Base):   0000000143120D90
*/
class PresenceGetBlazeUserRequestParameters : public PresenceRequestParameters
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0018[0x00A8];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00C0 */

static_assert(sizeof(PresenceGetBlazeUserRequestParameters) == 192);

}
