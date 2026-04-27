#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/PresenceRequestParameters.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1AEA
   TypeInfo Kind:    ClassInfo
   ClassId:          0027
   VfTable:          0000000000000000
   Address (Base):   000000014311E760
*/
class PresenceSetGamegroupMemberAttributeRequestParameters : public PresenceRequestParameters
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0018[0x0028];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */

static_assert(sizeof(PresenceSetGamegroupMemberAttributeRequestParameters) == 64);

}
