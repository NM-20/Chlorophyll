#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/MetricState.h>

namespace fb
{

/* TypeInfo (Array): 0000000142860548
   RuntimeId:        1E60
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          05EA
   VfTable:          0000000142320450
   Address (Base):   0000000143109D50
*/
#pragma pack(push, 8)
class SpawnState : public MetricState
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 Team; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(SpawnState) == 40);

}
