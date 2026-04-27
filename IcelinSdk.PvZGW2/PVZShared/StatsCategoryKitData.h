#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/StatsCategoryGuidData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869C48
   RuntimeId:        250B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EAA
   VfTable:          0000000142355940
   Address (Base):   0000000143107170
*/
#pragma pack(push, 8)
class StatsCategoryKitData : public StatsCategoryGuidData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 FirstCustomizationId; /* 0x0040 */
  char pad_0044[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(StatsCategoryKitData) == 72);

}
