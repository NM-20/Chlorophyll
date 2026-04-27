#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/StatsCategoryGuidData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869BC8
   RuntimeId:        2503
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EB1
   VfTable:          00000001423558D0
   Address (Base):   0000000143107290
*/
#pragma pack(push, 8)
class StatsCategoryDifficultyData : public StatsCategoryGuidData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(StatsCategoryDifficultyData) == 64);

}
