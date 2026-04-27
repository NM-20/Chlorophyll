#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142861740
   RuntimeId:        1F9D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1111
   VfTable:          0000000142344400
   Address (Base):   00000001431098D0
*/
#pragma pack(push, 8)
class DailyQuestSubCategory : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Key; /* 0x0010 */
  FB_UINT32 MinQuests; /* 0x0018 */
  FB_UINT32 MaxQuests; /* 0x001C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(DailyQuestSubCategory) == 32);

}
