#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ZoneStreamer/ZoneStreamerLogicEntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142877080
   RuntimeId:        2E59
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A94
   VfTable:          0000000142397C38
   Address (Base):   00000001430F4810
*/
#pragma pack(push, 8)
class ZoneStreamerZoneProxyEntityData : public ZoneStreamerLogicEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(FB_CSTRING) ZoneAndRegionNames; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(ZoneStreamerZoneProxyEntityData) == 40);

}
