#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/StatsCategoryBaseData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869CA8
   RuntimeId:        2511
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EB5
   VfTable:          0000000142355840
   Address (Base):   00000001430F8230
*/
#pragma pack(push, 8)
class StatsCategoryScoreboardPositionData : public StatsCategoryBaseData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(enum ScoreboardPosition) Positions; /* 0x0038 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(StatsCategoryScoreboardPositionData) == 64);

}
