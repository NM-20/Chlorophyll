#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/PresenceRequestParameters.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1CE6
   TypeInfo Kind:    ClassInfo
   ClassId:          0050
   VfTable:          0000000000000000
   Address (Base):   0000000143124800
*/
class PresenceVerifyGrantEntitlementRequestParameters : public PresenceRequestParameters
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0018[0x0020];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */

static_assert(sizeof(PresenceVerifyGrantEntitlementRequestParameters) == 56);

}
