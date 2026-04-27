#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/PresenceServiceData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142858108
   RuntimeId:        19D6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06DF
   VfTable:          00000001422D50B8
   Address (Base):   00000001430FA5D0
*/
#pragma pack(push, 8)
class PresenceStatisticsServiceData : public PresenceServiceData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PresenceStatisticsServiceData) == 24);

}
