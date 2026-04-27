#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZBoolProvider.h>
#include <IcelinSdk.PvZGW2/PVZShared/ConditionTarget.h>
#include <IcelinSdk.PvZGW2/PVZShared/CompareType.h>

namespace fb
{

/* TypeInfo (Array): 000000014285FF08
   RuntimeId:        1E33
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          107F
   VfTable:          000000014231D308
   Address (Base):   000000014310A170
*/
#pragma pack(push, 8)
class BoolProvider_HealthPercentage : public PVZBoolProvider
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

static_assert(sizeof(BoolProvider_HealthPercentage) == 32);

}
