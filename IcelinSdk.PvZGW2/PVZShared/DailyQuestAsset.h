#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142861780
   RuntimeId:        1FA1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0690
   VfTable:          0000000142344388
   Address (Base):   0000000143109810
*/
#pragma pack(push, 8)
class DailyQuestAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 MinDaysPerRepeat; /* 0x0018 */
  FB_UINT32 QuestsPerCategory; /* 0x001C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(DailyQuestAsset) == 32);

}
