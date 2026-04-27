#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/PresenceRequestParameters.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1B00
   TypeInfo Kind:    ClassInfo
   ClassId:          003B
   VfTable:          0000000000000000
   Address (Base):   00000001431248A0
*/
class PresenceCheckPermissionsForMultipleUsersRequestParameters : public PresenceRequestParameters
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0018[0x0048];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */

static_assert(sizeof(PresenceCheckPermissionsForMultipleUsersRequestParameters) == 96);

}
