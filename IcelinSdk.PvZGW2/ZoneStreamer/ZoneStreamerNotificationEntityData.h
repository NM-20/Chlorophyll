#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142877200
   RuntimeId:        2E6D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0ABB
   VfTable:          0000000142397CE8
   Address (Base):   00000001430DFE60
*/
#pragma pack(push, 8)
class ZoneStreamerNotificationEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_GUID ControlEntity; /* 0x0018 */
  FB_CSTRING BundleName; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(ZoneStreamerNotificationEntityData) == 48);

}
