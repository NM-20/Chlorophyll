#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869508
   RuntimeId:        249D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AC1
   VfTable:          0000000142355E08
   Address (Base):   00000001430E4EA0
*/
#pragma pack(push, 8)
class UnlockListInfoEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class UnlockListData) Unlocks; /* 0x0018 */
  FB_UINT32 UnlockId; /* 0x0020 */
  FB_INT32 PlayerId; /* 0x0024 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(UnlockListInfoEntityData) == 40);

}
