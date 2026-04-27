#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/MetricAggregate.h>

namespace fb
{

/* TypeInfo (Array): 00000001428605E8
   RuntimeId:        1E6A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          05F7
   VfTable:          00000001423204C0
   Address (Base):   0000000143109B70
*/
#pragma pack(push, 8)
class ScoreAggregate : public MetricAggregate
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 TotalScore; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(ScoreAggregate) == 32);

}
