#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/MetricEvent.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 00000001428604A8
   RuntimeId:        1E56
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          05F5
   VfTable:          0000000142320570
   Address (Base):   0000000143109F30
*/
#pragma pack(push, 16)
class SpawnEvent : public MetricEvent
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  char pad_0018[0x0008];
  Vec3 Position; /* 0x0020 */
  FB_FLOAT32 Time; /* 0x0030 */
  char pad_0034[0x000C];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(SpawnEvent) == 64);

}
