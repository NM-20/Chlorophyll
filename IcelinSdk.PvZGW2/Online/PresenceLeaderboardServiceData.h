#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/PresenceServiceData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428580C8
   RuntimeId:        19D2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06E7
   VfTable:          00000001422D5078
   Address (Base):   00000001430FA690
*/
#pragma pack(push, 8)
class PresenceLeaderboardServiceData : public PresenceServiceData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PresenceLeaderboardServiceData) == 24);

}
