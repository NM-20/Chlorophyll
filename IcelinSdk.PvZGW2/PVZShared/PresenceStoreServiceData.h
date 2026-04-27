#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/PresenceServiceData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286BBA0
   RuntimeId:        268C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06D7
   VfTable:          000000014235A9B0
   Address (Base):   00000001430F75D0
*/
#pragma pack(push, 8)
class PresenceStoreServiceData : public PresenceServiceData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PresenceStoreServiceData) == 24);

}
