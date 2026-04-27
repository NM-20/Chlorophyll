#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/PresenceServiceData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286BB40
   RuntimeId:        2686
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06D9
   VfTable:          000000014235A9C0
   Address (Base):   0000000143106390
*/
#pragma pack(push, 8)
class PresenceCalendarServiceData : public PresenceServiceData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PresenceCalendarServiceData) == 24);

}
