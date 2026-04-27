#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142861760
   RuntimeId:        1F9F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          120C
   VfTable:          0000000142344378
   Address (Base):   0000000143109870
*/
#pragma pack(push, 8)
class DailyQuestScheduleItem : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(DailyQuestScheduleItem) == 16);

}
