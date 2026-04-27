#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/StatsCategoryGuidData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869B48
   RuntimeId:        24FB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EAB
   VfTable:          0000000142355900
   Address (Base):   0000000143107410
*/
#pragma pack(push, 8)
class StatsCategoryVehicleData : public StatsCategoryGuidData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 FirstVehicleId; /* 0x0040 */
  char pad_0044[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(StatsCategoryVehicleData) == 72);

}
