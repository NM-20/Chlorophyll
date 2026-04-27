#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/StatsCategoryGuidData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142868EB0
   RuntimeId:        243D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EAC
   VfTable:          00000001423560B0
   Address (Base):   0000000143107A10
*/
#pragma pack(push, 8)
class StatsCategoryBuffData : public StatsCategoryGuidData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 FirstBuffId; /* 0x0040 */
  char pad_0044[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(StatsCategoryBuffData) == 72);

}
