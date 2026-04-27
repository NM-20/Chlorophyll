#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/AwardData.h>
#include <IcelinSdk.PvZGW2/PVZShared/QuestCategory.h>

namespace fb
{

/* TypeInfo (Array): 000000014286B9C0
   RuntimeId:        266E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EC4
   VfTable:          000000014235AA00
   Address (Base):   00000001430CFF00
*/
#pragma pack(push, 8)
class AwardQuestData : public AwardData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  QuestCategory QuestCategory; /* 0x00A0 */
  FB_BOOLEAN IsEpic; /* 0x00A4 */
  char pad_00A5[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A8 */
#pragma pack(pop)

static_assert(sizeof(AwardQuestData) == 168);

}
