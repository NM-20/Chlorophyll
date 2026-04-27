#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/BTree/BTTaskFunc.h>
#include <IcelinSdk.PvZGW2/PVZShared/ConditionTarget.h>

namespace fb
{

/* TypeInfo (Array): 000000014285FCC8
   RuntimeId:        1E0F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FA5
   VfTable:          000000014231D588
   Address (Base):   00000001430F8E90
*/
#pragma pack(push, 8)
class BT_SetTimer : public BTTaskFunc
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 TimerType; /* 0x0018 */
  ConditionTarget Target; /* 0x001C */
  FB_BOOLEAN ClearTimer; /* 0x0020 */
  char pad_0021[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(BT_SetTimer) == 40);

}
