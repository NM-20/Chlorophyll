#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZBTreeBoolProvider.h>
#include <IcelinSdk.PvZGW2/PVZShared/ConditionTarget.h>
#include <IcelinSdk.PvZGW2/PVZShared/CompareType.h>

namespace fb
{

/* TypeInfo (Array): 000000014285EE98
   RuntimeId:        1D2D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1053
   VfTable:          000000014231E118
   Address (Base):   000000014310BC70
*/
#pragma pack(push, 8)
class ShieldPercentage : public PVZBTreeBoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  ConditionTarget Target; /* 0x0010 */
  CompareType CompareType; /* 0x0014 */
  FB_FLOAT32 Value; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(ShieldPercentage) == 32);

}
