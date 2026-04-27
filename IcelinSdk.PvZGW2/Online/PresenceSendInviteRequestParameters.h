#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/PresenceRequestParameters.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1AEE
   TypeInfo Kind:    ClassInfo
   ClassId:          003A
   VfTable:          0000000000000000
   Address (Base):   000000014311E670
*/
class PresenceSendInviteRequestParameters : public PresenceRequestParameters
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0018[0x0210];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0228 */

static_assert(sizeof(PresenceSendInviteRequestParameters) == 552);

}
