#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/AwardHeaderData.h>
#include <IcelinSdk.PvZGW2/PVZShared/QuestCategory.h>

namespace fb
{

/* TypeInfo (Array): 000000014286B9A0
   RuntimeId:        266C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EC6
   VfTable:          000000014235A9F0
   Address (Base):   0000000143106570
*/
#pragma pack(push, 8)
class AwardQuestHeaderData : public AwardHeaderData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  QuestCategory QuestCategory; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(AwardQuestHeaderData) == 40);

}
