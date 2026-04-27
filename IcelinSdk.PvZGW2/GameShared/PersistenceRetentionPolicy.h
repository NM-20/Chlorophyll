#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849EF8
   RuntimeId:        0E26
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07F9
   VfTable:          000000014225F628
   Address (Base):   00000001431141F0
*/
#pragma pack(push, 8)
class PersistenceRetentionPolicy : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 DailyHistoryCount; /* 0x0018 */
  FB_INT32 WeeklyHistoryCount; /* 0x001C */
  FB_INT32 MonthlyHistoryCount; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(PersistenceRetentionPolicy) == 40);

}
