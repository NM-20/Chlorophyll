#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865A18
   RuntimeId:        2317
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B76
   VfTable:          0000000142350FC0
   Address (Base):   00000001430D3C70
*/
#pragma pack(push, 16)
class IndoorAreaTriggerEntityData : public SpatialEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN Enabled; /* 0x0060 */
  char pad_0061[0x000F];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(IndoorAreaTriggerEntityData) == 112);

}
