#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/StatsCategoryGuidData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869D88
   RuntimeId:        251F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EAF
   VfTable:          0000000142355890
   Address (Base):   0000000143107050
*/
#pragma pack(push, 8)
class StatsCategoryRankData : public StatsCategoryGuidData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(StatsCategoryRankData) == 64);

}
