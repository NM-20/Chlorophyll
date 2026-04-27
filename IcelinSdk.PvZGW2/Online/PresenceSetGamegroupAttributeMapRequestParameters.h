#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/PresenceRequestParameters.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1AE9
   TypeInfo Kind:    ClassInfo
   ClassId:          001F
   VfTable:          0000000000000000
   Address (Base):   000000014311E7B0
*/
class PresenceSetGamegroupAttributeMapRequestParameters : public PresenceRequestParameters
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0018[0x0040];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */

static_assert(sizeof(PresenceSetGamegroupAttributeMapRequestParameters) == 88);

}
