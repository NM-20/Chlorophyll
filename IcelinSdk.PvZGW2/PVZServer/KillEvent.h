#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/MetricEvent.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 00000001428604C8
   RuntimeId:        1E58
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          05F0
   VfTable:          0000000142320490
   Address (Base):   0000000143109ED0
*/
#pragma pack(push, 16)
class KillEvent : public MetricEvent
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  char pad_0018[0x0008];
  Vec3 Position; /* 0x0020 */
  Vec3 VictimPosition; /* 0x0030 */
  FB_UINT64 VictimId; /* 0x0040 */
  FB_FLOAT32 Time; /* 0x0048 */
  char pad_004C[0x0004];
  FB_CSTRING Weapon; /* 0x0050 */
  char pad_0058[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(KillEvent) == 96);

}
