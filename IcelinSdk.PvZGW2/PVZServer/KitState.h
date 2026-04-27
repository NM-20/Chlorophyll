#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/MetricState.h>

namespace fb
{

/* TypeInfo (Array): 00000001428605A8
   RuntimeId:        1E66
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          05E9
   VfTable:          00000001423204E0
   Address (Base):   0000000143109C30
*/
#pragma pack(push, 8)
class KitState : public MetricState
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Kit; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(KitState) == 40);

}
