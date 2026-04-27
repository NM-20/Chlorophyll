#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/PresenceRequestParameters.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1CE9
   TypeInfo Kind:    ClassInfo
   ClassId:          0034
   VfTable:          0000000000000000
   Address (Base):   000000014311E210
*/
class PresenceGetGamesWithFriendsRequestParameters : public PresenceRequestParameters
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0018[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */

static_assert(sizeof(PresenceGetGamesWithFriendsRequestParameters) == 72);

}
