#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/PresenceRequestParameters.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1AE6
   TypeInfo Kind:    ClassInfo
   ClassId:          0041
   VfTable:          0000000000000000
   Address (Base):   000000014311E8A0
*/
class PresenceLeaveGamegroupRequestParameters : public PresenceRequestParameters
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0018[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */

static_assert(sizeof(PresenceLeaveGamegroupRequestParameters) == 40);

}
