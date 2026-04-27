#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870DD8
   RuntimeId:        2A09
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F25
   VfTable:          000000014236D0A8
   Address (Base):   00000001430D8E70
*/
#pragma pack(push, 8)
class UIQuestInfo : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct UIQuestItem) QuestData; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(UIQuestInfo) == 24);

}
