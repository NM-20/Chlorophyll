#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/PresenceRequestParameters.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1AE4
   TypeInfo Kind:    ClassInfo
   ClassId:          0021
   VfTable:          0000000000000000
   Address (Base):   000000014311E940
*/
class PresenceJoinGamegroupByOnlineNativeDataRequestParameters : public PresenceRequestParameters
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0018[0x0018];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */

static_assert(sizeof(PresenceJoinGamegroupByOnlineNativeDataRequestParameters) == 48);

}
