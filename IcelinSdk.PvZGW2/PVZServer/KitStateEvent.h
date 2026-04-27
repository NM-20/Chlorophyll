#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/MetricEvent.h>

namespace fb
{

/* TypeInfo (Array): 0000000142860588
   RuntimeId:        1E64
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          05EF
   VfTable:          00000001423204F0
   Address (Base):   0000000143109C90
*/
#pragma pack(push, 8)
class KitStateEvent : public MetricEvent
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Kit; /* 0x0018 */
  FB_FLOAT32 SecondsAsKit; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(KitStateEvent) == 40);

}
