#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZBTreeBoolProvider.h>
#include <IcelinSdk.PvZGW2/PVZServer/AiTargetBehaviorType.h>
#include <IcelinSdk.PvZGW2/PVZShared/CompareType.h>

namespace fb
{

/* TypeInfo (Array): 000000014285EDD8
   RuntimeId:        1D21
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          102E
   VfTable:          000000014231E1F8
   Address (Base):   000000014310BEB0
*/
#pragma pack(push, 8)
class RangeToTarget : public PVZBTreeBoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AiTargetBehaviorType TargetBehaviorType; /* 0x0010 */
  CompareType CompareType; /* 0x0014 */
  FB_HANDLE(class FloatProvider) Range; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(RangeToTarget) == 32);

}
