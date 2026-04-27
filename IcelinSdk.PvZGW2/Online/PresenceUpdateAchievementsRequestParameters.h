#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/PresenceRequestParameters.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1AD8
   TypeInfo Kind:    ClassInfo
   ClassId:          0030
   VfTable:          0000000000000000
   Address (Base):   0000000143120F70
*/
class PresenceUpdateAchievementsRequestParameters : public PresenceRequestParameters
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0018[0x0040];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */

static_assert(sizeof(PresenceUpdateAchievementsRequestParameters) == 88);

}
