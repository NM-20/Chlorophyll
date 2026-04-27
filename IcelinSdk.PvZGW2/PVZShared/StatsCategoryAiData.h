#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/StatsCategoryGuidData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142868E70
   RuntimeId:        2439
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EAD
   VfTable:          00000001423560C0
   Address (Base):   0000000143107AD0
*/
#pragma pack(push, 8)
class StatsCategoryAiData : public StatsCategoryGuidData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 FirstAiId; /* 0x0040 */
  char pad_0044[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(StatsCategoryAiData) == 72);

}
