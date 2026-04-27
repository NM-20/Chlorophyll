#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ZoneStreamer/ZoneStreamerLogicEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2E51
   TypeInfo Kind:    EntityClassInfo
   ClassId:          058A
   VfTable:          0000000000000000
   Address (Base):   0000000143127AF0
*/
class ZoneStreamerZoneProxyEntity : public ZoneStreamerLogicEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0040[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */

static_assert(sizeof(ZoneStreamerZoneProxyEntity) == 72);

}
