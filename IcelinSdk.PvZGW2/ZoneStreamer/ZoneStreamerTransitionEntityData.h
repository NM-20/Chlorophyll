#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ZoneStreamer/ZoneStreamerLogicEntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142877060
   RuntimeId:        2E57
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A97
   VfTable:          0000000142397DD0
   Address (Base):   00000001430F4870
*/
#pragma pack(push, 8)
class ZoneStreamerTransitionEntityData : public ZoneStreamerLogicEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN AutoBegin; /* 0x0020 */
  char pad_0021[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(ZoneStreamerTransitionEntityData) == 40);

}
