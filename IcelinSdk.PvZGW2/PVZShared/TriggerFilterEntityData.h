#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286D298
   RuntimeId:        27B7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C41
   VfTable:          0000000142365D98
   Address (Base):   00000001430BED70
*/
#pragma pack(push, 8)
class TriggerFilterEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(TriggerFilterEntityData) == 24);

}
