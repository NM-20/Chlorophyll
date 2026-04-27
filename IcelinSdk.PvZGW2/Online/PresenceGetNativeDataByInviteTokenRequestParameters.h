#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/PresenceRequestParameters.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1AF5
   TypeInfo Kind:    ClassInfo
   ClassId:          0026
   VfTable:          0000000000000000
   Address (Base):   000000014311E530
*/
class PresenceGetNativeDataByInviteTokenRequestParameters : public PresenceRequestParameters
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0018[0x0068];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */

static_assert(sizeof(PresenceGetNativeDataByInviteTokenRequestParameters) == 128);

}
