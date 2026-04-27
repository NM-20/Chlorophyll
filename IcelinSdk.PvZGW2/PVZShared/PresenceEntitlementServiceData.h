#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/PresenceServiceData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286BAA0
   RuntimeId:        267C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06DC
   VfTable:          000000014235A970
   Address (Base):   00000001430F76F0
*/
#pragma pack(push, 8)
class PresenceEntitlementServiceData : public PresenceServiceData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PresenceEntitlementServiceData) == 24);

}
