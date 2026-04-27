#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZBTreeBoolProvider.h>
#include <IcelinSdk.PvZGW2/PVZShared/ConditionTarget.h>

namespace fb
{

/* TypeInfo (Array): 000000014285EE38
   RuntimeId:        1D27
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1034
   VfTable:          000000014231E018
   Address (Base):   000000014310BD90
*/
#pragma pack(push, 8)
class IsTimerSet : public PVZBTreeBoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 TimerType; /* 0x0010 */
  ConditionTarget Target; /* 0x0014 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(IsTimerSet) == 24);

}
