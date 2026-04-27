#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/MetricState.h>

namespace fb
{

/* TypeInfo (Array): 0000000142860568
   RuntimeId:        1E62
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          05EB
   VfTable:          0000000142320440
   Address (Base):   0000000143109CF0
*/
#pragma pack(push, 8)
class PlayerState : public MetricState
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT64 OnlineId; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(PlayerState) == 40);

}
