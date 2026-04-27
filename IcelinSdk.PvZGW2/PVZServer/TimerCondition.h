#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZBTreeBoolProvider.h>
#include <IcelinSdk.PvZGW2/PVZShared/ConditionTarget.h>

namespace fb
{

/* TypeInfo (Array): 000000014285EE18
   RuntimeId:        1D25
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1044
   VfTable:          000000014231E038
   Address (Base):   000000014310BDF0
*/
#pragma pack(push, 8)
class TimerCondition : public PVZBTreeBoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 TimerType; /* 0x0010 */
  ConditionTarget Target; /* 0x0014 */
  FB_FLOAT32 Duration; /* 0x0018 */
  FB_BOOLEAN OnlyIfSet; /* 0x001C */
  char pad_001D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(TimerCondition) == 32);

}
