#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/PresenceRequestParameters.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1AFB
   TypeInfo Kind:    ClassInfo
   ClassId:          004A
   VfTable:          0000000000000000
   Address (Base):   0000000143120CA0
*/
class PresenceGetProfileRequestParameters : public PresenceRequestParameters
{
public:
  typedef struct ClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */

static_assert(sizeof(PresenceGetProfileRequestParameters) == 24);

}
