#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ZoneStreamer/ZoneStreamerLogicEntityData.h>
#include <IcelinSdk.PvZGW2/Core/LinearTransform.h>

namespace fb
{

/* TypeInfo (Array): 00000001428770A0
   RuntimeId:        2E5B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A95
   VfTable:          0000000142397C80
   Address (Base):   00000001430F4690
*/
#pragma pack(push, 16)
class ZoneStreamerFocusEntityData : public ZoneStreamerLogicEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  LinearTransform FocusPoint; /* 0x0020 */
  FB_BOOLEAN AutoEnabled; /* 0x0060 */
  char pad_0061[0x000F];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(ZoneStreamerFocusEntityData) == 112);

}
