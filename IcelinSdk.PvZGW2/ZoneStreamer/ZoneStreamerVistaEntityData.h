#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142877190
   RuntimeId:        2E67
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C07
   VfTable:          0000000142397D60
   Address (Base):   00000001430DFEC0
*/
#pragma pack(push, 8)
class ZoneStreamerVistaEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct VistaZoneInfo) ZoneInfos; /* 0x0018 */
  FB_GUID ControlEntity; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(ZoneStreamerVistaEntityData) == 48);

}
