#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/TriggerFilterEntityData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286D3B8
   RuntimeId:        27C9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C43
   VfTable:          0000000142365C80
   Address (Base):   00000001430D3670
*/
#pragma pack(push, 8)
class StaticModelTriggerFilterEntityData : public TriggerFilterEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(StaticModelTriggerFilterEntityData) == 24);

}
