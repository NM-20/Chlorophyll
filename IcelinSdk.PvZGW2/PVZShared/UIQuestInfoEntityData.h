#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870DF8
   RuntimeId:        2A0B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C11
   VfTable:          000000014236CFE8
   Address (Base):   00000001430E3280
*/
#pragma pack(push, 8)
class UIQuestInfoEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING MissionGiver; /* 0x0018 */
  FB_CSTRING QuestCode; /* 0x0020 */
  FB_CSTRING CancelStoryMissionCode; /* 0x0028 */
  FB_BOOLEAN IsDataProvider; /* 0x0030 */
  FB_BOOLEAN UseDebugUI; /* 0x0031 */
  FB_BOOLEAN IsDebugMenu; /* 0x0032 */
  FB_BOOLEAN IsStoryBook; /* 0x0033 */
  char pad_0034[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(UIQuestInfoEntityData) == 56);

}
