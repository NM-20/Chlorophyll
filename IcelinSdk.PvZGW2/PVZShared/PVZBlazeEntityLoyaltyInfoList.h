#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014286FC50
   RuntimeId:        2928
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          05E3
   VfTable:          000000014236DE30
   Address (Base):   00000001430D93B0
*/
#pragma pack(push, 8)
class PVZBlazeEntityLoyaltyInfoList : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct PVZBlazeEntityLoyaltyInfo) LoyaltyInfos; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PVZBlazeEntityLoyaltyInfoList) == 24);

}
