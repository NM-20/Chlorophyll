#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/StatsCategoryGuidData.h>
#include <IcelinSdk.PvZGW2/PVZShared/QuestCategory.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869C08
   RuntimeId:        2507
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EB4
   VfTable:          0000000142355950
   Address (Base):   00000001430F8290
*/
#pragma pack(push, 8)
class StatsCategoryAwardData : public StatsCategoryGuidData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  QuestCategory QuestCategory; /* 0x0040 */
  char pad_0044[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(StatsCategoryAwardData) == 72);

}
